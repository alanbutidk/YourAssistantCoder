/* Generated code for Python module 'annotated_types'
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



/* The "module_annotated_types" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_annotated_types;
PyDictObject *moduledict_annotated_types;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain___init_subclass__;
PyObject *const_str_plain_GroupedMetadata;
PyObject *const_str_digest_46125123d83989953dbed67500732ec3;
PyObject *const_str_digest_2f99ab0a0d84644bf6397abeeaab3887;
PyObject *const_str_plain_self;
PyObject *const_str_plain_gt;
PyObject *const_str_plain_Gt;
PyObject *const_str_plain_ge;
PyObject *const_str_plain_Ge;
PyObject *const_str_plain_lt;
PyObject *const_str_plain_Lt;
PyObject *const_str_plain_le;
PyObject *const_str_plain_Le;
PyObject *const_str_digest_fb4ee8745cd8b58f1accf90c18630524;
PyObject *const_str_digest_3a1f8dcc344029c36c3766295197f02d;
PyObject *const_str_plain_min_length;
PyObject *const_str_plain_MinLen;
PyObject *const_str_plain_max_length;
PyObject *const_str_plain_MaxLen;
PyObject *const_str_digest_07d8c5fb49112aa19ed8a0ca450b2570;
PyObject *const_str_plain_func;
PyObject *const_str_angle_lambda;
PyObject *const_str_chr_40;
PyObject *const_str_chr_41;
PyObject *const_str_plain_MethodType;
PyObject *const_str_plain_BuiltinMethodType;
PyObject *const_str_plain___self__;
PyObject *const_str_plain_namespace;
PyObject *const_str_plain_isascii;
PyObject *const_str_plain___qualname__;
PyObject *const_str_plain_DocInfo;
PyObject *const_str_digest_36957a841842f5a89af58380f5ea0527;
PyObject *const_str_plain_environ;
PyObject *const_tuple_c1673d71fdbc699b4fc63a1c2becfbc6_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_math;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_dataclasses;
PyObject *const_tuple_str_plain_dataclass_tuple;
PyObject *const_str_plain_dataclass;
PyObject *const_str_plain_datetime;
PyObject *const_tuple_str_plain_tzinfo_tuple;
PyObject *const_str_plain_tzinfo;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_SupportsFloat;
PyObject *const_str_plain_SupportsIndex;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Protocol;
PyObject *const_str_plain_runtime_checkable;
PyObject *const_str_plain_Annotated;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_EllipsisType;
PyObject *const_dict_79de1992aff8a71f7311f7b616e2145b;
PyObject *const_str_plain_KW_ONLY;
PyObject *const_dict_80bc8edb4c8da776ef1e0870149a9690;
PyObject *const_str_plain_SLOTS;
PyObject *const_tuple_4eec9915f5c20ce5b413dc4e2ee2a7cd_tuple;
PyObject *const_str_digest_6f217bffdc3761d0450e4d7fc544743e;
PyObject *const_str_plain___version__;
PyObject *const_tuple_str_plain_T_tuple;
PyObject *const_str_plain_T;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_SupportsGt;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_plain_annotated_types;
PyObject *const_int_pos_68;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain__SupportsGt__other;
PyObject *const_str_plain_return;
PyObject *const_str_plain_bool;
PyObject *const_str_plain___gt__;
PyObject *const_str_digest_b5575984dff5ce5f9e3ecf6d74f2f0b6;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_SupportsGe;
PyObject *const_int_pos_73;
PyObject *const_str_plain__SupportsGe__other;
PyObject *const_str_plain___ge__;
PyObject *const_str_digest_a5eb025bf02cf0c9f2de6bb7a6e69597;
PyObject *const_str_plain_SupportsLt;
PyObject *const_int_pos_78;
PyObject *const_str_plain__SupportsLt__other;
PyObject *const_str_plain___lt__;
PyObject *const_str_digest_8ca28721aa73695f6074db47797291d8;
PyObject *const_str_plain_SupportsLe;
PyObject *const_int_pos_83;
PyObject *const_str_plain__SupportsLe__other;
PyObject *const_str_plain___le__;
PyObject *const_str_digest_b93d111bbc6254ff35cd7468bf15f8f6;
PyObject *const_str_plain_SupportsMod;
PyObject *const_int_pos_88;
PyObject *const_str_plain__SupportsMod__other;
PyObject *const_str_plain___mod__;
PyObject *const_str_digest_8dfeff23d0464ee3b14dad8748e404ce;
PyObject *const_str_plain_SupportsDiv;
PyObject *const_int_pos_93;
PyObject *const_str_plain__SupportsDiv__other;
PyObject *const_str_plain___div__;
PyObject *const_str_digest_05ddb70f297363b5a3b6071db46369fc;
PyObject *const_str_digest_4cc09fc10c2326076d8008693b7943ca;
PyObject *const_str_plain_BaseMetadata;
PyObject *const_int_pos_98;
PyObject *const_str_plain___slots__;
PyObject *const_dict_54ae5179e58d1517b6feece5278cd537;
PyObject *const_str_digest_3a3ab7923e67701116e364e7b7172236;
PyObject *const_int_pos_109;
PyObject *const_str_digest_8be2bc7f669e8e7b0768fd6e9856d32d;
PyObject *const_int_pos_120;
PyObject *const_str_digest_adb303835517a8aed294442a93203bea;
PyObject *const_int_pos_131;
PyObject *const_str_digest_f3f027896e0f27557a4ceedf6d4c0df4;
PyObject *const_int_pos_142;
PyObject *const_str_digest_52069143640dfd690bc2c5e5e7c1f789;
PyObject *const_int_pos_153;
PyObject *const_str_plain_property;
PyObject *const_str_plain___is_annotated_types_grouped_metadata__;
PyObject *const_str_digest_3dd6955beaa9410593862e668d37d431;
PyObject *const_str_plain_object;
PyObject *const_str_digest_e91bf00ea9936b891a8f3ea18e75c8e6;
PyObject *const_str_plain_kwargs;
PyObject *const_str_digest_d85d987837cf89a53dc36fde2b674d67;
PyObject *const_str_plain_Interval;
PyObject *const_str_digest_b7dc1a12e7b218ad0732566aadeaedcd;
PyObject *const_int_pos_205;
PyObject *const_str_plain_MultipleOf;
PyObject *const_str_digest_c0506bea3f65b67b2e39373d1bbcc207;
PyObject *const_int_pos_230;
PyObject *const_str_plain_multiple_of;
PyObject *const_str_digest_dcfa04b75c17c91f83d190e1392bc95b;
PyObject *const_int_pos_244;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_digest_6df5b3764d7acaa00daad89d98790a00;
PyObject *const_int_pos_254;
PyObject *const_str_plain_Len;
PyObject *const_str_digest_a496f972fca25f314f983b02260a7311;
PyObject *const_int_pos_264;
PyObject *const_str_plain_Timezone;
PyObject *const_str_digest_2a92c894d705dd93fabe7046499967b0;
PyObject *const_int_pos_283;
PyObject *const_str_plain_str;
PyObject *const_str_plain_tz;
PyObject *const_str_plain_Unit;
PyObject *const_str_digest_7476bccf9660a73334af0ec0b8a35e08;
PyObject *const_int_pos_300;
PyObject *const_str_plain_unit;
PyObject *const_str_plain_Predicate;
PyObject *const_str_digest_74cccc41d6d227f7ee0ad63fbc0a2290;
PyObject *const_int_pos_323;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_ab873fff89296efc768bbaa098ba3925;
PyObject *const_str_plain_Not;
PyObject *const_int_pos_359;
PyObject *const_str_plain__Not__v;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_dd6d69fb1d1fac4a8cc5913dc0afc6dd;
PyObject *const_tuple_str_plain__StrType_type_str_tuple;
PyObject *const_tuple_str_plain_bound_tuple;
PyObject *const_str_plain__StrType;
PyObject *const_str_plain_islower;
PyObject *const_str_plain_LowerCase;
PyObject *const_str_plain_isupper;
PyObject *const_str_plain_UpperCase;
PyObject *const_str_plain_isdigit;
PyObject *const_str_plain_IsDigit;
PyObject *const_str_plain_IsDigits;
PyObject *const_str_plain_IsAscii;
PyObject *const_tuple_str_plain__NumericType_tuple;
PyObject *const_str_plain__NumericType;
PyObject *const_str_plain_isfinite;
PyObject *const_str_plain_IsFinite;
PyObject *const_str_plain_IsNotFinite;
PyObject *const_str_plain_isnan;
PyObject *const_str_plain_IsNan;
PyObject *const_str_plain_IsNotNan;
PyObject *const_str_plain_isinf;
PyObject *const_str_plain_IsInfinite;
PyObject *const_str_plain_IsNotInfinite;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_DocInfo_str_plain_doc_tuple;
PyObject *const_str_plain_doc;
PyObject *const_str_digest_6da0f61bc678a181fb3ed8156885268a;
PyObject *const_int_pos_413;
PyObject *const_str_plain_documentation;
PyObject *const_str_digest_437b1f8e825ae68e670cb0aaf01584e1;
PyObject *const_str_digest_b4976657d430e76ac80e90873e83f778;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain__Not__v_tuple;
PyObject *const_tuple_str_plain_self_str_plain__SupportsDiv__other_tuple;
PyObject *const_tuple_str_plain_self_str_plain__SupportsGe__other_tuple;
PyObject *const_tuple_str_plain_self_str_plain__SupportsGt__other_tuple;
PyObject *const_tuple_642c6e046837b34bd42add7d36af734f_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain__SupportsLe__other_tuple;
PyObject *const_tuple_str_plain_self_str_plain__SupportsLt__other_tuple;
PyObject *const_tuple_str_plain_self_str_plain__SupportsMod__other_tuple;
PyObject *const_tuple_str_plain_self_str_plain_namespace_tuple;
PyObject *const_tuple_str_plain_documentation_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[206];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("annotated_types"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain___init_subclass__);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_GroupedMetadata);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_46125123d83989953dbed67500732ec3);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f99ab0a0d84644bf6397abeeaab3887);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_gt);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_Gt);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_ge);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Ge);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_lt);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Lt);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_le);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_Le);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb4ee8745cd8b58f1accf90c18630524);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a1f8dcc344029c36c3766295197f02d);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_min_length);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_MinLen);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_length);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_MaxLen);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_07d8c5fb49112aa19ed8a0ca450b2570);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_func);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_chr_40);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_MethodType);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_BuiltinMethodType);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain___self__);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_namespace);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_isascii);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_DocInfo);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_36957a841842f5a89af58380f5ea0527);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_c1673d71fdbc699b4fc63a1c2becfbc6_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_math);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_datetime);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tzinfo_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_tzinfo);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsFloat);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsIndex);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_runtime_checkable);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_EllipsisType);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_dict_79de1992aff8a71f7311f7b616e2145b);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_KW_ONLY);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_dict_80bc8edb4c8da776ef1e0870149a9690);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_SLOTS);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_4eec9915f5c20ce5b413dc4e2ee2a7cd_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f217bffdc3761d0450e4d7fc544743e);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsGt);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotated_types);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_int_pos_68);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsGt__other);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain___gt__);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_b5575984dff5ce5f9e3ecf6d74f2f0b6);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsGe);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_int_pos_73);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsGe__other);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain___ge__);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5eb025bf02cf0c9f2de6bb7a6e69597);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsLt);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_int_pos_78);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsLt__other);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain___lt__);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ca28721aa73695f6074db47797291d8);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsLe);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_83);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsLe__other);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain___le__);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_b93d111bbc6254ff35cd7468bf15f8f6);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsMod);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_int_pos_88);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsMod__other);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain___mod__);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_8dfeff23d0464ee3b14dad8748e404ce);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsDiv);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_int_pos_93);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsDiv__other);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain___div__);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_05ddb70f297363b5a3b6071db46369fc);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_4cc09fc10c2326076d8008693b7943ca);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseMetadata);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_int_pos_98);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain___slots__);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a3ab7923e67701116e364e7b7172236);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_int_pos_109);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_8be2bc7f669e8e7b0768fd6e9856d32d);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_int_pos_120);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_adb303835517a8aed294442a93203bea);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_int_pos_131);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3f027896e0f27557a4ceedf6d4c0df4);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_int_pos_142);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_52069143640dfd690bc2c5e5e7c1f789);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_pos_153);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain___is_annotated_types_grouped_metadata__);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_3dd6955beaa9410593862e668d37d431);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_object);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_e91bf00ea9936b891a8f3ea18e75c8e6);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_d85d987837cf89a53dc36fde2b674d67);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_Interval);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7dc1a12e7b218ad0732566aadeaedcd);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_int_pos_205);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_MultipleOf);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0506bea3f65b67b2e39373d1bbcc207);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_int_pos_230);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiple_of);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcfa04b75c17c91f83d190e1392bc95b);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_int_pos_244);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_6df5b3764d7acaa00daad89d98790a00);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_int_pos_254);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_Len);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_a496f972fca25f314f983b02260a7311);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_int_pos_264);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_Timezone);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a92c894d705dd93fabe7046499967b0);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_int_pos_283);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_tz);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_Unit);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_7476bccf9660a73334af0ec0b8a35e08);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_int_pos_300);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_unit);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_Predicate);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_74cccc41d6d227f7ee0ad63fbc0a2290);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_int_pos_323);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab873fff89296efc768bbaa098ba3925);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_Not);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_int_pos_359);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain__Not__v);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd6d69fb1d1fac4a8cc5913dc0afc6dd);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__StrType_type_str_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain__StrType);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_islower);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_LowerCase);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_isupper);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_UpperCase);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_isdigit);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_IsDigit);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_IsDigits);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_IsAscii);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__NumericType_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain__NumericType);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_isfinite);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_IsFinite);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_IsNotFinite);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_isnan);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_IsNan);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_IsNotNan);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_isinf);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_IsInfinite);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_IsNotInfinite);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DocInfo_str_plain_doc_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_doc);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_6da0f61bc678a181fb3ed8156885268a);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_int_pos_413);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_documentation);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_437b1f8e825ae68e670cb0aaf01584e1);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4976657d430e76ac80e90873e83f778);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__Not__v_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__SupportsDiv__other_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__SupportsGe__other_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__SupportsGt__other_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_642c6e046837b34bd42add7d36af734f_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__SupportsLe__other_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__SupportsLt__other_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__SupportsMod__other_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_namespace_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_documentation_tuple);
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
void checkModuleConstants_annotated_types(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain___init_subclass__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___init_subclass__);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_GroupedMetadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GroupedMetadata);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_46125123d83989953dbed67500732ec3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_46125123d83989953dbed67500732ec3);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f99ab0a0d84644bf6397abeeaab3887));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f99ab0a0d84644bf6397abeeaab3887);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_gt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gt);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_Gt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Gt);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_ge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ge);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_Ge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Ge);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_lt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lt);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Lt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Lt);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_le));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_le);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_Le));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Le);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb4ee8745cd8b58f1accf90c18630524));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb4ee8745cd8b58f1accf90c18630524);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a1f8dcc344029c36c3766295197f02d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a1f8dcc344029c36c3766295197f02d);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_min_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min_length);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_MinLen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MinLen);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_length);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_MaxLen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MaxLen);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_07d8c5fb49112aa19ed8a0ca450b2570));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_07d8c5fb49112aa19ed8a0ca450b2570);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_func);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_chr_40));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_40);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_MethodType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MethodType);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_BuiltinMethodType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BuiltinMethodType);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain___self__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___self__);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_namespace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_namespace);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_isascii));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isascii);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_DocInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DocInfo);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_36957a841842f5a89af58380f5ea0527));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36957a841842f5a89af58380f5ea0527);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_c1673d71fdbc699b4fc63a1c2becfbc6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c1673d71fdbc699b4fc63a1c2becfbc6_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_math));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_math);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dataclass_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_datetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_datetime);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tzinfo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tzinfo_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_tzinfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tzinfo);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsFloat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SupportsFloat);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsIndex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SupportsIndex);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Protocol);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_runtime_checkable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_runtime_checkable);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Annotated);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_EllipsisType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EllipsisType);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_dict_79de1992aff8a71f7311f7b616e2145b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_79de1992aff8a71f7311f7b616e2145b);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_KW_ONLY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KW_ONLY);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_dict_80bc8edb4c8da776ef1e0870149a9690));
CHECK_OBJECT_DEEP(mod_consts.const_dict_80bc8edb4c8da776ef1e0870149a9690);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_SLOTS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SLOTS);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_4eec9915f5c20ce5b413dc4e2ee2a7cd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4eec9915f5c20ce5b413dc4e2ee2a7cd_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f217bffdc3761d0450e4d7fc544743e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f217bffdc3761d0450e4d7fc544743e);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_T_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsGt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SupportsGt);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotated_types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotated_types);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_int_pos_68));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_68);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsGt__other));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SupportsGt__other);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain___gt__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___gt__);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_b5575984dff5ce5f9e3ecf6d74f2f0b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b5575984dff5ce5f9e3ecf6d74f2f0b6);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsGe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SupportsGe);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_int_pos_73));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_73);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsGe__other));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SupportsGe__other);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain___ge__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ge__);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5eb025bf02cf0c9f2de6bb7a6e69597));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5eb025bf02cf0c9f2de6bb7a6e69597);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsLt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SupportsLt);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_int_pos_78));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_78);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsLt__other));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SupportsLt__other);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain___lt__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___lt__);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ca28721aa73695f6074db47797291d8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ca28721aa73695f6074db47797291d8);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsLe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SupportsLe);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_83));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_83);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsLe__other));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SupportsLe__other);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain___le__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___le__);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_b93d111bbc6254ff35cd7468bf15f8f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b93d111bbc6254ff35cd7468bf15f8f6);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsMod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SupportsMod);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_int_pos_88));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_88);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsMod__other));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SupportsMod__other);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain___mod__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___mod__);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_8dfeff23d0464ee3b14dad8748e404ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8dfeff23d0464ee3b14dad8748e404ce);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsDiv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SupportsDiv);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_int_pos_93));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_93);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain__SupportsDiv__other));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SupportsDiv__other);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain___div__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___div__);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_05ddb70f297363b5a3b6071db46369fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_05ddb70f297363b5a3b6071db46369fc);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_4cc09fc10c2326076d8008693b7943ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4cc09fc10c2326076d8008693b7943ca);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseMetadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseMetadata);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_int_pos_98));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_98);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain___slots__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___slots__);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537));
CHECK_OBJECT_DEEP(mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a3ab7923e67701116e364e7b7172236));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a3ab7923e67701116e364e7b7172236);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_int_pos_109));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_109);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_8be2bc7f669e8e7b0768fd6e9856d32d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8be2bc7f669e8e7b0768fd6e9856d32d);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_int_pos_120));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_120);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_adb303835517a8aed294442a93203bea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_adb303835517a8aed294442a93203bea);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_int_pos_131));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_131);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3f027896e0f27557a4ceedf6d4c0df4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3f027896e0f27557a4ceedf6d4c0df4);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_int_pos_142));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_142);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_52069143640dfd690bc2c5e5e7c1f789));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_52069143640dfd690bc2c5e5e7c1f789);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_pos_153));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_153);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain___is_annotated_types_grouped_metadata__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___is_annotated_types_grouped_metadata__);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_3dd6955beaa9410593862e668d37d431));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3dd6955beaa9410593862e668d37d431);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_object);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_e91bf00ea9936b891a8f3ea18e75c8e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e91bf00ea9936b891a8f3ea18e75c8e6);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kwargs);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_d85d987837cf89a53dc36fde2b674d67));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d85d987837cf89a53dc36fde2b674d67);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_Interval));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Interval);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7dc1a12e7b218ad0732566aadeaedcd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7dc1a12e7b218ad0732566aadeaedcd);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_int_pos_205));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_205);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_MultipleOf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MultipleOf);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0506bea3f65b67b2e39373d1bbcc207));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c0506bea3f65b67b2e39373d1bbcc207);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_int_pos_230));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_230);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiple_of));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiple_of);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcfa04b75c17c91f83d190e1392bc95b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcfa04b75c17c91f83d190e1392bc95b);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_int_pos_244));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_244);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_6df5b3764d7acaa00daad89d98790a00));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6df5b3764d7acaa00daad89d98790a00);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_int_pos_254));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_254);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_Len));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Len);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_a496f972fca25f314f983b02260a7311));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a496f972fca25f314f983b02260a7311);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_int_pos_264));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_264);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_Timezone));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Timezone);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a92c894d705dd93fabe7046499967b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a92c894d705dd93fabe7046499967b0);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_int_pos_283));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_283);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_tz));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tz);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_Unit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Unit);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_7476bccf9660a73334af0ec0b8a35e08));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7476bccf9660a73334af0ec0b8a35e08);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_int_pos_300));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_300);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_unit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unit);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_Predicate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Predicate);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_74cccc41d6d227f7ee0ad63fbc0a2290));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74cccc41d6d227f7ee0ad63fbc0a2290);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_int_pos_323));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_323);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab873fff89296efc768bbaa098ba3925));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab873fff89296efc768bbaa098ba3925);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_Not));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Not);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_int_pos_359));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_359);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain__Not__v));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Not__v);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd6d69fb1d1fac4a8cc5913dc0afc6dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd6d69fb1d1fac4a8cc5913dc0afc6dd);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__StrType_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__StrType_type_str_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bound_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain__StrType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__StrType);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_islower));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_islower);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_LowerCase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LowerCase);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_isupper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isupper);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_UpperCase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UpperCase);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_isdigit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isdigit);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_IsDigit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IsDigit);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_IsDigits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IsDigits);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_IsAscii));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IsAscii);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__NumericType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__NumericType_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain__NumericType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NumericType);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_isfinite));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isfinite);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_IsFinite));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IsFinite);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_IsNotFinite));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IsNotFinite);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_isnan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isnan);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_IsNan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IsNan);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_IsNotNan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IsNotNan);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_isinf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isinf);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_IsInfinite));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IsInfinite);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_IsNotInfinite));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IsNotInfinite);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DocInfo_str_plain_doc_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DocInfo_str_plain_doc_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_doc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_doc);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_6da0f61bc678a181fb3ed8156885268a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6da0f61bc678a181fb3ed8156885268a);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_int_pos_413));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_413);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_documentation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_documentation);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_437b1f8e825ae68e670cb0aaf01584e1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_437b1f8e825ae68e670cb0aaf01584e1);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4976657d430e76ac80e90873e83f778));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b4976657d430e76ac80e90873e83f778);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__Not__v_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain__Not__v_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__SupportsDiv__other_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain__SupportsDiv__other_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__SupportsGe__other_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain__SupportsGe__other_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__SupportsGt__other_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain__SupportsGt__other_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_642c6e046837b34bd42add7d36af734f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_642c6e046837b34bd42add7d36af734f_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__SupportsLe__other_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain__SupportsLe__other_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__SupportsLt__other_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain__SupportsLt__other_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__SupportsMod__other_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain__SupportsMod__other_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_namespace_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_namespace_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_documentation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_documentation_tuple);
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
static PyObject *module_var_accessor_annotated_types$Annotated(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Annotated);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Annotated, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Annotated);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Annotated, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$Any(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$BaseMetadata(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseMetadata);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseMetadata);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseMetadata, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseMetadata);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseMetadata, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseMetadata);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseMetadata);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseMetadata);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$Callable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$DocInfo(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_DocInfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DocInfo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DocInfo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DocInfo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DocInfo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_DocInfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_DocInfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DocInfo);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$EllipsisType(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipsisType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EllipsisType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EllipsisType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EllipsisType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EllipsisType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipsisType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipsisType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipsisType);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$Ge(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Ge);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Ge);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Ge, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Ge);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Ge, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Ge);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Ge);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Ge);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$GroupedMetadata(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_GroupedMetadata);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GroupedMetadata);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GroupedMetadata, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GroupedMetadata);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GroupedMetadata, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_GroupedMetadata);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_GroupedMetadata);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GroupedMetadata);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$Gt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Gt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Gt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Gt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Gt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Gt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Gt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Gt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Gt);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$IsDigit(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IsDigit);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IsDigit);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IsDigit, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IsDigit);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IsDigit, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IsDigit);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IsDigit);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IsDigit);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$Iterator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Iterator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Iterator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Iterator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Iterator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$KW_ONLY(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_KW_ONLY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KW_ONLY);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KW_ONLY, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KW_ONLY);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KW_ONLY, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_KW_ONLY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_KW_ONLY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KW_ONLY);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$Le(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Le);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Le);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Le, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Le);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Le, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Le);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Le);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Le);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$Literal(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$Lt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Lt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Lt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Lt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Lt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Lt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Lt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Lt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Lt);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$MaxLen(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxLen);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MaxLen);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MaxLen, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MaxLen);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MaxLen, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxLen);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxLen);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxLen);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$MinLen(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_MinLen);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MinLen);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MinLen, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MinLen);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MinLen, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_MinLen);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_MinLen);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MinLen);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$Not(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Not);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Not);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Not, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Not);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Not, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Not);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Not);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Not);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$Optional(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$Predicate(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Predicate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Predicate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Predicate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Predicate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Predicate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Predicate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Predicate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Predicate);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$Protocol(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Protocol);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Protocol, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Protocol);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Protocol, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$SLOTS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SLOTS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SLOTS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SLOTS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SLOTS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SLOTS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SLOTS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SLOTS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SLOTS);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$SupportsDiv(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsDiv);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsDiv);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsDiv, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsDiv);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsDiv, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsDiv);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsDiv);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsDiv);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$SupportsFloat(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsFloat);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsFloat);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsFloat, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsFloat);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsFloat, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsFloat);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsFloat);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsFloat);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$SupportsGe(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsGe);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsGe);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsGe, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsGe);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsGe, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsGe);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsGe);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsGe);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$SupportsGt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsGt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsGt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsGt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsGt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsGt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsGt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsGt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsGt);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$SupportsIndex(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsIndex);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsIndex);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsIndex, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsIndex);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsIndex, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsIndex);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsIndex);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsIndex);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$SupportsLe(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsLe);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsLe);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsLe, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsLe);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsLe, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsLe);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsLe);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsLe);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$SupportsLt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsLt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsLt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsLt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsLt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsLt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsLt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsLt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsLt);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$SupportsMod(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsMod);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsMod);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsMod, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsMod);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsMod, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsMod);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsMod);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsMod);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$T(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_T);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_T, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_T);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_T, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$Union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$_NumericType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain__NumericType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NumericType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NumericType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NumericType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NumericType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain__NumericType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain__NumericType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__NumericType);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$_StrType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain__StrType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__StrType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__StrType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__StrType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__StrType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain__StrType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain__StrType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__StrType);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$dataclass(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$math(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$runtime_checkable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_runtime_checkable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_runtime_checkable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_runtime_checkable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_runtime_checkable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable);
    }

    return result;
}

static PyObject *module_var_accessor_annotated_types$tzinfo(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_tzinfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tzinfo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tzinfo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tzinfo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tzinfo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_tzinfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_tzinfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tzinfo);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_ecaba7d8969fc4917326905e32b0ba21;
static PyCodeObject *code_objects_4dcd0cbf627f70ec0afa90bcbe4c28f1;
static PyCodeObject *code_objects_fe622d7d2fc42b925c74e680cda9380e;
static PyCodeObject *code_objects_63545ee853b8523a7c38f4fdca73ee93;
static PyCodeObject *code_objects_29196eb0be41c467eda55cb0ddeb69eb;
static PyCodeObject *code_objects_f51fe3039b62f94e187b911303e0dd62;
static PyCodeObject *code_objects_20441ebc6e8ffe56da4f7f6ba8f3718d;
static PyCodeObject *code_objects_bc26d04c68bc0ca565ace1d13e982ddf;
static PyCodeObject *code_objects_dd3a1a86011c7c2034a720b18f016a7e;
static PyCodeObject *code_objects_48c53d8ca987000963a08eb84eba2433;
static PyCodeObject *code_objects_323810a0c1b0f0c33d83f4ad2e65761d;
static PyCodeObject *code_objects_e15f856a0d661d79285f38d1123b2a99;
static PyCodeObject *code_objects_be4a1c6a2ba498150543f2d2cd410eda;
static PyCodeObject *code_objects_2bd97b35bc9786b043626d0f4f8d1ab1;
static PyCodeObject *code_objects_96f8753e52af8fa7dc9f7ec82a54334b;
static PyCodeObject *code_objects_6b1c2dc0c02d01b53d7ce38295484dfc;
static PyCodeObject *code_objects_bf8470161fe85573be0f6acfc11282e8;
static PyCodeObject *code_objects_38199e15559cb79f7198e5e11c1a7bcd;
static PyCodeObject *code_objects_5e71c7b1c79da8dcc998c31099f94f05;
static PyCodeObject *code_objects_832774fb81b507a6176c696c1282be7d;
static PyCodeObject *code_objects_8e59d51a5da1f6e39aa91a546e4710a7;
static PyCodeObject *code_objects_784d8b3719b87b1f3457b9e38f33d969;
static PyCodeObject *code_objects_ab86aec7dbd76552eba8b1e629c7e477;
static PyCodeObject *code_objects_e912ea85a7109b2549619ee32bdbc0a8;
static PyCodeObject *code_objects_3341e8188ce2eb6a0c5b76e54b86649b;
static PyCodeObject *code_objects_91b760a08d7bdd8d10bc7b0c030ed969;
static PyCodeObject *code_objects_b9d0a505b5a420784f7d010719a13423;
static PyCodeObject *code_objects_46ee9f2862cb9420cacb8a7ef565cfe1;
static PyCodeObject *code_objects_50d4c134b6f306d39fb15e74b26c1d77;
static PyCodeObject *code_objects_86debf51d0166921e8fb9bd58fb08aa5;
static PyCodeObject *code_objects_390f78f7498b37c9e73610ed5b0a5819;
static PyCodeObject *code_objects_41840d4c5bc8a614bc908545af797700;
static PyCodeObject *code_objects_0c5fe725c2809cc9731b09f752219f44;
static PyCodeObject *code_objects_dd9939f358e37edc872bce589c8e39c8;
static PyCodeObject *code_objects_74d6977093e2240b229bf67b719a4c6c;
static PyCodeObject *code_objects_b0779984fcfaa748bd81749b75c02b49;
static PyCodeObject *code_objects_c535700b4e0d75c18ebd1574790a1ef5;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_437b1f8e825ae68e670cb0aaf01584e1); CHECK_OBJECT(module_filename_obj);
code_objects_ecaba7d8969fc4917326905e32b0ba21 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_b4976657d430e76ac80e90873e83f778, mod_consts.const_str_digest_b4976657d430e76ac80e90873e83f778, NULL, NULL, 0, 0, 0);
code_objects_4dcd0cbf627f70ec0afa90bcbe4c28f1 = MAKE_CODE_OBJECT(module_filename_obj, 413, 0, mod_consts.const_str_plain_DocInfo, mod_consts.const_str_plain_DocInfo, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_fe622d7d2fc42b925c74e680cda9380e = MAKE_CODE_OBJECT(module_filename_obj, 120, 0, mod_consts.const_str_plain_Ge, mod_consts.const_str_plain_Ge, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_63545ee853b8523a7c38f4fdca73ee93 = MAKE_CODE_OBJECT(module_filename_obj, 153, 0, mod_consts.const_str_plain_GroupedMetadata, mod_consts.const_str_plain_GroupedMetadata, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_29196eb0be41c467eda55cb0ddeb69eb = MAKE_CODE_OBJECT(module_filename_obj, 109, 0, mod_consts.const_str_plain_Gt, mod_consts.const_str_plain_Gt, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f51fe3039b62f94e187b911303e0dd62 = MAKE_CODE_OBJECT(module_filename_obj, 205, 0, mod_consts.const_str_plain_Interval, mod_consts.const_str_plain_Interval, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_20441ebc6e8ffe56da4f7f6ba8f3718d = MAKE_CODE_OBJECT(module_filename_obj, 142, 0, mod_consts.const_str_plain_Le, mod_consts.const_str_plain_Le, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_bc26d04c68bc0ca565ace1d13e982ddf = MAKE_CODE_OBJECT(module_filename_obj, 264, 0, mod_consts.const_str_plain_Len, mod_consts.const_str_plain_Len, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_dd3a1a86011c7c2034a720b18f016a7e = MAKE_CODE_OBJECT(module_filename_obj, 131, 0, mod_consts.const_str_plain_Lt, mod_consts.const_str_plain_Lt, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_48c53d8ca987000963a08eb84eba2433 = MAKE_CODE_OBJECT(module_filename_obj, 254, 0, mod_consts.const_str_plain_MaxLen, mod_consts.const_str_plain_MaxLen, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_323810a0c1b0f0c33d83f4ad2e65761d = MAKE_CODE_OBJECT(module_filename_obj, 244, 0, mod_consts.const_str_plain_MinLen, mod_consts.const_str_plain_MinLen, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e15f856a0d661d79285f38d1123b2a99 = MAKE_CODE_OBJECT(module_filename_obj, 230, 0, mod_consts.const_str_plain_MultipleOf, mod_consts.const_str_plain_MultipleOf, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_be4a1c6a2ba498150543f2d2cd410eda = MAKE_CODE_OBJECT(module_filename_obj, 359, 0, mod_consts.const_str_plain_Not, mod_consts.const_str_plain_Not, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2bd97b35bc9786b043626d0f4f8d1ab1 = MAKE_CODE_OBJECT(module_filename_obj, 323, 0, mod_consts.const_str_plain_Predicate, mod_consts.const_str_plain_Predicate, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_96f8753e52af8fa7dc9f7ec82a54334b = MAKE_CODE_OBJECT(module_filename_obj, 93, 0, mod_consts.const_str_plain_SupportsDiv, mod_consts.const_str_plain_SupportsDiv, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6b1c2dc0c02d01b53d7ce38295484dfc = MAKE_CODE_OBJECT(module_filename_obj, 73, 0, mod_consts.const_str_plain_SupportsGe, mod_consts.const_str_plain_SupportsGe, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_bf8470161fe85573be0f6acfc11282e8 = MAKE_CODE_OBJECT(module_filename_obj, 68, 0, mod_consts.const_str_plain_SupportsGt, mod_consts.const_str_plain_SupportsGt, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_38199e15559cb79f7198e5e11c1a7bcd = MAKE_CODE_OBJECT(module_filename_obj, 83, 0, mod_consts.const_str_plain_SupportsLe, mod_consts.const_str_plain_SupportsLe, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5e71c7b1c79da8dcc998c31099f94f05 = MAKE_CODE_OBJECT(module_filename_obj, 78, 0, mod_consts.const_str_plain_SupportsLt, mod_consts.const_str_plain_SupportsLt, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_832774fb81b507a6176c696c1282be7d = MAKE_CODE_OBJECT(module_filename_obj, 88, 0, mod_consts.const_str_plain_SupportsMod, mod_consts.const_str_plain_SupportsMod, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8e59d51a5da1f6e39aa91a546e4710a7 = MAKE_CODE_OBJECT(module_filename_obj, 283, 0, mod_consts.const_str_plain_Timezone, mod_consts.const_str_plain_Timezone, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_784d8b3719b87b1f3457b9e38f33d969 = MAKE_CODE_OBJECT(module_filename_obj, 300, 0, mod_consts.const_str_plain_Unit, mod_consts.const_str_plain_Unit, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ab86aec7dbd76552eba8b1e629c7e477 = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_dd6d69fb1d1fac4a8cc5913dc0afc6dd, mod_consts.const_tuple_str_plain_self_str_plain__Not__v_tuple, NULL, 2, 0, 0);
code_objects_e912ea85a7109b2549619ee32bdbc0a8 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___div__, mod_consts.const_str_digest_05ddb70f297363b5a3b6071db46369fc, mod_consts.const_tuple_str_plain_self_str_plain__SupportsDiv__other_tuple, NULL, 2, 0, 0);
code_objects_3341e8188ce2eb6a0c5b76e54b86649b = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___ge__, mod_consts.const_str_digest_a5eb025bf02cf0c9f2de6bb7a6e69597, mod_consts.const_tuple_str_plain_self_str_plain__SupportsGe__other_tuple, NULL, 2, 0, 0);
code_objects_91b760a08d7bdd8d10bc7b0c030ed969 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___gt__, mod_consts.const_str_digest_b5575984dff5ce5f9e3ecf6d74f2f0b6, mod_consts.const_tuple_str_plain_self_str_plain__SupportsGt__other_tuple, NULL, 2, 0, 0);
code_objects_b9d0a505b5a420784f7d010719a13423 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain___init_subclass__, mod_consts.const_str_digest_d85d987837cf89a53dc36fde2b674d67, mod_consts.const_tuple_642c6e046837b34bd42add7d36af734f_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_46ee9f2862cb9420cacb8a7ef565cfe1 = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___is_annotated_types_grouped_metadata__, mod_consts.const_str_digest_3dd6955beaa9410593862e668d37d431, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_50d4c134b6f306d39fb15e74b26c1d77 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___iter__, mod_consts.const_str_digest_e91bf00ea9936b891a8f3ea18e75c8e6, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_86debf51d0166921e8fb9bd58fb08aa5 = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___iter__, mod_consts.const_str_digest_e91bf00ea9936b891a8f3ea18e75c8e6, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_390f78f7498b37c9e73610ed5b0a5819 = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___iter__, mod_consts.const_str_digest_fb4ee8745cd8b58f1accf90c18630524, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_41840d4c5bc8a614bc908545af797700 = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___iter__, mod_consts.const_str_digest_07d8c5fb49112aa19ed8a0ca450b2570, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0c5fe725c2809cc9731b09f752219f44 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___le__, mod_consts.const_str_digest_b93d111bbc6254ff35cd7468bf15f8f6, mod_consts.const_tuple_str_plain_self_str_plain__SupportsLe__other_tuple, NULL, 2, 0, 0);
code_objects_dd9939f358e37edc872bce589c8e39c8 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___lt__, mod_consts.const_str_digest_8ca28721aa73695f6074db47797291d8, mod_consts.const_tuple_str_plain_self_str_plain__SupportsLt__other_tuple, NULL, 2, 0, 0);
code_objects_74d6977093e2240b229bf67b719a4c6c = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___mod__, mod_consts.const_str_digest_8dfeff23d0464ee3b14dad8748e404ce, mod_consts.const_tuple_str_plain_self_str_plain__SupportsMod__other_tuple, NULL, 2, 0, 0);
code_objects_b0779984fcfaa748bd81749b75c02b49 = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_ab873fff89296efc768bbaa098ba3925, mod_consts.const_tuple_str_plain_self_str_plain_namespace_tuple, NULL, 1, 0, 0);
code_objects_c535700b4e0d75c18ebd1574790a1ef5 = MAKE_CODE_OBJECT(module_filename_obj, 422, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_doc, mod_consts.const_str_plain_doc, mod_consts.const_tuple_str_plain_documentation_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_annotated_types$$$function__11___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_annotated_types$$$function__12___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_dict_unpacking_checks(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__10___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__11___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__12___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__13___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__14___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__15_doc(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__1___gt__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__2___ge__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__3___lt__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__4___le__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__5___mod__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__6___div__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__7___is_annotated_types_grouped_metadata__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__8___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_annotated_types$$$function__9___init_subclass__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_annotated_types$$$function__9___init_subclass__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_annotated_types$$$function__9___init_subclass__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_annotated_types$$$function__9___init_subclass__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_annotated_types$$$function__9___init_subclass__)) {
    Py_XDECREF(cache_frame_frame_annotated_types$$$function__9___init_subclass__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_annotated_types$$$function__9___init_subclass__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_annotated_types$$$function__9___init_subclass__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b9d0a505b5a420784f7d010719a13423, module_annotated_types, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_annotated_types$$$function__9___init_subclass__->m_type_description == NULL);
frame_frame_annotated_types$$$function__9___init_subclass__ = cache_frame_frame_annotated_types$$$function__9___init_subclass__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$function__9___init_subclass__);
assert(Py_REFCNT(frame_frame_annotated_types$$$function__9___init_subclass__) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 196;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_cls);
tmp_object_arg_value_1 = par_cls;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_annotated_types, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___init_subclass__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
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
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___iter__);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_annotated_types$GroupedMetadata(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GroupedMetadata);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 197;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___iter__);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 197;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_46125123d83989953dbed67500732ec3;
frame_frame_annotated_types$$$function__9___init_subclass__->m_frame.f_lineno = 198;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 198;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$function__9___init_subclass__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$function__9___init_subclass__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$function__9___init_subclass__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$function__9___init_subclass__,
    type_description_1,
    par_cls,
    par_args,
    par_kwargs,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_annotated_types$$$function__9___init_subclass__ == cache_frame_frame_annotated_types$$$function__9___init_subclass__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_annotated_types$$$function__9___init_subclass__);
    cache_frame_frame_annotated_types$$$function__9___init_subclass__ = NULL;
}

assertFrameObject(frame_frame_annotated_types$$$function__9___init_subclass__);

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
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
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


static PyObject *impl_annotated_types$$$function__10___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_annotated_types$$$function__10___iter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_annotated_types$$$function__10___iter__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_annotated_types$$$function__10___iter__)) {
    Py_XDECREF(cache_frame_frame_annotated_types$$$function__10___iter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_annotated_types$$$function__10___iter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_annotated_types$$$function__10___iter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_86debf51d0166921e8fb9bd58fb08aa5, module_annotated_types, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_annotated_types$$$function__10___iter__->m_type_description == NULL);
frame_frame_annotated_types$$$function__10___iter__ = cache_frame_frame_annotated_types$$$function__10___iter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$function__10___iter__);
assert(Py_REFCNT(frame_frame_annotated_types$$$function__10___iter__) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 201;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$function__10___iter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$function__10___iter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$function__10___iter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$function__10___iter__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_annotated_types$$$function__10___iter__ == cache_frame_frame_annotated_types$$$function__10___iter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_annotated_types$$$function__10___iter__);
    cache_frame_frame_annotated_types$$$function__10___iter__ = NULL;
}

assertFrameObject(frame_frame_annotated_types$$$function__10___iter__);

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


static PyObject *impl_annotated_types$$$function__11___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_annotated_types$$$function__11___iter__$$$genobj__1___iter__(tstate, tmp_closure_1);

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
struct annotated_types$$$function__11___iter__$$$genobj__1___iter___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *annotated_types$$$function__11___iter__$$$genobj__1___iter___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct annotated_types$$$function__11___iter__$$$genobj__1___iter___locals *generator_heap = (struct annotated_types$$$function__11___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 4: goto yield_return_4;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_390f78f7498b37c9e73610ed5b0a5819, module_annotated_types, sizeof(void *));
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 219;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_gt);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 219;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
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
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_annotated_types$Gt(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Gt);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 220;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 220;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_gt);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 220;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 220;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 220;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 220;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 221;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ge);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 221;
generator_heap->type_description_1 = "c";
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
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
tmp_called_value_2 = module_var_accessor_annotated_types$Ge(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Ge);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 222;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 222;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ge);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 222;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 222;
tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 222;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_5;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 222;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_7;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_lt);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_expression_value_8;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_9;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
tmp_called_value_3 = module_var_accessor_annotated_types$Lt(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Lt);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_lt);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 224;
tmp_expression_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 3;
return tmp_expression_value_8;
yield_return_3:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_3 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_3);
Py_DECREF(tmp_yield_result_3);
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_10;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 225;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_le);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 225;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_expression_value_11;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_12;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_4;
tmp_called_value_4 = module_var_accessor_annotated_types$Le(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Le);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 226;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 226;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_le);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 226;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 226;
tmp_expression_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 226;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 4;
return tmp_expression_value_11;
yield_return_4:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 226;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_4 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_4);
Py_DECREF(tmp_yield_result_4);
}
branch_no_4:;

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

static PyObject *MAKE_GENERATOR_annotated_types$$$function__11___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        annotated_types$$$function__11___iter__$$$genobj__1___iter___context,
        module_annotated_types,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_fb4ee8745cd8b58f1accf90c18630524,
#endif
        code_objects_390f78f7498b37c9e73610ed5b0a5819,
        closure,
        1,
#if 1
        sizeof(struct annotated_types$$$function__11___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_annotated_types$$$function__12___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_annotated_types$$$function__12___iter__$$$genobj__1___iter__(tstate, tmp_closure_1);

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
struct annotated_types$$$function__12___iter__$$$genobj__1___iter___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *annotated_types$$$function__12___iter__$$$genobj__1___iter___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct annotated_types$$$function__12___iter__$$$genobj__1___iter___locals *generator_heap = (struct annotated_types$$$function__12___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_41840d4c5bc8a614bc908545af797700, module_annotated_types, sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 276;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_min_length);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 276;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 276;
generator_heap->type_description_1 = "c";
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
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_annotated_types$MinLen(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_MinLen);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 277;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 277;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_min_length);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 277;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 277;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 277;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 277;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 278;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_max_length);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 278;
generator_heap->type_description_1 = "c";
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
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
tmp_called_value_2 = module_var_accessor_annotated_types$MaxLen(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_MaxLen);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 279;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 279;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_max_length);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 279;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 279;
tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 279;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_5;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 279;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
branch_no_2:;

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

static PyObject *MAKE_GENERATOR_annotated_types$$$function__12___iter__$$$genobj__1___iter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        annotated_types$$$function__12___iter__$$$genobj__1___iter___context,
        module_annotated_types,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_07d8c5fb49112aa19ed8a0ca450b2570,
#endif
        code_objects_41840d4c5bc8a614bc908545af797700,
        closure,
        1,
#if 1
        sizeof(struct annotated_types$$$function__12___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_annotated_types$$$function__13___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_namespace = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$function__13___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_annotated_types$$$function__13___repr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_annotated_types$$$function__13___repr__)) {
    Py_XDECREF(cache_frame_frame_annotated_types$$$function__13___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_annotated_types$$$function__13___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_annotated_types$$$function__13___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b0779984fcfaa748bd81749b75c02b49, module_annotated_types, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_annotated_types$$$function__13___repr__->m_type_description == NULL);
frame_frame_annotated_types$$$function__13___repr__ = cache_frame_frame_annotated_types$$$function__13___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$function__13___repr__);
assert(Py_REFCNT(frame_frame_annotated_types$$$function__13___repr__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_func);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_name_value_1 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_lambda;
tmp_cmp_expr_left_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_angle_lambda;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oo";
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_40;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_func);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
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


exception_lineno = 348;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
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
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_func);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = IMPORT_HARD_TYPES();
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_MethodType);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 349;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyTuple_SET_ITEM(tmp_isinstance_cls_1, 0, tmp_tuple_element_2);
tmp_expression_value_8 = IMPORT_HARD_TYPES();
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_BuiltinMethodType);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_cls_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_func);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___self__);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_2 = Py_None;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_9, tmp_name_value_2, tmp_default_value_2);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_assignment_expr_1__value == NULL);
tmp_assignment_expr_1__value = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_2 = tmp_assignment_expr_1__value;
assert(var_namespace == NULL);
Py_INCREF(tmp_assign_source_2);
var_namespace = tmp_assign_source_2;
}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_outline_return_value_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 350;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
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
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_format_spec_3;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_13);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 6);
{
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyObject *tmp_format_value_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_chr_40;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
if (var_namespace == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_namespace);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 352;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}

tmp_format_value_4 = var_namespace;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
tmp_tuple_element_3 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 3, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_func);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
tmp_format_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_format_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
CHECK_OBJECT(tmp_format_value_5);
Py_DECREF(tmp_format_value_5);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 4, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 5, tmp_tuple_element_3);
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
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_16;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_func);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_17 = (PyObject *)&PyUnicode_Type;
tmp_type_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_isascii);
assert(!(tmp_type_arg_1 == NULL));
tmp_isinstance_cls_2 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
assert(!(tmp_isinstance_cls_2 == NULL));
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oo";
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
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_format_value_6;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_format_spec_6;
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_19);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_format_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_format_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
CHECK_OBJECT(tmp_format_value_6);
Py_DECREF(tmp_format_value_6);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_7;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_format_spec_7;
PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_chr_40;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
CHECK_OBJECT(par_self);
tmp_expression_value_21 = par_self;
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_func);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto tuple_build_exception_4;
}
tmp_format_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain___qualname__);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_format_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto tuple_build_exception_4;
}
tmp_format_spec_7 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
CHECK_OBJECT(tmp_format_value_7);
Py_DECREF(tmp_format_value_7);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 3, tmp_tuple_element_4);
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
branch_no_3:;
{
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_5;
PyObject *tmp_format_value_8;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_format_spec_8;
CHECK_OBJECT(par_self);
tmp_expression_value_23 = par_self;
tmp_expression_value_22 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_23);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_format_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_format_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_format_spec_8 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
CHECK_OBJECT(tmp_format_value_8);
Py_DECREF(tmp_format_value_8);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_9;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_format_spec_9;
PyTuple_SET_ITEM(tmp_string_concat_values_4, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_chr_40;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 1, tmp_tuple_element_5);
CHECK_OBJECT(par_self);
tmp_expression_value_25 = par_self;
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_func);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oo";
    goto tuple_build_exception_5;
}
tmp_format_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_format_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oo";
    goto tuple_build_exception_5;
}
tmp_format_spec_9 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
CHECK_OBJECT(tmp_format_value_9);
Py_DECREF(tmp_format_value_9);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 2, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 3, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_string_concat_values_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$function__13___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$function__13___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$function__13___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$function__13___repr__,
    type_description_1,
    par_self,
    var_namespace
);


// Release cached frame if used for exception.
if (frame_frame_annotated_types$$$function__13___repr__ == cache_frame_frame_annotated_types$$$function__13___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_annotated_types$$$function__13___repr__);
    cache_frame_frame_annotated_types$$$function__13___repr__ = NULL;
}

assertFrameObject(frame_frame_annotated_types$$$function__13___repr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_namespace);
var_namespace = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_namespace);
var_namespace = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

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


static PyObject *impl_annotated_types$$$function__14___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par__Not__v = python_pars[1];
struct Nuitka_FrameObject *frame_frame_annotated_types$$$function__14___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_annotated_types$$$function__14___call__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_annotated_types$$$function__14___call__)) {
    Py_XDECREF(cache_frame_frame_annotated_types$$$function__14___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_annotated_types$$$function__14___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_annotated_types$$$function__14___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ab86aec7dbd76552eba8b1e629c7e477, module_annotated_types, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_annotated_types$$$function__14___call__->m_type_description == NULL);
frame_frame_annotated_types$$$function__14___call__ = cache_frame_frame_annotated_types$$$function__14___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$function__14___call__);
assert(Py_REFCNT(frame_frame_annotated_types$$$function__14___call__) == 2);

// Framed code:
{
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par__Not__v);
tmp_args_element_value_1 = par__Not__v;
frame_frame_annotated_types$$$function__14___call__->m_frame.f_lineno = 363;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_func, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$function__14___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$function__14___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$function__14___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$function__14___call__,
    type_description_1,
    par_self,
    par__Not__v
);


// Release cached frame if used for exception.
if (frame_frame_annotated_types$$$function__14___call__ == cache_frame_frame_annotated_types$$$function__14___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_annotated_types$$$function__14___call__);
    cache_frame_frame_annotated_types$$$function__14___call__ = NULL;
}

assertFrameObject(frame_frame_annotated_types$$$function__14___call__);

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
CHECK_OBJECT(par__Not__v);
Py_DECREF(par__Not__v);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par__Not__v);
Py_DECREF(par__Not__v);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_annotated_types$$$function__15_doc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_documentation = python_pars[0];
struct Nuitka_FrameObject *frame_frame_annotated_types$$$function__15_doc;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_annotated_types$$$function__15_doc = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_annotated_types$$$function__15_doc)) {
    Py_XDECREF(cache_frame_frame_annotated_types$$$function__15_doc);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_annotated_types$$$function__15_doc == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_annotated_types$$$function__15_doc = MAKE_FUNCTION_FRAME(tstate, code_objects_c535700b4e0d75c18ebd1574790a1ef5, module_annotated_types, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_annotated_types$$$function__15_doc->m_type_description == NULL);
frame_frame_annotated_types$$$function__15_doc = cache_frame_frame_annotated_types$$$function__15_doc;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$function__15_doc);
assert(Py_REFCNT(frame_frame_annotated_types$$$function__15_doc) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_annotated_types$DocInfo(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DocInfo);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 432;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_documentation);
tmp_args_element_value_1 = par_documentation;
frame_frame_annotated_types$$$function__15_doc->m_frame.f_lineno = 432;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$function__15_doc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$function__15_doc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$function__15_doc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$function__15_doc,
    type_description_1,
    par_documentation
);


// Release cached frame if used for exception.
if (frame_frame_annotated_types$$$function__15_doc == cache_frame_frame_annotated_types$$$function__15_doc) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_annotated_types$$$function__15_doc);
    cache_frame_frame_annotated_types$$$function__15_doc = NULL;
}

assertFrameObject(frame_frame_annotated_types$$$function__15_doc);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_documentation);
Py_DECREF(par_documentation);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_documentation);
Py_DECREF(par_documentation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__10___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_annotated_types$$$function__10___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e91bf00ea9936b891a8f3ea18e75c8e6,
#endif
        code_objects_86debf51d0166921e8fb9bd58fb08aa5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__11___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_annotated_types$$$function__11___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fb4ee8745cd8b58f1accf90c18630524,
#endif
        code_objects_390f78f7498b37c9e73610ed5b0a5819,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
        mod_consts.const_str_digest_2f99ab0a0d84644bf6397abeeaab3887,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__12___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_annotated_types$$$function__12___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_07d8c5fb49112aa19ed8a0ca450b2570,
#endif
        code_objects_41840d4c5bc8a614bc908545af797700,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
        mod_consts.const_str_digest_3a1f8dcc344029c36c3766295197f02d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__13___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_annotated_types$$$function__13___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ab873fff89296efc768bbaa098ba3925,
#endif
        code_objects_b0779984fcfaa748bd81749b75c02b49,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__14___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_annotated_types$$$function__14___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dd6d69fb1d1fac4a8cc5913dc0afc6dd,
#endif
        code_objects_ab86aec7dbd76552eba8b1e629c7e477,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__15_doc(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_annotated_types$$$function__15_doc,
        mod_consts.const_str_plain_doc,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c535700b4e0d75c18ebd1574790a1ef5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
        mod_consts.const_str_digest_36957a841842f5a89af58380f5ea0527,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__1___gt__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___gt__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b5575984dff5ce5f9e3ecf6d74f2f0b6,
#endif
        code_objects_91b760a08d7bdd8d10bc7b0c030ed969,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__2___ge__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___ge__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a5eb025bf02cf0c9f2de6bb7a6e69597,
#endif
        code_objects_3341e8188ce2eb6a0c5b76e54b86649b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__3___lt__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___lt__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8ca28721aa73695f6074db47797291d8,
#endif
        code_objects_dd9939f358e37edc872bce589c8e39c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__4___le__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___le__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b93d111bbc6254ff35cd7468bf15f8f6,
#endif
        code_objects_0c5fe725c2809cc9731b09f752219f44,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__5___mod__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___mod__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8dfeff23d0464ee3b14dad8748e404ce,
#endif
        code_objects_74d6977093e2240b229bf67b719a4c6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__6___div__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___div__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_05ddb70f297363b5a3b6071db46369fc,
#endif
        code_objects_e912ea85a7109b2549619ee32bdbc0a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__7___is_annotated_types_grouped_metadata__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___is_annotated_types_grouped_metadata__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3dd6955beaa9410593862e668d37d431,
#endif
        code_objects_46ee9f2862cb9420cacb8a7ef565cfe1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__8___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e91bf00ea9936b891a8f3ea18e75c8e6,
#endif
        code_objects_50d4c134b6f306d39fb15e74b26c1d77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_annotated_types$$$function__9___init_subclass__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_annotated_types$$$function__9___init_subclass__,
        mod_consts.const_str_plain___init_subclass__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d85d987837cf89a53dc36fde2b674d67,
#endif
        code_objects_b9d0a505b5a420784f7d010719a13423,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_annotated_types,
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

static function_impl_code const function_table_annotated_types[] = {
impl_annotated_types$$$function__9___init_subclass__,
impl_annotated_types$$$function__10___iter__,
impl_annotated_types$$$function__11___iter__,
impl_annotated_types$$$function__12___iter__,
impl_annotated_types$$$function__13___repr__,
impl_annotated_types$$$function__14___call__,
impl_annotated_types$$$function__15_doc,
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

    return Nuitka_Function_GetFunctionState(function, function_table_annotated_types);
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
        module_annotated_types,
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
        function_table_annotated_types,
        sizeof(function_table_annotated_types) / sizeof(function_impl_code)
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
static char const *module_full_name = "annotated_types";
#endif

// Internal entry point for module code.
PyObject *module_code_annotated_types(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("annotated_types");

    // Store the module for future use.
    module_annotated_types = module;

    moduledict_annotated_types = MODULE_DICT(module_annotated_types);

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
        PRINT_STRING("annotated_types: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("annotated_types: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("annotated_types: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "annotated_types" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initannotated_types\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_annotated_types,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_annotated_types,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_annotated_types,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_annotated_types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_annotated_types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_annotated_types);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_annotated_types);
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

        UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
PyObject *outline_8_var___class__ = NULL;
PyObject *outline_9_var___class__ = NULL;
PyObject *outline_10_var___class__ = NULL;
struct Nuitka_CellObject *outline_11_var___class__ = NULL;
PyObject *outline_12_var___class__ = NULL;
PyObject *outline_13_var___class__ = NULL;
PyObject *outline_14_var___class__ = NULL;
PyObject *outline_15_var___class__ = NULL;
PyObject *outline_16_var___class__ = NULL;
PyObject *outline_17_var___class__ = NULL;
PyObject *outline_18_var___class__ = NULL;
PyObject *outline_19_var___class__ = NULL;
PyObject *outline_20_var___class__ = NULL;
PyObject *outline_21_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_10__bases = NULL;
PyObject *tmp_class_container$class_creation_10__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_10__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_10__metaclass = NULL;
PyObject *tmp_class_container$class_creation_10__prepared = NULL;
PyObject *tmp_class_container$class_creation_11__bases = NULL;
PyObject *tmp_class_container$class_creation_11__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_11__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_11__metaclass = NULL;
PyObject *tmp_class_container$class_creation_11__prepared = NULL;
PyObject *tmp_class_container$class_creation_12__bases = NULL;
PyObject *tmp_class_container$class_creation_12__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_12__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_12__metaclass = NULL;
PyObject *tmp_class_container$class_creation_12__prepared = NULL;
PyObject *tmp_class_container$class_creation_13__bases = NULL;
PyObject *tmp_class_container$class_creation_13__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_13__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_13__metaclass = NULL;
PyObject *tmp_class_container$class_creation_13__prepared = NULL;
PyObject *tmp_class_container$class_creation_14__bases = NULL;
PyObject *tmp_class_container$class_creation_14__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_14__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_14__metaclass = NULL;
PyObject *tmp_class_container$class_creation_14__prepared = NULL;
PyObject *tmp_class_container$class_creation_15__bases = NULL;
PyObject *tmp_class_container$class_creation_15__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_15__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_15__metaclass = NULL;
PyObject *tmp_class_container$class_creation_15__prepared = NULL;
PyObject *tmp_class_container$class_creation_16__bases = NULL;
PyObject *tmp_class_container$class_creation_16__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_16__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_16__metaclass = NULL;
PyObject *tmp_class_container$class_creation_16__prepared = NULL;
PyObject *tmp_class_container$class_creation_17__bases = NULL;
PyObject *tmp_class_container$class_creation_17__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_17__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_17__metaclass = NULL;
PyObject *tmp_class_container$class_creation_17__prepared = NULL;
PyObject *tmp_class_container$class_creation_18__bases = NULL;
PyObject *tmp_class_container$class_creation_18__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_18__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_18__metaclass = NULL;
PyObject *tmp_class_container$class_creation_18__prepared = NULL;
PyObject *tmp_class_container$class_creation_19__bases = NULL;
PyObject *tmp_class_container$class_creation_19__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_19__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_19__metaclass = NULL;
PyObject *tmp_class_container$class_creation_19__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_20__bases = NULL;
PyObject *tmp_class_container$class_creation_20__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_20__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_20__metaclass = NULL;
PyObject *tmp_class_container$class_creation_20__prepared = NULL;
PyObject *tmp_class_container$class_creation_21__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_21__prepared = NULL;
PyObject *tmp_class_container$class_creation_22__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_22__prepared = NULL;
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
PyObject *tmp_class_container$class_creation_7__class_decl_dict = NULL;
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
PyObject *tmp_dict_unpacking_call_1__called = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_annotated_types$$$class__1_SupportsGt_68 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__1_SupportsGt_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_annotated_types$$$class__2_SupportsGe_73 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__2_SupportsGe_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_annotated_types$$$class__3_SupportsLt_78 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__3_SupportsLt_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_annotated_types$$$class__4_SupportsLe_83 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__4_SupportsLe_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_annotated_types$$$class__5_SupportsMod_88 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__5_SupportsMod_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_annotated_types$$$class__6_SupportsDiv_93 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__6_SupportsDiv_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
PyObject *locals_annotated_types$$$class__7_BaseMetadata_98 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
PyObject *locals_annotated_types$$$class__8_Gt_109 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__8_Gt_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
PyObject *locals_annotated_types$$$class__9_Ge_120 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__9_Ge_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
PyObject *locals_annotated_types$$$class__10_Lt_131 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__10_Lt_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
PyObject *locals_annotated_types$$$class__11_Le_142 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__11_Le_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
PyObject *locals_annotated_types$$$class__12_GroupedMetadata_153 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__12_GroupedMetadata_12;
NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
PyObject *locals_annotated_types$$$class__13_Interval_205 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__13_Interval_13;
NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
PyObject *locals_annotated_types$$$class__14_MultipleOf_230 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__14_MultipleOf_14;
NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
PyObject *locals_annotated_types$$$class__15_MinLen_244 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__15_MinLen_15;
NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_47;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_48;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_49;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
PyObject *locals_annotated_types$$$class__16_MaxLen_254 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__16_MaxLen_16;
NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_50;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_51;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_52;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
PyObject *locals_annotated_types$$$class__17_Len_264 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__17_Len_17;
NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_53;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_54;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_55;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
PyObject *locals_annotated_types$$$class__18_Timezone_283 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__18_Timezone_18;
NUITKA_MAY_BE_UNUSED char const *type_description_18 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_56;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_57;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_58;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
PyObject *locals_annotated_types$$$class__19_Unit_300 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__19_Unit_19;
NUITKA_MAY_BE_UNUSED char const *type_description_19 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_59;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_60;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_61;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
PyObject *locals_annotated_types$$$class__20_Predicate_323 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__20_Predicate_20;
NUITKA_MAY_BE_UNUSED char const *type_description_20 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_62;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_63;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_64;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
PyObject *locals_annotated_types$$$class__21_Not_359 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__21_Not_21;
NUITKA_MAY_BE_UNUSED char const *type_description_21 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_65;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_66;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_67;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_68;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_69;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
struct Nuitka_ExceptionStackItem exception_preserved_1;
PyObject *locals_annotated_types$$$class__22_DocInfo_413 = NULL;
struct Nuitka_FrameObject *frame_frame_annotated_types$$$class__22_DocInfo_22;
NUITKA_MAY_BE_UNUSED char const *type_description_22 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_70;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_71;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_72;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_73;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_annotated_types = MAKE_MODULE_FRAME(code_objects_ecaba7d8969fc4917326905e32b0ba21, module_annotated_types);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types);
assert(Py_REFCNT(frame_frame_annotated_types) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_annotated_types->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_1 = NULL;
    }
}
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_dirname);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_filename_obj;
frame_frame_annotated_types->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_annotated_types->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_2 = NULL;
    }
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_annotated_types->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_c1673d71fdbc699b4fc63a1c2becfbc6_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_annotated_types$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_annotated_types$__spec__(tstate);
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = module_var_accessor_annotated_types$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_annotated_types$__spec__(tstate);
assert(!(tmp_assattr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_submodule_search_locations, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
UPDATE_STRING_DICT0(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_math;
tmp_globals_arg_value_1 = (PyObject *)moduledict_annotated_types;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_annotated_types->m_frame.f_lineno = 1;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_math, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPES();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_2 = (PyObject *)moduledict_annotated_types;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_dataclass_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_annotated_types->m_frame.f_lineno = 4;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_dataclass,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_dataclass);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_datetime;
tmp_globals_arg_value_3 = (PyObject *)moduledict_annotated_types;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_tzinfo_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_annotated_types->m_frame.f_lineno = 5;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_tzinfo,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_tzinfo);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_tzinfo, tmp_assign_source_9);
}
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
UPDATE_STRING_DICT0(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_11);
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_Iterator,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Iterator);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_SupportsFloat,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_SupportsFloat);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsFloat, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_SupportsIndex,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_SupportsIndex);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsIndex, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_19);
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
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_20 == NULL));
assert(tmp_import_from_3__module == NULL);
Py_INCREF(tmp_assign_source_20);
tmp_import_from_3__module = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_Protocol,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Protocol);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_runtime_checkable,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_runtime_checkable);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable, tmp_assign_source_22);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_23 == NULL));
assert(tmp_import_from_5__module == NULL);
Py_INCREF(tmp_assign_source_23);
tmp_import_from_5__module = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_13 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_Annotated,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_Annotated);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_14 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_25);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_15;
tmp_import_name_from_15 = IMPORT_HARD_TYPES();
assert(!(tmp_import_name_from_15 == NULL));
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_EllipsisType,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_EllipsisType);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipsisType, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = DICT_COPY(tstate, mod_consts.const_dict_79de1992aff8a71f7311f7b616e2145b);
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_KW_ONLY, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = DICT_COPY(tstate, mod_consts.const_dict_80bc8edb4c8da776ef1e0870149a9690);
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SLOTS, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = mod_consts.const_tuple_4eec9915f5c20ce5b413dc4e2ee2a7cd_tuple;
UPDATE_STRING_DICT0(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = mod_consts.const_str_digest_6f217bffdc3761d0450e4d7fc544743e;
UPDATE_STRING_DICT0(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_annotated_types$TypeVar(tstate);
assert(!(tmp_called_value_3 == NULL));
frame_frame_annotated_types->m_frame.f_lineno = 60;
tmp_assign_source_31 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_T_tuple);

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_T, tmp_assign_source_31);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_annotated_types$Protocol(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto try_except_handler_4;
}
tmp_assign_source_32 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_32, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_33 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_4;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_3 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_35 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_35;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_SupportsGt;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 68;
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_36;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_6 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_4;
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
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_4;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_4;
}
frame_frame_annotated_types->m_frame.f_lineno = 68;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 68;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_37;
}
branch_end_1:;
{
PyObject *tmp_assign_source_38;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_annotated_types$$$class__1_SupportsGt_68 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__1_SupportsGt_68, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_SupportsGt;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__1_SupportsGt_68, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_68;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__1_SupportsGt_68, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_6;
}
frame_frame_annotated_types$$$class__1_SupportsGt_2 = MAKE_CLASS_FRAME(tstate, code_objects_bf8470161fe85573be0f6acfc11282e8, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__1_SupportsGt_2);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__1_SupportsGt_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_self;
tmp_dict_value_1 = PyObject_GetItem(locals_annotated_types$$$class__1_SupportsGt_68, mod_consts.const_str_plain_T);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_annotated_types$T(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain__SupportsGt__other;
tmp_dict_value_1 = PyObject_GetItem(locals_annotated_types$$$class__1_SupportsGt_68, mod_consts.const_str_plain_T);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_annotated_types$T(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_2 = "o";
    goto dict_build_exception_1;
}
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
tmp_dict_value_1 = PyObject_GetItem(locals_annotated_types$$$class__1_SupportsGt_68, mod_consts.const_str_plain_bool);

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
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_dictset_value = MAKE_FUNCTION_annotated_types$$$function__1___gt__(tstate, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_annotated_types$$$class__1_SupportsGt_68, mod_consts.const_str_plain___gt__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__1_SupportsGt_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__1_SupportsGt_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__1_SupportsGt_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__1_SupportsGt_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__1_SupportsGt_2);

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
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__1_SupportsGt_68, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_6;
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


exception_lineno = 68;

    goto try_except_handler_6;
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
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__1_SupportsGt_68, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_6;
}
branch_no_3:;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_SupportsGt;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_annotated_types$$$class__1_SupportsGt_68;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 68;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_6;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_39;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_38 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_38);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_annotated_types$$$class__1_SupportsGt_68);
locals_annotated_types$$$class__1_SupportsGt_68 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__1_SupportsGt_68);
locals_annotated_types$$$class__1_SupportsGt_68 = NULL;
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
exception_lineno = 68;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsGt, tmp_assign_source_38);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_40;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_annotated_types$Protocol(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto try_except_handler_7;
}
tmp_assign_source_40 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_40, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_41 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_9 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_43 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_43;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_SupportsGe;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 73;
tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_44;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_12 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
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
PyObject *tmp_expression_value_13;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_5, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
frame_frame_annotated_types->m_frame.f_lineno = 73;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 73;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_45;
}
branch_end_4:;
{
PyObject *tmp_assign_source_46;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_annotated_types$$$class__2_SupportsGe_73 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__2_SupportsGe_73, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_SupportsGe;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__2_SupportsGe_73, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_73;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__2_SupportsGe_73, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_9;
}
frame_frame_annotated_types$$$class__2_SupportsGe_3 = MAKE_CLASS_FRAME(tstate, code_objects_6b1c2dc0c02d01b53d7ce38295484dfc, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__2_SupportsGe_3);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__2_SupportsGe_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_self;
tmp_dict_value_2 = PyObject_GetItem(locals_annotated_types$$$class__2_SupportsGe_73, mod_consts.const_str_plain_T);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_annotated_types$T(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_2 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain__SupportsGe__other;
tmp_dict_value_2 = PyObject_GetItem(locals_annotated_types$$$class__2_SupportsGe_73, mod_consts.const_str_plain_T);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_annotated_types$T(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_2 = "o";
    goto dict_build_exception_2;
}
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
tmp_dict_value_2 = PyObject_GetItem(locals_annotated_types$$$class__2_SupportsGe_73, mod_consts.const_str_plain_bool);

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
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_dictset_value = MAKE_FUNCTION_annotated_types$$$function__2___ge__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_annotated_types$$$class__2_SupportsGe_73, mod_consts.const_str_plain___ge__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__2_SupportsGe_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__2_SupportsGe_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__2_SupportsGe_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__2_SupportsGe_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__2_SupportsGe_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_9;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__2_SupportsGe_73, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_9;
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


exception_lineno = 73;

    goto try_except_handler_9;
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
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__2_SupportsGe_73, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_9;
}
branch_no_6:;
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_SupportsGe;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_annotated_types$$$class__2_SupportsGe_73;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 73;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_9;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_47;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_46 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_46);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_annotated_types$$$class__2_SupportsGe_73);
locals_annotated_types$$$class__2_SupportsGe_73 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__2_SupportsGe_73);
locals_annotated_types$$$class__2_SupportsGe_73 = NULL;
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
exception_lineno = 73;
goto try_except_handler_7;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsGe, tmp_assign_source_46);
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_48;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_annotated_types$Protocol(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;

    goto try_except_handler_10;
}
tmp_assign_source_48 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_48, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_49 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_10;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_15 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_10;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_10;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_51 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_51;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_10;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_SupportsLt;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 78;
tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_52;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_18 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_10;
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
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_19;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_19, tmp_name_value_6, tmp_default_value_3);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_10;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_20 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_10;
}
frame_frame_annotated_types->m_frame.f_lineno = 78;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 78;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_53;
}
branch_end_7:;
{
PyObject *tmp_assign_source_54;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_annotated_types$$$class__3_SupportsLt_78 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__3_SupportsLt_78, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_SupportsLt;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__3_SupportsLt_78, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_78;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__3_SupportsLt_78, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
}
frame_frame_annotated_types$$$class__3_SupportsLt_4 = MAKE_CLASS_FRAME(tstate, code_objects_5e71c7b1c79da8dcc998c31099f94f05, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__3_SupportsLt_4);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__3_SupportsLt_4) == 2);

// Framed code:
{
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_dict_key_3 = mod_consts.const_str_plain_self;
tmp_dict_value_3 = PyObject_GetItem(locals_annotated_types$$$class__3_SupportsLt_78, mod_consts.const_str_plain_T);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_annotated_types$T(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_3 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain__SupportsLt__other;
tmp_dict_value_3 = PyObject_GetItem(locals_annotated_types$$$class__3_SupportsLt_78, mod_consts.const_str_plain_T);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_annotated_types$T(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = PyObject_GetItem(locals_annotated_types$$$class__3_SupportsLt_78, mod_consts.const_str_plain_bool);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;

tmp_dictset_value = MAKE_FUNCTION_annotated_types$$$function__3___lt__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_annotated_types$$$class__3_SupportsLt_78, mod_consts.const_str_plain___lt__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__3_SupportsLt_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__3_SupportsLt_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__3_SupportsLt_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__3_SupportsLt_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__3_SupportsLt_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_12;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__3_SupportsLt_78, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
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


exception_lineno = 78;

    goto try_except_handler_12;
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
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__3_SupportsLt_78, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
}
branch_no_9:;
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_12 = mod_consts.const_str_plain_SupportsLt;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_annotated_types$$$class__3_SupportsLt_78;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 78;
tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_12;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_55;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_54 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_54);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_annotated_types$$$class__3_SupportsLt_78);
locals_annotated_types$$$class__3_SupportsLt_78 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__3_SupportsLt_78);
locals_annotated_types$$$class__3_SupportsLt_78 = NULL;
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
exception_lineno = 78;
goto try_except_handler_10;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsLt, tmp_assign_source_54);
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
PyObject *tmp_assign_source_56;
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = module_var_accessor_annotated_types$Protocol(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto try_except_handler_13;
}
tmp_assign_source_56 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_56, 0, tmp_tuple_element_13);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_57 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_13;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_21 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_13;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_13;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_59 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_59;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_13;
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
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_13;
}
tmp_tuple_element_14 = mod_consts.const_str_plain_SupportsLe;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 83;
tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_60;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_24 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_13;
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
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_25;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_25, tmp_name_value_7, tmp_default_value_4);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_13;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_26;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_26 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_26 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_13;
}
frame_frame_annotated_types->m_frame.f_lineno = 83;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 83;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_61;
}
branch_end_10:;
{
PyObject *tmp_assign_source_62;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_annotated_types$$$class__4_SupportsLe_83 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__4_SupportsLe_83, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_SupportsLe;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__4_SupportsLe_83, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_83;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__4_SupportsLe_83, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_15;
}
frame_frame_annotated_types$$$class__4_SupportsLe_5 = MAKE_CLASS_FRAME(tstate, code_objects_38199e15559cb79f7198e5e11c1a7bcd, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__4_SupportsLe_5);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__4_SupportsLe_5) == 2);

// Framed code:
{
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_dict_key_4 = mod_consts.const_str_plain_self;
tmp_dict_value_4 = PyObject_GetItem(locals_annotated_types$$$class__4_SupportsLe_83, mod_consts.const_str_plain_T);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_annotated_types$T(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_4 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain__SupportsLe__other;
tmp_dict_value_4 = PyObject_GetItem(locals_annotated_types$$$class__4_SupportsLe_83, mod_consts.const_str_plain_T);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_annotated_types$T(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_2 = "o";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_dict_value_4 = PyObject_GetItem(locals_annotated_types$$$class__4_SupportsLe_83, mod_consts.const_str_plain_bool);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_annotations_4);
goto frame_exception_exit_5;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;

tmp_dictset_value = MAKE_FUNCTION_annotated_types$$$function__4___le__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_annotated_types$$$class__4_SupportsLe_83, mod_consts.const_str_plain___le__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__4_SupportsLe_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__4_SupportsLe_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__4_SupportsLe_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__4_SupportsLe_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__4_SupportsLe_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_15;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__4_SupportsLe_83, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_15;
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


exception_lineno = 83;

    goto try_except_handler_15;
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
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__4_SupportsLe_83, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_15;
}
branch_no_12:;
{
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_16 = mod_consts.const_str_plain_SupportsLe;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
tmp_tuple_element_16 = locals_annotated_types$$$class__4_SupportsLe_83;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 83;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto try_except_handler_15;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_63;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_62 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_62);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_annotated_types$$$class__4_SupportsLe_83);
locals_annotated_types$$$class__4_SupportsLe_83 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__4_SupportsLe_83);
locals_annotated_types$$$class__4_SupportsLe_83 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

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
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 83;
goto try_except_handler_13;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsLe, tmp_assign_source_62);
}
goto try_end_7;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
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
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
PyObject *tmp_assign_source_64;
PyObject *tmp_tuple_element_17;
tmp_tuple_element_17 = module_var_accessor_annotated_types$Protocol(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;

    goto try_except_handler_16;
}
tmp_assign_source_64 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_64, 0, tmp_tuple_element_17);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_64;
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_65 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_66;
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_16;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_27 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_16;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_16;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_67 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_67;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_28 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_16;
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
PyObject *tmp_assign_source_68;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_29;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_16;
}
tmp_tuple_element_18 = mod_consts.const_str_plain_SupportsMod;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 88;
tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_68;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_30 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_16;
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
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_31;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_31 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_31, tmp_name_value_8, tmp_default_value_5);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_16;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_32;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_32 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_32 == NULL));
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_16;
}
frame_frame_annotated_types->m_frame.f_lineno = 88;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 88;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_16;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_69;
}
branch_end_13:;
{
PyObject *tmp_assign_source_70;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_annotated_types$$$class__5_SupportsMod_88 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__5_SupportsMod_88, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_plain_SupportsMod;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__5_SupportsMod_88, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_88;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__5_SupportsMod_88, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_18;
}
frame_frame_annotated_types$$$class__5_SupportsMod_6 = MAKE_CLASS_FRAME(tstate, code_objects_832774fb81b507a6176c696c1282be7d, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__5_SupportsMod_6);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__5_SupportsMod_6) == 2);

// Framed code:
{
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
tmp_dict_key_5 = mod_consts.const_str_plain_self;
tmp_dict_value_5 = PyObject_GetItem(locals_annotated_types$$$class__5_SupportsMod_88, mod_consts.const_str_plain_T);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_annotated_types$T(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_annotations_5 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain__SupportsMod__other;
tmp_dict_value_5 = PyObject_GetItem(locals_annotated_types$$$class__5_SupportsMod_88, mod_consts.const_str_plain_T);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_annotated_types$T(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_2 = "o";
    goto dict_build_exception_5;
}
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_5;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = PyObject_GetItem(locals_annotated_types$$$class__5_SupportsMod_88, mod_consts.const_str_plain_T);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_annotated_types$T(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_2 = "o";
    goto dict_build_exception_5;
}
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_5;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_annotations_5);
goto frame_exception_exit_6;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;

tmp_dictset_value = MAKE_FUNCTION_annotated_types$$$function__5___mod__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_annotated_types$$$class__5_SupportsMod_88, mod_consts.const_str_plain___mod__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__5_SupportsMod_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__5_SupportsMod_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__5_SupportsMod_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__5_SupportsMod_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__5_SupportsMod_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_18;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__5_SupportsMod_88, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_18;
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


exception_lineno = 88;

    goto try_except_handler_18;
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
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__5_SupportsMod_88, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_18;
}
branch_no_15:;
{
PyObject *tmp_assign_source_71;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_20 = mod_consts.const_str_plain_SupportsMod;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
tmp_tuple_element_20 = locals_annotated_types$$$class__5_SupportsMod_88;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 88;
tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_18;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_71;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_70 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_70);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_annotated_types$$$class__5_SupportsMod_88);
locals_annotated_types$$$class__5_SupportsMod_88 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__5_SupportsMod_88);
locals_annotated_types$$$class__5_SupportsMod_88 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

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
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 88;
goto try_except_handler_16;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsMod, tmp_assign_source_70);
}
goto try_end_8;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
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
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
PyObject *tmp_assign_source_72;
PyObject *tmp_tuple_element_21;
tmp_tuple_element_21 = module_var_accessor_annotated_types$Protocol(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;

    goto try_except_handler_19;
}
tmp_assign_source_72 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_72, 0, tmp_tuple_element_21);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_72;
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_73 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_19;
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
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_19;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_33 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_33, tmp_subscript_value_6, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_19;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_19;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_75 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_75;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_34 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_19;
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
PyObject *tmp_assign_source_76;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_35;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_19;
}
tmp_tuple_element_22 = mod_consts.const_str_plain_SupportsDiv;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 93;
tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_76;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_36 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_19;
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
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_37;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_37 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_37, tmp_name_value_9, tmp_default_value_6);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_19;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_38;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_38 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_38 == NULL));
tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_23);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_19;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_19;
}
frame_frame_annotated_types->m_frame.f_lineno = 93;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 93;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_19;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_77;
tmp_assign_source_77 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_77;
}
branch_end_16:;
{
PyObject *tmp_assign_source_78;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_annotated_types$$$class__6_SupportsDiv_93 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__6_SupportsDiv_93, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_plain_SupportsDiv;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__6_SupportsDiv_93, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_int_pos_93;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__6_SupportsDiv_93, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_21;
}
frame_frame_annotated_types$$$class__6_SupportsDiv_7 = MAKE_CLASS_FRAME(tstate, code_objects_96f8753e52af8fa7dc9f7ec82a54334b, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__6_SupportsDiv_7);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__6_SupportsDiv_7) == 2);

// Framed code:
{
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
tmp_dict_key_6 = mod_consts.const_str_plain_self;
tmp_dict_value_6 = PyObject_GetItem(locals_annotated_types$$$class__6_SupportsDiv_93, mod_consts.const_str_plain_T);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_annotated_types$T(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_annotations_6 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain__SupportsDiv__other;
tmp_dict_value_6 = PyObject_GetItem(locals_annotated_types$$$class__6_SupportsDiv_93, mod_consts.const_str_plain_T);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_annotated_types$T(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_2 = "o";
    goto dict_build_exception_6;
}
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_6;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_dict_value_6 = PyObject_GetItem(locals_annotated_types$$$class__6_SupportsDiv_93, mod_consts.const_str_plain_T);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_annotated_types$T(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_2 = "o";
    goto dict_build_exception_6;
}
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_6;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_annotations_6);
goto frame_exception_exit_7;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;

tmp_dictset_value = MAKE_FUNCTION_annotated_types$$$function__6___div__(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_annotated_types$$$class__6_SupportsDiv_93, mod_consts.const_str_plain___div__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__6_SupportsDiv_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__6_SupportsDiv_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__6_SupportsDiv_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__6_SupportsDiv_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__6_SupportsDiv_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_21;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__6_SupportsDiv_93, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_21;
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


exception_lineno = 93;

    goto try_except_handler_21;
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
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__6_SupportsDiv_93, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_21;
}
branch_no_18:;
{
PyObject *tmp_assign_source_79;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_24;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_15 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_24 = mod_consts.const_str_plain_SupportsDiv;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_24 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
tmp_tuple_element_24 = locals_annotated_types$$$class__6_SupportsDiv_93;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 93;
tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_21;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_79;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_78 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_78);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
Py_DECREF(locals_annotated_types$$$class__6_SupportsDiv_93);
locals_annotated_types$$$class__6_SupportsDiv_93 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__6_SupportsDiv_93);
locals_annotated_types$$$class__6_SupportsDiv_93 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

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
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 93;
goto try_except_handler_19;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsDiv, tmp_assign_source_78);
}
goto try_end_9;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
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
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
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
{
PyObject *tmp_assign_source_80;
tmp_assign_source_80 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_80;
}
{
PyObject *tmp_assign_source_81;
tmp_assign_source_81 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_81;
}
// Tried code:
{
PyObject *tmp_assign_source_82;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_annotated_types$$$class__7_BaseMetadata_98 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__7_BaseMetadata_98, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_4cc09fc10c2326076d8008693b7943ca;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__7_BaseMetadata_98, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_BaseMetadata;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__7_BaseMetadata_98, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_98;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__7_BaseMetadata_98, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__7_BaseMetadata_98, mod_consts.const_str_plain___slots__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__7_BaseMetadata_98, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_83;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_13;
tmp_called_value_16 = (PyObject *)&PyType_Type;
tmp_tuple_element_25 = mod_consts.const_str_plain_BaseMetadata;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_25);
tmp_tuple_element_25 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_25);
tmp_tuple_element_25 = locals_annotated_types$$$class__7_BaseMetadata_98;
PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 98;
tmp_assign_source_83 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_24;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_83;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_82 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_82);
goto try_return_handler_24;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
Py_DECREF(locals_annotated_types$$$class__7_BaseMetadata_98);
locals_annotated_types$$$class__7_BaseMetadata_98 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__7_BaseMetadata_98);
locals_annotated_types$$$class__7_BaseMetadata_98 = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

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
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 98;
goto try_except_handler_22;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseMetadata, tmp_assign_source_82);
}
goto try_end_10;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
Py_DECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
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
{
PyObject *tmp_assign_source_84;
PyObject *tmp_tuple_element_26;
tmp_tuple_element_26 = module_var_accessor_annotated_types$BaseMetadata(tstate);
assert(!(tmp_tuple_element_26 == NULL));
tmp_assign_source_84 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_84, 0, tmp_tuple_element_26);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_84;
}
// Tried code:
{
PyObject *tmp_assign_source_85;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_85 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_85;
}
{
PyObject *tmp_assign_source_86;
tmp_assign_source_86 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_86;
}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_39;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_25;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_39 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_39, tmp_subscript_value_7, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_25;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_25;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_87 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_87;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_40 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_25;
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
PyObject *tmp_assign_source_88;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_41;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_41 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_25;
}
tmp_tuple_element_27 = mod_consts.const_str_plain_Gt;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_27 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 109;
tmp_assign_source_88 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_88;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_42;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_42 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_42, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_25;
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
PyObject *tmp_tuple_element_28;
PyObject *tmp_expression_value_43;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_43 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_28 = BUILTIN_GETATTR(tstate, tmp_expression_value_43, tmp_name_value_10, tmp_default_value_7);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_25;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_44;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_44 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_44 == NULL));
tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_44);
Py_DECREF(tmp_expression_value_44);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_28);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_25;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_25;
}
frame_frame_annotated_types->m_frame.f_lineno = 109;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 109;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_25;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_89;
tmp_assign_source_89 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_89;
}
branch_end_19:;
{
PyObject *tmp_assign_source_90;
PyObject *tmp_called_value_18;
PyObject *tmp_direct_call_arg1_8;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_args_element_value_2;
tmp_direct_call_arg1_8 = module_var_accessor_annotated_types$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

    goto try_except_handler_25;
}
tmp_direct_call_arg2_1 = DICT_COPY(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
tmp_direct_call_arg3_1 = module_var_accessor_annotated_types$SLOTS(tstate);
if (unlikely(tmp_direct_call_arg3_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLOTS);
}

if (tmp_direct_call_arg3_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg2_1);

exception_lineno = 108;

    goto try_except_handler_25;
}
Py_INCREF(tmp_direct_call_arg1_8);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_called_value_18 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_25;
}
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_annotated_types$$$class__8_Gt_109 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__8_Gt_109, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_str_digest_3a3ab7923e67701116e364e7b7172236;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__8_Gt_109, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_str_plain_Gt;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__8_Gt_109, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_int_pos_109;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__8_Gt_109, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_27;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__8_Gt_109, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_27;
}
frame_frame_annotated_types$$$class__8_Gt_8 = MAKE_CLASS_FRAME(tstate, code_objects_29196eb0be41c467eda55cb0ddeb69eb, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__8_Gt_8);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__8_Gt_8) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = PyObject_GetItem(locals_annotated_types$$$class__8_Gt_109, mod_consts.const_str_plain_SupportsGt);

if (tmp_ass_subvalue_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_1 = module_var_accessor_annotated_types$SupportsGt(tstate);
if (unlikely(tmp_ass_subvalue_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SupportsGt);
}

if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_ass_subvalue_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_ass_subscribed_1 = PyObject_GetItem(locals_annotated_types$$$class__8_Gt_109, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_1);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_8;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_gt;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__8_Gt_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__8_Gt_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__8_Gt_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__8_Gt_8,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__8_Gt_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_27;
skip_nested_handling_7:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__8_Gt_109, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_27;
}
{
nuitka_bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_8__bases;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_8__bases_orig;
tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_27;
}
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_8__bases_orig;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__8_Gt_109, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_27;
}
branch_no_21:;
{
PyObject *tmp_assign_source_91;
PyObject *tmp_called_value_19;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_29;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_19 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_29 = mod_consts.const_str_plain_Gt;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_29 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_29);
tmp_tuple_element_29 = locals_annotated_types$$$class__8_Gt_109;
PyTuple_SET_ITEM0(tmp_args_value_15, 2, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 109;
tmp_assign_source_91 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto try_except_handler_27;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_91;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_args_element_value_2 = outline_7_var___class__;
Py_INCREF(tmp_args_element_value_2);
goto try_return_handler_27;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_27:;
Py_DECREF(locals_annotated_types$$$class__8_Gt_109);
locals_annotated_types$$$class__8_Gt_109 = NULL;
goto try_return_handler_26;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__8_Gt_109);
locals_annotated_types$$$class__8_Gt_109 = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

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
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 109;
goto try_except_handler_25;
outline_result_16:;
frame_frame_annotated_types->m_frame.f_lineno = 108;
tmp_assign_source_90 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_25;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Gt, tmp_assign_source_90);
}
goto try_end_11;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
Py_DECREF(tmp_class_container$class_creation_8__bases_orig);
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
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
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
{
PyObject *tmp_outline_return_value_9;
// Tried code:
{
PyObject *tmp_assign_source_92;
PyObject *tmp_tuple_element_30;
tmp_tuple_element_30 = module_var_accessor_annotated_types$BaseMetadata(tstate);
if (unlikely(tmp_tuple_element_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseMetadata);
}

if (tmp_tuple_element_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;

    goto try_except_handler_28;
}
tmp_assign_source_92 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_92, 0, tmp_tuple_element_30);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_92;
}
{
PyObject *tmp_assign_source_93;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_93 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_93;
}
{
PyObject *tmp_assign_source_94;
tmp_assign_source_94 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_94;
}
{
PyObject *tmp_assign_source_95;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_45;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_28;
}
tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_45 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_45, tmp_subscript_value_8, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_28;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_28;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_95 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_95;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_46;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_46 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_28;
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
PyObject *tmp_assign_source_96;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_47;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_47 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_28;
}
tmp_tuple_element_31 = mod_consts.const_str_plain_Ge;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 120;
tmp_assign_source_96 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_96;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_48;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_48 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_48, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_28;
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
PyObject *tmp_tuple_element_32;
PyObject *tmp_expression_value_49;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_49 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_32 = BUILTIN_GETATTR(tstate, tmp_expression_value_49, tmp_name_value_11, tmp_default_value_8);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_28;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_50;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_50 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_50 == NULL));
tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_50);
Py_DECREF(tmp_expression_value_50);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_32);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_28;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_28;
}
frame_frame_annotated_types->m_frame.f_lineno = 120;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 120;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_28;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_97;
tmp_assign_source_97 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_97;
}
branch_end_22:;
{
PyObject *tmp_assign_source_98;
PyObject *tmp_called_value_21;
PyObject *tmp_direct_call_arg1_10;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_args_element_value_3;
tmp_direct_call_arg1_10 = module_var_accessor_annotated_types$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;

    goto try_except_handler_28;
}
tmp_direct_call_arg2_2 = DICT_COPY(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
tmp_direct_call_arg3_2 = module_var_accessor_annotated_types$SLOTS(tstate);
if (unlikely(tmp_direct_call_arg3_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLOTS);
}

if (tmp_direct_call_arg3_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg2_2);

exception_lineno = 119;

    goto try_except_handler_28;
}
Py_INCREF(tmp_direct_call_arg1_10);
Py_INCREF(tmp_direct_call_arg3_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2};
    tmp_called_value_21 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_28;
}
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_annotated_types$$$class__9_Ge_120 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__9_Ge_120, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_str_digest_8be2bc7f669e8e7b0768fd6e9856d32d;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__9_Ge_120, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_str_plain_Ge;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__9_Ge_120, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_int_pos_120;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__9_Ge_120, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_30;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__9_Ge_120, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_30;
}
frame_frame_annotated_types$$$class__9_Ge_9 = MAKE_CLASS_FRAME(tstate, code_objects_fe622d7d2fc42b925c74e680cda9380e, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__9_Ge_9);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__9_Ge_9) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = PyObject_GetItem(locals_annotated_types$$$class__9_Ge_120, mod_consts.const_str_plain_SupportsGe);

if (tmp_ass_subvalue_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_2 = module_var_accessor_annotated_types$SupportsGe(tstate);
if (unlikely(tmp_ass_subvalue_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SupportsGe);
}

if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_ass_subvalue_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_ass_subscribed_2 = PyObject_GetItem(locals_annotated_types$$$class__9_Ge_120, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_2);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_9;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_ge;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__9_Ge_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__9_Ge_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__9_Ge_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__9_Ge_9,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__9_Ge_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_30;
skip_nested_handling_8:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__9_Ge_120, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_30;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_9__bases;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_cmp_expr_right_8 = tmp_class_container$class_creation_9__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_30;
}
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_9__bases_orig;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__9_Ge_120, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_30;
}
branch_no_24:;
{
PyObject *tmp_assign_source_99;
PyObject *tmp_called_value_22;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_33;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_22 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_33 = mod_consts.const_str_plain_Ge;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_33 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_33);
tmp_tuple_element_33 = locals_annotated_types$$$class__9_Ge_120;
PyTuple_SET_ITEM0(tmp_args_value_17, 2, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 120;
tmp_assign_source_99 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_30;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_99;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_args_element_value_3 = outline_8_var___class__;
Py_INCREF(tmp_args_element_value_3);
goto try_return_handler_30;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_30:;
Py_DECREF(locals_annotated_types$$$class__9_Ge_120);
locals_annotated_types$$$class__9_Ge_120 = NULL;
goto try_return_handler_29;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__9_Ge_120);
locals_annotated_types$$$class__9_Ge_120 = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

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
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 120;
goto try_except_handler_28;
outline_result_18:;
frame_frame_annotated_types->m_frame.f_lineno = 119;
tmp_assign_source_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_28;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Ge, tmp_assign_source_98);
}
goto try_end_12;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
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
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
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
PyObject *tmp_outline_return_value_10;
// Tried code:
{
PyObject *tmp_assign_source_100;
PyObject *tmp_tuple_element_34;
tmp_tuple_element_34 = module_var_accessor_annotated_types$BaseMetadata(tstate);
if (unlikely(tmp_tuple_element_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseMetadata);
}

if (tmp_tuple_element_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto try_except_handler_31;
}
tmp_assign_source_100 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_100, 0, tmp_tuple_element_34);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_100;
}
{
PyObject *tmp_assign_source_101;
PyObject *tmp_direct_call_arg1_11;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_11 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_11};
    tmp_assign_source_101 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_101;
}
{
PyObject *tmp_assign_source_102;
tmp_assign_source_102 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_102;
}
{
PyObject *tmp_assign_source_103;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_51;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_31;
}
tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_expression_value_51 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_51, tmp_subscript_value_9, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_31;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_31;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_103 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_103;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_52;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_52 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_31;
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
PyObject *tmp_assign_source_104;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_53;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_35;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_53 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_31;
}
tmp_tuple_element_35 = mod_consts.const_str_plain_Lt;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_35 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 131;
tmp_assign_source_104 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_104;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_54;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_54 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_31;
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
PyObject *tmp_tuple_element_36;
PyObject *tmp_expression_value_55;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_55 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_36 = BUILTIN_GETATTR(tstate, tmp_expression_value_55, tmp_name_value_12, tmp_default_value_9);
if (tmp_tuple_element_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_31;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_56;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_56 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_56 == NULL));
tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_56);
Py_DECREF(tmp_expression_value_56);
if (tmp_tuple_element_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_36);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_31;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_31;
}
frame_frame_annotated_types->m_frame.f_lineno = 131;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 131;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_31;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_105;
tmp_assign_source_105 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_105;
}
branch_end_25:;
{
PyObject *tmp_assign_source_106;
PyObject *tmp_called_value_24;
PyObject *tmp_direct_call_arg1_12;
PyObject *tmp_direct_call_arg2_3;
PyObject *tmp_direct_call_arg3_3;
PyObject *tmp_args_element_value_4;
tmp_direct_call_arg1_12 = module_var_accessor_annotated_types$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto try_except_handler_31;
}
tmp_direct_call_arg2_3 = DICT_COPY(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
tmp_direct_call_arg3_3 = module_var_accessor_annotated_types$SLOTS(tstate);
if (unlikely(tmp_direct_call_arg3_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLOTS);
}

if (tmp_direct_call_arg3_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg2_3);

exception_lineno = 130;

    goto try_except_handler_31;
}
Py_INCREF(tmp_direct_call_arg1_12);
Py_INCREF(tmp_direct_call_arg3_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_12, tmp_direct_call_arg2_3, tmp_direct_call_arg3_3};
    tmp_called_value_24 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_31;
}
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_annotated_types$$$class__10_Lt_131 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__10_Lt_131, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_str_digest_adb303835517a8aed294442a93203bea;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__10_Lt_131, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_str_plain_Lt;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__10_Lt_131, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_int_pos_131;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__10_Lt_131, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_33;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__10_Lt_131, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_33;
}
frame_frame_annotated_types$$$class__10_Lt_10 = MAKE_CLASS_FRAME(tstate, code_objects_dd3a1a86011c7c2034a720b18f016a7e, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__10_Lt_10);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__10_Lt_10) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = PyObject_GetItem(locals_annotated_types$$$class__10_Lt_131, mod_consts.const_str_plain_SupportsLt);

if (tmp_ass_subvalue_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_3 = module_var_accessor_annotated_types$SupportsLt(tstate);
if (unlikely(tmp_ass_subvalue_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SupportsLt);
}

if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
        Py_INCREF(tmp_ass_subvalue_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}

tmp_ass_subscribed_3 = PyObject_GetItem(locals_annotated_types$$$class__10_Lt_131, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_3);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_10;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_lt;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__10_Lt_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__10_Lt_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__10_Lt_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__10_Lt_10,
    type_description_2,
    outline_9_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__10_Lt_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_33;
skip_nested_handling_9:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__10_Lt_131, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_33;
}
{
nuitka_bool tmp_condition_result_36;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_cmp_expr_left_9 = tmp_class_container$class_creation_10__bases;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_cmp_expr_right_9 = tmp_class_container$class_creation_10__bases_orig;
tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_33;
}
if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_10__bases_orig;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__10_Lt_131, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_33;
}
branch_no_27:;
{
PyObject *tmp_assign_source_107;
PyObject *tmp_called_value_25;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_37;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_25 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_37 = mod_consts.const_str_plain_Lt;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_37 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_37);
tmp_tuple_element_37 = locals_annotated_types$$$class__10_Lt_131;
PyTuple_SET_ITEM0(tmp_args_value_19, 2, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 131;
tmp_assign_source_107 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto try_except_handler_33;
}
assert(outline_9_var___class__ == NULL);
outline_9_var___class__ = tmp_assign_source_107;
}
CHECK_OBJECT(outline_9_var___class__);
tmp_args_element_value_4 = outline_9_var___class__;
Py_INCREF(tmp_args_element_value_4);
goto try_return_handler_33;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_33:;
Py_DECREF(locals_annotated_types$$$class__10_Lt_131);
locals_annotated_types$$$class__10_Lt_131 = NULL;
goto try_return_handler_32;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__10_Lt_131);
locals_annotated_types$$$class__10_Lt_131 = NULL;
// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

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
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 131;
goto try_except_handler_31;
outline_result_20:;
frame_frame_annotated_types->m_frame.f_lineno = 130;
tmp_assign_source_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_31;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Lt, tmp_assign_source_106);
}
goto try_end_13;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
Py_DECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
Py_DECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
Py_DECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
Py_DECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
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
PyObject *tmp_outline_return_value_11;
// Tried code:
{
PyObject *tmp_assign_source_108;
PyObject *tmp_tuple_element_38;
tmp_tuple_element_38 = module_var_accessor_annotated_types$BaseMetadata(tstate);
if (unlikely(tmp_tuple_element_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseMetadata);
}

if (tmp_tuple_element_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;

    goto try_except_handler_34;
}
tmp_assign_source_108 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_108, 0, tmp_tuple_element_38);
assert(tmp_class_container$class_creation_11__bases_orig == NULL);
tmp_class_container$class_creation_11__bases_orig = tmp_assign_source_108;
}
{
PyObject *tmp_assign_source_109;
PyObject *tmp_direct_call_arg1_13;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_direct_call_arg1_13 = tmp_class_container$class_creation_11__bases_orig;
Py_INCREF(tmp_direct_call_arg1_13);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_13};
    tmp_assign_source_109 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_11__bases == NULL);
tmp_class_container$class_creation_11__bases = tmp_assign_source_109;
}
{
PyObject *tmp_assign_source_110;
tmp_assign_source_110 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__class_decl_dict == NULL);
tmp_class_container$class_creation_11__class_decl_dict = tmp_assign_source_110;
}
{
PyObject *tmp_assign_source_111;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_10;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_57;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_11__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_34;
}
tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_expression_value_57 = tmp_class_container$class_creation_11__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_57, tmp_subscript_value_10, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_34;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_34;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_11__bases;
tmp_assign_source_111 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_111 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_11__metaclass == NULL);
tmp_class_container$class_creation_11__metaclass = tmp_assign_source_111;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_58;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_58 = tmp_class_container$class_creation_11__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_34;
}
tmp_condition_result_38 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_38 != false) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
PyObject *tmp_assign_source_112;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_59;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_39;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_59 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_34;
}
tmp_tuple_element_39 = mod_consts.const_str_plain_Le;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_39 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 142;
tmp_assign_source_112 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_112 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_34;
}
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_112;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_60;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_expression_value_60 = tmp_class_container$class_creation_11__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_60, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_34;
}
tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
assert(!(tmp_res == -1));
tmp_condition_result_39 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_39 != false) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
PyObject *tmp_raise_type_10;
PyObject *tmp_make_exception_arg_10;
PyObject *tmp_mod_expr_left_10;
PyObject *tmp_mod_expr_right_10;
PyObject *tmp_tuple_element_40;
PyObject *tmp_expression_value_61;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_61 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_40 = BUILTIN_GETATTR(tstate, tmp_expression_value_61, tmp_name_value_13, tmp_default_value_10);
if (tmp_tuple_element_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_34;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_62;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_11__prepared;
tmp_expression_value_62 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_62 == NULL));
tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_62);
Py_DECREF(tmp_expression_value_62);
if (tmp_tuple_element_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_40);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_34;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_34;
}
frame_frame_annotated_types->m_frame.f_lineno = 142;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 142;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_34;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_113;
tmp_assign_source_113 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_113;
}
branch_end_28:;
{
PyObject *tmp_assign_source_114;
PyObject *tmp_called_value_27;
PyObject *tmp_direct_call_arg1_14;
PyObject *tmp_direct_call_arg2_4;
PyObject *tmp_direct_call_arg3_4;
PyObject *tmp_args_element_value_5;
tmp_direct_call_arg1_14 = module_var_accessor_annotated_types$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;

    goto try_except_handler_34;
}
tmp_direct_call_arg2_4 = DICT_COPY(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
tmp_direct_call_arg3_4 = module_var_accessor_annotated_types$SLOTS(tstate);
if (unlikely(tmp_direct_call_arg3_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLOTS);
}

if (tmp_direct_call_arg3_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg2_4);

exception_lineno = 141;

    goto try_except_handler_34;
}
Py_INCREF(tmp_direct_call_arg1_14);
Py_INCREF(tmp_direct_call_arg3_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_14, tmp_direct_call_arg2_4, tmp_direct_call_arg3_4};
    tmp_called_value_27 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;

    goto try_except_handler_34;
}
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_11__prepared;
locals_annotated_types$$$class__11_Le_142 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__11_Le_142, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_str_digest_f3f027896e0f27557a4ceedf6d4c0df4;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__11_Le_142, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_str_plain_Le;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__11_Le_142, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_36;
}
tmp_dictset_value = mod_consts.const_int_pos_142;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__11_Le_142, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_36;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__11_Le_142, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_36;
}
frame_frame_annotated_types$$$class__11_Le_11 = MAKE_CLASS_FRAME(tstate, code_objects_20441ebc6e8ffe56da4f7f6ba8f3718d, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__11_Le_11);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__11_Le_11) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = PyObject_GetItem(locals_annotated_types$$$class__11_Le_142, mod_consts.const_str_plain_SupportsLe);

if (tmp_ass_subvalue_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_4 = module_var_accessor_annotated_types$SupportsLe(tstate);
if (unlikely(tmp_ass_subvalue_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SupportsLe);
}

if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
        Py_INCREF(tmp_ass_subvalue_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_11;
    }
}

tmp_ass_subscribed_4 = PyObject_GetItem(locals_annotated_types$$$class__11_Le_142, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_4);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_11;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_le;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_11:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__11_Le_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__11_Le_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__11_Le_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__11_Le_11,
    type_description_2,
    outline_10_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__11_Le_11);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_10;
frame_no_exception_10:;
goto skip_nested_handling_10;
nested_frame_exit_10:;

goto try_except_handler_36;
skip_nested_handling_10:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__11_Le_142, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_36;
}
{
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_cmp_expr_left_10 = tmp_class_container$class_creation_11__bases;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_cmp_expr_right_10 = tmp_class_container$class_creation_11__bases_orig;
tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_36;
}
if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_11__bases_orig;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__11_Le_142, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_36;
}
branch_no_30:;
{
PyObject *tmp_assign_source_115;
PyObject *tmp_called_value_28;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_41;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_called_value_28 = tmp_class_container$class_creation_11__metaclass;
tmp_tuple_element_41 = mod_consts.const_str_plain_Le;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_41 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_41);
tmp_tuple_element_41 = locals_annotated_types$$$class__11_Le_142;
PyTuple_SET_ITEM0(tmp_args_value_21, 2, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_21 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 142;
tmp_assign_source_115 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_36;
}
assert(outline_10_var___class__ == NULL);
outline_10_var___class__ = tmp_assign_source_115;
}
CHECK_OBJECT(outline_10_var___class__);
tmp_args_element_value_5 = outline_10_var___class__;
Py_INCREF(tmp_args_element_value_5);
goto try_return_handler_36;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_36:;
Py_DECREF(locals_annotated_types$$$class__11_Le_142);
locals_annotated_types$$$class__11_Le_142 = NULL;
goto try_return_handler_35;
// Exception handler code:
try_except_handler_36:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__11_Le_142);
locals_annotated_types$$$class__11_Le_142 = NULL;
// Re-raise.
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

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
exception_keeper_lineno_35 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_35 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_35;
exception_lineno = exception_keeper_lineno_35;

goto outline_exception_11;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_11:;
exception_lineno = 142;
goto try_except_handler_34;
outline_result_22:;
frame_frame_annotated_types->m_frame.f_lineno = 141;
tmp_assign_source_114 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_114 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;

    goto try_except_handler_34;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Le, tmp_assign_source_114);
}
goto try_end_14;
// Exception handler code:
try_except_handler_34:;
exception_keeper_lineno_36 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_36 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_36;
exception_lineno = exception_keeper_lineno_36;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
Py_DECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
Py_DECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
Py_DECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
Py_DECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
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
PyObject *tmp_outline_return_value_12;
// Tried code:
{
PyObject *tmp_assign_source_116;
PyObject *tmp_tuple_element_42;
tmp_tuple_element_42 = module_var_accessor_annotated_types$Protocol(tstate);
if (unlikely(tmp_tuple_element_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;

    goto try_except_handler_37;
}
tmp_assign_source_116 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_116, 0, tmp_tuple_element_42);
assert(tmp_class_container$class_creation_12__bases_orig == NULL);
tmp_class_container$class_creation_12__bases_orig = tmp_assign_source_116;
}
{
PyObject *tmp_assign_source_117;
PyObject *tmp_direct_call_arg1_15;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_direct_call_arg1_15 = tmp_class_container$class_creation_12__bases_orig;
Py_INCREF(tmp_direct_call_arg1_15);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_15};
    tmp_assign_source_117 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_117 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_37;
}
assert(tmp_class_container$class_creation_12__bases == NULL);
tmp_class_container$class_creation_12__bases = tmp_assign_source_117;
}
{
PyObject *tmp_assign_source_118;
tmp_assign_source_118 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__class_decl_dict == NULL);
tmp_class_container$class_creation_12__class_decl_dict = tmp_assign_source_118;
}
{
PyObject *tmp_assign_source_119;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_11;
PyObject *tmp_type_arg_21;
PyObject *tmp_expression_value_63;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_container$class_creation_12__bases);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_37;
}
tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_expression_value_63 = tmp_class_container$class_creation_12__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_63, tmp_subscript_value_11, 0);
if (tmp_type_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_37;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_37;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_12__bases;
tmp_assign_source_119 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_119 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_37;
}
assert(tmp_class_container$class_creation_12__metaclass == NULL);
tmp_class_container$class_creation_12__metaclass = tmp_assign_source_119;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_64;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_64 = tmp_class_container$class_creation_12__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_37;
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
PyObject *tmp_assign_source_120;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_65;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_43;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_65 = tmp_class_container$class_creation_12__metaclass;
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_37;
}
tmp_tuple_element_43 = mod_consts.const_str_plain_GroupedMetadata;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_43 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 153;
tmp_assign_source_120 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_120 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_37;
}
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_120;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_66;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_expression_value_66 = tmp_class_container$class_creation_12__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_66, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_37;
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
PyObject *tmp_tuple_element_44;
PyObject *tmp_expression_value_67;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_67 = tmp_class_container$class_creation_12__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_44 = BUILTIN_GETATTR(tstate, tmp_expression_value_67, tmp_name_value_14, tmp_default_value_11);
if (tmp_tuple_element_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_37;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_68;
PyObject *tmp_type_arg_22;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_type_arg_22 = tmp_class_container$class_creation_12__prepared;
tmp_expression_value_68 = BUILTIN_TYPE1(tmp_type_arg_22);
assert(!(tmp_expression_value_68 == NULL));
tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_68);
Py_DECREF(tmp_expression_value_68);
if (tmp_tuple_element_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_44);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_11);
goto try_except_handler_37;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
CHECK_OBJECT(tmp_mod_expr_right_11);
Py_DECREF(tmp_mod_expr_right_11);
if (tmp_make_exception_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_37;
}
frame_frame_annotated_types->m_frame.f_lineno = 153;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 153;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_37;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_121;
tmp_assign_source_121 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_121;
}
branch_end_31:;
{
PyObject *tmp_assign_source_122;
PyObject *tmp_called_value_30;
PyObject *tmp_args_element_value_6;
tmp_called_value_30 = module_var_accessor_annotated_types$runtime_checkable(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_runtime_checkable);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;

    goto try_except_handler_37;
}
outline_11_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_set_locals_12 = tmp_class_container$class_creation_12__prepared;
locals_annotated_types$$$class__12_GroupedMetadata_153 = tmp_set_locals_12;
Py_INCREF(tmp_set_locals_12);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_str_digest_52069143640dfd690bc2c5e5e7c1f789;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_str_plain_GroupedMetadata;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_39;
}
tmp_dictset_value = mod_consts.const_int_pos_153;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_39;
}
frame_frame_annotated_types$$$class__12_GroupedMetadata_12 = MAKE_CLASS_FRAME(tstate, code_objects_63545ee853b8523a7c38f4fdca73ee93, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__12_GroupedMetadata_12);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__12_GroupedMetadata_12) == 2);

// Framed code:
{
PyObject *tmp_called_value_31;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
PyObject *tmp_expression_value_69;
PyObject *tmp_subscript_value_12;
tmp_called_value_31 = PyObject_GetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain_property);

if (tmp_called_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_31 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_expression_value_69 = PyObject_GetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain_Literal);

if (tmp_expression_value_69 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_69 = module_var_accessor_annotated_types$Literal(tstate);
if (unlikely(tmp_expression_value_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_31);

exception_lineno = 185;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
        Py_INCREF(tmp_expression_value_69);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_subscript_value_12 = Py_True;
tmp_dict_value_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_69, tmp_subscript_value_12, 1);
CHECK_OBJECT(tmp_expression_value_69);
Py_DECREF(tmp_expression_value_69);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_31);

exception_lineno = 185;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
tmp_annotations_7 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));

tmp_args_element_value_7 = MAKE_FUNCTION_annotated_types$$$function__7___is_annotated_types_grouped_metadata__(tstate, tmp_annotations_7);

frame_frame_annotated_types$$$class__12_GroupedMetadata_12->m_frame.f_lineno = 184;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain___is_annotated_types_grouped_metadata__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
}
{
PyObject *tmp_annotations_8;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
PyObject *tmp_expression_value_70;
PyObject *tmp_subscript_value_13;
tmp_dict_key_8 = mod_consts.const_str_plain_return;
tmp_expression_value_70 = PyObject_GetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain_Iterator);

if (tmp_expression_value_70 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_70 = module_var_accessor_annotated_types$Iterator(tstate);
if (unlikely(tmp_expression_value_70 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterator);
}

if (tmp_expression_value_70 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
        Py_INCREF(tmp_expression_value_70);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_subscript_value_13 = PyObject_GetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain_object);

if (tmp_subscript_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_13 = (PyObject *)&PyBaseObject_Type;
        Py_INCREF(tmp_subscript_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_70, tmp_subscript_value_13);
CHECK_OBJECT(tmp_expression_value_70);
Py_DECREF(tmp_expression_value_70);
CHECK_OBJECT(tmp_subscript_value_13);
Py_DECREF(tmp_subscript_value_13);
if (tmp_dict_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
tmp_annotations_8 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_annotated_types$$$function__8___iter__(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
}
{
bool tmp_condition_result_44;
PyObject *tmp_operand_value_12;
tmp_operand_value_12 = PyObject_GetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain_TYPE_CHECKING);

if (tmp_operand_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_operand_value_12 = Py_False;
        Py_INCREF(tmp_operand_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
CHECK_OBJECT(tmp_operand_value_12);
Py_DECREF(tmp_operand_value_12);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
tmp_condition_result_44 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_44 != false) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
{
PyObject *tmp_classmethod_arg_1;
PyObject *tmp_annotations_9;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_dict_key_9 = const_str_plain_args;
tmp_dict_value_9 = PyObject_GetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain_Any);

if (tmp_dict_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_9 = module_var_accessor_annotated_types$Any(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
        Py_INCREF(tmp_dict_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_annotations_9 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_kwargs;
tmp_dict_value_9 = PyObject_GetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain_Any);

if (tmp_dict_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_9 = module_var_accessor_annotated_types$Any(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_2 = "c";
    goto dict_build_exception_7;
}
        Py_INCREF(tmp_dict_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_7;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_return;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_annotations_9);
goto frame_exception_exit_12;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;
tmp_closure_1[0] = outline_11_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_classmethod_arg_1 = MAKE_FUNCTION_annotated_types$$$function__9___init_subclass__(tstate, tmp_annotations_9, tmp_closure_1);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
CHECK_OBJECT(tmp_classmethod_arg_1);
Py_DECREF(tmp_classmethod_arg_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain___init_subclass__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
}
{
PyObject *tmp_annotations_10;
PyObject *tmp_dict_key_10;
PyObject *tmp_dict_value_10;
PyObject *tmp_expression_value_71;
PyObject *tmp_subscript_value_14;
tmp_dict_key_10 = mod_consts.const_str_plain_return;
tmp_expression_value_71 = PyObject_GetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain_Iterator);

if (tmp_expression_value_71 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_71 = module_var_accessor_annotated_types$Iterator(tstate);
if (unlikely(tmp_expression_value_71 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterator);
}

if (tmp_expression_value_71 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 200;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
        Py_INCREF(tmp_expression_value_71);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_subscript_value_14 = PyObject_GetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain_object);

if (tmp_subscript_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_14 = (PyObject *)&PyBaseObject_Type;
        Py_INCREF(tmp_subscript_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_71, tmp_subscript_value_14);
CHECK_OBJECT(tmp_expression_value_71);
Py_DECREF(tmp_expression_value_71);
CHECK_OBJECT(tmp_subscript_value_14);
Py_DECREF(tmp_subscript_value_14);
if (tmp_dict_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
tmp_annotations_10 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_annotated_types$$$function__10___iter__(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_2 = "c";
    goto frame_exception_exit_12;
}
}
branch_no_33:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_11;
frame_exception_exit_12:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__12_GroupedMetadata_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__12_GroupedMetadata_12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__12_GroupedMetadata_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__12_GroupedMetadata_12,
    type_description_2,
    outline_11_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__12_GroupedMetadata_12);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_11;
frame_no_exception_11:;
goto skip_nested_handling_11;
nested_frame_exit_11:;

goto try_except_handler_39;
skip_nested_handling_11:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_39;
}
{
nuitka_bool tmp_condition_result_45;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_cmp_expr_left_11 = tmp_class_container$class_creation_12__bases;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_cmp_expr_right_11 = tmp_class_container$class_creation_12__bases_orig;
tmp_condition_result_45 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_45 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_39;
}
if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
    goto branch_yes_34;
} else {
    goto branch_no_34;
}
}
branch_yes_34:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_12__bases_orig;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__12_GroupedMetadata_153, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_39;
}
branch_no_34:;
{
PyObject *tmp_assign_source_123;
PyObject *tmp_called_value_32;
PyObject *tmp_args_value_23;
PyObject *tmp_tuple_element_45;
PyObject *tmp_kwargs_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_called_value_32 = tmp_class_container$class_creation_12__metaclass;
tmp_tuple_element_45 = mod_consts.const_str_plain_GroupedMetadata;
tmp_args_value_23 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_45 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_45);
tmp_tuple_element_45 = locals_annotated_types$$$class__12_GroupedMetadata_153;
PyTuple_SET_ITEM0(tmp_args_value_23, 2, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_23 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 153;
tmp_assign_source_123 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_23, tmp_kwargs_value_23);
CHECK_OBJECT(tmp_args_value_23);
Py_DECREF(tmp_args_value_23);
if (tmp_assign_source_123 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_39;
}
assert(Nuitka_Cell_GET(outline_11_var___class__) == NULL);
Nuitka_Cell_SET(outline_11_var___class__, tmp_assign_source_123);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_11_var___class__));
tmp_args_element_value_6 = Nuitka_Cell_GET(outline_11_var___class__);
Py_INCREF(tmp_args_element_value_6);
goto try_return_handler_39;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_39:;
Py_DECREF(locals_annotated_types$$$class__12_GroupedMetadata_153);
locals_annotated_types$$$class__12_GroupedMetadata_153 = NULL;
goto try_return_handler_38;
// Exception handler code:
try_except_handler_39:;
exception_keeper_lineno_37 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_37 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__12_GroupedMetadata_153);
locals_annotated_types$$$class__12_GroupedMetadata_153 = NULL;
// Re-raise.
exception_state = exception_keeper_name_37;
exception_lineno = exception_keeper_lineno_37;

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
exception_keeper_lineno_38 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_38 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_38;
exception_lineno = exception_keeper_lineno_38;

goto outline_exception_12;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_12:;
exception_lineno = 153;
goto try_except_handler_37;
outline_result_24:;
frame_frame_annotated_types->m_frame.f_lineno = 152;
tmp_assign_source_122 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto try_except_handler_37;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_GroupedMetadata, tmp_assign_source_122);
}
goto try_end_15;
// Exception handler code:
try_except_handler_37:;
exception_keeper_lineno_39 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_39 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_12__bases_orig);
tmp_class_container$class_creation_12__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__bases);
tmp_class_container$class_creation_12__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__class_decl_dict);
tmp_class_container$class_creation_12__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__metaclass);
tmp_class_container$class_creation_12__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__prepared);
tmp_class_container$class_creation_12__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_39;
exception_lineno = exception_keeper_lineno_39;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
Py_DECREF(tmp_class_container$class_creation_12__bases_orig);
tmp_class_container$class_creation_12__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
Py_DECREF(tmp_class_container$class_creation_12__bases);
tmp_class_container$class_creation_12__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_12__class_decl_dict);
tmp_class_container$class_creation_12__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
Py_DECREF(tmp_class_container$class_creation_12__metaclass);
tmp_class_container$class_creation_12__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
Py_DECREF(tmp_class_container$class_creation_12__prepared);
tmp_class_container$class_creation_12__prepared = NULL;
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
PyObject *tmp_outline_return_value_13;
// Tried code:
{
PyObject *tmp_assign_source_124;
PyObject *tmp_tuple_element_46;
tmp_tuple_element_46 = module_var_accessor_annotated_types$GroupedMetadata(tstate);
if (unlikely(tmp_tuple_element_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GroupedMetadata);
}

if (tmp_tuple_element_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;

    goto try_except_handler_40;
}
tmp_assign_source_124 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_124, 0, tmp_tuple_element_46);
assert(tmp_class_container$class_creation_13__bases_orig == NULL);
tmp_class_container$class_creation_13__bases_orig = tmp_assign_source_124;
}
{
PyObject *tmp_assign_source_125;
PyObject *tmp_direct_call_arg1_16;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_direct_call_arg1_16 = tmp_class_container$class_creation_13__bases_orig;
Py_INCREF(tmp_direct_call_arg1_16);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_16};
    tmp_assign_source_125 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_13__bases == NULL);
tmp_class_container$class_creation_13__bases = tmp_assign_source_125;
}
{
PyObject *tmp_assign_source_126;
tmp_assign_source_126 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__class_decl_dict == NULL);
tmp_class_container$class_creation_13__class_decl_dict = tmp_assign_source_126;
}
{
PyObject *tmp_assign_source_127;
PyObject *tmp_metaclass_value_12;
nuitka_bool tmp_condition_result_46;
int tmp_truth_name_12;
PyObject *tmp_type_arg_23;
PyObject *tmp_expression_value_72;
PyObject *tmp_subscript_value_15;
PyObject *tmp_bases_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_container$class_creation_13__bases);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_40;
}
tmp_condition_result_46 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_12;
} else {
    goto condexpr_false_12;
}
condexpr_true_12:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_expression_value_72 = tmp_class_container$class_creation_13__bases;
tmp_subscript_value_15 = const_int_0;
tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_72, tmp_subscript_value_15, 0);
if (tmp_type_arg_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_40;
}
tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
CHECK_OBJECT(tmp_type_arg_23);
Py_DECREF(tmp_type_arg_23);
if (tmp_metaclass_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_40;
}
goto condexpr_end_12;
condexpr_false_12:;
tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_12);
condexpr_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_bases_value_12 = tmp_class_container$class_creation_13__bases;
tmp_assign_source_127 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
CHECK_OBJECT(tmp_metaclass_value_12);
Py_DECREF(tmp_metaclass_value_12);
if (tmp_assign_source_127 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_13__metaclass == NULL);
tmp_class_container$class_creation_13__metaclass = tmp_assign_source_127;
}
{
bool tmp_condition_result_47;
PyObject *tmp_expression_value_73;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_73 = tmp_class_container$class_creation_13__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_73, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_40;
}
tmp_condition_result_47 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_47 != false) {
    goto branch_yes_35;
} else {
    goto branch_no_35;
}
}
branch_yes_35:;
{
PyObject *tmp_assign_source_128;
PyObject *tmp_called_value_33;
PyObject *tmp_expression_value_74;
PyObject *tmp_args_value_24;
PyObject *tmp_tuple_element_47;
PyObject *tmp_kwargs_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_74 = tmp_class_container$class_creation_13__metaclass;
tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_40;
}
tmp_tuple_element_47 = mod_consts.const_str_plain_Interval;
tmp_args_value_24 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_47 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_24 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 205;
tmp_assign_source_128 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_24, tmp_kwargs_value_24);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
CHECK_OBJECT(tmp_args_value_24);
Py_DECREF(tmp_args_value_24);
if (tmp_assign_source_128 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_40;
}
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_128;
}
{
bool tmp_condition_result_48;
PyObject *tmp_operand_value_13;
PyObject *tmp_expression_value_75;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_expression_value_75 = tmp_class_container$class_creation_13__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_75, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_40;
}
tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
assert(!(tmp_res == -1));
tmp_condition_result_48 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_48 != false) {
    goto branch_yes_36;
} else {
    goto branch_no_36;
}
}
branch_yes_36:;
{
PyObject *tmp_raise_type_12;
PyObject *tmp_make_exception_arg_12;
PyObject *tmp_mod_expr_left_12;
PyObject *tmp_mod_expr_right_12;
PyObject *tmp_tuple_element_48;
PyObject *tmp_expression_value_76;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_12;
tmp_mod_expr_left_12 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_76 = tmp_class_container$class_creation_13__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_12 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_48 = BUILTIN_GETATTR(tstate, tmp_expression_value_76, tmp_name_value_15, tmp_default_value_12);
if (tmp_tuple_element_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_40;
}
tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_77;
PyObject *tmp_type_arg_24;
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_48);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_type_arg_24 = tmp_class_container$class_creation_13__prepared;
tmp_expression_value_77 = BUILTIN_TYPE1(tmp_type_arg_24);
assert(!(tmp_expression_value_77 == NULL));
tmp_tuple_element_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_77);
Py_DECREF(tmp_expression_value_77);
if (tmp_tuple_element_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_48);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_12);
goto try_except_handler_40;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
CHECK_OBJECT(tmp_mod_expr_right_12);
Py_DECREF(tmp_mod_expr_right_12);
if (tmp_make_exception_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_40;
}
frame_frame_annotated_types->m_frame.f_lineno = 205;
tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_12);
CHECK_OBJECT(tmp_make_exception_arg_12);
Py_DECREF(tmp_make_exception_arg_12);
assert(!(tmp_raise_type_12 == NULL));
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 205;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_40;
}
branch_no_36:;
goto branch_end_35;
branch_no_35:;
{
PyObject *tmp_assign_source_129;
tmp_assign_source_129 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_129;
}
branch_end_35:;
{
PyObject *tmp_assign_source_130;
PyObject *tmp_called_value_34;
PyObject *tmp_args_element_value_8;
{
PyObject *tmp_assign_source_131;
tmp_assign_source_131 = module_var_accessor_annotated_types$dataclass(tstate);
if (unlikely(tmp_assign_source_131 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_assign_source_131 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;

    goto try_except_handler_40;
}
assert(tmp_dict_unpacking_call_1__called == NULL);
Py_INCREF(tmp_assign_source_131);
tmp_dict_unpacking_call_1__called = tmp_assign_source_131;
}
// Tried code:
{
PyObject *tmp_direct_call_arg1_17;
PyObject *tmp_direct_call_arg2_5;
PyObject *tmp_direct_call_arg1_18;
PyObject *tmp_direct_call_arg2_6;
PyObject *tmp_tuple_element_49;
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
tmp_direct_call_arg1_17 = tmp_dict_unpacking_call_1__called;
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
tmp_direct_call_arg1_18 = tmp_dict_unpacking_call_1__called;
tmp_tuple_element_49 = DICT_COPY(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
tmp_direct_call_arg2_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_direct_call_arg2_6, 0, tmp_tuple_element_49);
tmp_tuple_element_49 = module_var_accessor_annotated_types$KW_ONLY(tstate);
if (unlikely(tmp_tuple_element_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KW_ONLY);
}

if (tmp_tuple_element_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM0(tmp_direct_call_arg2_6, 1, tmp_tuple_element_49);
tmp_tuple_element_49 = module_var_accessor_annotated_types$SLOTS(tstate);
if (unlikely(tmp_tuple_element_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLOTS);
}

if (tmp_tuple_element_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM0(tmp_direct_call_arg2_6, 2, tmp_tuple_element_49);
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_direct_call_arg2_6);
goto try_except_handler_41;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
Py_INCREF(tmp_direct_call_arg1_18);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_18, tmp_direct_call_arg2_6};
    tmp_direct_call_arg2_5 = impl___main__$$$helper_function_complex_call_helper_dict_unpacking_checks(tstate, dir_call_args);
}
if (tmp_direct_call_arg2_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_41;
}
Py_INCREF(tmp_direct_call_arg1_17);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_17, tmp_direct_call_arg2_5};
    tmp_called_value_34 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_41;
}
goto try_return_handler_41;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_41:;
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
Py_DECREF(tmp_dict_unpacking_call_1__called);
tmp_dict_unpacking_call_1__called = NULL;
goto outline_result_26;
// Exception handler code:
try_except_handler_41:;
exception_keeper_lineno_40 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_40 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
Py_DECREF(tmp_dict_unpacking_call_1__called);
tmp_dict_unpacking_call_1__called = NULL;
// Re-raise.
exception_state = exception_keeper_name_40;
exception_lineno = exception_keeper_lineno_40;

goto try_except_handler_40;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_26:;
{
PyObject *tmp_set_locals_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_set_locals_13 = tmp_class_container$class_creation_13__prepared;
locals_annotated_types$$$class__13_Interval_205 = tmp_set_locals_13;
Py_INCREF(tmp_set_locals_13);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__13_Interval_205, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_43;
}
tmp_dictset_value = mod_consts.const_str_digest_b7dc1a12e7b218ad0732566aadeaedcd;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__13_Interval_205, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_43;
}
tmp_dictset_value = mod_consts.const_str_plain_Interval;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_43;
}
tmp_dictset_value = mod_consts.const_int_pos_205;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_43;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__13_Interval_205, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_43;
}
frame_frame_annotated_types$$$class__13_Interval_13 = MAKE_CLASS_FRAME(tstate, code_objects_f51fe3039b62f94e187b911303e0dd62, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__13_Interval_13);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__13_Interval_13) == 2);

// Framed code:
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain_gt, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_expression_value_78;
PyObject *tmp_subscript_value_16;
PyObject *tmp_tuple_element_50;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_expression_value_78 = PyObject_GetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain_Union);

if (tmp_expression_value_78 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_78 = module_var_accessor_annotated_types$Union(tstate);
if (unlikely(tmp_expression_value_78 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_78 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_expression_value_78);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_tuple_element_50 = PyObject_GetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain_SupportsGt);

if (tmp_tuple_element_50 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_50 = module_var_accessor_annotated_types$SupportsGt(tstate);
if (unlikely(tmp_tuple_element_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SupportsGt);
}

if (tmp_tuple_element_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_78);

exception_lineno = 212;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_tuple_element_50);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_50);
tmp_tuple_element_50 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_16, 1, tmp_tuple_element_50);
tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_16);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
CHECK_OBJECT(tmp_subscript_value_16);
Py_DECREF(tmp_subscript_value_16);
if (tmp_ass_subvalue_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscribed_5 = PyObject_GetItem(locals_annotated_types$$$class__13_Interval_205, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_5);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 212;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_5);

exception_lineno = 212;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_gt;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
CHECK_OBJECT(tmp_ass_subvalue_5);
Py_DECREF(tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain_ge, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_expression_value_79;
PyObject *tmp_subscript_value_17;
PyObject *tmp_tuple_element_51;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_expression_value_79 = PyObject_GetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain_Union);

if (tmp_expression_value_79 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_79 = module_var_accessor_annotated_types$Union(tstate);
if (unlikely(tmp_expression_value_79 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_79 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_expression_value_79);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_tuple_element_51 = PyObject_GetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain_SupportsGe);

if (tmp_tuple_element_51 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_51 = module_var_accessor_annotated_types$SupportsGe(tstate);
if (unlikely(tmp_tuple_element_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SupportsGe);
}

if (tmp_tuple_element_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_79);

exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_tuple_element_51);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_17, 0, tmp_tuple_element_51);
tmp_tuple_element_51 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_17, 1, tmp_tuple_element_51);
tmp_ass_subvalue_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_79, tmp_subscript_value_17);
CHECK_OBJECT(tmp_expression_value_79);
Py_DECREF(tmp_expression_value_79);
CHECK_OBJECT(tmp_subscript_value_17);
Py_DECREF(tmp_subscript_value_17);
if (tmp_ass_subvalue_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscribed_6 = PyObject_GetItem(locals_annotated_types$$$class__13_Interval_205, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_6);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_6);

exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_ge;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
CHECK_OBJECT(tmp_ass_subvalue_6);
Py_DECREF(tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain_lt, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_expression_value_80;
PyObject *tmp_subscript_value_18;
PyObject *tmp_tuple_element_52;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_expression_value_80 = PyObject_GetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain_Union);

if (tmp_expression_value_80 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_80 = module_var_accessor_annotated_types$Union(tstate);
if (unlikely(tmp_expression_value_80 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_80 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_expression_value_80);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_tuple_element_52 = PyObject_GetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain_SupportsLt);

if (tmp_tuple_element_52 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_52 = module_var_accessor_annotated_types$SupportsLt(tstate);
if (unlikely(tmp_tuple_element_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SupportsLt);
}

if (tmp_tuple_element_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_80);

exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_tuple_element_52);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_18, 0, tmp_tuple_element_52);
tmp_tuple_element_52 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_18, 1, tmp_tuple_element_52);
tmp_ass_subvalue_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_80, tmp_subscript_value_18);
CHECK_OBJECT(tmp_expression_value_80);
Py_DECREF(tmp_expression_value_80);
CHECK_OBJECT(tmp_subscript_value_18);
Py_DECREF(tmp_subscript_value_18);
if (tmp_ass_subvalue_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscribed_7 = PyObject_GetItem(locals_annotated_types$$$class__13_Interval_205, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_7);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_7);

exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_lt;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
CHECK_OBJECT(tmp_ass_subvalue_7);
Py_DECREF(tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain_le, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_expression_value_81;
PyObject *tmp_subscript_value_19;
PyObject *tmp_tuple_element_53;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_expression_value_81 = PyObject_GetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain_Union);

if (tmp_expression_value_81 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_81 = module_var_accessor_annotated_types$Union(tstate);
if (unlikely(tmp_expression_value_81 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_81 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_expression_value_81);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_tuple_element_53 = PyObject_GetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain_SupportsLe);

if (tmp_tuple_element_53 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_53 = module_var_accessor_annotated_types$SupportsLe(tstate);
if (unlikely(tmp_tuple_element_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SupportsLe);
}

if (tmp_tuple_element_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_81);

exception_lineno = 215;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_tuple_element_53);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_19, 0, tmp_tuple_element_53);
tmp_tuple_element_53 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_19, 1, tmp_tuple_element_53);
tmp_ass_subvalue_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_81, tmp_subscript_value_19);
CHECK_OBJECT(tmp_expression_value_81);
Py_DECREF(tmp_expression_value_81);
CHECK_OBJECT(tmp_subscript_value_19);
Py_DECREF(tmp_subscript_value_19);
if (tmp_ass_subvalue_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscribed_8 = PyObject_GetItem(locals_annotated_types$$$class__13_Interval_205, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_8);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 215;
type_description_2 = "o";
    goto frame_exception_exit_13;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_8);

exception_lineno = 215;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_le;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
CHECK_OBJECT(tmp_ass_subvalue_8);
Py_DECREF(tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}
{
PyObject *tmp_annotations_11;
PyObject *tmp_dict_key_11;
PyObject *tmp_dict_value_11;
PyObject *tmp_expression_value_82;
PyObject *tmp_subscript_value_20;
tmp_dict_key_11 = mod_consts.const_str_plain_return;
tmp_expression_value_82 = PyObject_GetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain_Iterator);

if (tmp_expression_value_82 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_82 = module_var_accessor_annotated_types$Iterator(tstate);
if (unlikely(tmp_expression_value_82 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterator);
}

if (tmp_expression_value_82 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_expression_value_82);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_subscript_value_20 = PyObject_GetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain_BaseMetadata);

if (tmp_subscript_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_20 = module_var_accessor_annotated_types$BaseMetadata(tstate);
if (unlikely(tmp_subscript_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseMetadata);
}

if (tmp_subscript_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_82);

exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
        Py_INCREF(tmp_subscript_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_13;
    }
}

tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_82, tmp_subscript_value_20);
CHECK_OBJECT(tmp_expression_value_82);
Py_DECREF(tmp_expression_value_82);
CHECK_OBJECT(tmp_subscript_value_20);
Py_DECREF(tmp_subscript_value_20);
if (tmp_dict_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_annotations_11 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_annotated_types$$$function__11___iter__(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_annotated_types$$$class__13_Interval_205, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_12;
frame_exception_exit_13:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__13_Interval_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__13_Interval_13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__13_Interval_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__13_Interval_13,
    type_description_2,
    outline_12_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__13_Interval_13);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_12;
frame_no_exception_12:;
goto skip_nested_handling_12;
nested_frame_exit_12:;

goto try_except_handler_43;
skip_nested_handling_12:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_43;
}
{
nuitka_bool tmp_condition_result_49;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_cmp_expr_left_12 = tmp_class_container$class_creation_13__bases;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_cmp_expr_right_12 = tmp_class_container$class_creation_13__bases_orig;
tmp_condition_result_49 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_49 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_43;
}
if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
    goto branch_yes_37;
} else {
    goto branch_no_37;
}
}
branch_yes_37:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_13__bases_orig;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__13_Interval_205, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_43;
}
branch_no_37:;
{
PyObject *tmp_assign_source_132;
PyObject *tmp_called_value_35;
PyObject *tmp_args_value_25;
PyObject *tmp_tuple_element_54;
PyObject *tmp_kwargs_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_called_value_35 = tmp_class_container$class_creation_13__metaclass;
tmp_tuple_element_54 = mod_consts.const_str_plain_Interval;
tmp_args_value_25 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_54 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_54);
tmp_tuple_element_54 = locals_annotated_types$$$class__13_Interval_205;
PyTuple_SET_ITEM0(tmp_args_value_25, 2, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_25 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 205;
tmp_assign_source_132 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_25, tmp_kwargs_value_25);
CHECK_OBJECT(tmp_args_value_25);
Py_DECREF(tmp_args_value_25);
if (tmp_assign_source_132 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;

    goto try_except_handler_43;
}
assert(outline_12_var___class__ == NULL);
outline_12_var___class__ = tmp_assign_source_132;
}
CHECK_OBJECT(outline_12_var___class__);
tmp_args_element_value_8 = outline_12_var___class__;
Py_INCREF(tmp_args_element_value_8);
goto try_return_handler_43;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_43:;
Py_DECREF(locals_annotated_types$$$class__13_Interval_205);
locals_annotated_types$$$class__13_Interval_205 = NULL;
goto try_return_handler_42;
// Exception handler code:
try_except_handler_43:;
exception_keeper_lineno_41 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_41 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__13_Interval_205);
locals_annotated_types$$$class__13_Interval_205 = NULL;
// Re-raise.
exception_state = exception_keeper_name_41;
exception_lineno = exception_keeper_lineno_41;

goto try_except_handler_42;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_42:;
CHECK_OBJECT(outline_12_var___class__);
CHECK_OBJECT(outline_12_var___class__);
Py_DECREF(outline_12_var___class__);
outline_12_var___class__ = NULL;
goto outline_result_27;
// Exception handler code:
try_except_handler_42:;
exception_keeper_lineno_42 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_42 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_42;
exception_lineno = exception_keeper_lineno_42;

goto outline_exception_13;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_13:;
exception_lineno = 205;
goto try_except_handler_40;
outline_result_27:;
frame_frame_annotated_types->m_frame.f_lineno = 204;
tmp_assign_source_130 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto try_except_handler_40;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Interval, tmp_assign_source_130);
}
goto try_end_16;
// Exception handler code:
try_except_handler_40:;
exception_keeper_lineno_43 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_43 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_13__bases_orig);
tmp_class_container$class_creation_13__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__bases);
tmp_class_container$class_creation_13__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__class_decl_dict);
tmp_class_container$class_creation_13__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__metaclass);
tmp_class_container$class_creation_13__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__prepared);
tmp_class_container$class_creation_13__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_43;
exception_lineno = exception_keeper_lineno_43;

goto frame_exception_exit_1;
// End of try:
try_end_16:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
Py_DECREF(tmp_class_container$class_creation_13__bases_orig);
tmp_class_container$class_creation_13__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
Py_DECREF(tmp_class_container$class_creation_13__bases);
tmp_class_container$class_creation_13__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_13__class_decl_dict);
tmp_class_container$class_creation_13__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
Py_DECREF(tmp_class_container$class_creation_13__metaclass);
tmp_class_container$class_creation_13__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
Py_DECREF(tmp_class_container$class_creation_13__prepared);
tmp_class_container$class_creation_13__prepared = NULL;
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
PyObject *tmp_outline_return_value_14;
// Tried code:
{
PyObject *tmp_assign_source_133;
PyObject *tmp_tuple_element_55;
tmp_tuple_element_55 = module_var_accessor_annotated_types$BaseMetadata(tstate);
if (unlikely(tmp_tuple_element_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseMetadata);
}

if (tmp_tuple_element_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;

    goto try_except_handler_44;
}
tmp_assign_source_133 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_133, 0, tmp_tuple_element_55);
assert(tmp_class_container$class_creation_14__bases_orig == NULL);
tmp_class_container$class_creation_14__bases_orig = tmp_assign_source_133;
}
{
PyObject *tmp_assign_source_134;
PyObject *tmp_direct_call_arg1_19;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_direct_call_arg1_19 = tmp_class_container$class_creation_14__bases_orig;
Py_INCREF(tmp_direct_call_arg1_19);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_19};
    tmp_assign_source_134 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_44;
}
assert(tmp_class_container$class_creation_14__bases == NULL);
tmp_class_container$class_creation_14__bases = tmp_assign_source_134;
}
{
PyObject *tmp_assign_source_135;
tmp_assign_source_135 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__class_decl_dict == NULL);
tmp_class_container$class_creation_14__class_decl_dict = tmp_assign_source_135;
}
{
PyObject *tmp_assign_source_136;
PyObject *tmp_metaclass_value_13;
nuitka_bool tmp_condition_result_50;
int tmp_truth_name_13;
PyObject *tmp_type_arg_25;
PyObject *tmp_expression_value_83;
PyObject *tmp_subscript_value_21;
PyObject *tmp_bases_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_container$class_creation_14__bases);
if (tmp_truth_name_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_44;
}
tmp_condition_result_50 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_13;
} else {
    goto condexpr_false_13;
}
condexpr_true_13:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_expression_value_83 = tmp_class_container$class_creation_14__bases;
tmp_subscript_value_21 = const_int_0;
tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_83, tmp_subscript_value_21, 0);
if (tmp_type_arg_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_44;
}
tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
CHECK_OBJECT(tmp_type_arg_25);
Py_DECREF(tmp_type_arg_25);
if (tmp_metaclass_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_44;
}
goto condexpr_end_13;
condexpr_false_13:;
tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_13);
condexpr_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_bases_value_13 = tmp_class_container$class_creation_14__bases;
tmp_assign_source_136 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
CHECK_OBJECT(tmp_metaclass_value_13);
Py_DECREF(tmp_metaclass_value_13);
if (tmp_assign_source_136 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_44;
}
assert(tmp_class_container$class_creation_14__metaclass == NULL);
tmp_class_container$class_creation_14__metaclass = tmp_assign_source_136;
}
{
bool tmp_condition_result_51;
PyObject *tmp_expression_value_84;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_84 = tmp_class_container$class_creation_14__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_84, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_44;
}
tmp_condition_result_51 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_51 != false) {
    goto branch_yes_38;
} else {
    goto branch_no_38;
}
}
branch_yes_38:;
{
PyObject *tmp_assign_source_137;
PyObject *tmp_called_value_36;
PyObject *tmp_expression_value_85;
PyObject *tmp_args_value_26;
PyObject *tmp_tuple_element_56;
PyObject *tmp_kwargs_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_85 = tmp_class_container$class_creation_14__metaclass;
tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_44;
}
tmp_tuple_element_56 = mod_consts.const_str_plain_MultipleOf;
tmp_args_value_26 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_56);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_56 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_56);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_26 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 230;
tmp_assign_source_137 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_26, tmp_kwargs_value_26);
CHECK_OBJECT(tmp_called_value_36);
Py_DECREF(tmp_called_value_36);
CHECK_OBJECT(tmp_args_value_26);
Py_DECREF(tmp_args_value_26);
if (tmp_assign_source_137 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_44;
}
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_137;
}
{
bool tmp_condition_result_52;
PyObject *tmp_operand_value_14;
PyObject *tmp_expression_value_86;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_expression_value_86 = tmp_class_container$class_creation_14__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_86, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_44;
}
tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
assert(!(tmp_res == -1));
tmp_condition_result_52 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_52 != false) {
    goto branch_yes_39;
} else {
    goto branch_no_39;
}
}
branch_yes_39:;
{
PyObject *tmp_raise_type_13;
PyObject *tmp_make_exception_arg_13;
PyObject *tmp_mod_expr_left_13;
PyObject *tmp_mod_expr_right_13;
PyObject *tmp_tuple_element_57;
PyObject *tmp_expression_value_87;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_13;
tmp_mod_expr_left_13 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_87 = tmp_class_container$class_creation_14__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_13 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_57 = BUILTIN_GETATTR(tstate, tmp_expression_value_87, tmp_name_value_16, tmp_default_value_13);
if (tmp_tuple_element_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_44;
}
tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_88;
PyObject *tmp_type_arg_26;
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_57);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_type_arg_26 = tmp_class_container$class_creation_14__prepared;
tmp_expression_value_88 = BUILTIN_TYPE1(tmp_type_arg_26);
assert(!(tmp_expression_value_88 == NULL));
tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_88);
Py_DECREF(tmp_expression_value_88);
if (tmp_tuple_element_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_57);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_13);
goto try_except_handler_44;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
CHECK_OBJECT(tmp_mod_expr_right_13);
Py_DECREF(tmp_mod_expr_right_13);
if (tmp_make_exception_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_44;
}
frame_frame_annotated_types->m_frame.f_lineno = 230;
tmp_raise_type_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_13);
CHECK_OBJECT(tmp_make_exception_arg_13);
Py_DECREF(tmp_make_exception_arg_13);
assert(!(tmp_raise_type_13 == NULL));
exception_state.exception_value = tmp_raise_type_13;
exception_lineno = 230;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_44;
}
branch_no_39:;
goto branch_end_38;
branch_no_38:;
{
PyObject *tmp_assign_source_138;
tmp_assign_source_138 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_138;
}
branch_end_38:;
{
PyObject *tmp_assign_source_139;
PyObject *tmp_called_value_37;
PyObject *tmp_direct_call_arg1_20;
PyObject *tmp_direct_call_arg2_7;
PyObject *tmp_direct_call_arg3_5;
PyObject *tmp_args_element_value_9;
tmp_direct_call_arg1_20 = module_var_accessor_annotated_types$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;

    goto try_except_handler_44;
}
tmp_direct_call_arg2_7 = DICT_COPY(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
tmp_direct_call_arg3_5 = module_var_accessor_annotated_types$SLOTS(tstate);
if (unlikely(tmp_direct_call_arg3_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLOTS);
}

if (tmp_direct_call_arg3_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg2_7);

exception_lineno = 229;

    goto try_except_handler_44;
}
Py_INCREF(tmp_direct_call_arg1_20);
Py_INCREF(tmp_direct_call_arg3_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_20, tmp_direct_call_arg2_7, tmp_direct_call_arg3_5};
    tmp_called_value_37 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_44;
}
{
PyObject *tmp_set_locals_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_set_locals_14 = tmp_class_container$class_creation_14__prepared;
locals_annotated_types$$$class__14_MultipleOf_230 = tmp_set_locals_14;
Py_INCREF(tmp_set_locals_14);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__14_MultipleOf_230, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_46;
}
tmp_dictset_value = mod_consts.const_str_digest_c0506bea3f65b67b2e39373d1bbcc207;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__14_MultipleOf_230, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_46;
}
tmp_dictset_value = mod_consts.const_str_plain_MultipleOf;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__14_MultipleOf_230, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_46;
}
tmp_dictset_value = mod_consts.const_int_pos_230;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__14_MultipleOf_230, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_46;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__14_MultipleOf_230, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_46;
}
frame_frame_annotated_types$$$class__14_MultipleOf_14 = MAKE_CLASS_FRAME(tstate, code_objects_e15f856a0d661d79285f38d1123b2a99, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__14_MultipleOf_14);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__14_MultipleOf_14) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_expression_value_89;
PyObject *tmp_subscript_value_22;
PyObject *tmp_tuple_element_58;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_expression_value_89 = PyObject_GetItem(locals_annotated_types$$$class__14_MultipleOf_230, mod_consts.const_str_plain_Union);

if (tmp_expression_value_89 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_89 = module_var_accessor_annotated_types$Union(tstate);
if (unlikely(tmp_expression_value_89 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_89 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
        Py_INCREF(tmp_expression_value_89);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_14;
    }
}

tmp_tuple_element_58 = PyObject_GetItem(locals_annotated_types$$$class__14_MultipleOf_230, mod_consts.const_str_plain_SupportsDiv);

if (tmp_tuple_element_58 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_58 = module_var_accessor_annotated_types$SupportsDiv(tstate);
if (unlikely(tmp_tuple_element_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SupportsDiv);
}

if (tmp_tuple_element_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_89);

exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
        Py_INCREF(tmp_tuple_element_58);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_14;
    }
}

tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_22, 0, tmp_tuple_element_58);
tmp_tuple_element_58 = PyObject_GetItem(locals_annotated_types$$$class__14_MultipleOf_230, mod_consts.const_str_plain_SupportsMod);

if (tmp_tuple_element_58 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_58 = module_var_accessor_annotated_types$SupportsMod(tstate);
if (unlikely(tmp_tuple_element_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SupportsMod);
}

if (tmp_tuple_element_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_2 = "o";
    goto tuple_build_exception_15;
}
        Py_INCREF(tmp_tuple_element_58);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_15;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_22, 1, tmp_tuple_element_58);
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_expression_value_89);
Py_DECREF(tmp_subscript_value_22);
goto frame_exception_exit_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_ass_subvalue_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_89, tmp_subscript_value_22);
CHECK_OBJECT(tmp_expression_value_89);
Py_DECREF(tmp_expression_value_89);
CHECK_OBJECT(tmp_subscript_value_22);
Py_DECREF(tmp_subscript_value_22);
if (tmp_ass_subvalue_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscribed_9 = PyObject_GetItem(locals_annotated_types$$$class__14_MultipleOf_230, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_9);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_14;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_9);

exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_multiple_of;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
CHECK_OBJECT(tmp_ass_subvalue_9);
Py_DECREF(tmp_ass_subvalue_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_13;
frame_exception_exit_14:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__14_MultipleOf_14, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__14_MultipleOf_14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__14_MultipleOf_14, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__14_MultipleOf_14,
    type_description_2,
    outline_13_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__14_MultipleOf_14);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_13;
frame_no_exception_13:;
goto skip_nested_handling_13;
nested_frame_exit_13:;

goto try_except_handler_46;
skip_nested_handling_13:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__14_MultipleOf_230, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_46;
}
{
nuitka_bool tmp_condition_result_53;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_cmp_expr_left_13 = tmp_class_container$class_creation_14__bases;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_cmp_expr_right_13 = tmp_class_container$class_creation_14__bases_orig;
tmp_condition_result_53 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_condition_result_53 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_46;
}
if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
    goto branch_yes_40;
} else {
    goto branch_no_40;
}
}
branch_yes_40:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_14__bases_orig;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__14_MultipleOf_230, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_46;
}
branch_no_40:;
{
PyObject *tmp_assign_source_140;
PyObject *tmp_called_value_38;
PyObject *tmp_args_value_27;
PyObject *tmp_tuple_element_59;
PyObject *tmp_kwargs_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_called_value_38 = tmp_class_container$class_creation_14__metaclass;
tmp_tuple_element_59 = mod_consts.const_str_plain_MultipleOf;
tmp_args_value_27 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_59);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_59 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_59);
tmp_tuple_element_59 = locals_annotated_types$$$class__14_MultipleOf_230;
PyTuple_SET_ITEM0(tmp_args_value_27, 2, tmp_tuple_element_59);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_27 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 230;
tmp_assign_source_140 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_27, tmp_kwargs_value_27);
CHECK_OBJECT(tmp_args_value_27);
Py_DECREF(tmp_args_value_27);
if (tmp_assign_source_140 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto try_except_handler_46;
}
assert(outline_13_var___class__ == NULL);
outline_13_var___class__ = tmp_assign_source_140;
}
CHECK_OBJECT(outline_13_var___class__);
tmp_args_element_value_9 = outline_13_var___class__;
Py_INCREF(tmp_args_element_value_9);
goto try_return_handler_46;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_46:;
Py_DECREF(locals_annotated_types$$$class__14_MultipleOf_230);
locals_annotated_types$$$class__14_MultipleOf_230 = NULL;
goto try_return_handler_45;
// Exception handler code:
try_except_handler_46:;
exception_keeper_lineno_44 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_44 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__14_MultipleOf_230);
locals_annotated_types$$$class__14_MultipleOf_230 = NULL;
// Re-raise.
exception_state = exception_keeper_name_44;
exception_lineno = exception_keeper_lineno_44;

goto try_except_handler_45;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_45:;
CHECK_OBJECT(outline_13_var___class__);
CHECK_OBJECT(outline_13_var___class__);
Py_DECREF(outline_13_var___class__);
outline_13_var___class__ = NULL;
goto outline_result_29;
// Exception handler code:
try_except_handler_45:;
exception_keeper_lineno_45 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_45 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_45;
exception_lineno = exception_keeper_lineno_45;

goto outline_exception_14;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_14:;
exception_lineno = 230;
goto try_except_handler_44;
outline_result_29:;
frame_frame_annotated_types->m_frame.f_lineno = 229;
tmp_assign_source_139 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_37);
Py_DECREF(tmp_called_value_37);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_139 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_44;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipleOf, tmp_assign_source_139);
}
goto try_end_17;
// Exception handler code:
try_except_handler_44:;
exception_keeper_lineno_46 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_46 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_14__bases_orig);
tmp_class_container$class_creation_14__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__bases);
tmp_class_container$class_creation_14__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__class_decl_dict);
tmp_class_container$class_creation_14__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__metaclass);
tmp_class_container$class_creation_14__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__prepared);
tmp_class_container$class_creation_14__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_46;
exception_lineno = exception_keeper_lineno_46;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
Py_DECREF(tmp_class_container$class_creation_14__bases_orig);
tmp_class_container$class_creation_14__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
Py_DECREF(tmp_class_container$class_creation_14__bases);
tmp_class_container$class_creation_14__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_14__class_decl_dict);
tmp_class_container$class_creation_14__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
Py_DECREF(tmp_class_container$class_creation_14__metaclass);
tmp_class_container$class_creation_14__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
Py_DECREF(tmp_class_container$class_creation_14__prepared);
tmp_class_container$class_creation_14__prepared = NULL;
tmp_outline_return_value_14 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_14);
goto outline_result_28;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_28:;
CHECK_OBJECT(tmp_outline_return_value_14);
Py_DECREF(tmp_outline_return_value_14);
}
{
PyObject *tmp_outline_return_value_15;
// Tried code:
{
PyObject *tmp_assign_source_141;
PyObject *tmp_tuple_element_60;
tmp_tuple_element_60 = module_var_accessor_annotated_types$BaseMetadata(tstate);
if (unlikely(tmp_tuple_element_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseMetadata);
}

if (tmp_tuple_element_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;

    goto try_except_handler_47;
}
tmp_assign_source_141 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_141, 0, tmp_tuple_element_60);
assert(tmp_class_container$class_creation_15__bases_orig == NULL);
tmp_class_container$class_creation_15__bases_orig = tmp_assign_source_141;
}
{
PyObject *tmp_assign_source_142;
PyObject *tmp_direct_call_arg1_21;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_direct_call_arg1_21 = tmp_class_container$class_creation_15__bases_orig;
Py_INCREF(tmp_direct_call_arg1_21);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_21};
    tmp_assign_source_142 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_47;
}
assert(tmp_class_container$class_creation_15__bases == NULL);
tmp_class_container$class_creation_15__bases = tmp_assign_source_142;
}
{
PyObject *tmp_assign_source_143;
tmp_assign_source_143 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__class_decl_dict == NULL);
tmp_class_container$class_creation_15__class_decl_dict = tmp_assign_source_143;
}
{
PyObject *tmp_assign_source_144;
PyObject *tmp_metaclass_value_14;
nuitka_bool tmp_condition_result_54;
int tmp_truth_name_14;
PyObject *tmp_type_arg_27;
PyObject *tmp_expression_value_90;
PyObject *tmp_subscript_value_23;
PyObject *tmp_bases_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_container$class_creation_15__bases);
if (tmp_truth_name_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_47;
}
tmp_condition_result_54 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_14;
} else {
    goto condexpr_false_14;
}
condexpr_true_14:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_expression_value_90 = tmp_class_container$class_creation_15__bases;
tmp_subscript_value_23 = const_int_0;
tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_90, tmp_subscript_value_23, 0);
if (tmp_type_arg_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_47;
}
tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
CHECK_OBJECT(tmp_type_arg_27);
Py_DECREF(tmp_type_arg_27);
if (tmp_metaclass_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_47;
}
goto condexpr_end_14;
condexpr_false_14:;
tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_14);
condexpr_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_bases_value_14 = tmp_class_container$class_creation_15__bases;
tmp_assign_source_144 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
CHECK_OBJECT(tmp_metaclass_value_14);
Py_DECREF(tmp_metaclass_value_14);
if (tmp_assign_source_144 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_47;
}
assert(tmp_class_container$class_creation_15__metaclass == NULL);
tmp_class_container$class_creation_15__metaclass = tmp_assign_source_144;
}
{
bool tmp_condition_result_55;
PyObject *tmp_expression_value_91;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_91 = tmp_class_container$class_creation_15__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_91, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_47;
}
tmp_condition_result_55 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_55 != false) {
    goto branch_yes_41;
} else {
    goto branch_no_41;
}
}
branch_yes_41:;
{
PyObject *tmp_assign_source_145;
PyObject *tmp_called_value_39;
PyObject *tmp_expression_value_92;
PyObject *tmp_args_value_28;
PyObject *tmp_tuple_element_61;
PyObject *tmp_kwargs_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_92 = tmp_class_container$class_creation_15__metaclass;
tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_47;
}
tmp_tuple_element_61 = mod_consts.const_str_plain_MinLen;
tmp_args_value_28 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_61);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_61 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_61);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_28 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 244;
tmp_assign_source_145 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_28, tmp_kwargs_value_28);
CHECK_OBJECT(tmp_called_value_39);
Py_DECREF(tmp_called_value_39);
CHECK_OBJECT(tmp_args_value_28);
Py_DECREF(tmp_args_value_28);
if (tmp_assign_source_145 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_47;
}
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_145;
}
{
bool tmp_condition_result_56;
PyObject *tmp_operand_value_15;
PyObject *tmp_expression_value_93;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_expression_value_93 = tmp_class_container$class_creation_15__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_93, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_47;
}
tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
assert(!(tmp_res == -1));
tmp_condition_result_56 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_56 != false) {
    goto branch_yes_42;
} else {
    goto branch_no_42;
}
}
branch_yes_42:;
{
PyObject *tmp_raise_type_14;
PyObject *tmp_make_exception_arg_14;
PyObject *tmp_mod_expr_left_14;
PyObject *tmp_mod_expr_right_14;
PyObject *tmp_tuple_element_62;
PyObject *tmp_expression_value_94;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_14;
tmp_mod_expr_left_14 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_94 = tmp_class_container$class_creation_15__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_14 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_62 = BUILTIN_GETATTR(tstate, tmp_expression_value_94, tmp_name_value_17, tmp_default_value_14);
if (tmp_tuple_element_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_47;
}
tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_95;
PyObject *tmp_type_arg_28;
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_62);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_type_arg_28 = tmp_class_container$class_creation_15__prepared;
tmp_expression_value_95 = BUILTIN_TYPE1(tmp_type_arg_28);
assert(!(tmp_expression_value_95 == NULL));
tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_95);
Py_DECREF(tmp_expression_value_95);
if (tmp_tuple_element_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_62);
}
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_mod_expr_right_14);
goto try_except_handler_47;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_make_exception_arg_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
CHECK_OBJECT(tmp_mod_expr_right_14);
Py_DECREF(tmp_mod_expr_right_14);
if (tmp_make_exception_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_47;
}
frame_frame_annotated_types->m_frame.f_lineno = 244;
tmp_raise_type_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_14);
CHECK_OBJECT(tmp_make_exception_arg_14);
Py_DECREF(tmp_make_exception_arg_14);
assert(!(tmp_raise_type_14 == NULL));
exception_state.exception_value = tmp_raise_type_14;
exception_lineno = 244;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_47;
}
branch_no_42:;
goto branch_end_41;
branch_no_41:;
{
PyObject *tmp_assign_source_146;
tmp_assign_source_146 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_146;
}
branch_end_41:;
{
PyObject *tmp_assign_source_147;
PyObject *tmp_called_value_40;
PyObject *tmp_direct_call_arg1_22;
PyObject *tmp_direct_call_arg2_8;
PyObject *tmp_direct_call_arg3_6;
PyObject *tmp_args_element_value_10;
tmp_direct_call_arg1_22 = module_var_accessor_annotated_types$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;

    goto try_except_handler_47;
}
tmp_direct_call_arg2_8 = DICT_COPY(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
tmp_direct_call_arg3_6 = module_var_accessor_annotated_types$SLOTS(tstate);
if (unlikely(tmp_direct_call_arg3_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLOTS);
}

if (tmp_direct_call_arg3_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg2_8);

exception_lineno = 243;

    goto try_except_handler_47;
}
Py_INCREF(tmp_direct_call_arg1_22);
Py_INCREF(tmp_direct_call_arg3_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_22, tmp_direct_call_arg2_8, tmp_direct_call_arg3_6};
    tmp_called_value_40 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_47;
}
{
PyObject *tmp_set_locals_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_set_locals_15 = tmp_class_container$class_creation_15__prepared;
locals_annotated_types$$$class__15_MinLen_244 = tmp_set_locals_15;
Py_INCREF(tmp_set_locals_15);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__15_MinLen_244, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_49;
}
tmp_dictset_value = mod_consts.const_str_digest_dcfa04b75c17c91f83d190e1392bc95b;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__15_MinLen_244, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_49;
}
tmp_dictset_value = mod_consts.const_str_plain_MinLen;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__15_MinLen_244, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_49;
}
tmp_dictset_value = mod_consts.const_int_pos_244;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__15_MinLen_244, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_49;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__15_MinLen_244, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_49;
}
frame_frame_annotated_types$$$class__15_MinLen_15 = MAKE_CLASS_FRAME(tstate, code_objects_323810a0c1b0f0c33d83f4ad2e65761d, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__15_MinLen_15);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__15_MinLen_15) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_expression_value_96;
PyObject *tmp_subscript_value_24;
PyObject *tmp_tuple_element_63;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_expression_value_96 = PyObject_GetItem(locals_annotated_types$$$class__15_MinLen_244, mod_consts.const_str_plain_Annotated);

if (tmp_expression_value_96 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_96 = module_var_accessor_annotated_types$Annotated(tstate);
if (unlikely(tmp_expression_value_96 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_96 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 250;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
        Py_INCREF(tmp_expression_value_96);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_15;
    }
}

tmp_tuple_element_63 = PyObject_GetItem(locals_annotated_types$$$class__15_MinLen_244, const_str_plain_int);

if (tmp_tuple_element_63 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_63 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_63);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_15;
    }
}

tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_41;
PyTuple_SET_ITEM(tmp_subscript_value_24, 0, tmp_tuple_element_63);
tmp_called_value_41 = PyObject_GetItem(locals_annotated_types$$$class__15_MinLen_244, mod_consts.const_str_plain_Ge);

if (tmp_called_value_41 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_41 = module_var_accessor_annotated_types$Ge(tstate);
if (unlikely(tmp_called_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Ge);
}

if (tmp_called_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 250;
type_description_2 = "o";
    goto tuple_build_exception_17;
}
        Py_INCREF(tmp_called_value_41);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_17;
    }
}

frame_frame_annotated_types$$$class__15_MinLen_15->m_frame.f_lineno = 250;
tmp_tuple_element_63 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_41, mod_consts.const_tuple_int_0_tuple);

CHECK_OBJECT(tmp_called_value_41);
Py_DECREF(tmp_called_value_41);
if (tmp_tuple_element_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_2 = "o";
    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM(tmp_subscript_value_24, 1, tmp_tuple_element_63);
}
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_expression_value_96);
Py_DECREF(tmp_subscript_value_24);
goto frame_exception_exit_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_ass_subvalue_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_96, tmp_subscript_value_24);
CHECK_OBJECT(tmp_expression_value_96);
Py_DECREF(tmp_expression_value_96);
CHECK_OBJECT(tmp_subscript_value_24);
Py_DECREF(tmp_subscript_value_24);
if (tmp_ass_subvalue_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_ass_subscribed_10 = PyObject_GetItem(locals_annotated_types$$$class__15_MinLen_244, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_10);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 250;
type_description_2 = "o";
    goto frame_exception_exit_15;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_10);

exception_lineno = 250;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_min_length;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
CHECK_OBJECT(tmp_ass_subvalue_10);
Py_DECREF(tmp_ass_subvalue_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_14;
frame_exception_exit_15:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__15_MinLen_15, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__15_MinLen_15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__15_MinLen_15, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__15_MinLen_15,
    type_description_2,
    outline_14_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__15_MinLen_15);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_14;
frame_no_exception_14:;
goto skip_nested_handling_14;
nested_frame_exit_14:;

goto try_except_handler_49;
skip_nested_handling_14:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__15_MinLen_244, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_49;
}
{
nuitka_bool tmp_condition_result_57;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_cmp_expr_left_14 = tmp_class_container$class_creation_15__bases;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_cmp_expr_right_14 = tmp_class_container$class_creation_15__bases_orig;
tmp_condition_result_57 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_57 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_49;
}
if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
    goto branch_yes_43;
} else {
    goto branch_no_43;
}
}
branch_yes_43:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_15__bases_orig;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__15_MinLen_244, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_49;
}
branch_no_43:;
{
PyObject *tmp_assign_source_148;
PyObject *tmp_called_value_42;
PyObject *tmp_args_value_29;
PyObject *tmp_tuple_element_64;
PyObject *tmp_kwargs_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_called_value_42 = tmp_class_container$class_creation_15__metaclass;
tmp_tuple_element_64 = mod_consts.const_str_plain_MinLen;
tmp_args_value_29 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_64 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_64);
tmp_tuple_element_64 = locals_annotated_types$$$class__15_MinLen_244;
PyTuple_SET_ITEM0(tmp_args_value_29, 2, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_29 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 244;
tmp_assign_source_148 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_29, tmp_kwargs_value_29);
CHECK_OBJECT(tmp_args_value_29);
Py_DECREF(tmp_args_value_29);
if (tmp_assign_source_148 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_49;
}
assert(outline_14_var___class__ == NULL);
outline_14_var___class__ = tmp_assign_source_148;
}
CHECK_OBJECT(outline_14_var___class__);
tmp_args_element_value_10 = outline_14_var___class__;
Py_INCREF(tmp_args_element_value_10);
goto try_return_handler_49;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_49:;
Py_DECREF(locals_annotated_types$$$class__15_MinLen_244);
locals_annotated_types$$$class__15_MinLen_244 = NULL;
goto try_return_handler_48;
// Exception handler code:
try_except_handler_49:;
exception_keeper_lineno_47 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_47 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__15_MinLen_244);
locals_annotated_types$$$class__15_MinLen_244 = NULL;
// Re-raise.
exception_state = exception_keeper_name_47;
exception_lineno = exception_keeper_lineno_47;

goto try_except_handler_48;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_48:;
CHECK_OBJECT(outline_14_var___class__);
CHECK_OBJECT(outline_14_var___class__);
Py_DECREF(outline_14_var___class__);
outline_14_var___class__ = NULL;
goto outline_result_31;
// Exception handler code:
try_except_handler_48:;
exception_keeper_lineno_48 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_48 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_48;
exception_lineno = exception_keeper_lineno_48;

goto outline_exception_15;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_15:;
exception_lineno = 244;
goto try_except_handler_47;
outline_result_31:;
frame_frame_annotated_types->m_frame.f_lineno = 243;
tmp_assign_source_147 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_40);
Py_DECREF(tmp_called_value_40);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_147 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto try_except_handler_47;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_MinLen, tmp_assign_source_147);
}
goto try_end_18;
// Exception handler code:
try_except_handler_47:;
exception_keeper_lineno_49 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_49 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_15__bases_orig);
tmp_class_container$class_creation_15__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__bases);
tmp_class_container$class_creation_15__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__class_decl_dict);
tmp_class_container$class_creation_15__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__metaclass);
tmp_class_container$class_creation_15__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__prepared);
tmp_class_container$class_creation_15__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_49;
exception_lineno = exception_keeper_lineno_49;

goto frame_exception_exit_1;
// End of try:
try_end_18:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
Py_DECREF(tmp_class_container$class_creation_15__bases_orig);
tmp_class_container$class_creation_15__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
Py_DECREF(tmp_class_container$class_creation_15__bases);
tmp_class_container$class_creation_15__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_15__class_decl_dict);
tmp_class_container$class_creation_15__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
Py_DECREF(tmp_class_container$class_creation_15__metaclass);
tmp_class_container$class_creation_15__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
Py_DECREF(tmp_class_container$class_creation_15__prepared);
tmp_class_container$class_creation_15__prepared = NULL;
tmp_outline_return_value_15 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_15);
goto outline_result_30;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_30:;
CHECK_OBJECT(tmp_outline_return_value_15);
Py_DECREF(tmp_outline_return_value_15);
}
{
PyObject *tmp_outline_return_value_16;
// Tried code:
{
PyObject *tmp_assign_source_149;
PyObject *tmp_tuple_element_65;
tmp_tuple_element_65 = module_var_accessor_annotated_types$BaseMetadata(tstate);
if (unlikely(tmp_tuple_element_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseMetadata);
}

if (tmp_tuple_element_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;

    goto try_except_handler_50;
}
tmp_assign_source_149 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_149, 0, tmp_tuple_element_65);
assert(tmp_class_container$class_creation_16__bases_orig == NULL);
tmp_class_container$class_creation_16__bases_orig = tmp_assign_source_149;
}
{
PyObject *tmp_assign_source_150;
PyObject *tmp_direct_call_arg1_23;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_direct_call_arg1_23 = tmp_class_container$class_creation_16__bases_orig;
Py_INCREF(tmp_direct_call_arg1_23);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_23};
    tmp_assign_source_150 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_150 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_50;
}
assert(tmp_class_container$class_creation_16__bases == NULL);
tmp_class_container$class_creation_16__bases = tmp_assign_source_150;
}
{
PyObject *tmp_assign_source_151;
tmp_assign_source_151 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__class_decl_dict == NULL);
tmp_class_container$class_creation_16__class_decl_dict = tmp_assign_source_151;
}
{
PyObject *tmp_assign_source_152;
PyObject *tmp_metaclass_value_15;
nuitka_bool tmp_condition_result_58;
int tmp_truth_name_15;
PyObject *tmp_type_arg_29;
PyObject *tmp_expression_value_97;
PyObject *tmp_subscript_value_25;
PyObject *tmp_bases_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_container$class_creation_16__bases);
if (tmp_truth_name_15 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_50;
}
tmp_condition_result_58 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_15;
} else {
    goto condexpr_false_15;
}
condexpr_true_15:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_expression_value_97 = tmp_class_container$class_creation_16__bases;
tmp_subscript_value_25 = const_int_0;
tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_97, tmp_subscript_value_25, 0);
if (tmp_type_arg_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_50;
}
tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
CHECK_OBJECT(tmp_type_arg_29);
Py_DECREF(tmp_type_arg_29);
if (tmp_metaclass_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_50;
}
goto condexpr_end_15;
condexpr_false_15:;
tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_15);
condexpr_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_bases_value_15 = tmp_class_container$class_creation_16__bases;
tmp_assign_source_152 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
CHECK_OBJECT(tmp_metaclass_value_15);
Py_DECREF(tmp_metaclass_value_15);
if (tmp_assign_source_152 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_50;
}
assert(tmp_class_container$class_creation_16__metaclass == NULL);
tmp_class_container$class_creation_16__metaclass = tmp_assign_source_152;
}
{
bool tmp_condition_result_59;
PyObject *tmp_expression_value_98;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_98 = tmp_class_container$class_creation_16__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_98, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_50;
}
tmp_condition_result_59 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_59 != false) {
    goto branch_yes_44;
} else {
    goto branch_no_44;
}
}
branch_yes_44:;
{
PyObject *tmp_assign_source_153;
PyObject *tmp_called_value_43;
PyObject *tmp_expression_value_99;
PyObject *tmp_args_value_30;
PyObject *tmp_tuple_element_66;
PyObject *tmp_kwargs_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_99 = tmp_class_container$class_creation_16__metaclass;
tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_50;
}
tmp_tuple_element_66 = mod_consts.const_str_plain_MaxLen;
tmp_args_value_30 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_66);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_66 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_66);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_30 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 254;
tmp_assign_source_153 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_30, tmp_kwargs_value_30);
CHECK_OBJECT(tmp_called_value_43);
Py_DECREF(tmp_called_value_43);
CHECK_OBJECT(tmp_args_value_30);
Py_DECREF(tmp_args_value_30);
if (tmp_assign_source_153 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_50;
}
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_153;
}
{
bool tmp_condition_result_60;
PyObject *tmp_operand_value_16;
PyObject *tmp_expression_value_100;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_expression_value_100 = tmp_class_container$class_creation_16__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_100, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_50;
}
tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
assert(!(tmp_res == -1));
tmp_condition_result_60 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_60 != false) {
    goto branch_yes_45;
} else {
    goto branch_no_45;
}
}
branch_yes_45:;
{
PyObject *tmp_raise_type_15;
PyObject *tmp_make_exception_arg_15;
PyObject *tmp_mod_expr_left_15;
PyObject *tmp_mod_expr_right_15;
PyObject *tmp_tuple_element_67;
PyObject *tmp_expression_value_101;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_15;
tmp_mod_expr_left_15 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_101 = tmp_class_container$class_creation_16__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_15 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_67 = BUILTIN_GETATTR(tstate, tmp_expression_value_101, tmp_name_value_18, tmp_default_value_15);
if (tmp_tuple_element_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_50;
}
tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_102;
PyObject *tmp_type_arg_30;
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_67);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_type_arg_30 = tmp_class_container$class_creation_16__prepared;
tmp_expression_value_102 = BUILTIN_TYPE1(tmp_type_arg_30);
assert(!(tmp_expression_value_102 == NULL));
tmp_tuple_element_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_102);
Py_DECREF(tmp_expression_value_102);
if (tmp_tuple_element_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_67);
}
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_mod_expr_right_15);
goto try_except_handler_50;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_make_exception_arg_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
CHECK_OBJECT(tmp_mod_expr_right_15);
Py_DECREF(tmp_mod_expr_right_15);
if (tmp_make_exception_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_50;
}
frame_frame_annotated_types->m_frame.f_lineno = 254;
tmp_raise_type_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_15);
CHECK_OBJECT(tmp_make_exception_arg_15);
Py_DECREF(tmp_make_exception_arg_15);
assert(!(tmp_raise_type_15 == NULL));
exception_state.exception_value = tmp_raise_type_15;
exception_lineno = 254;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_50;
}
branch_no_45:;
goto branch_end_44;
branch_no_44:;
{
PyObject *tmp_assign_source_154;
tmp_assign_source_154 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_154;
}
branch_end_44:;
{
PyObject *tmp_assign_source_155;
PyObject *tmp_called_value_44;
PyObject *tmp_direct_call_arg1_24;
PyObject *tmp_direct_call_arg2_9;
PyObject *tmp_direct_call_arg3_7;
PyObject *tmp_args_element_value_11;
tmp_direct_call_arg1_24 = module_var_accessor_annotated_types$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;

    goto try_except_handler_50;
}
tmp_direct_call_arg2_9 = DICT_COPY(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
tmp_direct_call_arg3_7 = module_var_accessor_annotated_types$SLOTS(tstate);
if (unlikely(tmp_direct_call_arg3_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLOTS);
}

if (tmp_direct_call_arg3_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg2_9);

exception_lineno = 253;

    goto try_except_handler_50;
}
Py_INCREF(tmp_direct_call_arg1_24);
Py_INCREF(tmp_direct_call_arg3_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_24, tmp_direct_call_arg2_9, tmp_direct_call_arg3_7};
    tmp_called_value_44 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;

    goto try_except_handler_50;
}
{
PyObject *tmp_set_locals_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_set_locals_16 = tmp_class_container$class_creation_16__prepared;
locals_annotated_types$$$class__16_MaxLen_254 = tmp_set_locals_16;
Py_INCREF(tmp_set_locals_16);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__16_MaxLen_254, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_52;
}
tmp_dictset_value = mod_consts.const_str_digest_6df5b3764d7acaa00daad89d98790a00;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__16_MaxLen_254, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_52;
}
tmp_dictset_value = mod_consts.const_str_plain_MaxLen;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__16_MaxLen_254, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_52;
}
tmp_dictset_value = mod_consts.const_int_pos_254;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__16_MaxLen_254, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_52;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__16_MaxLen_254, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_52;
}
frame_frame_annotated_types$$$class__16_MaxLen_16 = MAKE_CLASS_FRAME(tstate, code_objects_48c53d8ca987000963a08eb84eba2433, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__16_MaxLen_16);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__16_MaxLen_16) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_expression_value_103;
PyObject *tmp_subscript_value_26;
PyObject *tmp_tuple_element_68;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_expression_value_103 = PyObject_GetItem(locals_annotated_types$$$class__16_MaxLen_254, mod_consts.const_str_plain_Annotated);

if (tmp_expression_value_103 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_103 = module_var_accessor_annotated_types$Annotated(tstate);
if (unlikely(tmp_expression_value_103 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_103 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
        Py_INCREF(tmp_expression_value_103);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_16;
    }
}

tmp_tuple_element_68 = PyObject_GetItem(locals_annotated_types$$$class__16_MaxLen_254, const_str_plain_int);

if (tmp_tuple_element_68 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_68 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_68);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_16;
    }
}

tmp_subscript_value_26 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_45;
PyTuple_SET_ITEM(tmp_subscript_value_26, 0, tmp_tuple_element_68);
tmp_called_value_45 = PyObject_GetItem(locals_annotated_types$$$class__16_MaxLen_254, mod_consts.const_str_plain_Ge);

if (tmp_called_value_45 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_45 = module_var_accessor_annotated_types$Ge(tstate);
if (unlikely(tmp_called_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Ge);
}

if (tmp_called_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_2 = "o";
    goto tuple_build_exception_19;
}
        Py_INCREF(tmp_called_value_45);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_19;
    }
}

frame_frame_annotated_types$$$class__16_MaxLen_16->m_frame.f_lineno = 260;
tmp_tuple_element_68 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_45, mod_consts.const_tuple_int_0_tuple);

CHECK_OBJECT(tmp_called_value_45);
Py_DECREF(tmp_called_value_45);
if (tmp_tuple_element_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "o";
    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM(tmp_subscript_value_26, 1, tmp_tuple_element_68);
}
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_expression_value_103);
Py_DECREF(tmp_subscript_value_26);
goto frame_exception_exit_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_ass_subvalue_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_103, tmp_subscript_value_26);
CHECK_OBJECT(tmp_expression_value_103);
Py_DECREF(tmp_expression_value_103);
CHECK_OBJECT(tmp_subscript_value_26);
Py_DECREF(tmp_subscript_value_26);
if (tmp_ass_subvalue_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
tmp_ass_subscribed_11 = PyObject_GetItem(locals_annotated_types$$$class__16_MaxLen_254, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_11);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_16;
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_11);

exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_max_length;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
CHECK_OBJECT(tmp_ass_subvalue_11);
Py_DECREF(tmp_ass_subvalue_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_15;
frame_exception_exit_16:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__16_MaxLen_16, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__16_MaxLen_16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__16_MaxLen_16, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__16_MaxLen_16,
    type_description_2,
    outline_15_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__16_MaxLen_16);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_15;
frame_no_exception_15:;
goto skip_nested_handling_15;
nested_frame_exit_15:;

goto try_except_handler_52;
skip_nested_handling_15:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__16_MaxLen_254, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_52;
}
{
nuitka_bool tmp_condition_result_61;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_cmp_expr_left_15 = tmp_class_container$class_creation_16__bases;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_cmp_expr_right_15 = tmp_class_container$class_creation_16__bases_orig;
tmp_condition_result_61 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_61 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_52;
}
if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
    goto branch_yes_46;
} else {
    goto branch_no_46;
}
}
branch_yes_46:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_16__bases_orig;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__16_MaxLen_254, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_52;
}
branch_no_46:;
{
PyObject *tmp_assign_source_156;
PyObject *tmp_called_value_46;
PyObject *tmp_args_value_31;
PyObject *tmp_tuple_element_69;
PyObject *tmp_kwargs_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_called_value_46 = tmp_class_container$class_creation_16__metaclass;
tmp_tuple_element_69 = mod_consts.const_str_plain_MaxLen;
tmp_args_value_31 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_69);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_69 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_69);
tmp_tuple_element_69 = locals_annotated_types$$$class__16_MaxLen_254;
PyTuple_SET_ITEM0(tmp_args_value_31, 2, tmp_tuple_element_69);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_31 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 254;
tmp_assign_source_156 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_31, tmp_kwargs_value_31);
CHECK_OBJECT(tmp_args_value_31);
Py_DECREF(tmp_args_value_31);
if (tmp_assign_source_156 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_52;
}
assert(outline_15_var___class__ == NULL);
outline_15_var___class__ = tmp_assign_source_156;
}
CHECK_OBJECT(outline_15_var___class__);
tmp_args_element_value_11 = outline_15_var___class__;
Py_INCREF(tmp_args_element_value_11);
goto try_return_handler_52;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_52:;
Py_DECREF(locals_annotated_types$$$class__16_MaxLen_254);
locals_annotated_types$$$class__16_MaxLen_254 = NULL;
goto try_return_handler_51;
// Exception handler code:
try_except_handler_52:;
exception_keeper_lineno_50 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_50 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__16_MaxLen_254);
locals_annotated_types$$$class__16_MaxLen_254 = NULL;
// Re-raise.
exception_state = exception_keeper_name_50;
exception_lineno = exception_keeper_lineno_50;

goto try_except_handler_51;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_51:;
CHECK_OBJECT(outline_15_var___class__);
CHECK_OBJECT(outline_15_var___class__);
Py_DECREF(outline_15_var___class__);
outline_15_var___class__ = NULL;
goto outline_result_33;
// Exception handler code:
try_except_handler_51:;
exception_keeper_lineno_51 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_51 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_51;
exception_lineno = exception_keeper_lineno_51;

goto outline_exception_16;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_16:;
exception_lineno = 254;
goto try_except_handler_50;
outline_result_33:;
frame_frame_annotated_types->m_frame.f_lineno = 253;
tmp_assign_source_155 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_44);
Py_DECREF(tmp_called_value_44);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_155 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;

    goto try_except_handler_50;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_MaxLen, tmp_assign_source_155);
}
goto try_end_19;
// Exception handler code:
try_except_handler_50:;
exception_keeper_lineno_52 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_52 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_16__bases_orig);
tmp_class_container$class_creation_16__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__bases);
tmp_class_container$class_creation_16__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__class_decl_dict);
tmp_class_container$class_creation_16__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__metaclass);
tmp_class_container$class_creation_16__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__prepared);
tmp_class_container$class_creation_16__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_52;
exception_lineno = exception_keeper_lineno_52;

goto frame_exception_exit_1;
// End of try:
try_end_19:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
Py_DECREF(tmp_class_container$class_creation_16__bases_orig);
tmp_class_container$class_creation_16__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
Py_DECREF(tmp_class_container$class_creation_16__bases);
tmp_class_container$class_creation_16__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_16__class_decl_dict);
tmp_class_container$class_creation_16__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
Py_DECREF(tmp_class_container$class_creation_16__metaclass);
tmp_class_container$class_creation_16__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
Py_DECREF(tmp_class_container$class_creation_16__prepared);
tmp_class_container$class_creation_16__prepared = NULL;
tmp_outline_return_value_16 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_16);
goto outline_result_32;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_32:;
CHECK_OBJECT(tmp_outline_return_value_16);
Py_DECREF(tmp_outline_return_value_16);
}
{
PyObject *tmp_outline_return_value_17;
// Tried code:
{
PyObject *tmp_assign_source_157;
PyObject *tmp_tuple_element_70;
tmp_tuple_element_70 = module_var_accessor_annotated_types$GroupedMetadata(tstate);
if (unlikely(tmp_tuple_element_70 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GroupedMetadata);
}

if (tmp_tuple_element_70 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;

    goto try_except_handler_53;
}
tmp_assign_source_157 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_157, 0, tmp_tuple_element_70);
assert(tmp_class_container$class_creation_17__bases_orig == NULL);
tmp_class_container$class_creation_17__bases_orig = tmp_assign_source_157;
}
{
PyObject *tmp_assign_source_158;
PyObject *tmp_direct_call_arg1_25;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_direct_call_arg1_25 = tmp_class_container$class_creation_17__bases_orig;
Py_INCREF(tmp_direct_call_arg1_25);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_25};
    tmp_assign_source_158 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_158 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_53;
}
assert(tmp_class_container$class_creation_17__bases == NULL);
tmp_class_container$class_creation_17__bases = tmp_assign_source_158;
}
{
PyObject *tmp_assign_source_159;
tmp_assign_source_159 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__class_decl_dict == NULL);
tmp_class_container$class_creation_17__class_decl_dict = tmp_assign_source_159;
}
{
PyObject *tmp_assign_source_160;
PyObject *tmp_metaclass_value_16;
nuitka_bool tmp_condition_result_62;
int tmp_truth_name_16;
PyObject *tmp_type_arg_31;
PyObject *tmp_expression_value_104;
PyObject *tmp_subscript_value_27;
PyObject *tmp_bases_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_container$class_creation_17__bases);
if (tmp_truth_name_16 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_53;
}
tmp_condition_result_62 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_62 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_16;
} else {
    goto condexpr_false_16;
}
condexpr_true_16:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_expression_value_104 = tmp_class_container$class_creation_17__bases;
tmp_subscript_value_27 = const_int_0;
tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_104, tmp_subscript_value_27, 0);
if (tmp_type_arg_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_53;
}
tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
CHECK_OBJECT(tmp_type_arg_31);
Py_DECREF(tmp_type_arg_31);
if (tmp_metaclass_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_53;
}
goto condexpr_end_16;
condexpr_false_16:;
tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_16);
condexpr_end_16:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_bases_value_16 = tmp_class_container$class_creation_17__bases;
tmp_assign_source_160 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
CHECK_OBJECT(tmp_metaclass_value_16);
Py_DECREF(tmp_metaclass_value_16);
if (tmp_assign_source_160 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_53;
}
assert(tmp_class_container$class_creation_17__metaclass == NULL);
tmp_class_container$class_creation_17__metaclass = tmp_assign_source_160;
}
{
bool tmp_condition_result_63;
PyObject *tmp_expression_value_105;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_105 = tmp_class_container$class_creation_17__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_105, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_53;
}
tmp_condition_result_63 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_63 != false) {
    goto branch_yes_47;
} else {
    goto branch_no_47;
}
}
branch_yes_47:;
{
PyObject *tmp_assign_source_161;
PyObject *tmp_called_value_47;
PyObject *tmp_expression_value_106;
PyObject *tmp_args_value_32;
PyObject *tmp_tuple_element_71;
PyObject *tmp_kwargs_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_106 = tmp_class_container$class_creation_17__metaclass;
tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_53;
}
tmp_tuple_element_71 = mod_consts.const_str_plain_Len;
tmp_args_value_32 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_71);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_71 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_71);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_32 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 264;
tmp_assign_source_161 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_32, tmp_kwargs_value_32);
CHECK_OBJECT(tmp_called_value_47);
Py_DECREF(tmp_called_value_47);
CHECK_OBJECT(tmp_args_value_32);
Py_DECREF(tmp_args_value_32);
if (tmp_assign_source_161 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_53;
}
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_161;
}
{
bool tmp_condition_result_64;
PyObject *tmp_operand_value_17;
PyObject *tmp_expression_value_107;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_expression_value_107 = tmp_class_container$class_creation_17__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_107, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_53;
}
tmp_operand_value_17 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
assert(!(tmp_res == -1));
tmp_condition_result_64 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_64 != false) {
    goto branch_yes_48;
} else {
    goto branch_no_48;
}
}
branch_yes_48:;
{
PyObject *tmp_raise_type_16;
PyObject *tmp_make_exception_arg_16;
PyObject *tmp_mod_expr_left_16;
PyObject *tmp_mod_expr_right_16;
PyObject *tmp_tuple_element_72;
PyObject *tmp_expression_value_108;
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_16;
tmp_mod_expr_left_16 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_108 = tmp_class_container$class_creation_17__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_16 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_72 = BUILTIN_GETATTR(tstate, tmp_expression_value_108, tmp_name_value_19, tmp_default_value_16);
if (tmp_tuple_element_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_53;
}
tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_109;
PyObject *tmp_type_arg_32;
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_72);
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_type_arg_32 = tmp_class_container$class_creation_17__prepared;
tmp_expression_value_109 = BUILTIN_TYPE1(tmp_type_arg_32);
assert(!(tmp_expression_value_109 == NULL));
tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_109);
Py_DECREF(tmp_expression_value_109);
if (tmp_tuple_element_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto tuple_build_exception_20;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_72);
}
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_mod_expr_right_16);
goto try_except_handler_53;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
tmp_make_exception_arg_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
CHECK_OBJECT(tmp_mod_expr_right_16);
Py_DECREF(tmp_mod_expr_right_16);
if (tmp_make_exception_arg_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_53;
}
frame_frame_annotated_types->m_frame.f_lineno = 264;
tmp_raise_type_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_16);
CHECK_OBJECT(tmp_make_exception_arg_16);
Py_DECREF(tmp_make_exception_arg_16);
assert(!(tmp_raise_type_16 == NULL));
exception_state.exception_value = tmp_raise_type_16;
exception_lineno = 264;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_53;
}
branch_no_48:;
goto branch_end_47;
branch_no_47:;
{
PyObject *tmp_assign_source_162;
tmp_assign_source_162 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_162;
}
branch_end_47:;
{
PyObject *tmp_assign_source_163;
PyObject *tmp_called_value_48;
PyObject *tmp_direct_call_arg1_26;
PyObject *tmp_direct_call_arg2_10;
PyObject *tmp_direct_call_arg3_8;
PyObject *tmp_args_element_value_12;
tmp_direct_call_arg1_26 = module_var_accessor_annotated_types$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 263;

    goto try_except_handler_53;
}
tmp_direct_call_arg2_10 = DICT_COPY(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
tmp_direct_call_arg3_8 = module_var_accessor_annotated_types$SLOTS(tstate);
if (unlikely(tmp_direct_call_arg3_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLOTS);
}

if (tmp_direct_call_arg3_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg2_10);

exception_lineno = 263;

    goto try_except_handler_53;
}
Py_INCREF(tmp_direct_call_arg1_26);
Py_INCREF(tmp_direct_call_arg3_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_26, tmp_direct_call_arg2_10, tmp_direct_call_arg3_8};
    tmp_called_value_48 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;

    goto try_except_handler_53;
}
{
PyObject *tmp_set_locals_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_set_locals_17 = tmp_class_container$class_creation_17__prepared;
locals_annotated_types$$$class__17_Len_264 = tmp_set_locals_17;
Py_INCREF(tmp_set_locals_17);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__17_Len_264, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_55;
}
tmp_dictset_value = mod_consts.const_str_digest_a496f972fca25f314f983b02260a7311;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__17_Len_264, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_55;
}
tmp_dictset_value = mod_consts.const_str_plain_Len;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__17_Len_264, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_55;
}
tmp_dictset_value = mod_consts.const_int_pos_264;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__17_Len_264, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_55;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__17_Len_264, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_55;
}
frame_frame_annotated_types$$$class__17_Len_17 = MAKE_CLASS_FRAME(tstate, code_objects_bc26d04c68bc0ca565ace1d13e982ddf, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__17_Len_17);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__17_Len_17) == 2);

// Framed code:
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__17_Len_264, mod_consts.const_str_plain_min_length, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_expression_value_110;
PyObject *tmp_subscript_value_28;
PyObject *tmp_tuple_element_73;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_expression_value_110 = PyObject_GetItem(locals_annotated_types$$$class__17_Len_264, mod_consts.const_str_plain_Annotated);

if (tmp_expression_value_110 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_110 = module_var_accessor_annotated_types$Annotated(tstate);
if (unlikely(tmp_expression_value_110 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_110 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
        Py_INCREF(tmp_expression_value_110);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_17;
    }
}

tmp_tuple_element_73 = PyObject_GetItem(locals_annotated_types$$$class__17_Len_264, const_str_plain_int);

if (tmp_tuple_element_73 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_73 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_73);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_17;
    }
}

tmp_subscript_value_28 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_49;
PyTuple_SET_ITEM(tmp_subscript_value_28, 0, tmp_tuple_element_73);
tmp_called_value_49 = PyObject_GetItem(locals_annotated_types$$$class__17_Len_264, mod_consts.const_str_plain_Ge);

if (tmp_called_value_49 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_49 = module_var_accessor_annotated_types$Ge(tstate);
if (unlikely(tmp_called_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Ge);
}

if (tmp_called_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
type_description_2 = "o";
    goto tuple_build_exception_21;
}
        Py_INCREF(tmp_called_value_49);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_21;
    }
}

frame_frame_annotated_types$$$class__17_Len_17->m_frame.f_lineno = 271;
tmp_tuple_element_73 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_49, mod_consts.const_tuple_int_0_tuple);

CHECK_OBJECT(tmp_called_value_49);
Py_DECREF(tmp_called_value_49);
if (tmp_tuple_element_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "o";
    goto tuple_build_exception_21;
}
PyTuple_SET_ITEM(tmp_subscript_value_28, 1, tmp_tuple_element_73);
}
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_expression_value_110);
Py_DECREF(tmp_subscript_value_28);
goto frame_exception_exit_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
tmp_ass_subvalue_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_110, tmp_subscript_value_28);
CHECK_OBJECT(tmp_expression_value_110);
Py_DECREF(tmp_expression_value_110);
CHECK_OBJECT(tmp_subscript_value_28);
Py_DECREF(tmp_subscript_value_28);
if (tmp_ass_subvalue_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_ass_subscribed_12 = PyObject_GetItem(locals_annotated_types$$$class__17_Len_264, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_12);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 271;
type_description_2 = "o";
    goto frame_exception_exit_17;
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_12);

exception_lineno = 271;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_min_length;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
CHECK_OBJECT(tmp_ass_subscribed_12);
Py_DECREF(tmp_ass_subscribed_12);
CHECK_OBJECT(tmp_ass_subvalue_12);
Py_DECREF(tmp_ass_subvalue_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
}
tmp_dictset_value = Py_None;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__17_Len_264, mod_consts.const_str_plain_max_length, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_expression_value_111;
PyObject *tmp_subscript_value_29;
PyObject *tmp_expression_value_112;
PyObject *tmp_subscript_value_30;
PyObject *tmp_tuple_element_74;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_ass_subscript_13;
tmp_expression_value_111 = PyObject_GetItem(locals_annotated_types$$$class__17_Len_264, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_111 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_111 = module_var_accessor_annotated_types$Optional(tstate);
if (unlikely(tmp_expression_value_111 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_111 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
        Py_INCREF(tmp_expression_value_111);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_17;
    }
}

tmp_expression_value_112 = PyObject_GetItem(locals_annotated_types$$$class__17_Len_264, mod_consts.const_str_plain_Annotated);

if (tmp_expression_value_112 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_112 = module_var_accessor_annotated_types$Annotated(tstate);
if (unlikely(tmp_expression_value_112 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_112 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_111);

exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
        Py_INCREF(tmp_expression_value_112);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_17;
    }
}

tmp_tuple_element_74 = PyObject_GetItem(locals_annotated_types$$$class__17_Len_264, const_str_plain_int);

if (tmp_tuple_element_74 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_74 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_74);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_17;
    }
}

tmp_subscript_value_30 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_50;
PyTuple_SET_ITEM(tmp_subscript_value_30, 0, tmp_tuple_element_74);
tmp_called_value_50 = PyObject_GetItem(locals_annotated_types$$$class__17_Len_264, mod_consts.const_str_plain_Ge);

if (tmp_called_value_50 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_50 = module_var_accessor_annotated_types$Ge(tstate);
if (unlikely(tmp_called_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Ge);
}

if (tmp_called_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;
type_description_2 = "o";
    goto tuple_build_exception_22;
}
        Py_INCREF(tmp_called_value_50);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_22;
    }
}

frame_frame_annotated_types$$$class__17_Len_17->m_frame.f_lineno = 272;
tmp_tuple_element_74 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_50, mod_consts.const_tuple_int_0_tuple);

CHECK_OBJECT(tmp_called_value_50);
Py_DECREF(tmp_called_value_50);
if (tmp_tuple_element_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_2 = "o";
    goto tuple_build_exception_22;
}
PyTuple_SET_ITEM(tmp_subscript_value_30, 1, tmp_tuple_element_74);
}
goto tuple_build_no_exception_22;
// Exception handling pass through code for tuple_build:
tuple_build_exception_22:;
Py_DECREF(tmp_expression_value_111);
Py_DECREF(tmp_expression_value_112);
Py_DECREF(tmp_subscript_value_30);
goto frame_exception_exit_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_22:;
tmp_subscript_value_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_112, tmp_subscript_value_30);
CHECK_OBJECT(tmp_expression_value_112);
Py_DECREF(tmp_expression_value_112);
CHECK_OBJECT(tmp_subscript_value_30);
Py_DECREF(tmp_subscript_value_30);
if (tmp_subscript_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_111);

exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_ass_subvalue_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_111, tmp_subscript_value_29);
CHECK_OBJECT(tmp_expression_value_111);
Py_DECREF(tmp_expression_value_111);
CHECK_OBJECT(tmp_subscript_value_29);
Py_DECREF(tmp_subscript_value_29);
if (tmp_ass_subvalue_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_ass_subscribed_13 = PyObject_GetItem(locals_annotated_types$$$class__17_Len_264, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_13);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_17;
}

if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_13);

exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_ass_subscript_13 = mod_consts.const_str_plain_max_length;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
CHECK_OBJECT(tmp_ass_subscribed_13);
Py_DECREF(tmp_ass_subscribed_13);
CHECK_OBJECT(tmp_ass_subvalue_13);
Py_DECREF(tmp_ass_subvalue_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
}
{
PyObject *tmp_annotations_12;
PyObject *tmp_dict_key_12;
PyObject *tmp_dict_value_12;
PyObject *tmp_expression_value_113;
PyObject *tmp_subscript_value_31;
tmp_dict_key_12 = mod_consts.const_str_plain_return;
tmp_expression_value_113 = PyObject_GetItem(locals_annotated_types$$$class__17_Len_264, mod_consts.const_str_plain_Iterator);

if (tmp_expression_value_113 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_113 = module_var_accessor_annotated_types$Iterator(tstate);
if (unlikely(tmp_expression_value_113 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterator);
}

if (tmp_expression_value_113 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
        Py_INCREF(tmp_expression_value_113);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_17;
    }
}

tmp_subscript_value_31 = PyObject_GetItem(locals_annotated_types$$$class__17_Len_264, mod_consts.const_str_plain_BaseMetadata);

if (tmp_subscript_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_31 = module_var_accessor_annotated_types$BaseMetadata(tstate);
if (unlikely(tmp_subscript_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseMetadata);
}

if (tmp_subscript_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_113);

exception_lineno = 274;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
        Py_INCREF(tmp_subscript_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_17;
    }
}

tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_113, tmp_subscript_value_31);
CHECK_OBJECT(tmp_expression_value_113);
Py_DECREF(tmp_expression_value_113);
CHECK_OBJECT(tmp_subscript_value_31);
Py_DECREF(tmp_subscript_value_31);
if (tmp_dict_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
tmp_annotations_12 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_annotated_types$$$function__12___iter__(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_annotated_types$$$class__17_Len_264, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_2 = "o";
    goto frame_exception_exit_17;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_16;
frame_exception_exit_17:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__17_Len_17, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__17_Len_17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__17_Len_17, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__17_Len_17,
    type_description_2,
    outline_16_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__17_Len_17);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_16;
frame_no_exception_16:;
goto skip_nested_handling_16;
nested_frame_exit_16:;

goto try_except_handler_55;
skip_nested_handling_16:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__17_Len_264, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_55;
}
{
nuitka_bool tmp_condition_result_65;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_cmp_expr_left_16 = tmp_class_container$class_creation_17__bases;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_cmp_expr_right_16 = tmp_class_container$class_creation_17__bases_orig;
tmp_condition_result_65 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_condition_result_65 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_55;
}
if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
    goto branch_yes_49;
} else {
    goto branch_no_49;
}
}
branch_yes_49:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_17__bases_orig;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__17_Len_264, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_55;
}
branch_no_49:;
{
PyObject *tmp_assign_source_164;
PyObject *tmp_called_value_51;
PyObject *tmp_args_value_33;
PyObject *tmp_tuple_element_75;
PyObject *tmp_kwargs_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_called_value_51 = tmp_class_container$class_creation_17__metaclass;
tmp_tuple_element_75 = mod_consts.const_str_plain_Len;
tmp_args_value_33 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_75);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_75 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_75);
tmp_tuple_element_75 = locals_annotated_types$$$class__17_Len_264;
PyTuple_SET_ITEM0(tmp_args_value_33, 2, tmp_tuple_element_75);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_33 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 264;
tmp_assign_source_164 = CALL_FUNCTION(tstate, tmp_called_value_51, tmp_args_value_33, tmp_kwargs_value_33);
CHECK_OBJECT(tmp_args_value_33);
Py_DECREF(tmp_args_value_33);
if (tmp_assign_source_164 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_55;
}
assert(outline_16_var___class__ == NULL);
outline_16_var___class__ = tmp_assign_source_164;
}
CHECK_OBJECT(outline_16_var___class__);
tmp_args_element_value_12 = outline_16_var___class__;
Py_INCREF(tmp_args_element_value_12);
goto try_return_handler_55;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_55:;
Py_DECREF(locals_annotated_types$$$class__17_Len_264);
locals_annotated_types$$$class__17_Len_264 = NULL;
goto try_return_handler_54;
// Exception handler code:
try_except_handler_55:;
exception_keeper_lineno_53 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_53 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__17_Len_264);
locals_annotated_types$$$class__17_Len_264 = NULL;
// Re-raise.
exception_state = exception_keeper_name_53;
exception_lineno = exception_keeper_lineno_53;

goto try_except_handler_54;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_54:;
CHECK_OBJECT(outline_16_var___class__);
CHECK_OBJECT(outline_16_var___class__);
Py_DECREF(outline_16_var___class__);
outline_16_var___class__ = NULL;
goto outline_result_35;
// Exception handler code:
try_except_handler_54:;
exception_keeper_lineno_54 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_54 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_54;
exception_lineno = exception_keeper_lineno_54;

goto outline_exception_17;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_17:;
exception_lineno = 264;
goto try_except_handler_53;
outline_result_35:;
frame_frame_annotated_types->m_frame.f_lineno = 263;
tmp_assign_source_163 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_48);
Py_DECREF(tmp_called_value_48);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_163 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;

    goto try_except_handler_53;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Len, tmp_assign_source_163);
}
goto try_end_20;
// Exception handler code:
try_except_handler_53:;
exception_keeper_lineno_55 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_55 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_17__bases_orig);
tmp_class_container$class_creation_17__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__bases);
tmp_class_container$class_creation_17__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__class_decl_dict);
tmp_class_container$class_creation_17__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__metaclass);
tmp_class_container$class_creation_17__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__prepared);
tmp_class_container$class_creation_17__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_55;
exception_lineno = exception_keeper_lineno_55;

goto frame_exception_exit_1;
// End of try:
try_end_20:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
Py_DECREF(tmp_class_container$class_creation_17__bases_orig);
tmp_class_container$class_creation_17__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
Py_DECREF(tmp_class_container$class_creation_17__bases);
tmp_class_container$class_creation_17__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_17__class_decl_dict);
tmp_class_container$class_creation_17__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
Py_DECREF(tmp_class_container$class_creation_17__metaclass);
tmp_class_container$class_creation_17__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
Py_DECREF(tmp_class_container$class_creation_17__prepared);
tmp_class_container$class_creation_17__prepared = NULL;
tmp_outline_return_value_17 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_17);
goto outline_result_34;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_34:;
CHECK_OBJECT(tmp_outline_return_value_17);
Py_DECREF(tmp_outline_return_value_17);
}
{
PyObject *tmp_outline_return_value_18;
// Tried code:
{
PyObject *tmp_assign_source_165;
PyObject *tmp_tuple_element_76;
tmp_tuple_element_76 = module_var_accessor_annotated_types$BaseMetadata(tstate);
if (unlikely(tmp_tuple_element_76 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseMetadata);
}

if (tmp_tuple_element_76 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 283;

    goto try_except_handler_56;
}
tmp_assign_source_165 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_165, 0, tmp_tuple_element_76);
assert(tmp_class_container$class_creation_18__bases_orig == NULL);
tmp_class_container$class_creation_18__bases_orig = tmp_assign_source_165;
}
{
PyObject *tmp_assign_source_166;
PyObject *tmp_direct_call_arg1_27;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_direct_call_arg1_27 = tmp_class_container$class_creation_18__bases_orig;
Py_INCREF(tmp_direct_call_arg1_27);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_27};
    tmp_assign_source_166 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_166 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_56;
}
assert(tmp_class_container$class_creation_18__bases == NULL);
tmp_class_container$class_creation_18__bases = tmp_assign_source_166;
}
{
PyObject *tmp_assign_source_167;
tmp_assign_source_167 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__class_decl_dict == NULL);
tmp_class_container$class_creation_18__class_decl_dict = tmp_assign_source_167;
}
{
PyObject *tmp_assign_source_168;
PyObject *tmp_metaclass_value_17;
nuitka_bool tmp_condition_result_66;
int tmp_truth_name_17;
PyObject *tmp_type_arg_33;
PyObject *tmp_expression_value_114;
PyObject *tmp_subscript_value_32;
PyObject *tmp_bases_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_container$class_creation_18__bases);
if (tmp_truth_name_17 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_56;
}
tmp_condition_result_66 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_66 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_17;
} else {
    goto condexpr_false_17;
}
condexpr_true_17:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_expression_value_114 = tmp_class_container$class_creation_18__bases;
tmp_subscript_value_32 = const_int_0;
tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_114, tmp_subscript_value_32, 0);
if (tmp_type_arg_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_56;
}
tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
CHECK_OBJECT(tmp_type_arg_33);
Py_DECREF(tmp_type_arg_33);
if (tmp_metaclass_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_56;
}
goto condexpr_end_17;
condexpr_false_17:;
tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_17);
condexpr_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_bases_value_17 = tmp_class_container$class_creation_18__bases;
tmp_assign_source_168 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
CHECK_OBJECT(tmp_metaclass_value_17);
Py_DECREF(tmp_metaclass_value_17);
if (tmp_assign_source_168 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_56;
}
assert(tmp_class_container$class_creation_18__metaclass == NULL);
tmp_class_container$class_creation_18__metaclass = tmp_assign_source_168;
}
{
bool tmp_condition_result_67;
PyObject *tmp_expression_value_115;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_115 = tmp_class_container$class_creation_18__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_115, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_56;
}
tmp_condition_result_67 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_67 != false) {
    goto branch_yes_50;
} else {
    goto branch_no_50;
}
}
branch_yes_50:;
{
PyObject *tmp_assign_source_169;
PyObject *tmp_called_value_52;
PyObject *tmp_expression_value_116;
PyObject *tmp_args_value_34;
PyObject *tmp_tuple_element_77;
PyObject *tmp_kwargs_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_116 = tmp_class_container$class_creation_18__metaclass;
tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_56;
}
tmp_tuple_element_77 = mod_consts.const_str_plain_Timezone;
tmp_args_value_34 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_77);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_77 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_77);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_34 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 283;
tmp_assign_source_169 = CALL_FUNCTION(tstate, tmp_called_value_52, tmp_args_value_34, tmp_kwargs_value_34);
CHECK_OBJECT(tmp_called_value_52);
Py_DECREF(tmp_called_value_52);
CHECK_OBJECT(tmp_args_value_34);
Py_DECREF(tmp_args_value_34);
if (tmp_assign_source_169 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_56;
}
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_169;
}
{
bool tmp_condition_result_68;
PyObject *tmp_operand_value_18;
PyObject *tmp_expression_value_117;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_expression_value_117 = tmp_class_container$class_creation_18__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_117, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_56;
}
tmp_operand_value_18 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
assert(!(tmp_res == -1));
tmp_condition_result_68 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_68 != false) {
    goto branch_yes_51;
} else {
    goto branch_no_51;
}
}
branch_yes_51:;
{
PyObject *tmp_raise_type_17;
PyObject *tmp_make_exception_arg_17;
PyObject *tmp_mod_expr_left_17;
PyObject *tmp_mod_expr_right_17;
PyObject *tmp_tuple_element_78;
PyObject *tmp_expression_value_118;
PyObject *tmp_name_value_20;
PyObject *tmp_default_value_17;
tmp_mod_expr_left_17 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_118 = tmp_class_container$class_creation_18__metaclass;
tmp_name_value_20 = const_str_plain___name__;
tmp_default_value_17 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_78 = BUILTIN_GETATTR(tstate, tmp_expression_value_118, tmp_name_value_20, tmp_default_value_17);
if (tmp_tuple_element_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_56;
}
tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_119;
PyObject *tmp_type_arg_34;
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_78);
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_type_arg_34 = tmp_class_container$class_creation_18__prepared;
tmp_expression_value_119 = BUILTIN_TYPE1(tmp_type_arg_34);
assert(!(tmp_expression_value_119 == NULL));
tmp_tuple_element_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_119);
Py_DECREF(tmp_expression_value_119);
if (tmp_tuple_element_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto tuple_build_exception_23;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_78);
}
goto tuple_build_no_exception_23;
// Exception handling pass through code for tuple_build:
tuple_build_exception_23:;
Py_DECREF(tmp_mod_expr_right_17);
goto try_except_handler_56;
// Finished with no exception for tuple_build:
tuple_build_no_exception_23:;
tmp_make_exception_arg_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
CHECK_OBJECT(tmp_mod_expr_right_17);
Py_DECREF(tmp_mod_expr_right_17);
if (tmp_make_exception_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_56;
}
frame_frame_annotated_types->m_frame.f_lineno = 283;
tmp_raise_type_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_17);
CHECK_OBJECT(tmp_make_exception_arg_17);
Py_DECREF(tmp_make_exception_arg_17);
assert(!(tmp_raise_type_17 == NULL));
exception_state.exception_value = tmp_raise_type_17;
exception_lineno = 283;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_56;
}
branch_no_51:;
goto branch_end_50;
branch_no_50:;
{
PyObject *tmp_assign_source_170;
tmp_assign_source_170 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_170;
}
branch_end_50:;
{
PyObject *tmp_assign_source_171;
PyObject *tmp_called_value_53;
PyObject *tmp_direct_call_arg1_28;
PyObject *tmp_direct_call_arg2_11;
PyObject *tmp_direct_call_arg3_9;
PyObject *tmp_args_element_value_13;
tmp_direct_call_arg1_28 = module_var_accessor_annotated_types$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;

    goto try_except_handler_56;
}
tmp_direct_call_arg2_11 = DICT_COPY(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
tmp_direct_call_arg3_9 = module_var_accessor_annotated_types$SLOTS(tstate);
if (unlikely(tmp_direct_call_arg3_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLOTS);
}

if (tmp_direct_call_arg3_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg2_11);

exception_lineno = 282;

    goto try_except_handler_56;
}
Py_INCREF(tmp_direct_call_arg1_28);
Py_INCREF(tmp_direct_call_arg3_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_28, tmp_direct_call_arg2_11, tmp_direct_call_arg3_9};
    tmp_called_value_53 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_56;
}
{
PyObject *tmp_set_locals_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_set_locals_18 = tmp_class_container$class_creation_18__prepared;
locals_annotated_types$$$class__18_Timezone_283 = tmp_set_locals_18;
Py_INCREF(tmp_set_locals_18);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__18_Timezone_283, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_58;
}
tmp_dictset_value = mod_consts.const_str_digest_2a92c894d705dd93fabe7046499967b0;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__18_Timezone_283, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_58;
}
tmp_dictset_value = mod_consts.const_str_plain_Timezone;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__18_Timezone_283, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_58;
}
tmp_dictset_value = mod_consts.const_int_pos_283;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__18_Timezone_283, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_58;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__18_Timezone_283, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_58;
}
frame_frame_annotated_types$$$class__18_Timezone_18 = MAKE_CLASS_FRAME(tstate, code_objects_8e59d51a5da1f6e39aa91a546e4710a7, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__18_Timezone_18);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__18_Timezone_18) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_14;
PyObject *tmp_expression_value_120;
PyObject *tmp_subscript_value_33;
PyObject *tmp_tuple_element_79;
PyObject *tmp_ass_subscribed_14;
PyObject *tmp_ass_subscript_14;
tmp_expression_value_120 = PyObject_GetItem(locals_annotated_types$$$class__18_Timezone_283, mod_consts.const_str_plain_Union);

if (tmp_expression_value_120 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_120 = module_var_accessor_annotated_types$Union(tstate);
if (unlikely(tmp_expression_value_120 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_120 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
        Py_INCREF(tmp_expression_value_120);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_tuple_element_79 = PyObject_GetItem(locals_annotated_types$$$class__18_Timezone_283, mod_consts.const_str_plain_str);

if (tmp_tuple_element_79 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_79 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_79);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_18;
    }
}

tmp_subscript_value_33 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM(tmp_subscript_value_33, 0, tmp_tuple_element_79);
tmp_tuple_element_79 = PyObject_GetItem(locals_annotated_types$$$class__18_Timezone_283, mod_consts.const_str_plain_tzinfo);

if (tmp_tuple_element_79 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_79 = module_var_accessor_annotated_types$tzinfo(tstate);
if (unlikely(tmp_tuple_element_79 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tzinfo);
}

if (tmp_tuple_element_79 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_2 = "o";
    goto tuple_build_exception_24;
}
        Py_INCREF(tmp_tuple_element_79);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_24;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_33, 1, tmp_tuple_element_79);
tmp_tuple_element_79 = PyObject_GetItem(locals_annotated_types$$$class__18_Timezone_283, mod_consts.const_str_plain_EllipsisType);

if (tmp_tuple_element_79 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_79 = module_var_accessor_annotated_types$EllipsisType(tstate);
if (unlikely(tmp_tuple_element_79 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipsisType);
}

if (tmp_tuple_element_79 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_2 = "o";
    goto tuple_build_exception_24;
}
        Py_INCREF(tmp_tuple_element_79);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_24;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_33, 2, tmp_tuple_element_79);
tmp_tuple_element_79 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_33, 3, tmp_tuple_element_79);
goto tuple_build_no_exception_24;
// Exception handling pass through code for tuple_build:
tuple_build_exception_24:;
Py_DECREF(tmp_expression_value_120);
Py_DECREF(tmp_subscript_value_33);
goto frame_exception_exit_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_24:;
tmp_ass_subvalue_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_120, tmp_subscript_value_33);
CHECK_OBJECT(tmp_expression_value_120);
Py_DECREF(tmp_expression_value_120);
CHECK_OBJECT(tmp_subscript_value_33);
Py_DECREF(tmp_subscript_value_33);
if (tmp_ass_subvalue_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscribed_14 = PyObject_GetItem(locals_annotated_types$$$class__18_Timezone_283, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_14);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_18;
}

if (tmp_ass_subscribed_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_14);

exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
tmp_ass_subscript_14 = mod_consts.const_str_plain_tz;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
CHECK_OBJECT(tmp_ass_subscribed_14);
Py_DECREF(tmp_ass_subscribed_14);
CHECK_OBJECT(tmp_ass_subvalue_14);
Py_DECREF(tmp_ass_subvalue_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_18;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_17;
frame_exception_exit_18:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__18_Timezone_18, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__18_Timezone_18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__18_Timezone_18, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__18_Timezone_18,
    type_description_2,
    outline_17_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__18_Timezone_18);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_17;
frame_no_exception_17:;
goto skip_nested_handling_17;
nested_frame_exit_17:;

goto try_except_handler_58;
skip_nested_handling_17:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__18_Timezone_283, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_58;
}
{
nuitka_bool tmp_condition_result_69;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_cmp_expr_left_17 = tmp_class_container$class_creation_18__bases;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_cmp_expr_right_17 = tmp_class_container$class_creation_18__bases_orig;
tmp_condition_result_69 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_condition_result_69 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_58;
}
if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
    goto branch_yes_52;
} else {
    goto branch_no_52;
}
}
branch_yes_52:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_18__bases_orig;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__18_Timezone_283, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_58;
}
branch_no_52:;
{
PyObject *tmp_assign_source_172;
PyObject *tmp_called_value_54;
PyObject *tmp_args_value_35;
PyObject *tmp_tuple_element_80;
PyObject *tmp_kwargs_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_called_value_54 = tmp_class_container$class_creation_18__metaclass;
tmp_tuple_element_80 = mod_consts.const_str_plain_Timezone;
tmp_args_value_35 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_80);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_80 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_80);
tmp_tuple_element_80 = locals_annotated_types$$$class__18_Timezone_283;
PyTuple_SET_ITEM0(tmp_args_value_35, 2, tmp_tuple_element_80);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_35 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 283;
tmp_assign_source_172 = CALL_FUNCTION(tstate, tmp_called_value_54, tmp_args_value_35, tmp_kwargs_value_35);
CHECK_OBJECT(tmp_args_value_35);
Py_DECREF(tmp_args_value_35);
if (tmp_assign_source_172 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto try_except_handler_58;
}
assert(outline_17_var___class__ == NULL);
outline_17_var___class__ = tmp_assign_source_172;
}
CHECK_OBJECT(outline_17_var___class__);
tmp_args_element_value_13 = outline_17_var___class__;
Py_INCREF(tmp_args_element_value_13);
goto try_return_handler_58;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_58:;
Py_DECREF(locals_annotated_types$$$class__18_Timezone_283);
locals_annotated_types$$$class__18_Timezone_283 = NULL;
goto try_return_handler_57;
// Exception handler code:
try_except_handler_58:;
exception_keeper_lineno_56 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_56 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__18_Timezone_283);
locals_annotated_types$$$class__18_Timezone_283 = NULL;
// Re-raise.
exception_state = exception_keeper_name_56;
exception_lineno = exception_keeper_lineno_56;

goto try_except_handler_57;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_57:;
CHECK_OBJECT(outline_17_var___class__);
CHECK_OBJECT(outline_17_var___class__);
Py_DECREF(outline_17_var___class__);
outline_17_var___class__ = NULL;
goto outline_result_37;
// Exception handler code:
try_except_handler_57:;
exception_keeper_lineno_57 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_57 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_57;
exception_lineno = exception_keeper_lineno_57;

goto outline_exception_18;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_18:;
exception_lineno = 283;
goto try_except_handler_56;
outline_result_37:;
frame_frame_annotated_types->m_frame.f_lineno = 282;
tmp_assign_source_171 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_53);
Py_DECREF(tmp_called_value_53);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_171 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto try_except_handler_56;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Timezone, tmp_assign_source_171);
}
goto try_end_21;
// Exception handler code:
try_except_handler_56:;
exception_keeper_lineno_58 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_58 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_18__bases_orig);
tmp_class_container$class_creation_18__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__bases);
tmp_class_container$class_creation_18__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__class_decl_dict);
tmp_class_container$class_creation_18__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__metaclass);
tmp_class_container$class_creation_18__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__prepared);
tmp_class_container$class_creation_18__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_58;
exception_lineno = exception_keeper_lineno_58;

goto frame_exception_exit_1;
// End of try:
try_end_21:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
Py_DECREF(tmp_class_container$class_creation_18__bases_orig);
tmp_class_container$class_creation_18__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
Py_DECREF(tmp_class_container$class_creation_18__bases);
tmp_class_container$class_creation_18__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_18__class_decl_dict);
tmp_class_container$class_creation_18__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
Py_DECREF(tmp_class_container$class_creation_18__metaclass);
tmp_class_container$class_creation_18__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
Py_DECREF(tmp_class_container$class_creation_18__prepared);
tmp_class_container$class_creation_18__prepared = NULL;
tmp_outline_return_value_18 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_18);
goto outline_result_36;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_36:;
CHECK_OBJECT(tmp_outline_return_value_18);
Py_DECREF(tmp_outline_return_value_18);
}
{
PyObject *tmp_outline_return_value_19;
// Tried code:
{
PyObject *tmp_assign_source_173;
PyObject *tmp_tuple_element_81;
tmp_tuple_element_81 = module_var_accessor_annotated_types$BaseMetadata(tstate);
if (unlikely(tmp_tuple_element_81 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseMetadata);
}

if (tmp_tuple_element_81 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 300;

    goto try_except_handler_59;
}
tmp_assign_source_173 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_173, 0, tmp_tuple_element_81);
assert(tmp_class_container$class_creation_19__bases_orig == NULL);
tmp_class_container$class_creation_19__bases_orig = tmp_assign_source_173;
}
{
PyObject *tmp_assign_source_174;
PyObject *tmp_direct_call_arg1_29;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_direct_call_arg1_29 = tmp_class_container$class_creation_19__bases_orig;
Py_INCREF(tmp_direct_call_arg1_29);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_29};
    tmp_assign_source_174 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_174 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_59;
}
assert(tmp_class_container$class_creation_19__bases == NULL);
tmp_class_container$class_creation_19__bases = tmp_assign_source_174;
}
{
PyObject *tmp_assign_source_175;
tmp_assign_source_175 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_19__class_decl_dict == NULL);
tmp_class_container$class_creation_19__class_decl_dict = tmp_assign_source_175;
}
{
PyObject *tmp_assign_source_176;
PyObject *tmp_metaclass_value_18;
nuitka_bool tmp_condition_result_70;
int tmp_truth_name_18;
PyObject *tmp_type_arg_35;
PyObject *tmp_expression_value_121;
PyObject *tmp_subscript_value_34;
PyObject *tmp_bases_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_container$class_creation_19__bases);
if (tmp_truth_name_18 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_59;
}
tmp_condition_result_70 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_70 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_18;
} else {
    goto condexpr_false_18;
}
condexpr_true_18:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_expression_value_121 = tmp_class_container$class_creation_19__bases;
tmp_subscript_value_34 = const_int_0;
tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_121, tmp_subscript_value_34, 0);
if (tmp_type_arg_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_59;
}
tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
CHECK_OBJECT(tmp_type_arg_35);
Py_DECREF(tmp_type_arg_35);
if (tmp_metaclass_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_59;
}
goto condexpr_end_18;
condexpr_false_18:;
tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_18);
condexpr_end_18:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_bases_value_18 = tmp_class_container$class_creation_19__bases;
tmp_assign_source_176 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
CHECK_OBJECT(tmp_metaclass_value_18);
Py_DECREF(tmp_metaclass_value_18);
if (tmp_assign_source_176 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_59;
}
assert(tmp_class_container$class_creation_19__metaclass == NULL);
tmp_class_container$class_creation_19__metaclass = tmp_assign_source_176;
}
{
bool tmp_condition_result_71;
PyObject *tmp_expression_value_122;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_122 = tmp_class_container$class_creation_19__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_122, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_59;
}
tmp_condition_result_71 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_71 != false) {
    goto branch_yes_53;
} else {
    goto branch_no_53;
}
}
branch_yes_53:;
{
PyObject *tmp_assign_source_177;
PyObject *tmp_called_value_55;
PyObject *tmp_expression_value_123;
PyObject *tmp_args_value_36;
PyObject *tmp_tuple_element_82;
PyObject *tmp_kwargs_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_123 = tmp_class_container$class_creation_19__metaclass;
tmp_called_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_59;
}
tmp_tuple_element_82 = mod_consts.const_str_plain_Unit;
tmp_args_value_36 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_82);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_tuple_element_82 = tmp_class_container$class_creation_19__bases;
PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_82);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
tmp_kwargs_value_36 = tmp_class_container$class_creation_19__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 300;
tmp_assign_source_177 = CALL_FUNCTION(tstate, tmp_called_value_55, tmp_args_value_36, tmp_kwargs_value_36);
CHECK_OBJECT(tmp_called_value_55);
Py_DECREF(tmp_called_value_55);
CHECK_OBJECT(tmp_args_value_36);
Py_DECREF(tmp_args_value_36);
if (tmp_assign_source_177 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_59;
}
assert(tmp_class_container$class_creation_19__prepared == NULL);
tmp_class_container$class_creation_19__prepared = tmp_assign_source_177;
}
{
bool tmp_condition_result_72;
PyObject *tmp_operand_value_19;
PyObject *tmp_expression_value_124;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_expression_value_124 = tmp_class_container$class_creation_19__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_124, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_59;
}
tmp_operand_value_19 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
assert(!(tmp_res == -1));
tmp_condition_result_72 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_72 != false) {
    goto branch_yes_54;
} else {
    goto branch_no_54;
}
}
branch_yes_54:;
{
PyObject *tmp_raise_type_18;
PyObject *tmp_make_exception_arg_18;
PyObject *tmp_mod_expr_left_18;
PyObject *tmp_mod_expr_right_18;
PyObject *tmp_tuple_element_83;
PyObject *tmp_expression_value_125;
PyObject *tmp_name_value_21;
PyObject *tmp_default_value_18;
tmp_mod_expr_left_18 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_125 = tmp_class_container$class_creation_19__metaclass;
tmp_name_value_21 = const_str_plain___name__;
tmp_default_value_18 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_83 = BUILTIN_GETATTR(tstate, tmp_expression_value_125, tmp_name_value_21, tmp_default_value_18);
if (tmp_tuple_element_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_59;
}
tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_126;
PyObject *tmp_type_arg_36;
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_83);
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_type_arg_36 = tmp_class_container$class_creation_19__prepared;
tmp_expression_value_126 = BUILTIN_TYPE1(tmp_type_arg_36);
assert(!(tmp_expression_value_126 == NULL));
tmp_tuple_element_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_126);
Py_DECREF(tmp_expression_value_126);
if (tmp_tuple_element_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_83);
}
goto tuple_build_no_exception_25;
// Exception handling pass through code for tuple_build:
tuple_build_exception_25:;
Py_DECREF(tmp_mod_expr_right_18);
goto try_except_handler_59;
// Finished with no exception for tuple_build:
tuple_build_no_exception_25:;
tmp_make_exception_arg_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
CHECK_OBJECT(tmp_mod_expr_right_18);
Py_DECREF(tmp_mod_expr_right_18);
if (tmp_make_exception_arg_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_59;
}
frame_frame_annotated_types->m_frame.f_lineno = 300;
tmp_raise_type_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_18);
CHECK_OBJECT(tmp_make_exception_arg_18);
Py_DECREF(tmp_make_exception_arg_18);
assert(!(tmp_raise_type_18 == NULL));
exception_state.exception_value = tmp_raise_type_18;
exception_lineno = 300;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_59;
}
branch_no_54:;
goto branch_end_53;
branch_no_53:;
{
PyObject *tmp_assign_source_178;
tmp_assign_source_178 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_19__prepared == NULL);
tmp_class_container$class_creation_19__prepared = tmp_assign_source_178;
}
branch_end_53:;
{
PyObject *tmp_assign_source_179;
PyObject *tmp_called_value_56;
PyObject *tmp_direct_call_arg1_30;
PyObject *tmp_direct_call_arg2_12;
PyObject *tmp_direct_call_arg3_10;
PyObject *tmp_args_element_value_14;
tmp_direct_call_arg1_30 = module_var_accessor_annotated_types$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;

    goto try_except_handler_59;
}
tmp_direct_call_arg2_12 = DICT_COPY(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
tmp_direct_call_arg3_10 = module_var_accessor_annotated_types$SLOTS(tstate);
if (unlikely(tmp_direct_call_arg3_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLOTS);
}

if (tmp_direct_call_arg3_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg2_12);

exception_lineno = 299;

    goto try_except_handler_59;
}
Py_INCREF(tmp_direct_call_arg1_30);
Py_INCREF(tmp_direct_call_arg3_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_30, tmp_direct_call_arg2_12, tmp_direct_call_arg3_10};
    tmp_called_value_56 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;

    goto try_except_handler_59;
}
{
PyObject *tmp_set_locals_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_set_locals_19 = tmp_class_container$class_creation_19__prepared;
locals_annotated_types$$$class__19_Unit_300 = tmp_set_locals_19;
Py_INCREF(tmp_set_locals_19);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__19_Unit_300, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_61;
}
tmp_dictset_value = mod_consts.const_str_digest_7476bccf9660a73334af0ec0b8a35e08;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__19_Unit_300, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_61;
}
tmp_dictset_value = mod_consts.const_str_plain_Unit;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__19_Unit_300, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_61;
}
tmp_dictset_value = mod_consts.const_int_pos_300;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__19_Unit_300, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_61;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__19_Unit_300, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_61;
}
frame_frame_annotated_types$$$class__19_Unit_19 = MAKE_CLASS_FRAME(tstate, code_objects_784d8b3719b87b1f3457b9e38f33d969, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__19_Unit_19);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__19_Unit_19) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_15;
PyObject *tmp_ass_subscribed_15;
PyObject *tmp_ass_subscript_15;
tmp_ass_subvalue_15 = PyObject_GetItem(locals_annotated_types$$$class__19_Unit_300, mod_consts.const_str_plain_str);

if (tmp_ass_subvalue_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subvalue_15 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_ass_subvalue_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_19;
    }
}

tmp_ass_subscribed_15 = PyObject_GetItem(locals_annotated_types$$$class__19_Unit_300, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_15);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 319;
type_description_2 = "o";
    goto frame_exception_exit_19;
}

if (tmp_ass_subscribed_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_15);

exception_lineno = 319;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
tmp_ass_subscript_15 = mod_consts.const_str_plain_unit;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
CHECK_OBJECT(tmp_ass_subscribed_15);
Py_DECREF(tmp_ass_subscribed_15);
CHECK_OBJECT(tmp_ass_subvalue_15);
Py_DECREF(tmp_ass_subvalue_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_2 = "o";
    goto frame_exception_exit_19;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_18;
frame_exception_exit_19:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__19_Unit_19, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__19_Unit_19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__19_Unit_19, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__19_Unit_19,
    type_description_2,
    outline_18_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__19_Unit_19);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_18;
frame_no_exception_18:;
goto skip_nested_handling_18;
nested_frame_exit_18:;

goto try_except_handler_61;
skip_nested_handling_18:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__19_Unit_300, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_61;
}
{
nuitka_bool tmp_condition_result_73;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_cmp_expr_left_18 = tmp_class_container$class_creation_19__bases;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_cmp_expr_right_18 = tmp_class_container$class_creation_19__bases_orig;
tmp_condition_result_73 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_condition_result_73 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_61;
}
if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
    goto branch_yes_55;
} else {
    goto branch_no_55;
}
}
branch_yes_55:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_19__bases_orig;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__19_Unit_300, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_61;
}
branch_no_55:;
{
PyObject *tmp_assign_source_180;
PyObject *tmp_called_value_57;
PyObject *tmp_args_value_37;
PyObject *tmp_tuple_element_84;
PyObject *tmp_kwargs_value_37;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_called_value_57 = tmp_class_container$class_creation_19__metaclass;
tmp_tuple_element_84 = mod_consts.const_str_plain_Unit;
tmp_args_value_37 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_84);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_tuple_element_84 = tmp_class_container$class_creation_19__bases;
PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_84);
tmp_tuple_element_84 = locals_annotated_types$$$class__19_Unit_300;
PyTuple_SET_ITEM0(tmp_args_value_37, 2, tmp_tuple_element_84);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
tmp_kwargs_value_37 = tmp_class_container$class_creation_19__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 300;
tmp_assign_source_180 = CALL_FUNCTION(tstate, tmp_called_value_57, tmp_args_value_37, tmp_kwargs_value_37);
CHECK_OBJECT(tmp_args_value_37);
Py_DECREF(tmp_args_value_37);
if (tmp_assign_source_180 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto try_except_handler_61;
}
assert(outline_18_var___class__ == NULL);
outline_18_var___class__ = tmp_assign_source_180;
}
CHECK_OBJECT(outline_18_var___class__);
tmp_args_element_value_14 = outline_18_var___class__;
Py_INCREF(tmp_args_element_value_14);
goto try_return_handler_61;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_61:;
Py_DECREF(locals_annotated_types$$$class__19_Unit_300);
locals_annotated_types$$$class__19_Unit_300 = NULL;
goto try_return_handler_60;
// Exception handler code:
try_except_handler_61:;
exception_keeper_lineno_59 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_59 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__19_Unit_300);
locals_annotated_types$$$class__19_Unit_300 = NULL;
// Re-raise.
exception_state = exception_keeper_name_59;
exception_lineno = exception_keeper_lineno_59;

goto try_except_handler_60;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_60:;
CHECK_OBJECT(outline_18_var___class__);
CHECK_OBJECT(outline_18_var___class__);
Py_DECREF(outline_18_var___class__);
outline_18_var___class__ = NULL;
goto outline_result_39;
// Exception handler code:
try_except_handler_60:;
exception_keeper_lineno_60 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_60 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_60;
exception_lineno = exception_keeper_lineno_60;

goto outline_exception_19;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_19:;
exception_lineno = 300;
goto try_except_handler_59;
outline_result_39:;
frame_frame_annotated_types->m_frame.f_lineno = 299;
tmp_assign_source_179 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_56);
Py_DECREF(tmp_called_value_56);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_assign_source_179 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;

    goto try_except_handler_59;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Unit, tmp_assign_source_179);
}
goto try_end_22;
// Exception handler code:
try_except_handler_59:;
exception_keeper_lineno_61 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_61 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_19__bases_orig);
tmp_class_container$class_creation_19__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__bases);
tmp_class_container$class_creation_19__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__class_decl_dict);
tmp_class_container$class_creation_19__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__metaclass);
tmp_class_container$class_creation_19__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__prepared);
tmp_class_container$class_creation_19__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_61;
exception_lineno = exception_keeper_lineno_61;

goto frame_exception_exit_1;
// End of try:
try_end_22:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
Py_DECREF(tmp_class_container$class_creation_19__bases_orig);
tmp_class_container$class_creation_19__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
Py_DECREF(tmp_class_container$class_creation_19__bases);
tmp_class_container$class_creation_19__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_19__class_decl_dict);
tmp_class_container$class_creation_19__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
Py_DECREF(tmp_class_container$class_creation_19__metaclass);
tmp_class_container$class_creation_19__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
Py_DECREF(tmp_class_container$class_creation_19__prepared);
tmp_class_container$class_creation_19__prepared = NULL;
tmp_outline_return_value_19 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_19);
goto outline_result_38;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_38:;
CHECK_OBJECT(tmp_outline_return_value_19);
Py_DECREF(tmp_outline_return_value_19);
}
{
PyObject *tmp_outline_return_value_20;
// Tried code:
{
PyObject *tmp_assign_source_181;
PyObject *tmp_tuple_element_85;
tmp_tuple_element_85 = module_var_accessor_annotated_types$BaseMetadata(tstate);
if (unlikely(tmp_tuple_element_85 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseMetadata);
}

if (tmp_tuple_element_85 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;

    goto try_except_handler_62;
}
tmp_assign_source_181 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_181, 0, tmp_tuple_element_85);
assert(tmp_class_container$class_creation_20__bases_orig == NULL);
tmp_class_container$class_creation_20__bases_orig = tmp_assign_source_181;
}
{
PyObject *tmp_assign_source_182;
PyObject *tmp_direct_call_arg1_31;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_direct_call_arg1_31 = tmp_class_container$class_creation_20__bases_orig;
Py_INCREF(tmp_direct_call_arg1_31);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_31};
    tmp_assign_source_182 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_182 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_62;
}
assert(tmp_class_container$class_creation_20__bases == NULL);
tmp_class_container$class_creation_20__bases = tmp_assign_source_182;
}
{
PyObject *tmp_assign_source_183;
tmp_assign_source_183 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_20__class_decl_dict == NULL);
tmp_class_container$class_creation_20__class_decl_dict = tmp_assign_source_183;
}
{
PyObject *tmp_assign_source_184;
PyObject *tmp_metaclass_value_19;
nuitka_bool tmp_condition_result_74;
int tmp_truth_name_19;
PyObject *tmp_type_arg_37;
PyObject *tmp_expression_value_127;
PyObject *tmp_subscript_value_35;
PyObject *tmp_bases_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_truth_name_19 = CHECK_IF_TRUE(tmp_class_container$class_creation_20__bases);
if (tmp_truth_name_19 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_62;
}
tmp_condition_result_74 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_74 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_19;
} else {
    goto condexpr_false_19;
}
condexpr_true_19:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_expression_value_127 = tmp_class_container$class_creation_20__bases;
tmp_subscript_value_35 = const_int_0;
tmp_type_arg_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_127, tmp_subscript_value_35, 0);
if (tmp_type_arg_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_62;
}
tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_37);
CHECK_OBJECT(tmp_type_arg_37);
Py_DECREF(tmp_type_arg_37);
if (tmp_metaclass_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_62;
}
goto condexpr_end_19;
condexpr_false_19:;
tmp_metaclass_value_19 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_19);
condexpr_end_19:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_bases_value_19 = tmp_class_container$class_creation_20__bases;
tmp_assign_source_184 = SELECT_METACLASS(tstate, tmp_metaclass_value_19, tmp_bases_value_19);
CHECK_OBJECT(tmp_metaclass_value_19);
Py_DECREF(tmp_metaclass_value_19);
if (tmp_assign_source_184 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_62;
}
assert(tmp_class_container$class_creation_20__metaclass == NULL);
tmp_class_container$class_creation_20__metaclass = tmp_assign_source_184;
}
{
bool tmp_condition_result_75;
PyObject *tmp_expression_value_128;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_128 = tmp_class_container$class_creation_20__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_128, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_62;
}
tmp_condition_result_75 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_75 != false) {
    goto branch_yes_56;
} else {
    goto branch_no_56;
}
}
branch_yes_56:;
{
PyObject *tmp_assign_source_185;
PyObject *tmp_called_value_58;
PyObject *tmp_expression_value_129;
PyObject *tmp_args_value_38;
PyObject *tmp_tuple_element_86;
PyObject *tmp_kwargs_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_129 = tmp_class_container$class_creation_20__metaclass;
tmp_called_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_62;
}
tmp_tuple_element_86 = mod_consts.const_str_plain_Predicate;
tmp_args_value_38 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_86);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_tuple_element_86 = tmp_class_container$class_creation_20__bases;
PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_86);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
tmp_kwargs_value_38 = tmp_class_container$class_creation_20__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 323;
tmp_assign_source_185 = CALL_FUNCTION(tstate, tmp_called_value_58, tmp_args_value_38, tmp_kwargs_value_38);
CHECK_OBJECT(tmp_called_value_58);
Py_DECREF(tmp_called_value_58);
CHECK_OBJECT(tmp_args_value_38);
Py_DECREF(tmp_args_value_38);
if (tmp_assign_source_185 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_62;
}
assert(tmp_class_container$class_creation_20__prepared == NULL);
tmp_class_container$class_creation_20__prepared = tmp_assign_source_185;
}
{
bool tmp_condition_result_76;
PyObject *tmp_operand_value_20;
PyObject *tmp_expression_value_130;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_expression_value_130 = tmp_class_container$class_creation_20__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_130, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_62;
}
tmp_operand_value_20 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
assert(!(tmp_res == -1));
tmp_condition_result_76 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_76 != false) {
    goto branch_yes_57;
} else {
    goto branch_no_57;
}
}
branch_yes_57:;
{
PyObject *tmp_raise_type_19;
PyObject *tmp_make_exception_arg_19;
PyObject *tmp_mod_expr_left_19;
PyObject *tmp_mod_expr_right_19;
PyObject *tmp_tuple_element_87;
PyObject *tmp_expression_value_131;
PyObject *tmp_name_value_22;
PyObject *tmp_default_value_19;
tmp_mod_expr_left_19 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_131 = tmp_class_container$class_creation_20__metaclass;
tmp_name_value_22 = const_str_plain___name__;
tmp_default_value_19 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_87 = BUILTIN_GETATTR(tstate, tmp_expression_value_131, tmp_name_value_22, tmp_default_value_19);
if (tmp_tuple_element_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_62;
}
tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_132;
PyObject *tmp_type_arg_38;
PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_87);
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_type_arg_38 = tmp_class_container$class_creation_20__prepared;
tmp_expression_value_132 = BUILTIN_TYPE1(tmp_type_arg_38);
assert(!(tmp_expression_value_132 == NULL));
tmp_tuple_element_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_132);
Py_DECREF(tmp_expression_value_132);
if (tmp_tuple_element_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto tuple_build_exception_26;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_19, 1, tmp_tuple_element_87);
}
goto tuple_build_no_exception_26;
// Exception handling pass through code for tuple_build:
tuple_build_exception_26:;
Py_DECREF(tmp_mod_expr_right_19);
goto try_except_handler_62;
// Finished with no exception for tuple_build:
tuple_build_no_exception_26:;
tmp_make_exception_arg_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
CHECK_OBJECT(tmp_mod_expr_right_19);
Py_DECREF(tmp_mod_expr_right_19);
if (tmp_make_exception_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_62;
}
frame_frame_annotated_types->m_frame.f_lineno = 323;
tmp_raise_type_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_19);
CHECK_OBJECT(tmp_make_exception_arg_19);
Py_DECREF(tmp_make_exception_arg_19);
assert(!(tmp_raise_type_19 == NULL));
exception_state.exception_value = tmp_raise_type_19;
exception_lineno = 323;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_62;
}
branch_no_57:;
goto branch_end_56;
branch_no_56:;
{
PyObject *tmp_assign_source_186;
tmp_assign_source_186 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_20__prepared == NULL);
tmp_class_container$class_creation_20__prepared = tmp_assign_source_186;
}
branch_end_56:;
{
PyObject *tmp_assign_source_187;
PyObject *tmp_called_value_59;
PyObject *tmp_direct_call_arg1_32;
PyObject *tmp_direct_call_arg2_13;
PyObject *tmp_direct_call_arg3_11;
PyObject *tmp_args_element_value_15;
tmp_direct_call_arg1_32 = module_var_accessor_annotated_types$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;

    goto try_except_handler_62;
}
tmp_direct_call_arg2_13 = DICT_COPY(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
tmp_direct_call_arg3_11 = module_var_accessor_annotated_types$SLOTS(tstate);
if (unlikely(tmp_direct_call_arg3_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLOTS);
}

if (tmp_direct_call_arg3_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg2_13);

exception_lineno = 322;

    goto try_except_handler_62;
}
Py_INCREF(tmp_direct_call_arg1_32);
Py_INCREF(tmp_direct_call_arg3_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_32, tmp_direct_call_arg2_13, tmp_direct_call_arg3_11};
    tmp_called_value_59 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;

    goto try_except_handler_62;
}
{
PyObject *tmp_set_locals_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_set_locals_20 = tmp_class_container$class_creation_20__prepared;
locals_annotated_types$$$class__20_Predicate_323 = tmp_set_locals_20;
Py_INCREF(tmp_set_locals_20);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__20_Predicate_323, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_64;
}
tmp_dictset_value = mod_consts.const_str_digest_74cccc41d6d227f7ee0ad63fbc0a2290;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__20_Predicate_323, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_64;
}
tmp_dictset_value = mod_consts.const_str_plain_Predicate;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__20_Predicate_323, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_64;
}
tmp_dictset_value = mod_consts.const_int_pos_323;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__20_Predicate_323, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_64;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__20_Predicate_323, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_64;
}
frame_frame_annotated_types$$$class__20_Predicate_20 = MAKE_CLASS_FRAME(tstate, code_objects_2bd97b35bc9786b043626d0f4f8d1ab1, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__20_Predicate_20);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__20_Predicate_20) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_16;
PyObject *tmp_expression_value_133;
PyObject *tmp_subscript_value_36;
PyObject *tmp_tuple_element_88;
PyObject *tmp_list_element_2;
PyObject *tmp_ass_subscribed_16;
PyObject *tmp_ass_subscript_16;
tmp_expression_value_133 = PyObject_GetItem(locals_annotated_types$$$class__20_Predicate_323, mod_consts.const_str_plain_Callable);

if (tmp_expression_value_133 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_133 = module_var_accessor_annotated_types$Callable(tstate);
if (unlikely(tmp_expression_value_133 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_133 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 344;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
        Py_INCREF(tmp_expression_value_133);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_20;
    }
}

tmp_list_element_2 = PyObject_GetItem(locals_annotated_types$$$class__20_Predicate_323, mod_consts.const_str_plain_Any);

if (tmp_list_element_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_list_element_2 = module_var_accessor_annotated_types$Any(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_133);

exception_lineno = 344;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
        Py_INCREF(tmp_list_element_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_20;
    }
}

tmp_tuple_element_88 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_tuple_element_88, 0, tmp_list_element_2);
tmp_subscript_value_36 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_36, 0, tmp_tuple_element_88);
tmp_tuple_element_88 = PyObject_GetItem(locals_annotated_types$$$class__20_Predicate_323, mod_consts.const_str_plain_bool);

if (tmp_tuple_element_88 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_88 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_tuple_element_88);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_20;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_36, 1, tmp_tuple_element_88);
tmp_ass_subvalue_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_133, tmp_subscript_value_36);
CHECK_OBJECT(tmp_expression_value_133);
Py_DECREF(tmp_expression_value_133);
CHECK_OBJECT(tmp_subscript_value_36);
Py_DECREF(tmp_subscript_value_36);
if (tmp_ass_subvalue_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
tmp_ass_subscribed_16 = PyObject_GetItem(locals_annotated_types$$$class__20_Predicate_323, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_16);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 344;
type_description_2 = "o";
    goto frame_exception_exit_20;
}

if (tmp_ass_subscribed_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_16);

exception_lineno = 344;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
tmp_ass_subscript_16 = mod_consts.const_str_plain_func;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
CHECK_OBJECT(tmp_ass_subscribed_16);
Py_DECREF(tmp_ass_subscribed_16);
CHECK_OBJECT(tmp_ass_subvalue_16);
Py_DECREF(tmp_ass_subvalue_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
}
{
PyObject *tmp_annotations_13;
PyObject *tmp_dict_key_13;
PyObject *tmp_dict_value_13;
tmp_dict_key_13 = mod_consts.const_str_plain_return;
tmp_dict_value_13 = PyObject_GetItem(locals_annotated_types$$$class__20_Predicate_323, mod_consts.const_str_plain_str);

if (tmp_dict_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_13 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_20;
    }
}

tmp_annotations_13 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_annotated_types$$$function__13___repr__(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_annotated_types$$$class__20_Predicate_323, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_2 = "o";
    goto frame_exception_exit_20;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_19;
frame_exception_exit_20:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__20_Predicate_20, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__20_Predicate_20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__20_Predicate_20, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__20_Predicate_20,
    type_description_2,
    outline_19_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__20_Predicate_20);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_19;
frame_no_exception_19:;
goto skip_nested_handling_19;
nested_frame_exit_19:;

goto try_except_handler_64;
skip_nested_handling_19:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__20_Predicate_323, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_64;
}
{
nuitka_bool tmp_condition_result_77;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_cmp_expr_left_19 = tmp_class_container$class_creation_20__bases;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_cmp_expr_right_19 = tmp_class_container$class_creation_20__bases_orig;
tmp_condition_result_77 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
if (tmp_condition_result_77 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_64;
}
if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
    goto branch_yes_58;
} else {
    goto branch_no_58;
}
}
branch_yes_58:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_20__bases_orig;
tmp_res = PyObject_SetItem(locals_annotated_types$$$class__20_Predicate_323, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_64;
}
branch_no_58:;
{
PyObject *tmp_assign_source_188;
PyObject *tmp_called_value_60;
PyObject *tmp_args_value_39;
PyObject *tmp_tuple_element_89;
PyObject *tmp_kwargs_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_called_value_60 = tmp_class_container$class_creation_20__metaclass;
tmp_tuple_element_89 = mod_consts.const_str_plain_Predicate;
tmp_args_value_39 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_89);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_tuple_element_89 = tmp_class_container$class_creation_20__bases;
PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_89);
tmp_tuple_element_89 = locals_annotated_types$$$class__20_Predicate_323;
PyTuple_SET_ITEM0(tmp_args_value_39, 2, tmp_tuple_element_89);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
tmp_kwargs_value_39 = tmp_class_container$class_creation_20__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 323;
tmp_assign_source_188 = CALL_FUNCTION(tstate, tmp_called_value_60, tmp_args_value_39, tmp_kwargs_value_39);
CHECK_OBJECT(tmp_args_value_39);
Py_DECREF(tmp_args_value_39);
if (tmp_assign_source_188 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto try_except_handler_64;
}
assert(outline_19_var___class__ == NULL);
outline_19_var___class__ = tmp_assign_source_188;
}
CHECK_OBJECT(outline_19_var___class__);
tmp_args_element_value_15 = outline_19_var___class__;
Py_INCREF(tmp_args_element_value_15);
goto try_return_handler_64;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_64:;
Py_DECREF(locals_annotated_types$$$class__20_Predicate_323);
locals_annotated_types$$$class__20_Predicate_323 = NULL;
goto try_return_handler_63;
// Exception handler code:
try_except_handler_64:;
exception_keeper_lineno_62 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_62 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__20_Predicate_323);
locals_annotated_types$$$class__20_Predicate_323 = NULL;
// Re-raise.
exception_state = exception_keeper_name_62;
exception_lineno = exception_keeper_lineno_62;

goto try_except_handler_63;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_63:;
CHECK_OBJECT(outline_19_var___class__);
CHECK_OBJECT(outline_19_var___class__);
Py_DECREF(outline_19_var___class__);
outline_19_var___class__ = NULL;
goto outline_result_41;
// Exception handler code:
try_except_handler_63:;
exception_keeper_lineno_63 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_63 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_63;
exception_lineno = exception_keeper_lineno_63;

goto outline_exception_20;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_20:;
exception_lineno = 323;
goto try_except_handler_62;
outline_result_41:;
frame_frame_annotated_types->m_frame.f_lineno = 322;
tmp_assign_source_187 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_59);
Py_DECREF(tmp_called_value_59);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_assign_source_187 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;

    goto try_except_handler_62;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Predicate, tmp_assign_source_187);
}
goto try_end_23;
// Exception handler code:
try_except_handler_62:;
exception_keeper_lineno_64 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_64 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_20__bases_orig);
tmp_class_container$class_creation_20__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__bases);
tmp_class_container$class_creation_20__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__class_decl_dict);
tmp_class_container$class_creation_20__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__metaclass);
tmp_class_container$class_creation_20__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__prepared);
tmp_class_container$class_creation_20__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_64;
exception_lineno = exception_keeper_lineno_64;

goto frame_exception_exit_1;
// End of try:
try_end_23:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
Py_DECREF(tmp_class_container$class_creation_20__bases_orig);
tmp_class_container$class_creation_20__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
Py_DECREF(tmp_class_container$class_creation_20__bases);
tmp_class_container$class_creation_20__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_20__class_decl_dict);
tmp_class_container$class_creation_20__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
Py_DECREF(tmp_class_container$class_creation_20__metaclass);
tmp_class_container$class_creation_20__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
Py_DECREF(tmp_class_container$class_creation_20__prepared);
tmp_class_container$class_creation_20__prepared = NULL;
tmp_outline_return_value_20 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_20);
goto outline_result_40;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_40:;
CHECK_OBJECT(tmp_outline_return_value_20);
Py_DECREF(tmp_outline_return_value_20);
}
{
PyObject *tmp_outline_return_value_21;
{
PyObject *tmp_assign_source_189;
tmp_assign_source_189 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_21__class_decl_dict == NULL);
tmp_class_container$class_creation_21__class_decl_dict = tmp_assign_source_189;
}
{
PyObject *tmp_assign_source_190;
tmp_assign_source_190 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_21__prepared == NULL);
tmp_class_container$class_creation_21__prepared = tmp_assign_source_190;
}
// Tried code:
{
PyObject *tmp_assign_source_191;
PyObject *tmp_called_value_61;
PyObject *tmp_args_element_value_16;
tmp_called_value_61 = module_var_accessor_annotated_types$dataclass(tstate);
if (unlikely(tmp_called_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 358;

    goto try_except_handler_65;
}
{
PyObject *tmp_set_locals_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
tmp_set_locals_21 = tmp_class_container$class_creation_21__prepared;
locals_annotated_types$$$class__21_Not_359 = tmp_set_locals_21;
Py_INCREF(tmp_set_locals_21);
}
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__21_Not_359, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Not;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__21_Not_359, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_359;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__21_Not_359, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__21_Not_359, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_annotated_types$$$class__21_Not_21 = MAKE_CLASS_FRAME(tstate, code_objects_be4a1c6a2ba498150543f2d2cd410eda, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__21_Not_21);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__21_Not_21) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_17;
PyObject *tmp_expression_value_134;
PyObject *tmp_subscript_value_37;
PyObject *tmp_tuple_element_90;
PyObject *tmp_list_element_3;
PyObject *tmp_ass_subscribed_17;
PyObject *tmp_ass_subscript_17;
tmp_expression_value_134 = module_var_accessor_annotated_types$Callable(tstate);
if (unlikely(tmp_expression_value_134 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_134 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 360;
type_description_2 = "o";
    goto frame_exception_exit_21;
}
tmp_list_element_3 = module_var_accessor_annotated_types$Any(tstate);
if (unlikely(tmp_list_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_list_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 360;
type_description_2 = "o";
    goto frame_exception_exit_21;
}
tmp_tuple_element_90 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_tuple_element_90, 0, tmp_list_element_3);
tmp_subscript_value_37 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_37, 0, tmp_tuple_element_90);
tmp_tuple_element_90 = (PyObject *)&PyBool_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_37, 1, tmp_tuple_element_90);
tmp_ass_subvalue_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_134, tmp_subscript_value_37);
CHECK_OBJECT(tmp_subscript_value_37);
Py_DECREF(tmp_subscript_value_37);
if (tmp_ass_subvalue_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_2 = "o";
    goto frame_exception_exit_21;
}
tmp_ass_subscribed_17 = DICT_GET_ITEM0(tstate, locals_annotated_types$$$class__21_Not_359, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_17);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 360;
type_description_2 = "o";
    goto frame_exception_exit_21;
}

if (tmp_ass_subscribed_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_17);

exception_lineno = 360;
type_description_2 = "o";
    goto frame_exception_exit_21;
}
tmp_ass_subscript_17 = mod_consts.const_str_plain_func;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
CHECK_OBJECT(tmp_ass_subvalue_17);
Py_DECREF(tmp_ass_subvalue_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_2 = "o";
    goto frame_exception_exit_21;
}
}
{
PyObject *tmp_annotations_14;
PyObject *tmp_dict_key_14;
PyObject *tmp_dict_value_14;
tmp_dict_key_14 = mod_consts.const_str_plain__Not__v;
tmp_dict_value_14 = module_var_accessor_annotated_types$Any(tstate);
if (unlikely(tmp_dict_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_2 = "o";
    goto frame_exception_exit_21;
}
tmp_annotations_14 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_return;
tmp_dict_value_14 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_annotated_types$$$function__14___call__(tstate, tmp_annotations_14);

tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__21_Not_359, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_2 = "o";
    goto frame_exception_exit_21;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_20;
frame_exception_exit_21:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__21_Not_21, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__21_Not_21->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__21_Not_21, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__21_Not_21,
    type_description_2,
    outline_20_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__21_Not_21);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_20;
frame_no_exception_20:;
goto skip_nested_handling_20;
nested_frame_exit_20:;

goto try_except_handler_67;
skip_nested_handling_20:;
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__21_Not_359, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_192;
PyObject *tmp_called_value_62;
PyObject *tmp_args_value_40;
PyObject *tmp_tuple_element_91;
PyObject *tmp_kwargs_value_40;
tmp_called_value_62 = (PyObject *)&PyType_Type;
tmp_tuple_element_91 = mod_consts.const_str_plain_Not;
tmp_args_value_40 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_91);
tmp_tuple_element_91 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_91);
tmp_tuple_element_91 = locals_annotated_types$$$class__21_Not_359;
PyTuple_SET_ITEM0(tmp_args_value_40, 2, tmp_tuple_element_91);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
tmp_kwargs_value_40 = tmp_class_container$class_creation_21__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 359;
tmp_assign_source_192 = CALL_FUNCTION(tstate, tmp_called_value_62, tmp_args_value_40, tmp_kwargs_value_40);
CHECK_OBJECT(tmp_args_value_40);
Py_DECREF(tmp_args_value_40);
if (tmp_assign_source_192 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto try_except_handler_67;
}
assert(outline_20_var___class__ == NULL);
outline_20_var___class__ = tmp_assign_source_192;
}
CHECK_OBJECT(outline_20_var___class__);
tmp_args_element_value_16 = outline_20_var___class__;
Py_INCREF(tmp_args_element_value_16);
goto try_return_handler_67;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_67:;
Py_DECREF(locals_annotated_types$$$class__21_Not_359);
locals_annotated_types$$$class__21_Not_359 = NULL;
goto try_return_handler_66;
// Exception handler code:
try_except_handler_67:;
exception_keeper_lineno_65 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_65 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__21_Not_359);
locals_annotated_types$$$class__21_Not_359 = NULL;
// Re-raise.
exception_state = exception_keeper_name_65;
exception_lineno = exception_keeper_lineno_65;

goto try_except_handler_66;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_66:;
CHECK_OBJECT(outline_20_var___class__);
CHECK_OBJECT(outline_20_var___class__);
Py_DECREF(outline_20_var___class__);
outline_20_var___class__ = NULL;
goto outline_result_43;
// Exception handler code:
try_except_handler_66:;
exception_keeper_lineno_66 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_66 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_66;
exception_lineno = exception_keeper_lineno_66;

goto outline_exception_21;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_21:;
exception_lineno = 359;
goto try_except_handler_65;
outline_result_43:;
frame_frame_annotated_types->m_frame.f_lineno = 358;
tmp_assign_source_191 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_16);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_assign_source_191 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto try_except_handler_65;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Not, tmp_assign_source_191);
}
goto try_end_24;
// Exception handler code:
try_except_handler_65:;
exception_keeper_lineno_67 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_67 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_21__class_decl_dict);
tmp_class_container$class_creation_21__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
Py_DECREF(tmp_class_container$class_creation_21__prepared);
tmp_class_container$class_creation_21__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_67;
exception_lineno = exception_keeper_lineno_67;

goto frame_exception_exit_1;
// End of try:
try_end_24:;
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_21__class_decl_dict);
tmp_class_container$class_creation_21__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
Py_DECREF(tmp_class_container$class_creation_21__prepared);
tmp_class_container$class_creation_21__prepared = NULL;
tmp_outline_return_value_21 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_21);
goto outline_result_42;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_42:;
CHECK_OBJECT(tmp_outline_return_value_21);
Py_DECREF(tmp_outline_return_value_21);
}
{
PyObject *tmp_assign_source_193;
PyObject *tmp_called_value_63;
tmp_called_value_63 = module_var_accessor_annotated_types$TypeVar(tstate);
if (unlikely(tmp_called_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 366;

    goto frame_exception_exit_1;
}
frame_frame_annotated_types->m_frame.f_lineno = 366;
tmp_assign_source_193 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_63, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain__StrType_type_str_tuple, 0), mod_consts.const_tuple_str_plain_bound_tuple);
if (tmp_assign_source_193 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain__StrType, tmp_assign_source_193);
}
{
PyObject *tmp_assign_source_194;
PyObject *tmp_expression_value_135;
PyObject *tmp_subscript_value_38;
PyObject *tmp_tuple_element_92;
tmp_expression_value_135 = module_var_accessor_annotated_types$Annotated(tstate);
if (unlikely(tmp_expression_value_135 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_135 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 368;

    goto frame_exception_exit_1;
}
tmp_tuple_element_92 = module_var_accessor_annotated_types$_StrType(tstate);
assert(!(tmp_tuple_element_92 == NULL));
tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_64;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_136;
PyTuple_SET_ITEM0(tmp_subscript_value_38, 0, tmp_tuple_element_92);
tmp_called_value_64 = module_var_accessor_annotated_types$Predicate(tstate);
if (unlikely(tmp_called_value_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Predicate);
}

if (tmp_called_value_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 368;

    goto tuple_build_exception_27;
}
tmp_expression_value_136 = (PyObject *)&PyUnicode_Type;
tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts.const_str_plain_islower);
assert(!(tmp_args_element_value_17 == NULL));
frame_frame_annotated_types->m_frame.f_lineno = 368;
tmp_tuple_element_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_17);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_tuple_element_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;

    goto tuple_build_exception_27;
}
PyTuple_SET_ITEM(tmp_subscript_value_38, 1, tmp_tuple_element_92);
}
goto tuple_build_no_exception_27;
// Exception handling pass through code for tuple_build:
tuple_build_exception_27:;
Py_DECREF(tmp_subscript_value_38);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_27:;
tmp_assign_source_194 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_135, tmp_subscript_value_38);
CHECK_OBJECT(tmp_subscript_value_38);
Py_DECREF(tmp_subscript_value_38);
if (tmp_assign_source_194 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_LowerCase, tmp_assign_source_194);
}
{
PyObject *tmp_assign_source_195;
PyObject *tmp_expression_value_137;
PyObject *tmp_subscript_value_39;
PyObject *tmp_tuple_element_93;
tmp_expression_value_137 = module_var_accessor_annotated_types$Annotated(tstate);
if (unlikely(tmp_expression_value_137 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_137 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 374;

    goto frame_exception_exit_1;
}
tmp_tuple_element_93 = module_var_accessor_annotated_types$_StrType(tstate);
if (unlikely(tmp_tuple_element_93 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__StrType);
}

if (tmp_tuple_element_93 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 374;

    goto frame_exception_exit_1;
}
tmp_subscript_value_39 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_65;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_138;
PyTuple_SET_ITEM0(tmp_subscript_value_39, 0, tmp_tuple_element_93);
tmp_called_value_65 = module_var_accessor_annotated_types$Predicate(tstate);
if (unlikely(tmp_called_value_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Predicate);
}

if (tmp_called_value_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 374;

    goto tuple_build_exception_28;
}
tmp_expression_value_138 = (PyObject *)&PyUnicode_Type;
tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts.const_str_plain_isupper);
assert(!(tmp_args_element_value_18 == NULL));
frame_frame_annotated_types->m_frame.f_lineno = 374;
tmp_tuple_element_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_65, tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_tuple_element_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;

    goto tuple_build_exception_28;
}
PyTuple_SET_ITEM(tmp_subscript_value_39, 1, tmp_tuple_element_93);
}
goto tuple_build_no_exception_28;
// Exception handling pass through code for tuple_build:
tuple_build_exception_28:;
Py_DECREF(tmp_subscript_value_39);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_28:;
tmp_assign_source_195 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_137, tmp_subscript_value_39);
CHECK_OBJECT(tmp_subscript_value_39);
Py_DECREF(tmp_subscript_value_39);
if (tmp_assign_source_195 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_UpperCase, tmp_assign_source_195);
}
{
PyObject *tmp_assign_source_196;
PyObject *tmp_expression_value_139;
PyObject *tmp_subscript_value_40;
PyObject *tmp_tuple_element_94;
tmp_expression_value_139 = module_var_accessor_annotated_types$Annotated(tstate);
if (unlikely(tmp_expression_value_139 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_139 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;

    goto frame_exception_exit_1;
}
tmp_tuple_element_94 = module_var_accessor_annotated_types$_StrType(tstate);
if (unlikely(tmp_tuple_element_94 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__StrType);
}

if (tmp_tuple_element_94 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;

    goto frame_exception_exit_1;
}
tmp_subscript_value_40 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_66;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_140;
PyTuple_SET_ITEM0(tmp_subscript_value_40, 0, tmp_tuple_element_94);
tmp_called_value_66 = module_var_accessor_annotated_types$Predicate(tstate);
if (unlikely(tmp_called_value_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Predicate);
}

if (tmp_called_value_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;

    goto tuple_build_exception_29;
}
tmp_expression_value_140 = (PyObject *)&PyUnicode_Type;
tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts.const_str_plain_isdigit);
assert(!(tmp_args_element_value_19 == NULL));
frame_frame_annotated_types->m_frame.f_lineno = 380;
tmp_tuple_element_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_19);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_tuple_element_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;

    goto tuple_build_exception_29;
}
PyTuple_SET_ITEM(tmp_subscript_value_40, 1, tmp_tuple_element_94);
}
goto tuple_build_no_exception_29;
// Exception handling pass through code for tuple_build:
tuple_build_exception_29:;
Py_DECREF(tmp_subscript_value_40);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_29:;
tmp_assign_source_196 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_139, tmp_subscript_value_40);
CHECK_OBJECT(tmp_subscript_value_40);
Py_DECREF(tmp_subscript_value_40);
if (tmp_assign_source_196 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IsDigit, tmp_assign_source_196);
}
{
PyObject *tmp_assign_source_197;
tmp_assign_source_197 = module_var_accessor_annotated_types$IsDigit(tstate);
assert(!(tmp_assign_source_197 == NULL));
UPDATE_STRING_DICT0(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IsDigits, tmp_assign_source_197);
}
{
PyObject *tmp_assign_source_198;
PyObject *tmp_expression_value_141;
PyObject *tmp_subscript_value_41;
PyObject *tmp_tuple_element_95;
tmp_expression_value_141 = module_var_accessor_annotated_types$Annotated(tstate);
if (unlikely(tmp_expression_value_141 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_141 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;

    goto frame_exception_exit_1;
}
tmp_tuple_element_95 = module_var_accessor_annotated_types$_StrType(tstate);
if (unlikely(tmp_tuple_element_95 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__StrType);
}

if (tmp_tuple_element_95 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;

    goto frame_exception_exit_1;
}
tmp_subscript_value_41 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_67;
PyObject *tmp_args_element_value_20;
PyObject *tmp_expression_value_142;
PyTuple_SET_ITEM0(tmp_subscript_value_41, 0, tmp_tuple_element_95);
tmp_called_value_67 = module_var_accessor_annotated_types$Predicate(tstate);
if (unlikely(tmp_called_value_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Predicate);
}

if (tmp_called_value_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;

    goto tuple_build_exception_30;
}
tmp_expression_value_142 = (PyObject *)&PyUnicode_Type;
tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts.const_str_plain_isascii);
assert(!(tmp_args_element_value_20 == NULL));
frame_frame_annotated_types->m_frame.f_lineno = 387;
tmp_tuple_element_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_20);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_tuple_element_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto tuple_build_exception_30;
}
PyTuple_SET_ITEM(tmp_subscript_value_41, 1, tmp_tuple_element_95);
}
goto tuple_build_no_exception_30;
// Exception handling pass through code for tuple_build:
tuple_build_exception_30:;
Py_DECREF(tmp_subscript_value_41);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_30:;
tmp_assign_source_198 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_141, tmp_subscript_value_41);
CHECK_OBJECT(tmp_subscript_value_41);
Py_DECREF(tmp_subscript_value_41);
if (tmp_assign_source_198 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IsAscii, tmp_assign_source_198);
}
{
PyObject *tmp_assign_source_199;
PyObject *tmp_called_value_68;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_143;
PyObject *tmp_subscript_value_42;
PyObject *tmp_tuple_element_96;
tmp_called_value_68 = module_var_accessor_annotated_types$TypeVar(tstate);
if (unlikely(tmp_called_value_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 394;

    goto frame_exception_exit_1;
}
tmp_expression_value_143 = module_var_accessor_annotated_types$Union(tstate);
if (unlikely(tmp_expression_value_143 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_143 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 394;

    goto frame_exception_exit_1;
}
tmp_tuple_element_96 = module_var_accessor_annotated_types$SupportsFloat(tstate);
if (unlikely(tmp_tuple_element_96 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SupportsFloat);
}

if (tmp_tuple_element_96 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 394;

    goto frame_exception_exit_1;
}
tmp_subscript_value_42 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_42, 0, tmp_tuple_element_96);
tmp_tuple_element_96 = module_var_accessor_annotated_types$SupportsIndex(tstate);
if (unlikely(tmp_tuple_element_96 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SupportsIndex);
}

if (tmp_tuple_element_96 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 394;

    goto tuple_build_exception_31;
}
PyTuple_SET_ITEM0(tmp_subscript_value_42, 1, tmp_tuple_element_96);
goto tuple_build_no_exception_31;
// Exception handling pass through code for tuple_build:
tuple_build_exception_31:;
Py_DECREF(tmp_subscript_value_42);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_31:;
tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_143, tmp_subscript_value_42);
CHECK_OBJECT(tmp_subscript_value_42);
Py_DECREF(tmp_subscript_value_42);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;

    goto frame_exception_exit_1;
}
frame_frame_annotated_types->m_frame.f_lineno = 394;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
    tmp_assign_source_199 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_68, mod_consts.const_tuple_str_plain__NumericType_tuple, kw_values, mod_consts.const_tuple_str_plain_bound_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_199 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain__NumericType, tmp_assign_source_199);
}
{
PyObject *tmp_assign_source_200;
PyObject *tmp_expression_value_144;
PyObject *tmp_subscript_value_43;
PyObject *tmp_tuple_element_97;
tmp_expression_value_144 = module_var_accessor_annotated_types$Annotated(tstate);
if (unlikely(tmp_expression_value_144 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_144 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 395;

    goto frame_exception_exit_1;
}
tmp_tuple_element_97 = module_var_accessor_annotated_types$_NumericType(tstate);
assert(!(tmp_tuple_element_97 == NULL));
tmp_subscript_value_43 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_69;
PyObject *tmp_args_element_value_21;
PyObject *tmp_expression_value_145;
PyTuple_SET_ITEM0(tmp_subscript_value_43, 0, tmp_tuple_element_97);
tmp_called_value_69 = module_var_accessor_annotated_types$Predicate(tstate);
if (unlikely(tmp_called_value_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Predicate);
}

if (tmp_called_value_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 395;

    goto tuple_build_exception_32;
}
tmp_expression_value_145 = module_var_accessor_annotated_types$math(tstate);
if (unlikely(tmp_expression_value_145 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_145 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 395;

    goto tuple_build_exception_32;
}
tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts.const_str_plain_isfinite);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;

    goto tuple_build_exception_32;
}
frame_frame_annotated_types->m_frame.f_lineno = 395;
tmp_tuple_element_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_69, tmp_args_element_value_21);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_tuple_element_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;

    goto tuple_build_exception_32;
}
PyTuple_SET_ITEM(tmp_subscript_value_43, 1, tmp_tuple_element_97);
}
goto tuple_build_no_exception_32;
// Exception handling pass through code for tuple_build:
tuple_build_exception_32:;
Py_DECREF(tmp_subscript_value_43);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_32:;
tmp_assign_source_200 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_144, tmp_subscript_value_43);
CHECK_OBJECT(tmp_subscript_value_43);
Py_DECREF(tmp_subscript_value_43);
if (tmp_assign_source_200 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IsFinite, tmp_assign_source_200);
}
{
PyObject *tmp_assign_source_201;
PyObject *tmp_expression_value_146;
PyObject *tmp_subscript_value_44;
PyObject *tmp_tuple_element_98;
tmp_expression_value_146 = module_var_accessor_annotated_types$Annotated(tstate);
if (unlikely(tmp_expression_value_146 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_146 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 397;

    goto frame_exception_exit_1;
}
tmp_tuple_element_98 = module_var_accessor_annotated_types$_NumericType(tstate);
if (unlikely(tmp_tuple_element_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NumericType);
}

if (tmp_tuple_element_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 397;

    goto frame_exception_exit_1;
}
tmp_subscript_value_44 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_70;
PyObject *tmp_args_element_value_22;
PyObject *tmp_called_value_71;
PyObject *tmp_args_element_value_23;
PyObject *tmp_expression_value_147;
PyTuple_SET_ITEM0(tmp_subscript_value_44, 0, tmp_tuple_element_98);
tmp_called_value_70 = module_var_accessor_annotated_types$Predicate(tstate);
if (unlikely(tmp_called_value_70 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Predicate);
}

if (tmp_called_value_70 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 397;

    goto tuple_build_exception_33;
}
tmp_called_value_71 = module_var_accessor_annotated_types$Not(tstate);
if (unlikely(tmp_called_value_71 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Not);
}

if (tmp_called_value_71 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 397;

    goto tuple_build_exception_33;
}
tmp_expression_value_147 = module_var_accessor_annotated_types$math(tstate);
if (unlikely(tmp_expression_value_147 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_147 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 397;

    goto tuple_build_exception_33;
}
tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts.const_str_plain_isfinite);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto tuple_build_exception_33;
}
frame_frame_annotated_types->m_frame.f_lineno = 397;
tmp_args_element_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_23);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto tuple_build_exception_33;
}
frame_frame_annotated_types->m_frame.f_lineno = 397;
tmp_tuple_element_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_22);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_tuple_element_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto tuple_build_exception_33;
}
PyTuple_SET_ITEM(tmp_subscript_value_44, 1, tmp_tuple_element_98);
}
goto tuple_build_no_exception_33;
// Exception handling pass through code for tuple_build:
tuple_build_exception_33:;
Py_DECREF(tmp_subscript_value_44);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_33:;
tmp_assign_source_201 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_146, tmp_subscript_value_44);
CHECK_OBJECT(tmp_subscript_value_44);
Py_DECREF(tmp_subscript_value_44);
if (tmp_assign_source_201 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IsNotFinite, tmp_assign_source_201);
}
{
PyObject *tmp_assign_source_202;
PyObject *tmp_expression_value_148;
PyObject *tmp_subscript_value_45;
PyObject *tmp_tuple_element_99;
tmp_expression_value_148 = module_var_accessor_annotated_types$Annotated(tstate);
if (unlikely(tmp_expression_value_148 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_148 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 399;

    goto frame_exception_exit_1;
}
tmp_tuple_element_99 = module_var_accessor_annotated_types$_NumericType(tstate);
if (unlikely(tmp_tuple_element_99 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NumericType);
}

if (tmp_tuple_element_99 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 399;

    goto frame_exception_exit_1;
}
tmp_subscript_value_45 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_72;
PyObject *tmp_args_element_value_24;
PyObject *tmp_expression_value_149;
PyTuple_SET_ITEM0(tmp_subscript_value_45, 0, tmp_tuple_element_99);
tmp_called_value_72 = module_var_accessor_annotated_types$Predicate(tstate);
if (unlikely(tmp_called_value_72 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Predicate);
}

if (tmp_called_value_72 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 399;

    goto tuple_build_exception_34;
}
tmp_expression_value_149 = module_var_accessor_annotated_types$math(tstate);
if (unlikely(tmp_expression_value_149 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_149 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 399;

    goto tuple_build_exception_34;
}
tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts.const_str_plain_isnan);
if (tmp_args_element_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;

    goto tuple_build_exception_34;
}
frame_frame_annotated_types->m_frame.f_lineno = 399;
tmp_tuple_element_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_24);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_tuple_element_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;

    goto tuple_build_exception_34;
}
PyTuple_SET_ITEM(tmp_subscript_value_45, 1, tmp_tuple_element_99);
}
goto tuple_build_no_exception_34;
// Exception handling pass through code for tuple_build:
tuple_build_exception_34:;
Py_DECREF(tmp_subscript_value_45);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_34:;
tmp_assign_source_202 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_148, tmp_subscript_value_45);
CHECK_OBJECT(tmp_subscript_value_45);
Py_DECREF(tmp_subscript_value_45);
if (tmp_assign_source_202 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IsNan, tmp_assign_source_202);
}
{
PyObject *tmp_assign_source_203;
PyObject *tmp_expression_value_150;
PyObject *tmp_subscript_value_46;
PyObject *tmp_tuple_element_100;
tmp_expression_value_150 = module_var_accessor_annotated_types$Annotated(tstate);
if (unlikely(tmp_expression_value_150 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_150 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 401;

    goto frame_exception_exit_1;
}
tmp_tuple_element_100 = module_var_accessor_annotated_types$_NumericType(tstate);
if (unlikely(tmp_tuple_element_100 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NumericType);
}

if (tmp_tuple_element_100 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 401;

    goto frame_exception_exit_1;
}
tmp_subscript_value_46 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_73;
PyObject *tmp_args_element_value_25;
PyObject *tmp_called_value_74;
PyObject *tmp_args_element_value_26;
PyObject *tmp_expression_value_151;
PyTuple_SET_ITEM0(tmp_subscript_value_46, 0, tmp_tuple_element_100);
tmp_called_value_73 = module_var_accessor_annotated_types$Predicate(tstate);
if (unlikely(tmp_called_value_73 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Predicate);
}

if (tmp_called_value_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 401;

    goto tuple_build_exception_35;
}
tmp_called_value_74 = module_var_accessor_annotated_types$Not(tstate);
if (unlikely(tmp_called_value_74 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Not);
}

if (tmp_called_value_74 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 401;

    goto tuple_build_exception_35;
}
tmp_expression_value_151 = module_var_accessor_annotated_types$math(tstate);
if (unlikely(tmp_expression_value_151 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_151 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 401;

    goto tuple_build_exception_35;
}
tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts.const_str_plain_isnan);
if (tmp_args_element_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;

    goto tuple_build_exception_35;
}
frame_frame_annotated_types->m_frame.f_lineno = 401;
tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_74, tmp_args_element_value_26);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;

    goto tuple_build_exception_35;
}
frame_frame_annotated_types->m_frame.f_lineno = 401;
tmp_tuple_element_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_25);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_tuple_element_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;

    goto tuple_build_exception_35;
}
PyTuple_SET_ITEM(tmp_subscript_value_46, 1, tmp_tuple_element_100);
}
goto tuple_build_no_exception_35;
// Exception handling pass through code for tuple_build:
tuple_build_exception_35:;
Py_DECREF(tmp_subscript_value_46);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_35:;
tmp_assign_source_203 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_150, tmp_subscript_value_46);
CHECK_OBJECT(tmp_subscript_value_46);
Py_DECREF(tmp_subscript_value_46);
if (tmp_assign_source_203 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IsNotNan, tmp_assign_source_203);
}
{
PyObject *tmp_assign_source_204;
PyObject *tmp_expression_value_152;
PyObject *tmp_subscript_value_47;
PyObject *tmp_tuple_element_101;
tmp_expression_value_152 = module_var_accessor_annotated_types$Annotated(tstate);
if (unlikely(tmp_expression_value_152 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_152 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 403;

    goto frame_exception_exit_1;
}
tmp_tuple_element_101 = module_var_accessor_annotated_types$_NumericType(tstate);
if (unlikely(tmp_tuple_element_101 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NumericType);
}

if (tmp_tuple_element_101 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 403;

    goto frame_exception_exit_1;
}
tmp_subscript_value_47 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_75;
PyObject *tmp_args_element_value_27;
PyObject *tmp_expression_value_153;
PyTuple_SET_ITEM0(tmp_subscript_value_47, 0, tmp_tuple_element_101);
tmp_called_value_75 = module_var_accessor_annotated_types$Predicate(tstate);
if (unlikely(tmp_called_value_75 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Predicate);
}

if (tmp_called_value_75 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 403;

    goto tuple_build_exception_36;
}
tmp_expression_value_153 = module_var_accessor_annotated_types$math(tstate);
if (unlikely(tmp_expression_value_153 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_153 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 403;

    goto tuple_build_exception_36;
}
tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts.const_str_plain_isinf);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;

    goto tuple_build_exception_36;
}
frame_frame_annotated_types->m_frame.f_lineno = 403;
tmp_tuple_element_101 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_75, tmp_args_element_value_27);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_tuple_element_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;

    goto tuple_build_exception_36;
}
PyTuple_SET_ITEM(tmp_subscript_value_47, 1, tmp_tuple_element_101);
}
goto tuple_build_no_exception_36;
// Exception handling pass through code for tuple_build:
tuple_build_exception_36:;
Py_DECREF(tmp_subscript_value_47);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_36:;
tmp_assign_source_204 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_152, tmp_subscript_value_47);
CHECK_OBJECT(tmp_subscript_value_47);
Py_DECREF(tmp_subscript_value_47);
if (tmp_assign_source_204 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IsInfinite, tmp_assign_source_204);
}
{
PyObject *tmp_assign_source_205;
PyObject *tmp_expression_value_154;
PyObject *tmp_subscript_value_48;
PyObject *tmp_tuple_element_102;
tmp_expression_value_154 = module_var_accessor_annotated_types$Annotated(tstate);
if (unlikely(tmp_expression_value_154 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_154 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 405;

    goto frame_exception_exit_1;
}
tmp_tuple_element_102 = module_var_accessor_annotated_types$_NumericType(tstate);
if (unlikely(tmp_tuple_element_102 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NumericType);
}

if (tmp_tuple_element_102 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 405;

    goto frame_exception_exit_1;
}
tmp_subscript_value_48 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_76;
PyObject *tmp_args_element_value_28;
PyObject *tmp_called_value_77;
PyObject *tmp_args_element_value_29;
PyObject *tmp_expression_value_155;
PyTuple_SET_ITEM0(tmp_subscript_value_48, 0, tmp_tuple_element_102);
tmp_called_value_76 = module_var_accessor_annotated_types$Predicate(tstate);
if (unlikely(tmp_called_value_76 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Predicate);
}

if (tmp_called_value_76 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 405;

    goto tuple_build_exception_37;
}
tmp_called_value_77 = module_var_accessor_annotated_types$Not(tstate);
if (unlikely(tmp_called_value_77 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Not);
}

if (tmp_called_value_77 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 405;

    goto tuple_build_exception_37;
}
tmp_expression_value_155 = module_var_accessor_annotated_types$math(tstate);
if (unlikely(tmp_expression_value_155 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_155 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 405;

    goto tuple_build_exception_37;
}
tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts.const_str_plain_isinf);
if (tmp_args_element_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;

    goto tuple_build_exception_37;
}
frame_frame_annotated_types->m_frame.f_lineno = 405;
tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_77, tmp_args_element_value_29);
CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_args_element_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;

    goto tuple_build_exception_37;
}
frame_frame_annotated_types->m_frame.f_lineno = 405;
tmp_tuple_element_102 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_28);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_tuple_element_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;

    goto tuple_build_exception_37;
}
PyTuple_SET_ITEM(tmp_subscript_value_48, 1, tmp_tuple_element_102);
}
goto tuple_build_no_exception_37;
// Exception handling pass through code for tuple_build:
tuple_build_exception_37:;
Py_DECREF(tmp_subscript_value_48);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_37:;
tmp_assign_source_205 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_154, tmp_subscript_value_48);
CHECK_OBJECT(tmp_subscript_value_48);
Py_DECREF(tmp_subscript_value_48);
if (tmp_assign_source_205 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_IsNotInfinite, tmp_assign_source_205);
}
// Tried code:
{
PyObject *tmp_assign_source_206;
PyObject *tmp_name_value_23;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_23 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_4 = (PyObject *)moduledict_annotated_types;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_DocInfo_str_plain_doc_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_annotated_types->m_frame.f_lineno = 409;
tmp_assign_source_206 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_206 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_68;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_206;
}
// Tried code:
{
PyObject *tmp_assign_source_207;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_16 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_207 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_DocInfo,
        const_int_0
    );
} else {
    tmp_assign_source_207 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_DocInfo);
}

if (tmp_assign_source_207 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_69;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_DocInfo, tmp_assign_source_207);
}
{
PyObject *tmp_assign_source_208;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_17 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_208 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_annotated_types,
        mod_consts.const_str_plain_doc,
        const_int_0
    );
} else {
    tmp_assign_source_208 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_doc);
}

if (tmp_assign_source_208 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto try_except_handler_69;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_doc, tmp_assign_source_208);
}
goto try_end_25;
// Exception handler code:
try_except_handler_69:;
exception_keeper_lineno_68 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_68 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_68;
exception_lineno = exception_keeper_lineno_68;

goto try_except_handler_68;
// End of try:
try_end_25:;
CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
goto try_end_26;
// Exception handler code:
try_except_handler_68:;
exception_keeper_lineno_69 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_69 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_69);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types, exception_keeper_lineno_69);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_69, exception_tb);
    } else if (exception_keeper_lineno_69 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types, exception_keeper_lineno_69);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_69, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_69);
// Tried code:
{
bool tmp_condition_result_78;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
tmp_cmp_expr_left_20 = EXC_TYPE(tstate);
tmp_cmp_expr_right_20 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
assert(!(tmp_res == -1));
tmp_condition_result_78 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_78 != false) {
    goto branch_yes_59;
} else {
    goto branch_no_59;
}
}
branch_yes_59:;
{
PyObject *tmp_outline_return_value_22;
{
PyObject *tmp_assign_source_209;
tmp_assign_source_209 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_22__class_decl_dict == NULL);
tmp_class_container$class_creation_22__class_decl_dict = tmp_assign_source_209;
}
{
PyObject *tmp_assign_source_210;
tmp_assign_source_210 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_22__prepared == NULL);
tmp_class_container$class_creation_22__prepared = tmp_assign_source_210;
}
// Tried code:
{
PyObject *tmp_assign_source_211;
PyObject *tmp_called_value_78;
PyObject *tmp_direct_call_arg1_33;
PyObject *tmp_direct_call_arg2_14;
PyObject *tmp_direct_call_arg3_12;
PyObject *tmp_args_element_value_30;
tmp_direct_call_arg1_33 = module_var_accessor_annotated_types$dataclass(tstate);
if (unlikely(tmp_direct_call_arg1_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_direct_call_arg1_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 412;

    goto try_except_handler_71;
}
tmp_direct_call_arg2_14 = DICT_COPY(tstate, mod_consts.const_dict_54ae5179e58d1517b6feece5278cd537);
tmp_direct_call_arg3_12 = module_var_accessor_annotated_types$SLOTS(tstate);
if (unlikely(tmp_direct_call_arg3_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SLOTS);
}

if (tmp_direct_call_arg3_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg2_14);

exception_lineno = 412;

    goto try_except_handler_71;
}
Py_INCREF(tmp_direct_call_arg1_33);
Py_INCREF(tmp_direct_call_arg3_12);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_33, tmp_direct_call_arg2_14, tmp_direct_call_arg3_12};
    tmp_called_value_78 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_called_value_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;

    goto try_except_handler_71;
}
{
PyObject *tmp_set_locals_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_set_locals_22 = tmp_class_container$class_creation_22__prepared;
locals_annotated_types$$$class__22_DocInfo_413 = tmp_set_locals_22;
Py_INCREF(tmp_set_locals_22);
}
tmp_dictset_value = mod_consts.const_str_plain_annotated_types;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__22_DocInfo_413, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_6da0f61bc678a181fb3ed8156885268a;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__22_DocInfo_413, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_DocInfo;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__22_DocInfo_413, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_413;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__22_DocInfo_413, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__22_DocInfo_413, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_annotated_types$$$class__22_DocInfo_22 = MAKE_CLASS_FRAME(tstate, code_objects_4dcd0cbf627f70ec0afa90bcbe4c28f1, module_annotated_types, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_annotated_types$$$class__22_DocInfo_22);
assert(Py_REFCNT(frame_frame_annotated_types$$$class__22_DocInfo_22) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_18;
PyObject *tmp_ass_subscribed_18;
PyObject *tmp_ass_subscript_18;
tmp_ass_subvalue_18 = (PyObject *)&PyUnicode_Type;
tmp_ass_subscribed_18 = DICT_GET_ITEM0(tstate, locals_annotated_types$$$class__22_DocInfo_413, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 419;
type_description_2 = "o";
    goto frame_exception_exit_22;
}

if (tmp_ass_subscribed_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_2 = "o";
    goto frame_exception_exit_22;
}
tmp_ass_subscript_18 = mod_consts.const_str_plain_documentation;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_2 = "o";
    goto frame_exception_exit_22;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_21;
frame_exception_exit_22:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types$$$class__22_DocInfo_22, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types$$$class__22_DocInfo_22->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types$$$class__22_DocInfo_22, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_annotated_types$$$class__22_DocInfo_22,
    type_description_2,
    outline_21_var___class__
);



assertFrameObject(frame_frame_annotated_types$$$class__22_DocInfo_22);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_21;
frame_no_exception_21:;
goto skip_nested_handling_21;
nested_frame_exit_21:;

goto try_except_handler_73;
skip_nested_handling_21:;
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_annotated_types$$$class__22_DocInfo_413, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_212;
PyObject *tmp_called_value_79;
PyObject *tmp_args_value_41;
PyObject *tmp_tuple_element_103;
PyObject *tmp_kwargs_value_41;
tmp_called_value_79 = (PyObject *)&PyType_Type;
tmp_tuple_element_103 = mod_consts.const_str_plain_DocInfo;
tmp_args_value_41 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_103);
tmp_tuple_element_103 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_103);
tmp_tuple_element_103 = locals_annotated_types$$$class__22_DocInfo_413;
PyTuple_SET_ITEM0(tmp_args_value_41, 2, tmp_tuple_element_103);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
tmp_kwargs_value_41 = tmp_class_container$class_creation_22__class_decl_dict;
frame_frame_annotated_types->m_frame.f_lineno = 413;
tmp_assign_source_212 = CALL_FUNCTION(tstate, tmp_called_value_79, tmp_args_value_41, tmp_kwargs_value_41);
CHECK_OBJECT(tmp_args_value_41);
Py_DECREF(tmp_args_value_41);
if (tmp_assign_source_212 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;

    goto try_except_handler_73;
}
assert(outline_21_var___class__ == NULL);
outline_21_var___class__ = tmp_assign_source_212;
}
CHECK_OBJECT(outline_21_var___class__);
tmp_args_element_value_30 = outline_21_var___class__;
Py_INCREF(tmp_args_element_value_30);
goto try_return_handler_73;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_73:;
Py_DECREF(locals_annotated_types$$$class__22_DocInfo_413);
locals_annotated_types$$$class__22_DocInfo_413 = NULL;
goto try_return_handler_72;
// Exception handler code:
try_except_handler_73:;
exception_keeper_lineno_70 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_70 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_annotated_types$$$class__22_DocInfo_413);
locals_annotated_types$$$class__22_DocInfo_413 = NULL;
// Re-raise.
exception_state = exception_keeper_name_70;
exception_lineno = exception_keeper_lineno_70;

goto try_except_handler_72;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_72:;
CHECK_OBJECT(outline_21_var___class__);
CHECK_OBJECT(outline_21_var___class__);
Py_DECREF(outline_21_var___class__);
outline_21_var___class__ = NULL;
goto outline_result_45;
// Exception handler code:
try_except_handler_72:;
exception_keeper_lineno_71 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_71 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_71;
exception_lineno = exception_keeper_lineno_71;

goto outline_exception_22;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_22:;
exception_lineno = 413;
goto try_except_handler_71;
outline_result_45:;
frame_frame_annotated_types->m_frame.f_lineno = 412;
tmp_assign_source_211 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_78, tmp_args_element_value_30);
CHECK_OBJECT(tmp_called_value_78);
Py_DECREF(tmp_called_value_78);
CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_assign_source_211 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;

    goto try_except_handler_71;
}
UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_DocInfo, tmp_assign_source_211);
}
goto try_end_27;
// Exception handler code:
try_except_handler_71:;
exception_keeper_lineno_72 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_72 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_22__class_decl_dict);
tmp_class_container$class_creation_22__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
Py_DECREF(tmp_class_container$class_creation_22__prepared);
tmp_class_container$class_creation_22__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_72;
exception_lineno = exception_keeper_lineno_72;

goto try_except_handler_70;
// End of try:
try_end_27:;
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_22__class_decl_dict);
tmp_class_container$class_creation_22__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
Py_DECREF(tmp_class_container$class_creation_22__prepared);
tmp_class_container$class_creation_22__prepared = NULL;
tmp_outline_return_value_22 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_22);
goto outline_result_44;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_44:;
CHECK_OBJECT(tmp_outline_return_value_22);
Py_DECREF(tmp_outline_return_value_22);
}
{
PyObject *tmp_assign_source_213;
PyObject *tmp_annotations_15;
PyObject *tmp_dict_key_15;
PyObject *tmp_dict_value_15;
tmp_dict_key_15 = mod_consts.const_str_plain_documentation;
tmp_dict_value_15 = (PyObject *)&PyUnicode_Type;
tmp_annotations_15 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
assert(!(tmp_res != 0));
tmp_dict_key_15 = mod_consts.const_str_plain_return;
tmp_dict_value_15 = module_var_accessor_annotated_types$DocInfo(tstate);
assert(!(tmp_dict_value_15 == NULL));
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
assert(!(tmp_res != 0));

tmp_assign_source_213 = MAKE_FUNCTION_annotated_types$$$function__15_doc(tstate, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_doc, tmp_assign_source_213);
}
goto branch_end_59;
branch_no_59:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 408;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_annotated_types->m_frame)) {
        frame_frame_annotated_types->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_70;
branch_end_59:;
goto try_end_28;
// Exception handler code:
try_except_handler_70:;
exception_keeper_lineno_73 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_73 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_73;
exception_lineno = exception_keeper_lineno_73;

goto frame_exception_exit_1;
// End of try:
try_end_28:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_26;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_26:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_22;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_annotated_types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_annotated_types->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_annotated_types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_annotated_types);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_22:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("annotated_types", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "annotated_types" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_annotated_types);
    return module_annotated_types;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_annotated_types, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("annotated_types", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'pyasn1$codec$cer$encoder'
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



/* The "module_pyasn1$codec$cer$encoder" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$codec$cer$encoder;
PyDictObject *moduledict_pyasn1$codec$cer$encoder;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_tuple_int_0_tuple;
PyObject *const_tuple_int_pos_255_tuple;
PyObject *const_str_plain__dropFloatingPoint;
PyObject *const_str_plain_clone;
PyObject *const_str_plain_asNumbers;
PyObject *const_str_plain_PLUS_CHAR;
PyObject *const_str_plain_MINUS_CHAR;
PyObject *const_str_plain_error;
PyObject *const_str_plain_PyAsn1Error;
PyObject *const_str_digest_19fe853cab7f39edb3062603d9ffa90d;
PyObject *const_str_plain_Z_CHAR;
PyObject *const_str_digest_f84db2b3e8455fb2b959797c6b29806c;
PyObject *const_str_plain_COMMA_CHAR;
PyObject *const_str_digest_4b61e25eb3e6fd083748d0b7230ffc7b;
PyObject *const_str_plain_DOT_CHAR;
PyObject *const_str_plain_min;
PyObject *const_str_plain_numbers;
PyObject *const_str_plain_searchIndex;
PyObject *const_str_plain_self;
PyObject *const_str_plain_ZERO_CHAR;
PyObject *const_str_plain_isModified;
PyObject *const_str_plain_MIN_LENGTH;
PyObject *const_str_plain_MAX_LENGTH;
PyObject *const_str_digest_ba12f4d8091703d841ce97647c64ebaa;
PyObject *const_str_plain_value;
PyObject *const_str_plain_maxChunkSize;
PyObject *const_int_pos_1000;
PyObject *const_str_plain_encoder;
PyObject *const_str_plain_OctetStringEncoder;
PyObject *const_str_plain_encodeValue;
PyObject *const_str_plain__encodeComponents;
PyObject *const_bytes_null;
PyObject *const_str_plain_max;
PyObject *const_str_plain_ljust;
PyObject *const_str_plain_maxLen;
PyObject *const_str_plain_zero;
PyObject *const_str_plain_sort;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_86229657ebeffe0ecf9ec4c0cfdaffa8;
PyObject *const_tuple_str_plain_key_tuple;
PyObject *const_str_plain_chunks;
PyObject *const_str_plain_ifNotEmpty;
PyObject *const_tuple_bytes_empty_true_true_tuple;
PyObject *const_str_plain_typeId;
PyObject *const_str_plain_univ;
PyObject *const_str_plain_Choice;
PyObject *const_str_plain_tagSet;
PyObject *const_str_plain_componentType;
PyObject *const_str_plain_minTagSet;
PyObject *const_str_digest_f59a53012f9f2ee140e08ee78ddf2542;
PyObject *const_str_plain_isInconsistent;
PyObject *const_str_digest_3fad2f0c989a90eed77e609f4e3fb270;
PyObject *const_str_digest_b6f0c7ac98fb7a5b81d445d3d25ff806;
PyObject *const_str_plain_values;
PyObject *const_str_plain_isOptional;
PyObject *const_str_plain_isValue;
PyObject *const_str_plain_isDefaulted;
PyObject *const_str_plain_asn1Object;
PyObject *const_str_plain_compsMap;
PyObject *const_str_plain_comps;
PyObject *const_str_plain_asn1Spec;
PyObject *const_str_plain_namedTypes;
PyObject *const_str_digest_d3da2704c0459ae5b4ac0ce56db80c11;
PyObject *const_str_plain_sorted;
PyObject *const_str_plain__componentSortKey;
PyObject *const_str_plain_options;
PyObject *const_str_plain_encodeFun;
PyObject *const_str_plain_openType;
PyObject *const_str_plain_isSameTypeWith;
PyObject *const_str_plain_substrate;
PyObject *const_dict_69401dfa56abca18b3c4a0b0f5b2a0ad;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_f9ab74b06853a17a3727062304f85883;
PyObject *const_str_digest_ca8bacb4224d8bc4464d05d9b3a050ab;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_pyasn1;
PyObject *const_tuple_str_plain_error_tuple;
PyObject *const_str_digest_1503b6119cd6ba88e7612e541d27eba3;
PyObject *const_tuple_str_plain_encoder_tuple;
PyObject *const_str_digest_7c8c58049edd248f8b1cb370445e702c;
PyObject *const_tuple_str_plain_univ_tuple;
PyObject *const_tuple_str_plain_useful_tuple;
PyObject *const_str_plain_useful;
PyObject *const_str_plain_Encoder;
PyObject *const_str_plain_encode;
PyObject *const_str_plain_IntegerEncoder;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_BooleanEncoder;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_17;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_47e96fbdb7ce29f2a13ccac6b9601e71;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_RealEncoder;
PyObject *const_int_pos_26;
PyObject *const_str_plain__chooseEncBase;
PyObject *const_str_digest_e78bd2aeb7c7d6af72ae0205fec3ca32;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_plain_TimeEncoderMixIn;
PyObject *const_int_pos_34;
PyObject *const_str_plain_ord;
PyObject *const_tuple_str_plain_Z_tuple;
PyObject *const_tuple_str_chr_43_tuple;
PyObject *const_tuple_str_chr_45_tuple;
PyObject *const_tuple_str_chr_44_tuple;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_tuple_str_plain_0_tuple;
PyObject *const_int_pos_12;
PyObject *const_int_pos_19;
PyObject *const_str_digest_4c7127341aa20f0e8c4f8dfc5b9e017a;
PyObject *const_str_plain_GeneralizedTimeEncoder;
PyObject *const_int_pos_103;
PyObject *const_int_pos_20;
PyObject *const_str_plain_UTCTimeEncoder;
PyObject *const_int_pos_108;
PyObject *const_int_pos_10;
PyObject *const_int_pos_14;
PyObject *const_str_plain_SequenceOfEncoder;
PyObject *const_str_plain_SetOfEncoder;
PyObject *const_int_pos_113;
PyObject *const_str_digest_d7634e552d516b8de4e6126d0edbe41f;
PyObject *const_int_pos_132;
PyObject *const_str_digest_7a9b7848d7ad5a58475df9cb65303753;
PyObject *const_str_plain_SequenceEncoder;
PyObject *const_str_plain_SetEncoder;
PyObject *const_int_pos_144;
PyObject *const_str_digest_339682c9f90ab4eb0347ec2160c619ad;
PyObject *const_str_digest_bfaf690a2e40abebc140278673baccca;
PyObject *const_int_pos_235;
PyObject *const_str_plain_omitEmptyOptionals;
PyObject *const_str_plain_TAG_MAP;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_update;
PyObject *const_str_plain_Boolean;
PyObject *const_str_plain_Real;
PyObject *const_str_plain_GeneralizedTime;
PyObject *const_str_plain_UTCTime;
PyObject *const_str_plain_SetOf;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain_TYPE_MAP;
PyObject *const_str_plain_Set;
PyObject *const_str_plain_SequenceOf;
PyObject *const_str_plain_SingleItemEncoder;
PyObject *const_int_pos_266;
PyObject *const_str_plain_fixedDefLengthMode;
PyObject *const_str_plain_fixedChunkSize;
PyObject *const_int_pos_274;
PyObject *const_str_plain_SINGLE_ITEM_ENCODER;
PyObject *const_dict_3edf0aa3b0439812dfdd4b7ddb3e5c17;
PyObject *const_str_plain___getattr__;
PyObject *const_str_digest_3954e68891722a066ca805ef2b07983c;
PyObject *const_tuple_str_plain_x_tuple;
PyObject *const_str_digest_9c9eaf3ab497e9bdcc69e71fc40fb4e4;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_attr_str_plain_newAttr_tuple;
PyObject *const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple;
PyObject *const_tuple_b79ca9eb8741a0fa22572be833a5da75_tuple;
PyObject *const_tuple_ff6a7f90929fcd1ec4a6f62f969a8dd7_tuple;
PyObject *const_tuple_228fc95661c156d678e175c67514cfc5_tuple;
PyObject *const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple;
PyObject *const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple;
PyObject *const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[170];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pyasn1.codec.cer.encoder"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_255_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__dropFloatingPoint);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_clone);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_asNumbers);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_PLUS_CHAR);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_MINUS_CHAR);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_PyAsn1Error);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_19fe853cab7f39edb3062603d9ffa90d);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Z_CHAR);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_f84db2b3e8455fb2b959797c6b29806c);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_COMMA_CHAR);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b61e25eb3e6fd083748d0b7230ffc7b);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_DOT_CHAR);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_numbers);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_searchIndex);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_ZERO_CHAR);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_isModified);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_MIN_LENGTH);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_LENGTH);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba12f4d8091703d841ce97647c64ebaa);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_maxChunkSize);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_int_pos_1000);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_encoder);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_OctetStringEncoder);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_encodeValue);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__encodeComponents);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_bytes_null);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_ljust);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_maxLen);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_zero);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_sort);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_86229657ebeffe0ecf9ec4c0cfdaffa8);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunks);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_ifNotEmpty);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_empty_true_true_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_typeId);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_univ);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_Choice);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_tagSet);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_componentType);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_minTagSet);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_f59a53012f9f2ee140e08ee78ddf2542);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_isInconsistent);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fad2f0c989a90eed77e609f4e3fb270);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6f0c7ac98fb7a5b81d445d3d25ff806);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_isOptional);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_isValue);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_isDefaulted);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_asn1Object);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_compsMap);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_comps);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_asn1Spec);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_namedTypes);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3da2704c0459ae5b4ac0ce56db80c11);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_sorted);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__componentSortKey);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_options);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_encodeFun);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_openType);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_isSameTypeWith);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_substrate);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_dict_69401dfa56abca18b3c4a0b0f5b2a0ad);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9ab74b06853a17a3727062304f85883);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca8bacb4224d8bc4464d05d9b3a050ab);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_pyasn1);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_1503b6119cd6ba88e7612e541d27eba3);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoder_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_univ_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_useful_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_useful);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_Encoder);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_IntegerEncoder);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_BooleanEncoder);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6b8af7167af33ad6201188dc064ba6b);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_int_pos_17);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_47e96fbdb7ce29f2a13ccac6b9601e71);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_RealEncoder);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_int_pos_26);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain__chooseEncBase);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_e78bd2aeb7c7d6af72ae0205fec3ca32);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeEncoderMixIn);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_int_pos_34);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_ord);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Z_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_43_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_45_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_44_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_0_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_int_pos_12);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_int_pos_19);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c7127341aa20f0e8c4f8dfc5b9e017a);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_GeneralizedTimeEncoder);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_int_pos_103);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_int_pos_20);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_UTCTimeEncoder);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_pos_108);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_int_pos_14);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_SequenceOfEncoder);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetOfEncoder);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_int_pos_113);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7634e552d516b8de4e6126d0edbe41f);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_int_pos_132);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a9b7848d7ad5a58475df9cb65303753);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_SequenceEncoder);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetEncoder);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_int_pos_144);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_339682c9f90ab4eb0347ec2160c619ad);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfaf690a2e40abebc140278673baccca);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_int_pos_235);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_omitEmptyOptionals);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_TAG_MAP);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_Boolean);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_Real);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_GeneralizedTime);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_UTCTime);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetOf);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_MAP);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_Set);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_SequenceOf);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_SingleItemEncoder);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_int_pos_266);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_fixedDefLengthMode);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_fixedChunkSize);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_int_pos_274);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_SINGLE_ITEM_ENCODER);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_dict_3edf0aa3b0439812dfdd4b7ddb3e5c17);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_3954e68891722a066ca805ef2b07983c);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c9eaf3ab497e9bdcc69e71fc40fb4e4);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_attr_str_plain_newAttr_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_b79ca9eb8741a0fa22572be833a5da75_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_ff6a7f90929fcd1ec4a6f62f969a8dd7_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_228fc95661c156d678e175c67514cfc5_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple);
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
void checkModuleConstants_pyasn1$codec$cer$encoder(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_255_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_255_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__dropFloatingPoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dropFloatingPoint);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_clone));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clone);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_asNumbers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asNumbers);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_PLUS_CHAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PLUS_CHAR);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_MINUS_CHAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MINUS_CHAR);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_PyAsn1Error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PyAsn1Error);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_19fe853cab7f39edb3062603d9ffa90d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_19fe853cab7f39edb3062603d9ffa90d);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Z_CHAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Z_CHAR);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_f84db2b3e8455fb2b959797c6b29806c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f84db2b3e8455fb2b959797c6b29806c);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_COMMA_CHAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_COMMA_CHAR);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b61e25eb3e6fd083748d0b7230ffc7b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b61e25eb3e6fd083748d0b7230ffc7b);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_DOT_CHAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DOT_CHAR);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_numbers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numbers);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_searchIndex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_searchIndex);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_ZERO_CHAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ZERO_CHAR);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_isModified));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isModified);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_MIN_LENGTH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MIN_LENGTH);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_LENGTH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MAX_LENGTH);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba12f4d8091703d841ce97647c64ebaa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba12f4d8091703d841ce97647c64ebaa);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_maxChunkSize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maxChunkSize);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_int_pos_1000));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1000);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_encoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encoder);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_OctetStringEncoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OctetStringEncoder);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_encodeValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encodeValue);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__encodeComponents));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__encodeComponents);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_bytes_null));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_null);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_ljust));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ljust);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_maxLen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maxLen);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_zero));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_zero);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_sort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sort);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_86229657ebeffe0ecf9ec4c0cfdaffa8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86229657ebeffe0ecf9ec4c0cfdaffa8);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunks);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_ifNotEmpty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ifNotEmpty);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_empty_true_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_empty_true_true_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_typeId));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typeId);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_univ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_univ);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_Choice));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Choice);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_tagSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tagSet);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_componentType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_componentType);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_minTagSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_minTagSet);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_f59a53012f9f2ee140e08ee78ddf2542));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f59a53012f9f2ee140e08ee78ddf2542);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_isInconsistent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isInconsistent);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fad2f0c989a90eed77e609f4e3fb270));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fad2f0c989a90eed77e609f4e3fb270);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6f0c7ac98fb7a5b81d445d3d25ff806));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6f0c7ac98fb7a5b81d445d3d25ff806);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_isOptional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isOptional);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_isValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isValue);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_isDefaulted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isDefaulted);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_asn1Object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asn1Object);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_compsMap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compsMap);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_comps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_comps);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_asn1Spec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asn1Spec);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_namedTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_namedTypes);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3da2704c0459ae5b4ac0ce56db80c11));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d3da2704c0459ae5b4ac0ce56db80c11);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_sorted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sorted);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__componentSortKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__componentSortKey);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_options);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_encodeFun));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encodeFun);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_openType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_openType);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_isSameTypeWith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isSameTypeWith);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_substrate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_substrate);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_dict_69401dfa56abca18b3c4a0b0f5b2a0ad));
CHECK_OBJECT_DEEP(mod_consts.const_dict_69401dfa56abca18b3c4a0b0f5b2a0ad);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9ab74b06853a17a3727062304f85883));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9ab74b06853a17a3727062304f85883);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca8bacb4224d8bc4464d05d9b3a050ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca8bacb4224d8bc4464d05d9b3a050ab);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_pyasn1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pyasn1);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_error_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_1503b6119cd6ba88e7612e541d27eba3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1503b6119cd6ba88e7612e541d27eba3);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoder_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_encoder_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_univ_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_univ_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_useful_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_useful_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_useful));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_useful);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_Encoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Encoder);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_IntegerEncoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IntegerEncoder);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_BooleanEncoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BooleanEncoder);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6b8af7167af33ad6201188dc064ba6b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6b8af7167af33ad6201188dc064ba6b);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_int_pos_17));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_17);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_47e96fbdb7ce29f2a13ccac6b9601e71));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_47e96fbdb7ce29f2a13ccac6b9601e71);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_RealEncoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RealEncoder);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_int_pos_26));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_26);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain__chooseEncBase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__chooseEncBase);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_e78bd2aeb7c7d6af72ae0205fec3ca32));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e78bd2aeb7c7d6af72ae0205fec3ca32);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_object_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeEncoderMixIn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TimeEncoderMixIn);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_int_pos_34));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_34);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_ord));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ord);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Z_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Z_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_43_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_43_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_45_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_45_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_44_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_44_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_0_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_int_pos_12));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_12);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_int_pos_19));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_19);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c7127341aa20f0e8c4f8dfc5b9e017a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c7127341aa20f0e8c4f8dfc5b9e017a);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_GeneralizedTimeEncoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GeneralizedTimeEncoder);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_int_pos_103));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_103);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_int_pos_20));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_20);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_UTCTimeEncoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UTCTimeEncoder);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_pos_108));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_108);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_int_pos_10));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_10);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_int_pos_14));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_14);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_SequenceOfEncoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SequenceOfEncoder);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetOfEncoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SetOfEncoder);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_int_pos_113));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_113);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7634e552d516b8de4e6126d0edbe41f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d7634e552d516b8de4e6126d0edbe41f);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_int_pos_132));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_132);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a9b7848d7ad5a58475df9cb65303753));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a9b7848d7ad5a58475df9cb65303753);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_SequenceEncoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SequenceEncoder);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetEncoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SetEncoder);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_int_pos_144));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_144);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_339682c9f90ab4eb0347ec2160c619ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_339682c9f90ab4eb0347ec2160c619ad);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfaf690a2e40abebc140278673baccca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfaf690a2e40abebc140278673baccca);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_int_pos_235));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_235);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_omitEmptyOptionals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_omitEmptyOptionals);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_TAG_MAP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TAG_MAP);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_Boolean));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Boolean);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_Real));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Real);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_GeneralizedTime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GeneralizedTime);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_UTCTime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UTCTime);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetOf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SetOf);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_MAP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_MAP);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_Set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Set);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_SequenceOf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SequenceOf);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_SingleItemEncoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SingleItemEncoder);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_int_pos_266));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_266);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_fixedDefLengthMode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fixedDefLengthMode);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_fixedChunkSize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fixedChunkSize);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_int_pos_274));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_274);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_SINGLE_ITEM_ENCODER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SINGLE_ITEM_ENCODER);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_dict_3edf0aa3b0439812dfdd4b7ddb3e5c17));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3edf0aa3b0439812dfdd4b7ddb3e5c17);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getattr__);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_3954e68891722a066ca805ef2b07983c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3954e68891722a066ca805ef2b07983c);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c9eaf3ab497e9bdcc69e71fc40fb4e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c9eaf3ab497e9bdcc69e71fc40fb4e4);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_attr_str_plain_newAttr_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_attr_str_plain_newAttr_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_b79ca9eb8741a0fa22572be833a5da75_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b79ca9eb8741a0fa22572be833a5da75_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_ff6a7f90929fcd1ec4a6f62f969a8dd7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ff6a7f90929fcd1ec4a6f62f969a8dd7_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_228fc95661c156d678e175c67514cfc5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_228fc95661c156d678e175c67514cfc5_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 20
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
static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$BooleanEncoder(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_BooleanEncoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BooleanEncoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BooleanEncoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BooleanEncoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BooleanEncoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_BooleanEncoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_BooleanEncoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BooleanEncoder);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$Encoder(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_Encoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Encoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Encoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Encoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Encoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_Encoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_Encoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Encoder);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$GeneralizedTimeEncoder(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_GeneralizedTimeEncoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GeneralizedTimeEncoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GeneralizedTimeEncoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GeneralizedTimeEncoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GeneralizedTimeEncoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_GeneralizedTimeEncoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_GeneralizedTimeEncoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GeneralizedTimeEncoder);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$RealEncoder(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_RealEncoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RealEncoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RealEncoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RealEncoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RealEncoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_RealEncoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_RealEncoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RealEncoder);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$SequenceEncoder(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SequenceEncoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SequenceEncoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SequenceEncoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SequenceEncoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SequenceEncoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SequenceEncoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SequenceEncoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SequenceEncoder);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$SequenceOfEncoder(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SequenceOfEncoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SequenceOfEncoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SequenceOfEncoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SequenceOfEncoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SequenceOfEncoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SequenceOfEncoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SequenceOfEncoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SequenceOfEncoder);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$SetEncoder(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SetEncoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SetEncoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SetEncoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SetEncoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SetEncoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SetEncoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SetEncoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SetEncoder);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$SetOfEncoder(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SetOfEncoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SetOfEncoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SetOfEncoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SetOfEncoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SetOfEncoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SetOfEncoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SetOfEncoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SetOfEncoder);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$SingleItemEncoder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SingleItemEncoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SingleItemEncoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SingleItemEncoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SingleItemEncoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SingleItemEncoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SingleItemEncoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SingleItemEncoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SingleItemEncoder);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$TAG_MAP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_TAG_MAP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TAG_MAP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TAG_MAP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TAG_MAP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TAG_MAP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_TAG_MAP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_TAG_MAP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TAG_MAP);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$TYPE_MAP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_MAP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TYPE_MAP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TYPE_MAP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TYPE_MAP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TYPE_MAP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_MAP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_MAP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_MAP);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$TimeEncoderMixIn(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeEncoderMixIn);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TimeEncoderMixIn);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TimeEncoderMixIn, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TimeEncoderMixIn);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TimeEncoderMixIn, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeEncoderMixIn);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeEncoderMixIn);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeEncoderMixIn);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$UTCTimeEncoder(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_UTCTimeEncoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UTCTimeEncoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UTCTimeEncoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UTCTimeEncoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UTCTimeEncoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_UTCTimeEncoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_UTCTimeEncoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UTCTimeEncoder);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$encoder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_encoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_encoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_encoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_encoder);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$error(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_error);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$univ(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_univ);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_univ);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_univ, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_univ);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_univ, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_univ);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_univ);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_univ);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$useful(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_useful);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_useful);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_useful, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_useful);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_useful, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_useful);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_useful);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_useful);
    }

    return result;
}

static PyObject *module_var_accessor_pyasn1$codec$cer$encoder$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pyasn1$codec$cer$encoder->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pyasn1$codec$cer$encoder->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pyasn1$codec$cer$encoder->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_45adf3531f7ebec83e171f037e18d334;
static PyCodeObject *code_objects_fa4ebd911f981b45baf26d91feaaa7c7;
static PyCodeObject *code_objects_dc04efe43bc019f1c63fe3c8fd6b068e;
static PyCodeObject *code_objects_9e9c8a43bdcd64413c1f4bc6d0293062;
static PyCodeObject *code_objects_ef11a57a2ee0714ad590b401a0330c44;
static PyCodeObject *code_objects_0b153f3d479bea4c369916e1beb0c0ca;
static PyCodeObject *code_objects_7b76e05b4fe8d352477bce28fed6f5ab;
static PyCodeObject *code_objects_acabf5fb3a48f326810a0c1cbf43e011;
static PyCodeObject *code_objects_407a615d0a1482464f440937b69c468b;
static PyCodeObject *code_objects_608c11d90b10b5b6667ab5a5476e00b9;
static PyCodeObject *code_objects_025e084e26d4ca030dcc7d23acd8b288;
static PyCodeObject *code_objects_93da9d845fa77ca5d0c22a7693da4b9f;
static PyCodeObject *code_objects_26933e7efe25a34ad51e22b4290078d5;
static PyCodeObject *code_objects_8c0d37d8499666db5db7e4b054108375;
static PyCodeObject *code_objects_6df44717630fc37c991f6be151c7df4c;
static PyCodeObject *code_objects_5501021bb354b82531a3433476ea1d17;
static PyCodeObject *code_objects_6fba1a5a7cbd11444de087f588c9ce7f;
static PyCodeObject *code_objects_774014094d28c9a55bc5148d44e54175;
static PyCodeObject *code_objects_e70d5796863d79c459ec73a69eb84317;
static PyCodeObject *code_objects_db99d8b3698137ef21876e6b2fe65472;
static PyCodeObject *code_objects_e78236a93a345ff1d04bc76ab4de4fcd;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_3954e68891722a066ca805ef2b07983c); CHECK_OBJECT(module_filename_obj);
code_objects_45adf3531f7ebec83e171f037e18d334 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_86229657ebeffe0ecf9ec4c0cfdaffa8, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 0);
code_objects_fa4ebd911f981b45baf26d91feaaa7c7 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_9c9eaf3ab497e9bdcc69e71fc40fb4e4, mod_consts.const_str_digest_9c9eaf3ab497e9bdcc69e71fc40fb4e4, NULL, NULL, 0, 0, 0);
code_objects_dc04efe43bc019f1c63fe3c8fd6b068e = MAKE_CODE_OBJECT(module_filename_obj, 17, 0, mod_consts.const_str_plain_BooleanEncoder, mod_consts.const_str_plain_BooleanEncoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9e9c8a43bdcd64413c1f4bc6d0293062 = MAKE_CODE_OBJECT(module_filename_obj, 274, 0, mod_consts.const_str_plain_Encoder, mod_consts.const_str_plain_Encoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ef11a57a2ee0714ad590b401a0330c44 = MAKE_CODE_OBJECT(module_filename_obj, 103, 0, mod_consts.const_str_plain_GeneralizedTimeEncoder, mod_consts.const_str_plain_GeneralizedTimeEncoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0b153f3d479bea4c369916e1beb0c0ca = MAKE_CODE_OBJECT(module_filename_obj, 26, 0, mod_consts.const_str_plain_RealEncoder, mod_consts.const_str_plain_RealEncoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7b76e05b4fe8d352477bce28fed6f5ab = MAKE_CODE_OBJECT(module_filename_obj, 235, 0, mod_consts.const_str_plain_SequenceEncoder, mod_consts.const_str_plain_SequenceEncoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_acabf5fb3a48f326810a0c1cbf43e011 = MAKE_CODE_OBJECT(module_filename_obj, 132, 0, mod_consts.const_str_plain_SequenceOfEncoder, mod_consts.const_str_plain_SequenceOfEncoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_407a615d0a1482464f440937b69c468b = MAKE_CODE_OBJECT(module_filename_obj, 144, 0, mod_consts.const_str_plain_SetEncoder, mod_consts.const_str_plain_SetEncoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_608c11d90b10b5b6667ab5a5476e00b9 = MAKE_CODE_OBJECT(module_filename_obj, 113, 0, mod_consts.const_str_plain_SetOfEncoder, mod_consts.const_str_plain_SetOfEncoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_025e084e26d4ca030dcc7d23acd8b288 = MAKE_CODE_OBJECT(module_filename_obj, 266, 0, mod_consts.const_str_plain_SingleItemEncoder, mod_consts.const_str_plain_SingleItemEncoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_93da9d845fa77ca5d0c22a7693da4b9f = MAKE_CODE_OBJECT(module_filename_obj, 34, 0, mod_consts.const_str_plain_TimeEncoderMixIn, mod_consts.const_str_plain_TimeEncoderMixIn, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_26933e7efe25a34ad51e22b4290078d5 = MAKE_CODE_OBJECT(module_filename_obj, 108, 0, mod_consts.const_str_plain_UTCTimeEncoder, mod_consts.const_str_plain_UTCTimeEncoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8c0d37d8499666db5db7e4b054108375 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getattr__, mod_consts.const_str_plain___getattr__, mod_consts.const_tuple_str_plain_attr_str_plain_newAttr_tuple, NULL, 1, 0, 0);
code_objects_6df44717630fc37c991f6be151c7df4c = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__chooseEncBase, mod_consts.const_str_digest_e78bd2aeb7c7d6af72ae0205fec3ca32, mod_consts.const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple, NULL, 2, 0, 0);
code_objects_5501021bb354b82531a3433476ea1d17 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__componentSortKey, mod_consts.const_str_digest_339682c9f90ab4eb0347ec2160c619ad, mod_consts.const_tuple_b79ca9eb8741a0fa22572be833a5da75_tuple, NULL, 1, 0, 0);
code_objects_6fba1a5a7cbd11444de087f588c9ce7f = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_encodeValue, mod_consts.const_str_digest_47e96fbdb7ce29f2a13ccac6b9601e71, mod_consts.const_tuple_ff6a7f90929fcd1ec4a6f62f969a8dd7_tuple, NULL, 4, 0, 0);
code_objects_774014094d28c9a55bc5148d44e54175 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_encodeValue, mod_consts.const_str_digest_7a9b7848d7ad5a58475df9cb65303753, mod_consts.const_tuple_228fc95661c156d678e175c67514cfc5_tuple, NULL, 4, 0, 0);
code_objects_e70d5796863d79c459ec73a69eb84317 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_encodeValue, mod_consts.const_str_digest_bfaf690a2e40abebc140278673baccca, mod_consts.const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, NULL, 4, 0, 0);
code_objects_db99d8b3698137ef21876e6b2fe65472 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_encodeValue, mod_consts.const_str_digest_d7634e552d516b8de4e6126d0edbe41f, mod_consts.const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple, NULL, 4, 0, 0);
code_objects_e78236a93a345ff1d04bc76ab4de4fcd = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_encodeValue, mod_consts.const_str_digest_4c7127341aa20f0e8c4f8dfc5b9e017a, mod_consts.const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple, NULL, 4, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__1_encodeValue(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__3_encodeValue(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__4_encodeValue(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__5_encodeValue(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__6__componentSortKey(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__7_encodeValue(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__8___getattr__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pyasn1$codec$cer$encoder$$$function__1_encodeValue(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *par_asn1Spec = python_pars[2];
PyObject *par_encodeFun = python_pars[3];
PyObject *par_options = python_pars[4];
PyObject *var_substrate = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue)) {
    Py_XDECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue = MAKE_FUNCTION_FRAME(tstate, code_objects_6fba1a5a7cbd11444de087f588c9ce7f, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue->m_type_description == NULL);
frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue = cache_frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_tuple_int_0_tuple;
assert(var_substrate == NULL);
Py_INCREF(tmp_assign_source_1);
var_substrate = tmp_assign_source_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = mod_consts.const_tuple_int_pos_255_tuple;
assert(var_substrate == NULL);
Py_INCREF(tmp_assign_source_2);
var_substrate = tmp_assign_source_2;
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue,
    type_description_1,
    par_self,
    par_value,
    par_asn1Spec,
    par_encodeFun,
    par_options,
    var_substrate
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue == cache_frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue);
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue = NULL;
}

assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$function__1_encodeValue);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_substrate);
tmp_tuple_element_1 = var_substrate;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_False;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_False;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_substrate);
CHECK_OBJECT(var_substrate);
Py_DECREF(var_substrate);
var_substrate = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
CHECK_OBJECT(par_asn1Spec);
Py_DECREF(par_asn1Spec);
CHECK_OBJECT(par_encodeFun);
Py_DECREF(par_encodeFun);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_asn1Spec);
Py_DECREF(par_asn1Spec);
CHECK_OBJECT(par_encodeFun);
Py_DECREF(par_encodeFun);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *var_m = NULL;
PyObject *var_b = NULL;
PyObject *var_e = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase)) {
    Py_XDECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase = MAKE_FUNCTION_FRAME(tstate, code_objects_6df44717630fc37c991f6be151c7df4c, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase->m_type_description == NULL);
frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase = cache_frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_value);
tmp_iter_arg_1 = par_value;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooooo";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;
type_description_1 = "ooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;
type_description_1 = "ooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
assert(var_m == NULL);
Py_INCREF(tmp_assign_source_5);
var_m = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_b == NULL);
Py_INCREF(tmp_assign_source_6);
var_b = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_7);
var_e = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_m);
tmp_args_element_value_1 = var_m;
CHECK_OBJECT(var_b);
tmp_args_element_value_2 = var_b;
CHECK_OBJECT(var_e);
tmp_args_element_value_3 = var_e;
frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase->m_frame.f_lineno = 29;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__dropFloatingPoint,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase,
    type_description_1,
    par_self,
    par_value,
    var_m,
    var_b,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase == cache_frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase);
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase = NULL;
}

assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_m);
CHECK_OBJECT(var_m);
Py_DECREF(var_m);
var_m = NULL;
CHECK_OBJECT(var_b);
CHECK_OBJECT(var_b);
Py_DECREF(var_b);
var_b = NULL;
CHECK_OBJECT(var_e);
CHECK_OBJECT(var_e);
Py_DECREF(var_e);
var_e = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_m);
var_m = NULL;
Py_XDECREF(var_b);
var_b = NULL;
Py_XDECREF(var_e);
var_e = NULL;
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


static PyObject *impl_pyasn1$codec$cer$encoder$$$function__3_encodeValue(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *par_asn1Spec = python_pars[2];
PyObject *par_encodeFun = python_pars[3];
PyObject *par_options = python_pars[4];
PyObject *var_numbers = NULL;
PyObject *var_isModified = NULL;
PyObject *var_searchIndex = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue)) {
    Py_XDECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue = MAKE_FUNCTION_FRAME(tstate, code_objects_e78236a93a345ff1d04bc76ab4de4fcd, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue->m_type_description == NULL);
frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue = cache_frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_asn1Spec);
tmp_cmp_expr_left_1 = par_asn1Spec;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_asn1Spec);
tmp_called_instance_1 = par_asn1Spec;
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue->m_frame.f_lineno = 54;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_clone, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
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
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_value);
tmp_called_instance_2 = par_value;
frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue->m_frame.f_lineno = 56;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_asNumbers);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_numbers == NULL);
var_numbers = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_PLUS_CHAR);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_numbers);
tmp_cmp_expr_right_2 = var_numbers;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 1) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_MINUS_CHAR);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_numbers);
tmp_cmp_expr_right_3 = var_numbers;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 1) ? true : false;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
tmp_expression_value_3 = module_var_accessor_pyasn1$codec$cer$encoder$error(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_PyAsn1Error);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_left_1 = mod_consts.const_str_digest_19fe853cab7f39edb3062603d9ffa90d;
CHECK_OBJECT(par_value);
tmp_mod_expr_right_1 = par_value;
tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 59;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue->m_frame.f_lineno = 59;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 59;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_numbers);
tmp_expression_value_4 = var_numbers;
tmp_subscript_value_1 = const_int_neg_1;
tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, -1);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_Z_CHAR);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 61;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
tmp_expression_value_6 = module_var_accessor_pyasn1$codec$cer$encoder$error(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_PyAsn1Error);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_left_2 = mod_consts.const_str_digest_f84db2b3e8455fb2b959797c6b29806c;
CHECK_OBJECT(par_value);
tmp_mod_expr_right_2 = par_value;
tmp_args_element_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 62;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue->m_frame.f_lineno = 62;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 62;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_COMMA_CHAR);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_numbers);
tmp_cmp_expr_right_5 = var_numbers;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_4;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
tmp_expression_value_8 = module_var_accessor_pyasn1$codec$cer$encoder$error(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_PyAsn1Error);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_left_3 = mod_consts.const_str_digest_4b61e25eb3e6fd083748d0b7230ffc7b;
CHECK_OBJECT(par_value);
tmp_mod_expr_right_3 = par_value;
tmp_args_element_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 65;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue->m_frame.f_lineno = 65;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 65;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_DOT_CHAR);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_numbers);
tmp_cmp_expr_right_6 = var_numbers;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_False;
assert(var_isModified == NULL);
Py_INCREF(tmp_assign_source_3);
var_isModified = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_list_arg_1;
CHECK_OBJECT(var_numbers);
tmp_list_arg_1 = var_numbers;
tmp_assign_source_4 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_numbers;
    assert(old != NULL);
    var_numbers = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_add_expr_left_1;
nuitka_digit tmp_add_expr_right_1;
PyObject *tmp_list_arg_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_6;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
PyObject *tmp_len_arg_1;
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_4 != NULL);
CHECK_OBJECT(var_numbers);
tmp_list_arg_value_1 = var_numbers;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_DOT_CHAR);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = LIST_INDEX2(tstate, tmp_list_arg_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = 4;
tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
assert(!(tmp_args_element_value_5 == NULL));
CHECK_OBJECT(var_numbers);
tmp_len_arg_1 = var_numbers;
tmp_sub_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_sub_expr_left_1 == NULL));
tmp_sub_expr_right_1 = 1;
tmp_args_element_value_6 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
assert(!(tmp_args_element_value_6 == NULL));
frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue->m_frame.f_lineno = 73;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_searchIndex == NULL);
var_searchIndex = tmp_assign_source_5;
}
loop_start_1:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_12;
if (var_numbers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numbers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 75;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = var_numbers;
if (var_searchIndex == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_searchIndex);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 75;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_2 = var_searchIndex;
tmp_cmp_expr_left_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_2);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {
Py_DECREF(tmp_cmp_expr_left_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 75;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = par_self;
tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_DOT_CHAR);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 75;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
goto loop_end_1;
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_14;
if (var_numbers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numbers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 76;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = var_numbers;
if (var_searchIndex == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_searchIndex);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 76;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_3 = var_searchIndex;
tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {
Py_DECREF(tmp_cmp_expr_left_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 76;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = par_self;
tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_ZERO_CHAR);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 76;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_delsubscr_subscript_1;
if (var_numbers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numbers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 77;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_delsubscr_target_1 = var_numbers;
if (var_searchIndex == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_searchIndex);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 77;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_delsubscr_subscript_1 = var_searchIndex;
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_True;
{
    PyObject *old = var_isModified;
    var_isModified = tmp_assign_source_6;
    Py_INCREF(var_isModified);
    Py_XDECREF(old);
}

}
branch_no_7:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
if (var_searchIndex == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_searchIndex);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 80;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_isub_expr_left_1 = var_searchIndex;
tmp_isub_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_isub_expr_left_1;
var_searchIndex = tmp_assign_source_7;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_searchIndex == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_searchIndex);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 82;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_searchIndex;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = tmp_iadd_expr_left_1;
var_searchIndex = tmp_assign_source_8;

}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_searchIndex);
tmp_cmp_expr_left_9 = var_searchIndex;
if (var_numbers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numbers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_2 = var_numbers;
tmp_cmp_expr_right_9 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_right_9);
Py_DECREF(tmp_cmp_expr_right_9);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_16;
if (var_numbers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numbers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 85;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = var_numbers;
CHECK_OBJECT(var_searchIndex);
tmp_subscript_value_4 = var_searchIndex;
tmp_cmp_expr_left_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_4);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {
Py_DECREF(tmp_cmp_expr_left_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 85;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = par_self;
tmp_cmp_expr_right_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_Z_CHAR);
if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_10);

exception_lineno = 85;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
CHECK_OBJECT(tmp_cmp_expr_right_10);
Py_DECREF(tmp_cmp_expr_right_10);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_delsubscr_target_2;
PyObject *tmp_delsubscr_subscript_2;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
if (var_numbers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numbers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 87;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_delsubscr_target_2 = var_numbers;
CHECK_OBJECT(var_searchIndex);
tmp_sub_expr_left_2 = var_searchIndex;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_delsubscr_subscript_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_delsubscr_subscript_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_2, tmp_delsubscr_subscript_2);
CHECK_OBJECT(tmp_delsubscr_subscript_2);
Py_DECREF(tmp_delsubscr_subscript_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_True;
{
    PyObject *old = var_isModified;
    var_isModified = tmp_assign_source_9;
    Py_INCREF(var_isModified);
    Py_XDECREF(old);
}

}
branch_no_9:;
branch_no_8:;
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_1;
if (var_isModified == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isModified);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 90;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_isModified);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(par_value);
tmp_expression_value_17 = par_value;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_clone);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (var_numbers == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numbers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 91;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = var_numbers;
frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue->m_frame.f_lineno = 91;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_value;
    assert(old != NULL);
    par_value = tmp_assign_source_10;
    Py_DECREF(old);
}

}
branch_no_10:;
branch_no_5:;
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_2;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_len_arg_3;
if (var_numbers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numbers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_len_arg_3 = var_numbers;
tmp_assign_source_11 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_1__operand_2 == NULL);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_expression_value_18;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_18 = par_self;
tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_MIN_LENGTH);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_11 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_12 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_12;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_3 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_2);
goto try_return_handler_2;
branch_no_12:;
{
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_12 = tmp_comparison_chain_1__operand_2;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_19 = par_self;
tmp_cmp_expr_right_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_MAX_LENGTH);
if (tmp_cmp_expr_right_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_operand_value_2 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
CHECK_OBJECT(tmp_cmp_expr_right_12);
Py_DECREF(tmp_cmp_expr_right_12);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
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
try_except_handler_2:;
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
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_8;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
tmp_expression_value_20 = module_var_accessor_pyasn1$codec$cer$encoder$error(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_PyAsn1Error);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_left_4 = mod_consts.const_str_digest_ba12f4d8091703d841ce97647c64ebaa;
if (par_value == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_mod_expr_right_4 = par_value;
tmp_args_element_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue->m_frame.f_lineno = 94;
tmp_raise_type_input_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 94;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_11:;
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_dictupdate_key_1;
PyObject *tmp_dictupdate_value_1;
CHECK_OBJECT(par_options);
tmp_dict_arg_value_1 = par_options;
assert(PyDict_Check(tmp_dict_arg_value_1));
tmp_dictupdate_key_1 = mod_consts.const_str_plain_maxChunkSize;
tmp_dictupdate_value_1 = mod_consts.const_int_pos_1000;
tmp_res = PyDict_SetItem(tmp_dict_arg_value_1, tmp_dictupdate_key_1, tmp_dictupdate_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
tmp_expression_value_22 = module_var_accessor_pyasn1$codec$cer$encoder$encoder(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoder);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_OctetStringEncoder);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_encodeValue);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 99;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = par_self;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
if (par_value == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 99;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = par_value;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_asn1Spec);
tmp_tuple_element_1 = par_asn1Spec;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_encodeFun);
tmp_tuple_element_1 = par_encodeFun;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 3, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
CHECK_OBJECT(par_options);
tmp_direct_call_arg3_1 = par_options;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue,
    type_description_1,
    par_self,
    par_value,
    par_asn1Spec,
    par_encodeFun,
    par_options,
    var_numbers,
    var_isModified,
    var_searchIndex
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue == cache_frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue);
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue = NULL;
}

assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$function__3_encodeValue);

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
Py_XDECREF(var_numbers);
var_numbers = NULL;
Py_XDECREF(var_isModified);
var_isModified = NULL;
Py_XDECREF(var_searchIndex);
var_searchIndex = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_value);
par_value = NULL;
Py_XDECREF(var_numbers);
var_numbers = NULL;
Py_XDECREF(var_isModified);
var_isModified = NULL;
Py_XDECREF(var_searchIndex);
var_searchIndex = NULL;
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
CHECK_OBJECT(par_asn1Spec);
Py_DECREF(par_asn1Spec);
CHECK_OBJECT(par_encodeFun);
Py_DECREF(par_encodeFun);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_asn1Spec);
Py_DECREF(par_asn1Spec);
CHECK_OBJECT(par_encodeFun);
Py_DECREF(par_encodeFun);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$codec$cer$encoder$$$function__4_encodeValue(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *par_asn1Spec = python_pars[2];
PyObject *par_encodeFun = python_pars[3];
PyObject *par_options = python_pars[4];
PyObject *var_chunks = NULL;
PyObject *var_zero = NULL;
PyObject *var_maxLen = NULL;
PyObject *var_paddedChunks = NULL;
PyObject *outline_0_var_x = NULL;
PyObject *outline_1_var_x = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue)) {
    Py_XDECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue = MAKE_FUNCTION_FRAME(tstate, code_objects_db99d8b3698137ef21876e6b2fe65472, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue->m_type_description == NULL);
frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue = cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__encodeComponents);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_tuple_element_1 = par_value;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_asn1Spec);
tmp_tuple_element_1 = par_asn1Spec;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_encodeFun);
tmp_tuple_element_1 = par_encodeFun;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_options);
tmp_direct_call_arg3_1 = par_options;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_chunks == NULL);
var_chunks = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_chunks);
tmp_len_arg_1 = var_chunks;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 1;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = mod_consts.const_bytes_null;
assert(var_zero == NULL);
Py_INCREF(tmp_assign_source_2);
var_zero = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
tmp_called_value_2 = (PyObject *)&PyMap_Type;
tmp_args_element_value_2 = LOOKUP_BUILTIN(const_str_plain_len);
assert(tmp_args_element_value_2 != NULL);
CHECK_OBJECT(var_chunks);
tmp_args_element_value_3 = var_chunks;
frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue->m_frame.f_lineno = 121;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue->m_frame.f_lineno = 121;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_maxLen == NULL);
var_maxLen = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_chunks);
tmp_iter_arg_1 = var_chunks;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_6;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 122;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_x;
    outline_0_var_x = tmp_assign_source_8;
    Py_INCREF(outline_0_var_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_x);
tmp_expression_value_2 = outline_0_var_x;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ljust);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
if (var_maxLen == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maxLen);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_4 = var_maxLen;
if (var_zero == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_zero);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_5 = var_zero;
frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue->m_frame.f_lineno = 123;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_append_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_append_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(outline_0_var_x);
tmp_tuple_element_2 = outline_0_var_x;
PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_2);
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_4 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_4);
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
Py_XDECREF(outline_0_var_x);
outline_0_var_x = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_x);
outline_0_var_x = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 122;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_paddedChunks == NULL);
var_paddedChunks = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(var_paddedChunks);
tmp_expression_value_3 = var_paddedChunks;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sort);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda(tstate);

frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue->m_frame.f_lineno = 125;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_9;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_paddedChunks);
tmp_iter_arg_2 = var_paddedChunks;
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_11;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_2 = tmp_listcomp_2__$0;
tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 127;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_13 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_x;
    outline_1_var_x = tmp_assign_source_13;
    Py_INCREF(outline_1_var_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
CHECK_OBJECT(outline_1_var_x);
tmp_expression_value_4 = outline_1_var_x;
tmp_subscript_value_1 = const_int_pos_1;
tmp_append_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 1);
if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_assign_source_9 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_assign_source_9);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_1_var_x);
outline_1_var_x = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_x);
outline_1_var_x = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 127;
goto frame_exception_exit_1;
outline_result_2:;
{
    PyObject *old = var_chunks;
    assert(old != NULL);
    var_chunks = tmp_assign_source_9;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_tuple_element_3;
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_bytes_arg_value_1 = const_bytes_empty;
if (var_chunks == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chunks);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 129;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_1 = var_chunks;
tmp_tuple_element_3 = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = Py_True;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = Py_True;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_3);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue,
    type_description_1,
    par_self,
    par_value,
    par_asn1Spec,
    par_encodeFun,
    par_options,
    var_chunks,
    var_zero,
    var_maxLen,
    var_paddedChunks
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue == cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue);
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue = NULL;
}

assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_chunks);
var_chunks = NULL;
Py_XDECREF(var_zero);
var_zero = NULL;
Py_XDECREF(var_maxLen);
var_maxLen = NULL;
Py_XDECREF(var_paddedChunks);
var_paddedChunks = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_chunks);
var_chunks = NULL;
Py_XDECREF(var_zero);
var_zero = NULL;
Py_XDECREF(var_maxLen);
var_maxLen = NULL;
Py_XDECREF(var_paddedChunks);
var_paddedChunks = NULL;
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
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_asn1Spec);
Py_DECREF(par_asn1Spec);
CHECK_OBJECT(par_encodeFun);
Py_DECREF(par_encodeFun);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_asn1Spec);
Py_DECREF(par_asn1Spec);
CHECK_OBJECT(par_encodeFun);
Py_DECREF(par_encodeFun);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_45adf3531f7ebec83e171f037e18d334, module_pyasn1$codec$cer$encoder, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda->m_type_description == NULL);
frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda = cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_x);
tmp_expression_value_1 = par_x;
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda,
    type_description_1,
    par_x
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda == cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda);
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_pyasn1$codec$cer$encoder$$$function__5_encodeValue(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *par_asn1Spec = python_pars[2];
PyObject *par_encodeFun = python_pars[3];
PyObject *par_options = python_pars[4];
PyObject *var_chunks = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue)) {
    Py_XDECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue = MAKE_FUNCTION_FRAME(tstate, code_objects_774014094d28c9a55bc5148d44e54175, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue->m_type_description == NULL);
frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue = cache_frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_dict_value_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_options);
tmp_dict_arg_value_1 = par_options;
tmp_key_value_1 = mod_consts.const_str_plain_ifNotEmpty;
tmp_default_value_1 = Py_False;
tmp_dict_value_1 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_dict_value_1 == NULL) {
    tmp_dict_value_1 = tmp_default_value_1;
    Py_INCREF(tmp_dict_value_1);
}
assert(!(tmp_dict_value_1 == NULL));
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_dict_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_value_1);

exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_value);
tmp_len_arg_1 = par_value;
tmp_operand_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
tmp_return_value = mod_consts.const_tuple_bytes_empty_true_true_tuple;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__encodeComponents);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_tuple_element_1 = par_value;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_asn1Spec);
tmp_tuple_element_1 = par_asn1Spec;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_encodeFun);
tmp_tuple_element_1 = par_encodeFun;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_options);
tmp_direct_call_arg3_1 = par_options;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_chunks == NULL);
var_chunks = tmp_assign_source_1;
}
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_bytes_arg_value_1 = const_bytes_empty;
CHECK_OBJECT(var_chunks);
tmp_iterable_value_1 = var_chunks;
tmp_tuple_element_2 = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_True;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_True;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue,
    type_description_1,
    par_self,
    par_value,
    par_asn1Spec,
    par_encodeFun,
    par_options,
    var_chunks
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue == cache_frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue);
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue = NULL;
}

assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$function__5_encodeValue);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_chunks);
var_chunks = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_chunks);
var_chunks = NULL;
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
CHECK_OBJECT(par_asn1Spec);
Py_DECREF(par_asn1Spec);
CHECK_OBJECT(par_encodeFun);
Py_DECREF(par_encodeFun);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_asn1Spec);
Py_DECREF(par_asn1Spec);
CHECK_OBJECT(par_encodeFun);
Py_DECREF(par_encodeFun);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$codec$cer$encoder$$$function__6__componentSortKey(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_componentAndType = python_pars[0];
PyObject *var_component = NULL;
PyObject *var_asn1Spec = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey)) {
    Py_XDECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey = MAKE_FUNCTION_FRAME(tstate, code_objects_5501021bb354b82531a3433476ea1d17, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey->m_type_description == NULL);
frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey = cache_frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_componentAndType);
tmp_iter_arg_1 = par_componentAndType;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooo";
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



exception_lineno = 151;
type_description_1 = "ooo";
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



exception_lineno = 151;
type_description_1 = "ooo";
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



exception_lineno = 151;
type_description_1 = "ooo";
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
assert(var_component == NULL);
Py_INCREF(tmp_assign_source_4);
var_component = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_asn1Spec == NULL);
Py_INCREF(tmp_assign_source_5);
var_asn1Spec = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_asn1Spec);
tmp_cmp_expr_left_1 = var_asn1Spec;
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(var_component);
tmp_assign_source_6 = var_component;
{
    PyObject *old = var_asn1Spec;
    assert(old != NULL);
    var_asn1Spec = tmp_assign_source_6;
    Py_INCREF(var_asn1Spec);
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_asn1Spec);
tmp_expression_value_1 = var_asn1Spec;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_typeId);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_pyasn1$codec$cer$encoder$univ(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_univ);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 156;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Choice);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 156;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_typeId);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 156;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_asn1Spec);
tmp_expression_value_4 = var_asn1Spec;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_tagSet);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_asn1Spec);
tmp_expression_value_5 = var_asn1Spec;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_tagSet);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 157;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_asn1Spec);
tmp_expression_value_6 = var_asn1Spec;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_tagSet);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_asn1Spec);
tmp_expression_value_8 = var_asn1Spec;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_componentType);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_minTagSet);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_asn1Spec);
tmp_expression_value_9 = var_asn1Spec;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_tagSet);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey,
    type_description_1,
    par_componentAndType,
    var_component,
    var_asn1Spec
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey == cache_frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey);
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey = NULL;
}

assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$function__6__componentSortKey);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_component);
CHECK_OBJECT(var_component);
Py_DECREF(var_component);
var_component = NULL;
CHECK_OBJECT(var_asn1Spec);
CHECK_OBJECT(var_asn1Spec);
Py_DECREF(var_asn1Spec);
var_asn1Spec = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_component);
var_component = NULL;
Py_XDECREF(var_asn1Spec);
var_asn1Spec = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_componentAndType);
Py_DECREF(par_componentAndType);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_componentAndType);
Py_DECREF(par_componentAndType);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$codec$cer$encoder$$$function__7_encodeValue(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *par_asn1Spec = python_pars[2];
PyObject *par_encodeFun = python_pars[3];
PyObject *par_options = python_pars[4];
PyObject *var_substrate = NULL;
PyObject *var_comps = NULL;
PyObject *var_compsMap = NULL;
PyObject *var_inconsistency = NULL;
PyObject *var_namedTypes = NULL;
PyObject *var_idx = NULL;
PyObject *var_component = NULL;
PyObject *var_namedType = NULL;
PyObject *var_comp = NULL;
PyObject *var_compType = NULL;
PyObject *var_chunk = NULL;
PyObject *var_wrapType = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionStackItem exception_preserved_1;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_bytes_empty;
assert(var_substrate == NULL);
Py_INCREF(tmp_assign_source_1);
var_substrate = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_comps == NULL);
var_comps = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_DICT_EMPTY(tstate);
assert(var_compsMap == NULL);
var_compsMap = tmp_assign_source_3;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue)) {
    Py_XDECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue = MAKE_FUNCTION_FRAME(tstate, code_objects_e70d5796863d79c459ec73a69eb84317, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue->m_type_description == NULL);
frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue = cache_frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_asn1Spec);
tmp_cmp_expr_left_1 = par_asn1Spec;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_value);
tmp_expression_value_1 = par_value;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_isInconsistent);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_inconsistency == NULL);
var_inconsistency = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_inconsistency);
tmp_truth_name_1 = CHECK_IF_TRUE(var_inconsistency);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_2 = module_var_accessor_pyasn1$codec$cer$encoder$error(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_PyAsn1Error);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_3fad2f0c989a90eed77e609f4e3fb270;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_value);
tmp_expression_value_4 = par_value;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_b6f0c7ac98fb7a5b81d445d3d25ff806;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue->m_frame.f_lineno = 175;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 175;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_value);
tmp_expression_value_5 = par_value;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_componentType);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_namedTypes == NULL);
var_namedTypes = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
tmp_called_value_2 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_value);
tmp_expression_value_6 = par_value;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_values);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue->m_frame.f_lineno = 180;
tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue->m_frame.f_lineno = 180;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_6;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooo";
exception_lineno = 180;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
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



exception_lineno = 180;
type_description_1 = "ooooooooooooooooo";
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
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_idx;
    var_idx = tmp_assign_source_11;
    Py_INCREF(var_idx);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_component;
    var_component = tmp_assign_source_12;
    Py_INCREF(var_component);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(var_namedTypes);
tmp_truth_name_2 = CHECK_IF_TRUE(var_namedTypes);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_namedTypes);
tmp_expression_value_7 = var_namedTypes;
CHECK_OBJECT(var_idx);
tmp_subscript_value_1 = var_idx;
tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_namedType;
    var_namedType = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_namedType);
tmp_expression_value_8 = var_namedType;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_isOptional);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 184;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_component);
tmp_expression_value_9 = var_component;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_isValue);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
goto loop_start_1;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_namedType);
tmp_expression_value_10 = var_namedType;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_isDefaulted);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 187;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_component);
tmp_cmp_expr_left_2 = var_component;
CHECK_OBJECT(var_namedType);
tmp_expression_value_11 = var_namedType;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_asn1Object);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_5 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
goto loop_start_1;
branch_no_5:;
{
PyObject *tmp_id_arg_1;
CHECK_OBJECT(var_namedType);
tmp_dictset_value = var_namedType;
if (var_compsMap == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_compsMap);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_compsMap;
CHECK_OBJECT(var_component);
tmp_id_arg_1 = var_component;
tmp_dictset_key = PyLong_FromVoidPtr(tmp_id_arg_1);
assert(!(tmp_dictset_key == NULL));
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_key);
Py_DECREF(tmp_dictset_key);
assert(!(tmp_res != 0));
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_id_arg_2;
tmp_dictset_value = Py_None;
if (var_compsMap == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_compsMap);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_compsMap;
CHECK_OBJECT(var_component);
tmp_id_arg_2 = var_component;
tmp_dictset_key = PyLong_FromVoidPtr(tmp_id_arg_2);
assert(!(tmp_dictset_key == NULL));
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_key);
Py_DECREF(tmp_dictset_key);
assert(!(tmp_res != 0));
}
branch_end_3:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_tuple_element_2;
if (var_comps == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_comps);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_comps;
CHECK_OBJECT(var_component);
tmp_tuple_element_2 = var_component;
tmp_item_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_item_value_1, 0, tmp_tuple_element_2);
if (par_asn1Spec == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asn1Spec);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 195;
type_description_1 = "ooooooooooooooooo";
    goto tuple_build_exception_2;
}

tmp_tuple_element_2 = par_asn1Spec;
PyTuple_SET_ITEM0(tmp_item_value_1, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_item_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooooooo";
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
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
tmp_called_value_4 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_asn1Spec);
tmp_expression_value_13 = par_asn1Spec;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_componentType);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_namedTypes);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue->m_frame.f_lineno = 199;
tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_14;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_15 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooo";
exception_lineno = 199;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_19 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_idx;
    var_idx = tmp_assign_source_19;
    Py_INCREF(var_idx);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_namedType;
    var_namedType = tmp_assign_source_20;
    Py_INCREF(var_namedType);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_value);
tmp_expression_value_14 = par_value;
CHECK_OBJECT(var_namedType);
tmp_expression_value_15 = var_namedType;
tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_name);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_component;
    var_component = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_6);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_4;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_17;
tmp_expression_value_16 = module_var_accessor_pyasn1$codec$cer$encoder$error(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_error);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_PyAsn1Error);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_mod_expr_left_1 = mod_consts.const_str_digest_d3da2704c0459ae5b4ac0ce56db80c11;
CHECK_OBJECT(var_namedType);
tmp_expression_value_17 = var_namedType;
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain_name);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 205;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_value);
tmp_tuple_element_3 = par_value;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
tmp_args_element_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 205;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_9;
}
frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue->m_frame.f_lineno = 205;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_9;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 205;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooo";
goto try_except_handler_9;
}
goto branch_end_6;
branch_no_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 201;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue->m_frame)) {
        frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooooo";
goto try_except_handler_9;
branch_end_6:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_5;
// End of try:
// End of try:
try_end_6:;
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(var_namedType);
tmp_expression_value_18 = var_namedType;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_isOptional);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 207;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_and_left_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_namedType);
tmp_expression_value_19 = var_namedType;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain_name);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_value);
tmp_cmp_expr_right_4 = par_value;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_and_right_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_7 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_7 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
goto loop_start_2;
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_expression_value_20;
PyObject *tmp_attribute_value_4;
int tmp_truth_name_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(var_namedType);
tmp_expression_value_20 = var_namedType;
tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_isDefaulted);
if (tmp_attribute_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_attribute_value_4);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_4);

exception_lineno = 210;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_and_left_value_4 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_4);
Py_DECREF(tmp_attribute_value_4);
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(var_component);
tmp_cmp_expr_left_5 = var_component;
CHECK_OBJECT(var_namedType);
tmp_expression_value_21 = var_namedType;
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_asn1Object);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_and_right_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_8 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_8 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
goto loop_start_2;
branch_no_8:;
{
PyObject *tmp_id_arg_3;
CHECK_OBJECT(var_namedType);
tmp_dictset_value = var_namedType;
if (var_compsMap == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_compsMap);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 213;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_dictset_dict = var_compsMap;
CHECK_OBJECT(var_component);
tmp_id_arg_3 = var_component;
tmp_dictset_key = PyLong_FromVoidPtr(tmp_id_arg_3);
assert(!(tmp_dictset_key == NULL));
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_key);
Py_DECREF(tmp_dictset_key);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_tuple_element_4;
if (var_comps == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_comps);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 214;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_list_arg_value_2 = var_comps;
CHECK_OBJECT(var_component);
tmp_tuple_element_4 = var_component;
tmp_item_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_3;
PyTuple_SET_ITEM0(tmp_item_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_asn1Spec);
tmp_expression_value_22 = par_asn1Spec;
CHECK_OBJECT(var_idx);
tmp_subscript_value_3 = var_idx;
tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_item_value_2, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_item_value_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_7;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
branch_end_1:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iter_arg_5;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_23;
tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts.const_str_plain_sorted);
assert(tmp_called_value_6 != NULL);
if (var_comps == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_comps);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 216;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = var_comps;
CHECK_OBJECT(par_self);
tmp_expression_value_23 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain__componentSortKey);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue->m_frame.f_lineno = 216;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_22 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_3__for_iterator == NULL);
tmp_for_loop_3__for_iterator = tmp_assign_source_22;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_23 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooo";
exception_lineno = 216;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_iter_arg_6 = tmp_for_loop_3__iter_value;
tmp_assign_source_24 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_25 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_26 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_12;
}
}
goto try_end_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_11;
// End of try:
try_end_8:;
goto try_end_9;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_10;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_27 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_comp;
    var_comp = tmp_assign_source_27;
    Py_INCREF(var_comp);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_28 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_compType;
    var_compType = tmp_assign_source_28;
    Py_INCREF(var_compType);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_29;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_id_arg_4;
if (var_compsMap == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_compsMap);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 217;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_dict_arg_value_1 = var_compsMap;
CHECK_OBJECT(var_comp);
tmp_id_arg_4 = var_comp;
tmp_key_value_1 = PyLong_FromVoidPtr(tmp_id_arg_4);
assert(!(tmp_key_value_1 == NULL));
tmp_assign_source_29 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
CHECK_OBJECT(tmp_key_value_1);
Py_DECREF(tmp_key_value_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_namedType;
    var_namedType = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_7;
CHECK_OBJECT(var_namedType);
tmp_truth_name_7 = CHECK_IF_TRUE(var_namedType);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_9 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_dictupdate_key_1;
PyObject *tmp_dictupdate_value_1;
PyObject *tmp_expression_value_24;
if (par_options == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 220;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_dict_arg_value_2 = par_options;
assert(PyDict_Check(tmp_dict_arg_value_2));
tmp_dictupdate_key_1 = mod_consts.const_str_plain_ifNotEmpty;
CHECK_OBJECT(var_namedType);
tmp_expression_value_24 = var_namedType;
tmp_dictupdate_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_isOptional);
if (tmp_dictupdate_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_res = PyDict_SetItem(tmp_dict_arg_value_2, tmp_dictupdate_key_1, tmp_dictupdate_value_1);
CHECK_OBJECT(tmp_dictupdate_value_1);
Py_DECREF(tmp_dictupdate_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
}
branch_no_9:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_5;
PyObject *tmp_direct_call_arg3_1;
if (par_encodeFun == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encodeFun);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 222;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_direct_call_arg1_1 = par_encodeFun;
CHECK_OBJECT(var_comp);
tmp_tuple_element_5 = var_comp;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_compType);
tmp_tuple_element_5 = var_compType;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_5);
if (par_options == NULL) {
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 222;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_direct_call_arg3_1 = par_options;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_30 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_chunk;
    var_chunk = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_10;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
int tmp_truth_name_8;
PyObject *tmp_expression_value_25;
PyObject *tmp_attribute_value_5;
int tmp_truth_name_9;
CHECK_OBJECT(var_namedType);
tmp_truth_name_8 = CHECK_IF_TRUE(var_namedType);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_and_left_value_5 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(var_namedType);
tmp_expression_value_25 = var_namedType;
tmp_attribute_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_openType);
if (tmp_attribute_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_attribute_value_5);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_5);

exception_lineno = 225;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_and_right_value_5 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_5);
Py_DECREF(tmp_attribute_value_5);
tmp_condition_result_10 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_10 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(var_namedType);
tmp_expression_value_26 = var_namedType;
tmp_assign_source_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_asn1Object);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_wrapType;
    var_wrapType = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_11;
int tmp_and_left_truth_6;
nuitka_bool tmp_and_left_value_6;
nuitka_bool tmp_and_right_value_6;
PyObject *tmp_expression_value_27;
PyObject *tmp_attribute_value_6;
int tmp_truth_name_10;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_wrapType);
tmp_expression_value_27 = var_wrapType;
tmp_attribute_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_tagSet);
if (tmp_attribute_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_attribute_value_6);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_6);

exception_lineno = 227;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_and_left_value_6 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_6);
Py_DECREF(tmp_attribute_value_6);
tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(var_wrapType);
tmp_called_instance_1 = var_wrapType;
CHECK_OBJECT(var_comp);
tmp_args_element_value_5 = var_comp;
frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue->m_frame.f_lineno = 227;
tmp_operand_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isSameTypeWith, tmp_args_element_value_5);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_and_right_value_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_11 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_condition_result_11 = tmp_and_left_value_6;
and_end_6:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_direct_call_arg3_2;
if (par_encodeFun == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encodeFun);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_direct_call_arg1_2 = par_encodeFun;
CHECK_OBJECT(var_chunk);
tmp_tuple_element_6 = var_chunk;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(var_wrapType);
tmp_tuple_element_6 = var_wrapType;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 1, tmp_tuple_element_6);
if (par_options == NULL) {
Py_DECREF(tmp_direct_call_arg2_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_direct_call_arg3_2 = par_options;
Py_INCREF(tmp_direct_call_arg1_2);
Py_INCREF(tmp_direct_call_arg3_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2};
    tmp_assign_source_32 = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_chunk;
    assert(old != NULL);
    var_chunk = tmp_assign_source_32;
    Py_DECREF(old);
}

}
branch_no_11:;
branch_no_10:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_substrate == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_substrate);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 230;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_iadd_expr_left_1 = var_substrate;
CHECK_OBJECT(var_chunk);
tmp_iadd_expr_right_1 = var_chunk;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_33 = tmp_iadd_expr_left_1;
var_substrate = tmp_assign_source_33;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_10;
}
goto loop_start_3;
loop_end_3:;
goto try_end_10;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
PyObject *tmp_tuple_element_7;
if (var_substrate == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_substrate);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 232;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_7 = var_substrate;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = Py_True;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = Py_True;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_7);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue,
    type_description_1,
    par_self,
    par_value,
    par_asn1Spec,
    par_encodeFun,
    par_options,
    var_substrate,
    var_comps,
    var_compsMap,
    var_inconsistency,
    var_namedTypes,
    var_idx,
    var_component,
    var_namedType,
    var_comp,
    var_compType,
    var_chunk,
    var_wrapType
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue == cache_frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue);
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue = NULL;
}

assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$function__7_encodeValue);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_substrate);
var_substrate = NULL;
Py_XDECREF(var_comps);
var_comps = NULL;
Py_XDECREF(var_compsMap);
var_compsMap = NULL;
Py_XDECREF(var_inconsistency);
var_inconsistency = NULL;
Py_XDECREF(var_namedTypes);
var_namedTypes = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_component);
var_component = NULL;
Py_XDECREF(var_namedType);
var_namedType = NULL;
Py_XDECREF(var_comp);
var_comp = NULL;
Py_XDECREF(var_compType);
var_compType = NULL;
Py_XDECREF(var_chunk);
var_chunk = NULL;
Py_XDECREF(var_wrapType);
var_wrapType = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_substrate);
var_substrate = NULL;
Py_XDECREF(var_comps);
var_comps = NULL;
Py_XDECREF(var_compsMap);
var_compsMap = NULL;
Py_XDECREF(var_inconsistency);
var_inconsistency = NULL;
Py_XDECREF(var_namedTypes);
var_namedTypes = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_component);
var_component = NULL;
Py_XDECREF(var_namedType);
var_namedType = NULL;
Py_XDECREF(var_comp);
var_comp = NULL;
Py_XDECREF(var_compType);
var_compType = NULL;
Py_XDECREF(var_chunk);
var_chunk = NULL;
Py_XDECREF(var_wrapType);
var_wrapType = NULL;
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
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_asn1Spec);
Py_DECREF(par_asn1Spec);
CHECK_OBJECT(par_encodeFun);
Py_DECREF(par_encodeFun);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_asn1Spec);
Py_DECREF(par_asn1Spec);
CHECK_OBJECT(par_encodeFun);
Py_DECREF(par_encodeFun);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyasn1$codec$cer$encoder$$$function__8___getattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_attr = python_pars[0];
PyObject *var_newAttr = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__)) {
    Py_XDECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8c0d37d8499666db5db7e4b054108375, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__->m_type_description == NULL);
frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__ = cache_frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
tmp_dict_arg_value_1 = DICT_COPY(tstate, mod_consts.const_dict_69401dfa56abca18b3c4a0b0f5b2a0ad);
CHECK_OBJECT(par_attr);
tmp_key_value_1 = par_attr;
tmp_assign_source_1 = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_assign_source_1 == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_assign_source_1 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_1);
}
CHECK_OBJECT(tmp_dict_arg_value_1);
Py_DECREF(tmp_dict_arg_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
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
assert(var_newAttr == NULL);
Py_INCREF(tmp_assign_source_2);
var_newAttr = tmp_assign_source_2;
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

exception_lineno = 328;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_pyasn1$codec$cer$encoder$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 329;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_attr);
tmp_format_value_1 = par_attr;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 329;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_f9ab74b06853a17a3727062304f85883;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_newAttr);
tmp_format_value_2 = var_newAttr;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ca8bacb4224d8bc4464d05d9b3a050ab;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
tmp_args_element_value_2 = module_var_accessor_pyasn1$codec$cer$encoder$DeprecationWarning(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 329;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__->m_frame.f_lineno = 329;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_expression_value_2 = (PyObject *)moduledict_pyasn1$codec$cer$encoder;
CHECK_OBJECT(var_newAttr);
tmp_subscript_value_1 = var_newAttr;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(par_attr);
tmp_make_exception_arg_1 = par_attr;
frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__->m_frame.f_lineno = 331;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 331;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__,
    type_description_1,
    par_attr,
    var_newAttr
);


// Release cached frame if used for exception.
if (frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__ == cache_frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__);
    cache_frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__ = NULL;
}

assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$function__8___getattr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_newAttr);
CHECK_OBJECT(var_newAttr);
Py_DECREF(var_newAttr);
var_newAttr = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_newAttr);
var_newAttr = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_attr);
Py_DECREF(par_attr);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_attr);
Py_DECREF(par_attr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__1_encodeValue(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function__1_encodeValue,
        mod_consts.const_str_plain_encodeValue,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_47e96fbdb7ce29f2a13ccac6b9601e71,
#endif
        code_objects_6fba1a5a7cbd11444de087f588c9ce7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase,
        mod_consts.const_str_plain__chooseEncBase,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e78bd2aeb7c7d6af72ae0205fec3ca32,
#endif
        code_objects_6df44717630fc37c991f6be151c7df4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__3_encodeValue(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function__3_encodeValue,
        mod_consts.const_str_plain_encodeValue,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c7127341aa20f0e8c4f8dfc5b9e017a,
#endif
        code_objects_e78236a93a345ff1d04bc76ab4de4fcd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__4_encodeValue(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function__4_encodeValue,
        mod_consts.const_str_plain_encodeValue,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d7634e552d516b8de4e6126d0edbe41f,
#endif
        code_objects_db99d8b3698137ef21876e6b2fe65472,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_86229657ebeffe0ecf9ec4c0cfdaffa8,
#endif
        code_objects_45adf3531f7ebec83e171f037e18d334,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__5_encodeValue(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function__5_encodeValue,
        mod_consts.const_str_plain_encodeValue,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7a9b7848d7ad5a58475df9cb65303753,
#endif
        code_objects_774014094d28c9a55bc5148d44e54175,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__6__componentSortKey(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function__6__componentSortKey,
        mod_consts.const_str_plain__componentSortKey,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_339682c9f90ab4eb0347ec2160c619ad,
#endif
        code_objects_5501021bb354b82531a3433476ea1d17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        mod_consts.const_str_digest_f59a53012f9f2ee140e08ee78ddf2542,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__7_encodeValue(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function__7_encodeValue,
        mod_consts.const_str_plain_encodeValue,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bfaf690a2e40abebc140278673baccca,
#endif
        code_objects_e70d5796863d79c459ec73a69eb84317,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__8___getattr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function__8___getattr__,
        mod_consts.const_str_plain___getattr__,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8c0d37d8499666db5db7e4b054108375,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pyasn1$codec$cer$encoder,
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

static function_impl_code const function_table_pyasn1$codec$cer$encoder[] = {
impl_pyasn1$codec$cer$encoder$$$function__4_encodeValue$$$function__1_lambda,
impl_pyasn1$codec$cer$encoder$$$function__1_encodeValue,
impl_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase,
impl_pyasn1$codec$cer$encoder$$$function__3_encodeValue,
impl_pyasn1$codec$cer$encoder$$$function__4_encodeValue,
impl_pyasn1$codec$cer$encoder$$$function__5_encodeValue,
impl_pyasn1$codec$cer$encoder$$$function__6__componentSortKey,
impl_pyasn1$codec$cer$encoder$$$function__7_encodeValue,
impl_pyasn1$codec$cer$encoder$$$function__8___getattr__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pyasn1$codec$cer$encoder);
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
        module_pyasn1$codec$cer$encoder,
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
        function_table_pyasn1$codec$cer$encoder,
        sizeof(function_table_pyasn1$codec$cer$encoder) / sizeof(function_impl_code)
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
static char const *module_full_name = "pyasn1.codec.cer.encoder";
#endif

// Internal entry point for module code.
PyObject *module_code_pyasn1$codec$cer$encoder(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyasn1$codec$cer$encoder");

    // Store the module for future use.
    module_pyasn1$codec$cer$encoder = module;

    moduledict_pyasn1$codec$cer$encoder = MODULE_DICT(module_pyasn1$codec$cer$encoder);

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
        PRINT_STRING("pyasn1$codec$cer$encoder: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyasn1$codec$cer$encoder: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyasn1$codec$cer$encoder: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pyasn1.codec.cer.encoder" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpyasn1$codec$cer$encoder\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyasn1$codec$cer$encoder,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyasn1$codec$cer$encoder,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyasn1$codec$cer$encoder,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$codec$cer$encoder,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$codec$cer$encoder,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyasn1$codec$cer$encoder);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyasn1$codec$cer$encoder);
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

        UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_17 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_26 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_103 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_108 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_113 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_132 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
PyObject *locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
PyObject *locals_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_235 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
PyObject *locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
PyObject *locals_pyasn1$codec$cer$encoder$$$class__11_Encoder_274 = NULL;
struct Nuitka_FrameObject *frame_frame_pyasn1$codec$cer$encoder$$$class__11_Encoder_12;
NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pyasn1$codec$cer$encoder = MAKE_MODULE_FRAME(code_objects_fa4ebd911f981b45baf26d91feaaa7c7, module_pyasn1$codec$cer$encoder);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pyasn1$codec$cer$encoder$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pyasn1$codec$cer$encoder$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pyasn1$codec$cer$encoder;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 7;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_pyasn1;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pyasn1$codec$cer$encoder;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_error_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 9;
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
        (PyObject *)moduledict_pyasn1$codec$cer$encoder,
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
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_error, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_1503b6119cd6ba88e7612e541d27eba3;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pyasn1$codec$cer$encoder;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_encoder_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 10;
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
        (PyObject *)moduledict_pyasn1$codec$cer$encoder,
        mod_consts.const_str_plain_encoder,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_encoder);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_encoder, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pyasn1$codec$cer$encoder;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_univ_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 11;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
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
        (PyObject *)moduledict_pyasn1$codec$cer$encoder,
        mod_consts.const_str_plain_univ,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_univ);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_univ, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_7c8c58049edd248f8b1cb370445e702c;
tmp_globals_arg_value_5 = (PyObject *)moduledict_pyasn1$codec$cer$encoder;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_useful_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 12;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
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
        (PyObject *)moduledict_pyasn1$codec$cer$encoder,
        mod_consts.const_str_plain_useful,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_useful);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_useful, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_LIST2(tstate, mod_consts.const_str_plain_Encoder,mod_consts.const_str_plain_encode);
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_pyasn1$codec$cer$encoder$encoder(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoder);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_IntegerEncoder);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
tmp_assign_source_10 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_10, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_11 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

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
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_13 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_13;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

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
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_BooleanEncoder;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 17;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_14;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

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
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_6, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

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


exception_lineno = 17;

    goto try_except_handler_1;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 17;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 17;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
branch_end_1:;
{
PyObject *tmp_assign_source_16;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_17 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_17, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_BooleanEncoder;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_17, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_17;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_17, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_3;
}
frame_frame_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_2 = MAKE_CLASS_FRAME(tstate, code_objects_dc04efe43bc019f1c63fe3c8fd6b068e, module_pyasn1$codec$cer$encoder, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_2);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_2) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__1_encodeValue(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_17, mod_consts.const_str_plain_encodeValue, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_2);

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
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_17, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

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


exception_lineno = 17;

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
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_17, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_BooleanEncoder;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_17;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 17;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_17;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_16 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_16);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_17);
locals_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_17 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_17);
locals_pyasn1$codec$cer$encoder$$$class__1_BooleanEncoder_17 = NULL;
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
exception_lineno = 17;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_BooleanEncoder, tmp_assign_source_16);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = module_var_accessor_pyasn1$codec$cer$encoder$encoder(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoder);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto try_except_handler_4;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_RealEncoder);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_4;
}
tmp_assign_source_18 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_18, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_19 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
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


exception_lineno = 26;

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
tmp_expression_value_9 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_4;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_21 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_21;
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


exception_lineno = 26;

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
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_4;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_RealEncoder;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 26;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_22;
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


exception_lineno = 26;

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
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_7, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_4;
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


exception_lineno = 26;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
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


exception_lineno = 26;

    goto try_except_handler_4;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 26;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 26;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_23;
}
branch_end_4:;
{
PyObject *tmp_assign_source_24;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_26 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_26, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_RealEncoder;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_26, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_26;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_26, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_6;
}
frame_frame_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_3 = MAKE_CLASS_FRAME(tstate, code_objects_0b153f3d479bea4c369916e1beb0c0ca, module_pyasn1$codec$cer$encoder, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_3);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_3) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__2__chooseEncBase(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_26, mod_consts.const_str_plain__chooseEncBase, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_26, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

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


exception_lineno = 26;

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
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_26, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_6;
}
branch_no_6:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_RealEncoder;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_26;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 26;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_25;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_24 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_24);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_26);
locals_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_26 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_26);
locals_pyasn1$codec$cer$encoder$$$class__2_RealEncoder_26 = NULL;
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
exception_lineno = 26;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_RealEncoder, tmp_assign_source_24);
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


exception_lineno = 34;

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
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

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
tmp_expression_value_15 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_7;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

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


exception_lineno = 34;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_28;
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


exception_lineno = 34;

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
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_7;
}
tmp_tuple_element_9 = mod_consts.const_str_plain_TimeEncoderMixIn;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 34;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_29;
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


exception_lineno = 34;

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
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_19;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_19, tmp_name_value_8, tmp_default_value_3);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_7;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_20 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_10);
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


exception_lineno = 34;

    goto try_except_handler_7;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 34;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 34;
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
locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_TimeEncoderMixIn;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_34;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_9;
}
frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4 = MAKE_CLASS_FRAME(tstate, code_objects_93da9d845fa77ca5d0c22a7693da4b9f, module_pyasn1$codec$cer$encoder, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4) == 2);

// Framed code:
{
PyObject *tmp_called_value_6;
tmp_called_value_6 = PyObject_GetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_ord);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts.const_str_plain_ord);
assert(tmp_called_value_6 != NULL);
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4->m_frame.f_lineno = 35;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_Z_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_Z_CHAR, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_7;
tmp_called_value_7 = PyObject_GetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_ord);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts.const_str_plain_ord);
assert(tmp_called_value_7 != NULL);
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4->m_frame.f_lineno = 36;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_chr_43_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_PLUS_CHAR, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_8;
tmp_called_value_8 = PyObject_GetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_ord);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts.const_str_plain_ord);
assert(tmp_called_value_8 != NULL);
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4->m_frame.f_lineno = 37;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_chr_45_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_MINUS_CHAR, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_9;
tmp_called_value_9 = PyObject_GetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_ord);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = LOOKUP_BUILTIN(mod_consts.const_str_plain_ord);
assert(tmp_called_value_9 != NULL);
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4->m_frame.f_lineno = 38;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_chr_44_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_COMMA_CHAR, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_10;
tmp_called_value_10 = PyObject_GetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_ord);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = LOOKUP_BUILTIN(mod_consts.const_str_plain_ord);
assert(tmp_called_value_10 != NULL);
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4->m_frame.f_lineno = 39;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_DOT_CHAR, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_11;
tmp_called_value_11 = PyObject_GetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_ord);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = LOOKUP_BUILTIN(mod_consts.const_str_plain_ord);
assert(tmp_called_value_11 != NULL);
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4->m_frame.f_lineno = 40;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_str_plain_0_tuple);

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_ZERO_CHAR, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
tmp_dictset_value = mod_consts.const_int_pos_12;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_MIN_LENGTH, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_19;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_MAX_LENGTH, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__3_encodeValue(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain_encodeValue, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_4);

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
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

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


exception_lineno = 34;

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
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_9;
}
branch_no_9:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_11 = mod_consts.const_str_plain_TimeEncoderMixIn;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 34;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

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
Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34);
locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34);
locals_pyasn1$codec$cer$encoder$$$class__3_TimeEncoderMixIn_34 = NULL;
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
exception_lineno = 34;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeEncoderMixIn, tmp_assign_source_31);
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
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_tuple_element_12;
tmp_tuple_element_12 = module_var_accessor_pyasn1$codec$cer$encoder$TimeEncoderMixIn(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeEncoderMixIn);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;

    goto try_except_handler_10;
}
tmp_assign_source_33 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_12);
tmp_expression_value_21 = module_var_accessor_pyasn1$codec$cer$encoder$encoder(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoder);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;

    goto tuple_build_exception_4;
}
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_OctetStringEncoder);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_33, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_assign_source_33);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_34 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

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
tmp_expression_value_22 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_10;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_10;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_36;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

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
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_10;
}
tmp_tuple_element_13 = mod_consts.const_str_plain_GeneralizedTimeEncoder;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 103;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_37;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_25 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

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
PyObject *tmp_tuple_element_14;
PyObject *tmp_expression_value_26;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_26, tmp_name_value_9, tmp_default_value_4);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_10;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_27;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_27 == NULL));
tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_14);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_10;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 103;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 103;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_38;
}
branch_end_10:;
{
PyObject *tmp_assign_source_39;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_103 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_103, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_GeneralizedTimeEncoder;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_103, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_103;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_103, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_12;
}
frame_frame_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_5 = MAKE_CLASS_FRAME(tstate, code_objects_ef11a57a2ee0714ad590b401a0330c44, module_pyasn1$codec$cer$encoder, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_5);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_5) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_12;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_103, mod_consts.const_str_plain_MIN_LENGTH, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_dictset_value = mod_consts.const_int_pos_20;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_103, mod_consts.const_str_plain_MAX_LENGTH, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_12;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_103, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

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


exception_lineno = 103;

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
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_103, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_12;
}
branch_no_12:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_15 = mod_consts.const_str_plain_GeneralizedTimeEncoder;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
tmp_tuple_element_15 = locals_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_103;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 103;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto try_except_handler_12;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_40;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_39 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_39);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_103);
locals_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_103 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_103);
locals_pyasn1$codec$cer$encoder$$$class__4_GeneralizedTimeEncoder_103 = NULL;
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
exception_lineno = 103;
goto try_except_handler_10;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_GeneralizedTimeEncoder, tmp_assign_source_39);
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
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_tuple_element_16;
tmp_tuple_element_16 = module_var_accessor_pyasn1$codec$cer$encoder$TimeEncoderMixIn(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeEncoderMixIn);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

    goto try_except_handler_13;
}
tmp_assign_source_41 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_28;
PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_16);
tmp_expression_value_28 = module_var_accessor_pyasn1$codec$cer$encoder$encoder(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoder);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

    goto tuple_build_exception_6;
}
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_OctetStringEncoder);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_assign_source_41, 1, tmp_tuple_element_16);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_assign_source_41);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_42 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

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
tmp_expression_value_29 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_13;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_13;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_44 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_44;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

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
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_31 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_13;
}
tmp_tuple_element_17 = mod_consts.const_str_plain_UTCTimeEncoder;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 108;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_45;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_32 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

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
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_33;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_33, tmp_name_value_10, tmp_default_value_5);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_13;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_34;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_34 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_34 == NULL));
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_18);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_13;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 108;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 108;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_46;
}
branch_end_13:;
{
PyObject *tmp_assign_source_47;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_108 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_108, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_UTCTimeEncoder;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_108, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_108;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_108, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_15;
}
frame_frame_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_6 = MAKE_CLASS_FRAME(tstate, code_objects_26933e7efe25a34ad51e22b4290078d5, module_pyasn1$codec$cer$encoder, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_6);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_6) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_10;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_108, mod_consts.const_str_plain_MIN_LENGTH, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_dictset_value = mod_consts.const_int_pos_14;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_108, mod_consts.const_str_plain_MAX_LENGTH, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_6);

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
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_108, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

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


exception_lineno = 108;

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
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_108, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_15;
}
branch_no_15:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_19 = mod_consts.const_str_plain_UTCTimeEncoder;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_19);
tmp_tuple_element_19 = locals_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_108;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 108;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_15;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_48;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_47 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_47);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_108);
locals_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_108 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_108);
locals_pyasn1$codec$cer$encoder$$$class__5_UTCTimeEncoder_108 = NULL;
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
exception_lineno = 108;
goto try_except_handler_13;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_UTCTimeEncoder, tmp_assign_source_47);
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
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_49;
PyObject *tmp_tuple_element_20;
PyObject *tmp_expression_value_35;
tmp_expression_value_35 = module_var_accessor_pyasn1$codec$cer$encoder$encoder(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoder);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;

    goto try_except_handler_16;
}
tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_SequenceOfEncoder);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_16;
}
tmp_assign_source_49 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_49, 0, tmp_tuple_element_20);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_50 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_16;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_36 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_36, tmp_subscript_value_6, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_16;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_16;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_52 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_52;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_37;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_37 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_37, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_16;
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
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_38;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_38 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_16;
}
tmp_tuple_element_21 = mod_consts.const_str_plain_SetOfEncoder;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_21 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 113;
tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_53;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_39 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_39, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_16;
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
PyObject *tmp_tuple_element_22;
PyObject *tmp_expression_value_40;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_40 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_22 = BUILTIN_GETATTR(tstate, tmp_expression_value_40, tmp_name_value_11, tmp_default_value_6);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_16;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_41;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_41 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_41 == NULL));
tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_41);
Py_DECREF(tmp_expression_value_41);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_22);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_16;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 113;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 113;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_16;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_54;
}
branch_end_16:;
{
PyObject *tmp_assign_source_55;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_113 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_113, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_plain_SetOfEncoder;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_113, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_113;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_113, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_18;
}
frame_frame_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_7 = MAKE_CLASS_FRAME(tstate, code_objects_608c11d90b10b5b6667ab5a5476e00b9, module_pyasn1$codec$cer$encoder, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_7);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_7) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__4_encodeValue(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_113, mod_consts.const_str_plain_encodeValue, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_18;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_113, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_18;
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


exception_lineno = 113;

    goto try_except_handler_18;
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
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_113, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_18;
}
branch_no_18:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_23;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_18 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_23 = mod_consts.const_str_plain_SetOfEncoder;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_23 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_23);
tmp_tuple_element_23 = locals_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_113;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 113;
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_18;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_56;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_55 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_55);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_113);
locals_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_113 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_113);
locals_pyasn1$codec$cer$encoder$$$class__6_SetOfEncoder_113 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 113;
goto try_except_handler_16;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SetOfEncoder, tmp_assign_source_55);
}
goto try_end_6;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
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
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_assign_source_57;
PyObject *tmp_tuple_element_24;
PyObject *tmp_expression_value_42;
tmp_expression_value_42 = module_var_accessor_pyasn1$codec$cer$encoder$encoder(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoder);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto try_except_handler_19;
}
tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_SequenceOfEncoder);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_19;
}
tmp_assign_source_57 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_57, 0, tmp_tuple_element_24);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_58 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_19;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_43 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_7, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_19;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_19;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_60 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_60;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_44;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_44 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_19;
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
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_45;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_19;
}
tmp_tuple_element_25 = mod_consts.const_str_plain_SequenceOfEncoder;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_25 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 132;
tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_61;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_46;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_46 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_19;
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
PyObject *tmp_tuple_element_26;
PyObject *tmp_expression_value_47;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_47 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_26 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_12, tmp_default_value_7);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_19;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_48;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_48 == NULL));
tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_26);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_19;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_19;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 132;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 132;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_19;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_62;
}
branch_end_19:;
{
PyObject *tmp_assign_source_63;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_132 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_132, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_plain_SequenceOfEncoder;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_132, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_int_pos_132;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_132, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_21;
}
frame_frame_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_8 = MAKE_CLASS_FRAME(tstate, code_objects_acabf5fb3a48f326810a0c1cbf43e011, module_pyasn1$codec$cer$encoder, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_8);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_8) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__5_encodeValue(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_132, mod_consts.const_str_plain_encodeValue, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_8;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_21;
skip_nested_handling_7:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_132, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_21;
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


exception_lineno = 132;

    goto try_except_handler_21;
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
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_132, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_21;
}
branch_no_21:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_called_value_20;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_20 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_27 = mod_consts.const_str_plain_SequenceOfEncoder;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_27 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_27);
tmp_tuple_element_27 = locals_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_132;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 132;
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto try_except_handler_21;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_64;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_63 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_63);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_132);
locals_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_132 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_132);
locals_pyasn1$codec$cer$encoder$$$class__7_SequenceOfEncoder_132 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_20;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_20:;
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
exception_lineno = 132;
goto try_except_handler_19;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SequenceOfEncoder, tmp_assign_source_63);
}
goto try_end_7;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
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
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
PyObject *tmp_assign_source_65;
PyObject *tmp_tuple_element_28;
PyObject *tmp_expression_value_49;
tmp_expression_value_49 = module_var_accessor_pyasn1$codec$cer$encoder$encoder(tstate);
if (unlikely(tmp_expression_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoder);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;

    goto try_except_handler_22;
}
tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_SequenceEncoder);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_22;
}
tmp_assign_source_65 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_65, 0, tmp_tuple_element_28);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_66 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_66;
}
{
PyObject *tmp_assign_source_67;
tmp_assign_source_67 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_22;
}
tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_50 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_50, tmp_subscript_value_8, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_22;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_22;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_68 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_68;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_51;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_51, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_22;
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
PyObject *tmp_assign_source_69;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_52;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_29;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_52 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_22;
}
tmp_tuple_element_29 = mod_consts.const_str_plain_SetEncoder;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_29 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 144;
tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_69;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_53;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_53 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_53, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_22;
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
PyObject *tmp_tuple_element_30;
PyObject *tmp_expression_value_54;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_54 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_30 = BUILTIN_GETATTR(tstate, tmp_expression_value_54, tmp_name_value_13, tmp_default_value_8);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_22;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_55;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_55 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_55 == NULL));
tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_30);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_22;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_22;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 144;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 144;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_22;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_70;
tmp_assign_source_70 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_70;
}
branch_end_22:;
{
PyObject *tmp_assign_source_71;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_plain_SetEncoder;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_int_pos_144;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_24;
}
frame_frame_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_9 = MAKE_CLASS_FRAME(tstate, code_objects_407a615d0a1482464f440937b69c468b, module_pyasn1$codec$cer$encoder, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_9);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_9) == 2);

// Framed code:
{
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_1;
tmp_called_value_22 = PyObject_GetItem(locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144, const_str_plain_staticmethod);

if (tmp_called_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_22 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}


tmp_args_element_value_1 = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__6__componentSortKey(tstate);

frame_frame_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_9->m_frame.f_lineno = 145;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144, mod_consts.const_str_plain__componentSortKey, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}

tmp_dictset_value = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__7_encodeValue(tstate);

tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144, mod_consts.const_str_plain_encodeValue, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_9;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_8;
frame_exception_exit_9:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_9,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_24;
skip_nested_handling_8:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_24;
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


exception_lineno = 144;

    goto try_except_handler_24;
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
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_24;
}
branch_no_24:;
{
PyObject *tmp_assign_source_72;
PyObject *tmp_called_value_23;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_23 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_31 = mod_consts.const_str_plain_SetEncoder;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_31);
tmp_tuple_element_31 = locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 144;
tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto try_except_handler_24;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_72;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_71 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_71);
goto try_return_handler_24;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144);
locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144);
locals_pyasn1$codec$cer$encoder$$$class__8_SetEncoder_144 = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto try_except_handler_23;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_23:;
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
exception_lineno = 144;
goto try_except_handler_22;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SetEncoder, tmp_assign_source_71);
}
goto try_end_8;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
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
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
PyObject *tmp_assign_source_73;
PyObject *tmp_tuple_element_32;
PyObject *tmp_expression_value_56;
tmp_expression_value_56 = module_var_accessor_pyasn1$codec$cer$encoder$encoder(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoder);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;

    goto try_except_handler_25;
}
tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_SequenceEncoder);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_25;
}
tmp_assign_source_73 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_73, 0, tmp_tuple_element_32);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_74 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_74;
}
{
PyObject *tmp_assign_source_75;
tmp_assign_source_75 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_57;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_25;
}
tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_57 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_57, tmp_subscript_value_9, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_25;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_25;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_76 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_76;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_58;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_58 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_25;
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
PyObject *tmp_assign_source_77;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_59;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_33;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_59 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_25;
}
tmp_tuple_element_33 = mod_consts.const_str_plain_SequenceEncoder;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_33 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 235;
tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_77;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_60;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_60 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_60, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_25;
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
PyObject *tmp_tuple_element_34;
PyObject *tmp_expression_value_61;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_61 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_34 = BUILTIN_GETATTR(tstate, tmp_expression_value_61, tmp_name_value_14, tmp_default_value_9);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_25;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_62;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_62 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_62 == NULL));
tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_62);
Py_DECREF(tmp_expression_value_62);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_34);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_25;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_25;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 235;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 235;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_25;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_78;
tmp_assign_source_78 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_78;
}
branch_end_25:;
{
PyObject *tmp_assign_source_79;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_235 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_235, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_str_plain_SequenceEncoder;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_235, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_int_pos_235;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_235, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_27;
}
frame_frame_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_10 = MAKE_CLASS_FRAME(tstate, code_objects_7b76e05b4fe8d352477bce28fed6f5ab, module_pyasn1$codec$cer$encoder, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_10);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_10) == 2);

// Framed code:
tmp_dictset_value = Py_True;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_235, mod_consts.const_str_plain_omitEmptyOptionals, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_2 = "o";
    goto frame_exception_exit_10;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_9;
frame_exception_exit_10:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_10,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_27;
skip_nested_handling_9:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_235, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_27;
}
{
nuitka_bool tmp_condition_result_36;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_cmp_expr_left_9 = tmp_class_container$class_creation_9__bases;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_cmp_expr_right_9 = tmp_class_container$class_creation_9__bases_orig;
tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_27;
}
if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_9__bases_orig;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_235, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_27;
}
branch_no_27:;
{
PyObject *tmp_assign_source_80;
PyObject *tmp_called_value_25;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_35;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_25 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_35 = mod_consts.const_str_plain_SequenceEncoder;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_35 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_35);
tmp_tuple_element_35 = locals_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_235;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 235;
tmp_assign_source_80 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_27;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_80;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_79 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_79);
goto try_return_handler_27;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_27:;
Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_235);
locals_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_235 = NULL;
goto try_return_handler_26;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_235);
locals_pyasn1$codec$cer$encoder$$$class__9_SequenceEncoder_235 = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto try_except_handler_26;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 235;
goto try_except_handler_25;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SequenceEncoder, tmp_assign_source_79);
}
goto try_end_9;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
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
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
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
PyObject *tmp_assign_source_81;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_63;
PyObject *tmp_expression_value_64;
tmp_expression_value_64 = module_var_accessor_pyasn1$codec$cer$encoder$encoder(tstate);
if (unlikely(tmp_expression_value_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoder);
}

if (tmp_expression_value_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;

    goto frame_exception_exit_1;
}
tmp_expression_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts.const_str_plain_TAG_MAP);
if (tmp_expression_value_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto frame_exception_exit_1;
}
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_63);
Py_DECREF(tmp_expression_value_63);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 239;
tmp_assign_source_81 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_26);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_TAG_MAP, tmp_assign_source_81);
}
{
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_65;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_66;
PyObject *tmp_expression_value_67;
PyObject *tmp_called_value_28;
tmp_expression_value_65 = module_var_accessor_pyasn1$codec$cer$encoder$TAG_MAP(tstate);
assert(!(tmp_expression_value_65 == NULL));
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain_update);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;

    goto frame_exception_exit_1;
}
tmp_expression_value_67 = module_var_accessor_pyasn1$codec$cer$encoder$univ(tstate);
if (unlikely(tmp_expression_value_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_univ);
}

if (tmp_expression_value_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_27);

exception_lineno = 242;

    goto frame_exception_exit_1;
}
tmp_expression_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain_Boolean);
if (tmp_expression_value_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_27);

exception_lineno = 242;

    goto frame_exception_exit_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts.const_str_plain_tagSet);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_27);

exception_lineno = 242;

    goto frame_exception_exit_1;
}
tmp_called_value_28 = module_var_accessor_pyasn1$codec$cer$encoder$BooleanEncoder(tstate);
if (unlikely(tmp_called_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BooleanEncoder);
}

if (tmp_called_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_27);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 242;

    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 242;
tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_28);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_27);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 242;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = _PyDict_NewPresized( 6 );
{
PyObject *tmp_expression_value_68;
PyObject *tmp_expression_value_69;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_70;
PyObject *tmp_expression_value_71;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_72;
PyObject *tmp_expression_value_73;
PyObject *tmp_called_value_31;
PyObject *tmp_expression_value_74;
PyObject *tmp_expression_value_75;
PyObject *tmp_called_value_32;
PyObject *tmp_expression_value_76;
PyObject *tmp_expression_value_77;
PyObject *tmp_called_value_33;
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto dict_build_exception_1;
}
tmp_expression_value_69 = module_var_accessor_pyasn1$codec$cer$encoder$univ(tstate);
if (unlikely(tmp_expression_value_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_univ);
}

if (tmp_expression_value_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;

    goto dict_build_exception_1;
}
tmp_expression_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain_Real);
if (tmp_expression_value_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts.const_str_plain_tagSet);
CHECK_OBJECT(tmp_expression_value_68);
Py_DECREF(tmp_expression_value_68);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto dict_build_exception_1;
}
tmp_called_value_29 = module_var_accessor_pyasn1$codec$cer$encoder$RealEncoder(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RealEncoder);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 243;

    goto dict_build_exception_1;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 243;
tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_29);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 243;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto dict_build_exception_1;
}
tmp_expression_value_71 = module_var_accessor_pyasn1$codec$cer$encoder$useful(tstate);
if (unlikely(tmp_expression_value_71 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_useful);
}

if (tmp_expression_value_71 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;

    goto dict_build_exception_1;
}
tmp_expression_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts.const_str_plain_GeneralizedTime);
if (tmp_expression_value_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts.const_str_plain_tagSet);
CHECK_OBJECT(tmp_expression_value_70);
Py_DECREF(tmp_expression_value_70);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto dict_build_exception_1;
}
tmp_called_value_30 = module_var_accessor_pyasn1$codec$cer$encoder$GeneralizedTimeEncoder(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GeneralizedTimeEncoder);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 244;

    goto dict_build_exception_1;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 244;
tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_30);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 244;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto dict_build_exception_1;
}
tmp_expression_value_73 = module_var_accessor_pyasn1$codec$cer$encoder$useful(tstate);
if (unlikely(tmp_expression_value_73 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_useful);
}

if (tmp_expression_value_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;

    goto dict_build_exception_1;
}
tmp_expression_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts.const_str_plain_UTCTime);
if (tmp_expression_value_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts.const_str_plain_tagSet);
CHECK_OBJECT(tmp_expression_value_72);
Py_DECREF(tmp_expression_value_72);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto dict_build_exception_1;
}
tmp_called_value_31 = module_var_accessor_pyasn1$codec$cer$encoder$UTCTimeEncoder(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UTCTimeEncoder);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 245;

    goto dict_build_exception_1;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 245;
tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_31);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 245;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto dict_build_exception_1;
}
tmp_expression_value_75 = module_var_accessor_pyasn1$codec$cer$encoder$univ(tstate);
if (unlikely(tmp_expression_value_75 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_univ);
}

if (tmp_expression_value_75 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;

    goto dict_build_exception_1;
}
tmp_expression_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain_SetOf);
if (tmp_expression_value_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain_tagSet);
CHECK_OBJECT(tmp_expression_value_74);
Py_DECREF(tmp_expression_value_74);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto dict_build_exception_1;
}
tmp_called_value_32 = module_var_accessor_pyasn1$codec$cer$encoder$SetOfEncoder(tstate);
if (unlikely(tmp_called_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SetOfEncoder);
}

if (tmp_called_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 247;

    goto dict_build_exception_1;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 247;
tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_32);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 247;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto dict_build_exception_1;
}
tmp_expression_value_77 = module_var_accessor_pyasn1$codec$cer$encoder$univ(tstate);
if (unlikely(tmp_expression_value_77 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_univ);
}

if (tmp_expression_value_77 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto dict_build_exception_1;
}
tmp_expression_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts.const_str_plain_Sequence);
if (tmp_expression_value_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts.const_str_plain_typeId);
CHECK_OBJECT(tmp_expression_value_76);
Py_DECREF(tmp_expression_value_76);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto dict_build_exception_1;
}
tmp_called_value_33 = module_var_accessor_pyasn1$codec$cer$encoder$SequenceEncoder(tstate);
if (unlikely(tmp_called_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SequenceEncoder);
}

if (tmp_called_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 248;

    goto dict_build_exception_1;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 248;
tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_33);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 248;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto dict_build_exception_1;
}
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_27);
Py_DECREF(tmp_args_element_value_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 241;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_82;
PyObject *tmp_called_value_34;
PyObject *tmp_expression_value_78;
PyObject *tmp_expression_value_79;
tmp_expression_value_79 = module_var_accessor_pyasn1$codec$cer$encoder$encoder(tstate);
if (unlikely(tmp_expression_value_79 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoder);
}

if (tmp_expression_value_79 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;

    goto frame_exception_exit_1;
}
tmp_expression_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts.const_str_plain_TYPE_MAP);
if (tmp_expression_value_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;

    goto frame_exception_exit_1;
}
tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
if (tmp_called_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;

    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 251;
tmp_assign_source_82 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_34);
CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_MAP, tmp_assign_source_82);
}
{
PyObject *tmp_called_value_35;
PyObject *tmp_expression_value_80;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_81;
PyObject *tmp_expression_value_82;
PyObject *tmp_called_value_36;
tmp_expression_value_80 = module_var_accessor_pyasn1$codec$cer$encoder$TYPE_MAP(tstate);
assert(!(tmp_expression_value_80 == NULL));
tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts.const_str_plain_update);
if (tmp_called_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;

    goto frame_exception_exit_1;
}
tmp_expression_value_82 = module_var_accessor_pyasn1$codec$cer$encoder$univ(tstate);
if (unlikely(tmp_expression_value_82 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_univ);
}

if (tmp_expression_value_82 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_35);

exception_lineno = 254;

    goto frame_exception_exit_1;
}
tmp_expression_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts.const_str_plain_Boolean);
if (tmp_expression_value_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_35);

exception_lineno = 254;

    goto frame_exception_exit_1;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain_typeId);
CHECK_OBJECT(tmp_expression_value_81);
Py_DECREF(tmp_expression_value_81);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_35);

exception_lineno = 254;

    goto frame_exception_exit_1;
}
tmp_called_value_36 = module_var_accessor_pyasn1$codec$cer$encoder$BooleanEncoder(tstate);
if (unlikely(tmp_called_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BooleanEncoder);
}

if (tmp_called_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_35);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 254;

    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 254;
tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_36);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_35);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 254;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = _PyDict_NewPresized( 8 );
{
PyObject *tmp_expression_value_83;
PyObject *tmp_expression_value_84;
PyObject *tmp_called_value_37;
PyObject *tmp_expression_value_85;
PyObject *tmp_expression_value_86;
PyObject *tmp_called_value_38;
PyObject *tmp_expression_value_87;
PyObject *tmp_expression_value_88;
PyObject *tmp_called_value_39;
PyObject *tmp_expression_value_89;
PyObject *tmp_expression_value_90;
PyObject *tmp_called_value_40;
PyObject *tmp_expression_value_91;
PyObject *tmp_expression_value_92;
PyObject *tmp_called_value_41;
PyObject *tmp_expression_value_93;
PyObject *tmp_expression_value_94;
PyObject *tmp_called_value_42;
PyObject *tmp_expression_value_95;
PyObject *tmp_expression_value_96;
PyObject *tmp_called_value_43;
tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto dict_build_exception_2;
}
tmp_expression_value_84 = module_var_accessor_pyasn1$codec$cer$encoder$univ(tstate);
if (unlikely(tmp_expression_value_84 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_univ);
}

if (tmp_expression_value_84 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;

    goto dict_build_exception_2;
}
tmp_expression_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts.const_str_plain_Real);
if (tmp_expression_value_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts.const_str_plain_typeId);
CHECK_OBJECT(tmp_expression_value_83);
Py_DECREF(tmp_expression_value_83);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto dict_build_exception_2;
}
tmp_called_value_37 = module_var_accessor_pyasn1$codec$cer$encoder$RealEncoder(tstate);
if (unlikely(tmp_called_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RealEncoder);
}

if (tmp_called_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 255;

    goto dict_build_exception_2;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 255;
tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_37);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 255;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto dict_build_exception_2;
}
tmp_expression_value_86 = module_var_accessor_pyasn1$codec$cer$encoder$useful(tstate);
if (unlikely(tmp_expression_value_86 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_useful);
}

if (tmp_expression_value_86 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;

    goto dict_build_exception_2;
}
tmp_expression_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts.const_str_plain_GeneralizedTime);
if (tmp_expression_value_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;

    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts.const_str_plain_typeId);
CHECK_OBJECT(tmp_expression_value_85);
Py_DECREF(tmp_expression_value_85);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;

    goto dict_build_exception_2;
}
tmp_called_value_38 = module_var_accessor_pyasn1$codec$cer$encoder$GeneralizedTimeEncoder(tstate);
if (unlikely(tmp_called_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GeneralizedTimeEncoder);
}

if (tmp_called_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 256;

    goto dict_build_exception_2;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 256;
tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_38);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 256;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;

    goto dict_build_exception_2;
}
tmp_expression_value_88 = module_var_accessor_pyasn1$codec$cer$encoder$useful(tstate);
if (unlikely(tmp_expression_value_88 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_useful);
}

if (tmp_expression_value_88 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;

    goto dict_build_exception_2;
}
tmp_expression_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts.const_str_plain_UTCTime);
if (tmp_expression_value_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;

    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts.const_str_plain_typeId);
CHECK_OBJECT(tmp_expression_value_87);
Py_DECREF(tmp_expression_value_87);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;

    goto dict_build_exception_2;
}
tmp_called_value_39 = module_var_accessor_pyasn1$codec$cer$encoder$UTCTimeEncoder(tstate);
if (unlikely(tmp_called_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UTCTimeEncoder);
}

if (tmp_called_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 257;

    goto dict_build_exception_2;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 257;
tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_39);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 257;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;

    goto dict_build_exception_2;
}
tmp_expression_value_90 = module_var_accessor_pyasn1$codec$cer$encoder$univ(tstate);
if (unlikely(tmp_expression_value_90 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_univ);
}

if (tmp_expression_value_90 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;

    goto dict_build_exception_2;
}
tmp_expression_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts.const_str_plain_Set);
if (tmp_expression_value_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;

    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts.const_str_plain_typeId);
CHECK_OBJECT(tmp_expression_value_89);
Py_DECREF(tmp_expression_value_89);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;

    goto dict_build_exception_2;
}
tmp_called_value_40 = module_var_accessor_pyasn1$codec$cer$encoder$SetEncoder(tstate);
if (unlikely(tmp_called_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SetEncoder);
}

if (tmp_called_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 259;

    goto dict_build_exception_2;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 259;
tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_40);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 259;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;

    goto dict_build_exception_2;
}
tmp_expression_value_92 = module_var_accessor_pyasn1$codec$cer$encoder$univ(tstate);
if (unlikely(tmp_expression_value_92 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_univ);
}

if (tmp_expression_value_92 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;

    goto dict_build_exception_2;
}
tmp_expression_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts.const_str_plain_SetOf);
if (tmp_expression_value_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts.const_str_plain_typeId);
CHECK_OBJECT(tmp_expression_value_91);
Py_DECREF(tmp_expression_value_91);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto dict_build_exception_2;
}
tmp_called_value_41 = module_var_accessor_pyasn1$codec$cer$encoder$SetOfEncoder(tstate);
if (unlikely(tmp_called_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SetOfEncoder);
}

if (tmp_called_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 260;

    goto dict_build_exception_2;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 260;
tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_41);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 260;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto dict_build_exception_2;
}
tmp_expression_value_94 = module_var_accessor_pyasn1$codec$cer$encoder$univ(tstate);
if (unlikely(tmp_expression_value_94 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_univ);
}

if (tmp_expression_value_94 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;

    goto dict_build_exception_2;
}
tmp_expression_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts.const_str_plain_Sequence);
if (tmp_expression_value_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts.const_str_plain_typeId);
CHECK_OBJECT(tmp_expression_value_93);
Py_DECREF(tmp_expression_value_93);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto dict_build_exception_2;
}
tmp_called_value_42 = module_var_accessor_pyasn1$codec$cer$encoder$SequenceEncoder(tstate);
if (unlikely(tmp_called_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SequenceEncoder);
}

if (tmp_called_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 261;

    goto dict_build_exception_2;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 261;
tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_42);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 261;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto dict_build_exception_2;
}
tmp_expression_value_96 = module_var_accessor_pyasn1$codec$cer$encoder$univ(tstate);
if (unlikely(tmp_expression_value_96 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_univ);
}

if (tmp_expression_value_96 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;

    goto dict_build_exception_2;
}
tmp_expression_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts.const_str_plain_SequenceOf);
if (tmp_expression_value_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;

    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts.const_str_plain_typeId);
CHECK_OBJECT(tmp_expression_value_95);
Py_DECREF(tmp_expression_value_95);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;

    goto dict_build_exception_2;
}
tmp_called_value_43 = module_var_accessor_pyasn1$codec$cer$encoder$SequenceOfEncoder(tstate);
if (unlikely(tmp_called_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SequenceOfEncoder);
}

if (tmp_called_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 262;

    goto dict_build_exception_2;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 262;
tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_43);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 262;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;

    goto dict_build_exception_2;
}
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_called_value_35);
Py_DECREF(tmp_args_element_value_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 253;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_35);
Py_DECREF(tmp_called_value_35);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_outline_return_value_10;
// Tried code:
{
PyObject *tmp_assign_source_83;
PyObject *tmp_tuple_element_36;
PyObject *tmp_expression_value_97;
tmp_expression_value_97 = module_var_accessor_pyasn1$codec$cer$encoder$encoder(tstate);
if (unlikely(tmp_expression_value_97 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoder);
}

if (tmp_expression_value_97 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;

    goto try_except_handler_28;
}
tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts.const_str_plain_SingleItemEncoder);
if (tmp_tuple_element_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_28;
}
tmp_assign_source_83 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_83, 0, tmp_tuple_element_36);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_83;
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_10 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_84 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_84;
}
{
PyObject *tmp_assign_source_85;
tmp_assign_source_85 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_85;
}
{
PyObject *tmp_assign_source_86;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_10;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_98;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_28;
}
tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_expression_value_98 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_98, tmp_subscript_value_10, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_28;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_28;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_86 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_86;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_99;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_99 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_99, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_28;
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
PyObject *tmp_assign_source_87;
PyObject *tmp_called_value_44;
PyObject *tmp_expression_value_100;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_37;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_100 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_28;
}
tmp_tuple_element_37 = mod_consts.const_str_plain_SingleItemEncoder;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_37 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 266;
tmp_assign_source_87 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_44);
Py_DECREF(tmp_called_value_44);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_87;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_101;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_101 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_101, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_28;
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
PyObject *tmp_tuple_element_38;
PyObject *tmp_expression_value_102;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_102 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_38 = BUILTIN_GETATTR(tstate, tmp_expression_value_102, tmp_name_value_15, tmp_default_value_10);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_28;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_103;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_103 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_103 == NULL));
tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_103);
Py_DECREF(tmp_expression_value_103);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_38);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_28;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_28;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 266;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 266;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_28;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_88;
tmp_assign_source_88 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_88;
}
branch_end_28:;
{
PyObject *tmp_assign_source_89;
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_str_plain_SingleItemEncoder;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_int_pos_266;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_30;
}
frame_frame_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_11 = MAKE_CLASS_FRAME(tstate, code_objects_025e084e26d4ca030dcc7d23acd8b288, module_pyasn1$codec$cer$encoder, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_11);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_11) == 2);

// Framed code:
tmp_dictset_value = Py_False;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266, mod_consts.const_str_plain_fixedDefLengthMode, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_dictset_value = mod_consts.const_int_pos_1000;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266, mod_consts.const_str_plain_fixedChunkSize, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_dictset_value = PyObject_GetItem(locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266, mod_consts.const_str_plain_TAG_MAP);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_pyasn1$codec$cer$encoder$TAG_MAP(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TAG_MAP);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_11;
    }
}

tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266, mod_consts.const_str_plain_TAG_MAP, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_dictset_value = PyObject_GetItem(locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266, mod_consts.const_str_plain_TYPE_MAP);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_pyasn1$codec$cer$encoder$TYPE_MAP(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TYPE_MAP);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_11;
    }
}

tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266, mod_consts.const_str_plain_TYPE_MAP, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "o";
    goto frame_exception_exit_11;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_11:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_11,
    type_description_2,
    outline_9_var___class__
);



assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_11);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_10;
frame_no_exception_10:;
goto skip_nested_handling_10;
nested_frame_exit_10:;

goto try_except_handler_30;
skip_nested_handling_10:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_30;
}
{
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_cmp_expr_left_10 = tmp_class_container$class_creation_10__bases;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_cmp_expr_right_10 = tmp_class_container$class_creation_10__bases_orig;
tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_30;
}
if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_10__bases_orig;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_30;
}
branch_no_30:;
{
PyObject *tmp_assign_source_90;
PyObject *tmp_called_value_45;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_39;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_45 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_39 = mod_consts.const_str_plain_SingleItemEncoder;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_39 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_39);
tmp_tuple_element_39 = locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266;
PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 266;
tmp_assign_source_90 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_30;
}
assert(outline_9_var___class__ == NULL);
outline_9_var___class__ = tmp_assign_source_90;
}
CHECK_OBJECT(outline_9_var___class__);
tmp_assign_source_89 = outline_9_var___class__;
Py_INCREF(tmp_assign_source_89);
goto try_return_handler_30;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_30:;
Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266);
locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266 = NULL;
goto try_return_handler_29;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266);
locals_pyasn1$codec$cer$encoder$$$class__10_SingleItemEncoder_266 = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto try_except_handler_29;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_29:;
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
exception_lineno = 266;
goto try_except_handler_28;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_SingleItemEncoder, tmp_assign_source_89);
}
goto try_end_10;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
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
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
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
PyObject *tmp_assign_source_91;
PyObject *tmp_tuple_element_40;
PyObject *tmp_expression_value_104;
tmp_expression_value_104 = module_var_accessor_pyasn1$codec$cer$encoder$encoder(tstate);
if (unlikely(tmp_expression_value_104 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoder);
}

if (tmp_expression_value_104 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;

    goto try_except_handler_31;
}
tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts.const_str_plain_Encoder);
if (tmp_tuple_element_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_31;
}
tmp_assign_source_91 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_91, 0, tmp_tuple_element_40);
assert(tmp_class_container$class_creation_11__bases_orig == NULL);
tmp_class_container$class_creation_11__bases_orig = tmp_assign_source_91;
}
{
PyObject *tmp_assign_source_92;
PyObject *tmp_direct_call_arg1_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_direct_call_arg1_11 = tmp_class_container$class_creation_11__bases_orig;
Py_INCREF(tmp_direct_call_arg1_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_11};
    tmp_assign_source_92 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__bases == NULL);
tmp_class_container$class_creation_11__bases = tmp_assign_source_92;
}
{
PyObject *tmp_assign_source_93;
tmp_assign_source_93 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__class_decl_dict == NULL);
tmp_class_container$class_creation_11__class_decl_dict = tmp_assign_source_93;
}
{
PyObject *tmp_assign_source_94;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_11;
PyObject *tmp_type_arg_21;
PyObject *tmp_expression_value_105;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_container$class_creation_11__bases);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_31;
}
tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_expression_value_105 = tmp_class_container$class_creation_11__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_105, tmp_subscript_value_11, 0);
if (tmp_type_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_31;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_31;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_11__bases;
tmp_assign_source_94 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__metaclass == NULL);
tmp_class_container$class_creation_11__metaclass = tmp_assign_source_94;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_106;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_106 = tmp_class_container$class_creation_11__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_106, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_31;
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
PyObject *tmp_assign_source_95;
PyObject *tmp_called_value_46;
PyObject *tmp_expression_value_107;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_41;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_107 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_31;
}
tmp_tuple_element_41 = mod_consts.const_str_plain_Encoder;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_41 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_21 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 274;
tmp_assign_source_95 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_called_value_46);
Py_DECREF(tmp_called_value_46);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_95;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_108;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_expression_value_108 = tmp_class_container$class_creation_11__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_108, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_31;
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
PyObject *tmp_tuple_element_42;
PyObject *tmp_expression_value_109;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_109 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_42 = BUILTIN_GETATTR(tstate, tmp_expression_value_109, tmp_name_value_16, tmp_default_value_11);
if (tmp_tuple_element_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_31;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_110;
PyObject *tmp_type_arg_22;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_type_arg_22 = tmp_class_container$class_creation_11__prepared;
tmp_expression_value_110 = BUILTIN_TYPE1(tmp_type_arg_22);
assert(!(tmp_expression_value_110 == NULL));
tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_110);
Py_DECREF(tmp_expression_value_110);
if (tmp_tuple_element_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_42);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_mod_expr_right_11);
goto try_except_handler_31;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
CHECK_OBJECT(tmp_mod_expr_right_11);
Py_DECREF(tmp_mod_expr_right_11);
if (tmp_make_exception_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_31;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 274;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 274;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_31;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_96;
tmp_assign_source_96 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_96;
}
branch_end_31:;
{
PyObject *tmp_assign_source_97;
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_11__prepared;
locals_pyasn1$codec$cer$encoder$$$class__11_Encoder_274 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__11_Encoder_274, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_str_plain_Encoder;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__11_Encoder_274, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_int_pos_274;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__11_Encoder_274, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_33;
}
frame_frame_pyasn1$codec$cer$encoder$$$class__11_Encoder_12 = MAKE_CLASS_FRAME(tstate, code_objects_9e9c8a43bdcd64413c1f4bc6d0293062, module_pyasn1$codec$cer$encoder, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pyasn1$codec$cer$encoder$$$class__11_Encoder_12);
assert(Py_REFCNT(frame_frame_pyasn1$codec$cer$encoder$$$class__11_Encoder_12) == 2);

// Framed code:
tmp_dictset_value = PyObject_GetItem(locals_pyasn1$codec$cer$encoder$$$class__11_Encoder_274, mod_consts.const_str_plain_SingleItemEncoder);

if (tmp_dictset_value == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dictset_value = module_var_accessor_pyasn1$codec$cer$encoder$SingleItemEncoder(tstate);
if (unlikely(tmp_dictset_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SingleItemEncoder);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 275;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
        Py_INCREF(tmp_dictset_value);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__11_Encoder_274, mod_consts.const_str_plain_SINGLE_ITEM_ENCODER, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_2 = "o";
    goto frame_exception_exit_12;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_11;
frame_exception_exit_12:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder$$$class__11_Encoder_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder$$$class__11_Encoder_12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder$$$class__11_Encoder_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pyasn1$codec$cer$encoder$$$class__11_Encoder_12,
    type_description_2,
    outline_10_var___class__
);



assertFrameObject(frame_frame_pyasn1$codec$cer$encoder$$$class__11_Encoder_12);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_11;
frame_no_exception_11:;
goto skip_nested_handling_11;
nested_frame_exit_11:;

goto try_except_handler_33;
skip_nested_handling_11:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__11_Encoder_274, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_33;
}
{
nuitka_bool tmp_condition_result_44;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_cmp_expr_left_11 = tmp_class_container$class_creation_11__bases;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_cmp_expr_right_11 = tmp_class_container$class_creation_11__bases_orig;
tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_33;
}
if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_11__bases_orig;
tmp_res = PyObject_SetItem(locals_pyasn1$codec$cer$encoder$$$class__11_Encoder_274, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_33;
}
branch_no_33:;
{
PyObject *tmp_assign_source_98;
PyObject *tmp_called_value_47;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_43;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_called_value_47 = tmp_class_container$class_creation_11__metaclass;
tmp_tuple_element_43 = mod_consts.const_str_plain_Encoder;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_43 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_43);
tmp_tuple_element_43 = locals_pyasn1$codec$cer$encoder$$$class__11_Encoder_274;
PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 274;
tmp_assign_source_98 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_33;
}
assert(outline_10_var___class__ == NULL);
outline_10_var___class__ = tmp_assign_source_98;
}
CHECK_OBJECT(outline_10_var___class__);
tmp_assign_source_97 = outline_10_var___class__;
Py_INCREF(tmp_assign_source_97);
goto try_return_handler_33;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_33:;
Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__11_Encoder_274);
locals_pyasn1$codec$cer$encoder$$$class__11_Encoder_274 = NULL;
goto try_return_handler_32;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pyasn1$codec$cer$encoder$$$class__11_Encoder_274);
locals_pyasn1$codec$cer$encoder$$$class__11_Encoder_274 = NULL;
// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto try_except_handler_32;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
CHECK_OBJECT(outline_10_var___class__);
CHECK_OBJECT(outline_10_var___class__);
Py_DECREF(outline_10_var___class__);
outline_10_var___class__ = NULL;
goto outline_result_22;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto outline_exception_11;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_11:;
exception_lineno = 274;
goto try_except_handler_31;
outline_result_22:;
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_Encoder, tmp_assign_source_97);
}
goto try_end_11;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
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
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
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
PyObject *tmp_assign_source_99;
PyObject *tmp_called_value_48;
tmp_called_value_48 = module_var_accessor_pyasn1$codec$cer$encoder$Encoder(tstate);
if (unlikely(tmp_called_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Encoder);
}

if (tmp_called_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;

    goto frame_exception_exit_1;
}
frame_frame_pyasn1$codec$cer$encoder->m_frame.f_lineno = 323;
tmp_assign_source_99 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_48);
if (tmp_assign_source_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain_encode, tmp_assign_source_99);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_12;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pyasn1$codec$cer$encoder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pyasn1$codec$cer$encoder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pyasn1$codec$cer$encoder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pyasn1$codec$cer$encoder);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_12:;
{
PyObject *tmp_assign_source_100;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_3edf0aa3b0439812dfdd4b7ddb3e5c17);

tmp_assign_source_100 = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function__8___getattr__(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)mod_consts.const_str_plain___getattr__, tmp_assign_source_100);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyasn1$codec$cer$encoder", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pyasn1.codec.cer.encoder" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pyasn1$codec$cer$encoder);
    return module_pyasn1$codec$cer$encoder;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyasn1$codec$cer$encoder", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

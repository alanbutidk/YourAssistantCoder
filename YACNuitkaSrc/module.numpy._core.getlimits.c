/* Generated code for Python module 'numpy$_core$getlimits'
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



/* The "module_numpy$_core$getlimits" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$_core$getlimits;
PyDictObject *moduledict_numpy$_core$getlimits;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_ndim;
PyObject *const_str_plain_copy;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_plain_shape;
PyObject *const_str_plain_a;
PyObject *const_str_digest_c585224fd2c43f929c10a58162297da8;
PyObject *const_str_plain_size;
PyObject *const_str_digest_0dfcf8cd171b40dc563f1a190d516493;
PyObject *const_str_plain__finfo_cache;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_1bb08d6d00ad9fa304240ae8ae3405b9;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
PyObject *const_str_plain_numeric;
PyObject *const_str_plain_dtype;
PyObject *const_str_plain_ntypes;
PyObject *const_str_plain_obj2sctype;
PyObject *const_str_plain_inexact;
PyObject *const_str_digest_31aa61424dcfec2038b29c7de17c8186;
PyObject *const_str_digest_c2b437067d0b2663a182d5693884b4ea;
PyObject *const_str_plain_floating;
PyObject *const_str_plain__convert_to_float;
PyObject *const_str_plain_obj;
PyObject *const_str_plain_cls;
PyObject *const_str_plain___new__;
PyObject *const_str_plain__init;
PyObject *const_str_plain_itemsize;
PyObject *const_int_pos_8;
PyObject *const_str_plain_bits;
PyObject *const_str_plain__fmt;
PyObject *const_str_plain__repr;
PyObject *const_str_plain__populate_finfo_constants;
PyObject *const_str_plain_eps;
PyObject *const_str_plain__radix;
PyObject *const_tuple_int_pos_10_tuple;
PyObject *const_str_plain_precision;
PyObject *const_str_plain_math;
PyObject *const_str_plain_log2;
PyObject *const_str_plain_epsneg;
PyObject *const_str_plain_ceil;
PyObject *const_str_plain_maxexp;
PyObject *const_str_plain_minexp;
PyObject *const_int_pos_2;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_get_str;
PyObject *const_str_digest_e15d39998e3dd20ff1ebb96f19745cae;
PyObject *const_tuple_str_plain_precision_int_pos_3_tuple;
PyObject *const_tuple_str_plain_machep_int_pos_6_tuple;
PyObject *const_tuple_str_plain_negep_int_pos_6_tuple;
PyObject *const_tuple_str_plain_minexp_int_pos_6_tuple;
PyObject *const_tuple_str_plain_maxexp_int_pos_6_tuple;
PyObject *const_tuple_str_plain_resolution_tuple;
PyObject *const_tuple_str_plain_eps_tuple;
PyObject *const_tuple_str_plain_epsneg_tuple;
PyObject *const_tuple_str_plain_tiny_tuple;
PyObject *const_tuple_str_plain_smallest_normal_tuple;
PyObject *const_tuple_str_plain_smallest_subnormal_tuple;
PyObject *const_tuple_str_plain_nexp_int_pos_6_tuple;
PyObject *const_tuple_str_plain_max_tuple;
PyObject *const_str_plain_min;
PyObject *const_str_plain_max;
PyObject *const_str_digest_32766fbb40234c03441c251c7c12889e;
PyObject *const_tuple_str_plain_min_tuple;
PyObject *const_str_digest_58e328a0ea4297471e3883dad4910e11;
PyObject *const_str_digest_a447119752cfc3a87f11c8347852fbe7;
PyObject *const_str_digest_eac5dfe63f48d06d6ce2205099f98891;
PyObject *const_str_digest_ebf008c505897d73a8b55a23ea154653;
PyObject *const_str_digest_e28f0f73762ebf1a350299a4e124ee56;
PyObject *const_str_digest_c8c8cee72ae936af6be63e93e08d485d;
PyObject *const_str_digest_ea1509db16bb849e58916d0b1a0902e7;
PyObject *const_str_digest_7d04bf5356cb5853cf89166c4176d893;
PyObject *const_str_digest_b039481f78536309d195a2fd6fe39a14;
PyObject *const_str_digest_5e1c4b6f7c8dfc06cbac5c3d74ebacfc;
PyObject *const_str_digest_062797bc238ff7e6d26ed52b13257ef6;
PyObject *const_str_digest_e42189fd124dec27ff18b15c69a7f42f;
PyObject *const_str_digest_1ef42bccdc276ec87f67b6323f3a3d3a;
PyObject *const_str_digest_ee7c877c25e39778fa59c4c415a85441;
PyObject *const_str_digest_b501b996dda52c8dd0fd02db48c449fa;
PyObject *const_str_digest_2a8eab127c35f1224b62330189ddd24a;
PyObject *const_str_plain_self;
PyObject *const_str_angle_undefined;
PyObject *const_str_plain_ljust;
PyObject *const_str_plain__MACHAR_PARAMS;
PyObject *const_tuple_str_plain_fmt_str_digest_eee7b0934fe224b34ba6722d84ccd2bf_tuple;
PyObject *const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf;
PyObject *const_str_plain_strip;
PyObject *const_str_plain_resolution;
PyObject *const_str_digest_bd74e2e7c54f8e7abc6d13bd1a5dae55;
PyObject *const_str_digest_5011c4c6effddad10644e3458ab7bf28;
PyObject *const_str_digest_4851334840d34b49c06389f4acf326f1;
PyObject *const_str_digest_22d139cce07af3b6f1e2b25fdbcb758e;
PyObject *const_str_chr_41;
PyObject *const_str_plain_smallest_normal;
PyObject *const_str_digest_c1a5c351ea14f15a4186b1de28b65db1;
PyObject *const_str_plain_kind;
PyObject *const_str_digest_1fb8303ac42db8ab17be5f2ef764dc5e;
PyObject *const_str_plain_key;
PyObject *const_str_plain_iu;
PyObject *const_str_digest_b99f4ed01107a5ec2d731598b869331b;
PyObject *const_str_plain_u;
PyObject *const_str_plain_iinfo;
PyObject *const_str_plain__min_vals;
PyObject *const_str_plain_val;
PyObject *const_str_digest_3122c1a6126f732cd94f8864df7d76ff;
PyObject *const_str_plain__max_vals;
PyObject *const_str_digest_8f6c2ba61d1aad5f470aa0d7e1c51ed6;
PyObject *const_str_digest_d699850a7ed4dcad4593c97865f24dd4;
PyObject *const_str_digest_c1416ee2e3faf191d9259e1f3f7581c0;
PyObject *const_str_digest_689f5c49db7f0f46fe96e883a6a93baa;
PyObject *const_str_digest_454d0777cd09130adadab5cb34c54852;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_finfo;
PyObject *const_str_plain_cached_property;
PyObject *const_str_digest_1cc096bfca6f12718d06670f9299228c;
PyObject *const_tuple_str_plain_set_module_tuple;
PyObject *const_str_plain_set_module;
PyObject *const_tuple_str_plain_numeric_str_plain_numerictypes_tuple;
PyObject *const_str_plain_numerictypes;
PyObject *const_str_plain__multiarray_umath;
PyObject *const_tuple_str_plain__populate_finfo_constants_tuple;
PyObject *const_str_plain__fr0;
PyObject *const_str_plain__fr1;
PyObject *const_str_plain_csingle;
PyObject *const_str_plain_single;
PyObject *const_str_plain_complex128;
PyObject *const_str_plain_float64;
PyObject *const_str_plain_clongdouble;
PyObject *const_str_plain_longdouble;
PyObject *const_str_digest_71f9600c11b1b2dcd32646ee953369ea;
PyObject *const_str_plain__title_fmt;
PyObject *const_str_plain_double;
PyObject *const_str_plain_itype;
PyObject *const_str_plain_int64;
PyObject *const_str_plain_fmt;
PyObject *const_str_digest_16c966c18ae1e919ca62dfb9d9bdceba;
PyObject *const_str_plain_title;
PyObject *const_tuple_str_plain_double_tuple;
PyObject *const_str_plain_int32;
PyObject *const_str_digest_b11b128c563b5ffb658ae9500081eb04;
PyObject *const_tuple_str_plain_single_tuple;
PyObject *const_str_plain_longlong;
PyObject *const_tuple_str_digest_61eb47d02a6bf21baa1afce40f67ac8b_tuple;
PyObject *const_str_plain_half;
PyObject *const_str_plain_int16;
PyObject *const_str_digest_08664f457b1a8dc7f05c9e1db0d9e3bd;
PyObject *const_tuple_str_plain_half_tuple;
PyObject *const_tuple_str_plain_numpy_tuple;
PyObject *const_str_digest_550c831de70f5cd0f0c93e595c10a837;
PyObject *const_str_digest_fd5c7331527c2a9c81043143a548ff80;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_61;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_GenericAlias;
PyObject *const_str_digest_9921f9bcf5458277b73e01603fff03a9;
PyObject *const_str_digest_313212deb5eaf98ebc9b4ddb74fe967f;
PyObject *const_str_digest_b0aac7238dd10e7c210b66f63697cc68;
PyObject *const_str_digest_d6a2ad8a7028b2b871bd69ed863dd4cd;
PyObject *const_str_plain_machep;
PyObject *const_str_digest_6321c70f5a422822dfd8d72974778952;
PyObject *const_str_plain_negep;
PyObject *const_str_digest_2dc49c1f7ca0fe7a134c8a2b5f7d1762;
PyObject *const_str_plain_nexp;
PyObject *const_str_digest_d9f5d00b25c9be7a85729a4f01689565;
PyObject *const_str_plain_iexp;
PyObject *const_str_digest_65a972710d220dabc9894f4ccd7a05fa;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_dc1b8110f5b3291b1f7289ae32fc17db;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_04bfb3f910884592424fce6703571236;
PyObject *const_str_plain_tiny;
PyObject *const_str_digest_e7f7c31d206df2b5e7fa68e52bc77569;
PyObject *const_tuple_5f6cc281fa21a60f5b531ad548117736_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_a0f740892fb1d759b9551c13b92f78f1;
PyObject *const_int_pos_355;
PyObject *const_str_digest_647832d5d012ef5f736460e94c883bb6;
PyObject *const_str_digest_0ce56c9f8af242ba13b62b42dfca1350;
PyObject *const_str_digest_680f1ebaae31ccd9a76118853c6fdaca;
PyObject *const_str_digest_225b94f6d4a8d9b49b6a3ffca91d338a;
PyObject *const_str_digest_493f424513579c28b69e138fe767e833;
PyObject *const_tuple_str_plain_dtype_str_plain_kind_str_plain_bits_str_plain_key_tuple;
PyObject *const_str_digest_11ac93de96990698448876d5cbc16304;
PyObject *const_str_digest_193723f23fa211109d45772bb00c7736;
PyObject *const_tuple_str_plain_self_str_plain_int_type_tuple;
PyObject *const_tuple_849295482a97faaf99989251c01fbde0_tuple;
PyObject *const_tuple_d99cd32b2d7afd3bf6a283d8c5b7a69b_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_25a81b431d8f95202605afd02d6547fe_tuple;
PyObject *const_tuple_str_plain_self_str_plain_fmt_tuple;
PyObject *const_tuple_str_plain_a_tuple;
PyObject *const_tuple_str_plain_self_str_plain_dtype_tuple;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_b295c15c2e548774f38c3a3cedeccfbe_tuple;
PyObject *const_tuple_str_plain_self_str_plain_val_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[196];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy._core.getlimits"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_a);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_c585224fd2c43f929c10a58162297da8);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_0dfcf8cd171b40dc563f1a190d516493);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__finfo_cache);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_1bb08d6d00ad9fa304240ae8ae3405b9);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_numeric);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_ntypes);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_obj2sctype);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_inexact);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_31aa61424dcfec2038b29c7de17c8186);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_c2b437067d0b2663a182d5693884b4ea);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_floating);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__convert_to_float);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_obj);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_cls);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain___new__);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__init);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_itemsize);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_bits);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__fmt);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__repr);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__populate_finfo_constants);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_eps);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__radix);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_10_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_precision);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_math);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_log2);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_epsneg);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_ceil);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_maxexp);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_minexp);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_str);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_e15d39998e3dd20ff1ebb96f19745cae);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_precision_int_pos_3_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_machep_int_pos_6_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_negep_int_pos_6_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_minexp_int_pos_6_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxexp_int_pos_6_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resolution_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_eps_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_epsneg_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tiny_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_smallest_normal_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_smallest_subnormal_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_nexp_int_pos_6_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_max_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_32766fbb40234c03441c251c7c12889e);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_min_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_58e328a0ea4297471e3883dad4910e11);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_a447119752cfc3a87f11c8347852fbe7);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_eac5dfe63f48d06d6ce2205099f98891);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_ebf008c505897d73a8b55a23ea154653);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_e28f0f73762ebf1a350299a4e124ee56);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8c8cee72ae936af6be63e93e08d485d);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea1509db16bb849e58916d0b1a0902e7);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d04bf5356cb5853cf89166c4176d893);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_b039481f78536309d195a2fd6fe39a14);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e1c4b6f7c8dfc06cbac5c3d74ebacfc);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_062797bc238ff7e6d26ed52b13257ef6);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_e42189fd124dec27ff18b15c69a7f42f);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ef42bccdc276ec87f67b6323f3a3d3a);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee7c877c25e39778fa59c4c415a85441);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_b501b996dda52c8dd0fd02db48c449fa);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a8eab127c35f1224b62330189ddd24a);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_angle_undefined);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_ljust);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__MACHAR_PARAMS);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fmt_str_digest_eee7b0934fe224b34ba6722d84ccd2bf_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolution);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd74e2e7c54f8e7abc6d13bd1a5dae55);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_5011c4c6effddad10644e3458ab7bf28);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_4851334840d34b49c06389f4acf326f1);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_22d139cce07af3b6f1e2b25fdbcb758e);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_smallest_normal);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_c1a5c351ea14f15a4186b1de28b65db1);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_kind);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_1fb8303ac42db8ab17be5f2ef764dc5e);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_key);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_iu);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_b99f4ed01107a5ec2d731598b869331b);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_u);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_iinfo);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain__min_vals);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_val);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_3122c1a6126f732cd94f8864df7d76ff);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain__max_vals);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f6c2ba61d1aad5f470aa0d7e1c51ed6);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_d699850a7ed4dcad4593c97865f24dd4);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_c1416ee2e3faf191d9259e1f3f7581c0);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_689f5c49db7f0f46fe96e883a6a93baa);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_454d0777cd09130adadab5cb34c54852);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_finfo);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_module_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_module);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numeric_str_plain_numerictypes_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_numerictypes);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain__multiarray_umath);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__populate_finfo_constants_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain__fr0);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain__fr1);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_csingle);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_single);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_complex128);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_float64);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_clongdouble);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_longdouble);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_71f9600c11b1b2dcd32646ee953369ea);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain__title_fmt);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_double);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_itype);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_int64);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_fmt);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_16c966c18ae1e919ca62dfb9d9bdceba);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_title);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_double_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_int32);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_b11b128c563b5ffb658ae9500081eb04);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_single_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_longlong);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_61eb47d02a6bf21baa1afce40f67ac8b_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_half);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_int16);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_08664f457b1a8dc7f05c9e1db0d9e3bd);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_half_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numpy_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_550c831de70f5cd0f0c93e595c10a837);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd5c7331527c2a9c81043143a548ff80);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_int_pos_61);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_GenericAlias);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_9921f9bcf5458277b73e01603fff03a9);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_313212deb5eaf98ebc9b4ddb74fe967f);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0aac7238dd10e7c210b66f63697cc68);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_d6a2ad8a7028b2b871bd69ed863dd4cd);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_machep);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_6321c70f5a422822dfd8d72974778952);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_negep);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_2dc49c1f7ca0fe7a134c8a2b5f7d1762);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_nexp);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9f5d00b25c9be7a85729a4f01689565);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_iexp);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_65a972710d220dabc9894f4ccd7a05fa);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc1b8110f5b3291b1f7289ae32fc17db);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_04bfb3f910884592424fce6703571236);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_tiny);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_e7f7c31d206df2b5e7fa68e52bc77569);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_5f6cc281fa21a60f5b531ad548117736_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0f740892fb1d759b9551c13b92f78f1);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_int_pos_355);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_647832d5d012ef5f736460e94c883bb6);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ce56c9f8af242ba13b62b42dfca1350);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_680f1ebaae31ccd9a76118853c6fdaca);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_225b94f6d4a8d9b49b6a3ffca91d338a);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_493f424513579c28b69e138fe767e833);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_str_plain_kind_str_plain_bits_str_plain_key_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_11ac93de96990698448876d5cbc16304);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_193723f23fa211109d45772bb00c7736);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_int_type_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_849295482a97faaf99989251c01fbde0_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_d99cd32b2d7afd3bf6a283d8c5b7a69b_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_25a81b431d8f95202605afd02d6547fe_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fmt_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_dtype_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_b295c15c2e548774f38c3a3cedeccfbe_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_val_tuple);
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
void checkModuleConstants_numpy$_core$getlimits(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_a));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_a);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_c585224fd2c43f929c10a58162297da8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c585224fd2c43f929c10a58162297da8);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_0dfcf8cd171b40dc563f1a190d516493));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0dfcf8cd171b40dc563f1a190d516493);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__finfo_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__finfo_cache);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_1bb08d6d00ad9fa304240ae8ae3405b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1bb08d6d00ad9fa304240ae8ae3405b9);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_numeric));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numeric);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_ntypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ntypes);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_obj2sctype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_obj2sctype);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_inexact));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inexact);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_31aa61424dcfec2038b29c7de17c8186));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31aa61424dcfec2038b29c7de17c8186);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_c2b437067d0b2663a182d5693884b4ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c2b437067d0b2663a182d5693884b4ea);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_floating));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_floating);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__convert_to_float));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__convert_to_float);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_obj));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_obj);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cls);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain___new__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___new__);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__init));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__init);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_itemsize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itemsize);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_int_pos_8));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_bits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bits);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__fmt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fmt);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__repr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__repr);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__populate_finfo_constants));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__populate_finfo_constants);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_eps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eps);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__radix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__radix);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_10_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_10_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_precision));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_precision);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_math));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_math);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_log2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log2);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_epsneg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_epsneg);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_ceil));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ceil);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_maxexp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maxexp);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_minexp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_minexp);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_str);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_e15d39998e3dd20ff1ebb96f19745cae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e15d39998e3dd20ff1ebb96f19745cae);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_precision_int_pos_3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_precision_int_pos_3_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_machep_int_pos_6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_machep_int_pos_6_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_negep_int_pos_6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_negep_int_pos_6_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_minexp_int_pos_6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_minexp_int_pos_6_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxexp_int_pos_6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maxexp_int_pos_6_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resolution_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_resolution_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_eps_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_eps_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_epsneg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_epsneg_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tiny_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tiny_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_smallest_normal_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_smallest_normal_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_smallest_subnormal_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_smallest_subnormal_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_nexp_int_pos_6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_nexp_int_pos_6_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_max_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_max_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_32766fbb40234c03441c251c7c12889e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_32766fbb40234c03441c251c7c12889e);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_min_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_min_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_58e328a0ea4297471e3883dad4910e11));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_58e328a0ea4297471e3883dad4910e11);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_a447119752cfc3a87f11c8347852fbe7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a447119752cfc3a87f11c8347852fbe7);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_eac5dfe63f48d06d6ce2205099f98891));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eac5dfe63f48d06d6ce2205099f98891);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_ebf008c505897d73a8b55a23ea154653));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ebf008c505897d73a8b55a23ea154653);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_e28f0f73762ebf1a350299a4e124ee56));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e28f0f73762ebf1a350299a4e124ee56);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8c8cee72ae936af6be63e93e08d485d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8c8cee72ae936af6be63e93e08d485d);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea1509db16bb849e58916d0b1a0902e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea1509db16bb849e58916d0b1a0902e7);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d04bf5356cb5853cf89166c4176d893));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d04bf5356cb5853cf89166c4176d893);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_b039481f78536309d195a2fd6fe39a14));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b039481f78536309d195a2fd6fe39a14);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e1c4b6f7c8dfc06cbac5c3d74ebacfc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e1c4b6f7c8dfc06cbac5c3d74ebacfc);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_062797bc238ff7e6d26ed52b13257ef6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_062797bc238ff7e6d26ed52b13257ef6);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_e42189fd124dec27ff18b15c69a7f42f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e42189fd124dec27ff18b15c69a7f42f);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ef42bccdc276ec87f67b6323f3a3d3a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ef42bccdc276ec87f67b6323f3a3d3a);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee7c877c25e39778fa59c4c415a85441));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee7c877c25e39778fa59c4c415a85441);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_b501b996dda52c8dd0fd02db48c449fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b501b996dda52c8dd0fd02db48c449fa);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a8eab127c35f1224b62330189ddd24a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a8eab127c35f1224b62330189ddd24a);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_angle_undefined));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_undefined);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_ljust));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ljust);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__MACHAR_PARAMS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__MACHAR_PARAMS);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fmt_str_digest_eee7b0934fe224b34ba6722d84ccd2bf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fmt_str_digest_eee7b0934fe224b34ba6722d84ccd2bf_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolution));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolution);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd74e2e7c54f8e7abc6d13bd1a5dae55));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd74e2e7c54f8e7abc6d13bd1a5dae55);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_5011c4c6effddad10644e3458ab7bf28));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5011c4c6effddad10644e3458ab7bf28);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_4851334840d34b49c06389f4acf326f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4851334840d34b49c06389f4acf326f1);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_22d139cce07af3b6f1e2b25fdbcb758e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22d139cce07af3b6f1e2b25fdbcb758e);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_smallest_normal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_smallest_normal);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_c1a5c351ea14f15a4186b1de28b65db1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c1a5c351ea14f15a4186b1de28b65db1);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_kind));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kind);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_1fb8303ac42db8ab17be5f2ef764dc5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1fb8303ac42db8ab17be5f2ef764dc5e);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_iu));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iu);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_b99f4ed01107a5ec2d731598b869331b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b99f4ed01107a5ec2d731598b869331b);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_u));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_u);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_iinfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iinfo);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain__min_vals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__min_vals);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_val));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_val);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_3122c1a6126f732cd94f8864df7d76ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3122c1a6126f732cd94f8864df7d76ff);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain__max_vals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__max_vals);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f6c2ba61d1aad5f470aa0d7e1c51ed6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f6c2ba61d1aad5f470aa0d7e1c51ed6);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_d699850a7ed4dcad4593c97865f24dd4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d699850a7ed4dcad4593c97865f24dd4);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_c1416ee2e3faf191d9259e1f3f7581c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c1416ee2e3faf191d9259e1f3f7581c0);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_689f5c49db7f0f46fe96e883a6a93baa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_689f5c49db7f0f46fe96e883a6a93baa);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_454d0777cd09130adadab5cb34c54852));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_454d0777cd09130adadab5cb34c54852);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_finfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_finfo);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cached_property);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_module_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_set_module_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_module);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numeric_str_plain_numerictypes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_numeric_str_plain_numerictypes_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_numerictypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numerictypes);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain__multiarray_umath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__multiarray_umath);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__populate_finfo_constants_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__populate_finfo_constants_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain__fr0));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fr0);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain__fr1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fr1);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_csingle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_csingle);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_single));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_single);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_complex128));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_complex128);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_float64));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_float64);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_clongdouble));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clongdouble);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_longdouble));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_longdouble);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_71f9600c11b1b2dcd32646ee953369ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71f9600c11b1b2dcd32646ee953369ea);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain__title_fmt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__title_fmt);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_double));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_double);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_itype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itype);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_int64));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_int64);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_fmt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fmt);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_16c966c18ae1e919ca62dfb9d9bdceba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16c966c18ae1e919ca62dfb9d9bdceba);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_title));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_title);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_double_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_double_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_int32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_int32);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_b11b128c563b5ffb658ae9500081eb04));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b11b128c563b5ffb658ae9500081eb04);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_single_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_single_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_longlong));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_longlong);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_61eb47d02a6bf21baa1afce40f67ac8b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_61eb47d02a6bf21baa1afce40f67ac8b_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_half));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_half);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_int16));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_int16);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_08664f457b1a8dc7f05c9e1db0d9e3bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_08664f457b1a8dc7f05c9e1db0d9e3bd);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_half_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_half_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numpy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_numpy_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_550c831de70f5cd0f0c93e595c10a837));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_550c831de70f5cd0f0c93e595c10a837);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd5c7331527c2a9c81043143a548ff80));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd5c7331527c2a9c81043143a548ff80);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_int_pos_61));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_61);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_GenericAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GenericAlias);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_9921f9bcf5458277b73e01603fff03a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9921f9bcf5458277b73e01603fff03a9);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_313212deb5eaf98ebc9b4ddb74fe967f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_313212deb5eaf98ebc9b4ddb74fe967f);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0aac7238dd10e7c210b66f63697cc68));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0aac7238dd10e7c210b66f63697cc68);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_d6a2ad8a7028b2b871bd69ed863dd4cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d6a2ad8a7028b2b871bd69ed863dd4cd);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_machep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_machep);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_6321c70f5a422822dfd8d72974778952));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6321c70f5a422822dfd8d72974778952);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_negep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_negep);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_2dc49c1f7ca0fe7a134c8a2b5f7d1762));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2dc49c1f7ca0fe7a134c8a2b5f7d1762);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_nexp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nexp);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9f5d00b25c9be7a85729a4f01689565));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d9f5d00b25c9be7a85729a4f01689565);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_iexp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iexp);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_65a972710d220dabc9894f4ccd7a05fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65a972710d220dabc9894f4ccd7a05fa);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___str__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc1b8110f5b3291b1f7289ae32fc17db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc1b8110f5b3291b1f7289ae32fc17db);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_04bfb3f910884592424fce6703571236));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04bfb3f910884592424fce6703571236);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_tiny));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tiny);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_e7f7c31d206df2b5e7fa68e52bc77569));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e7f7c31d206df2b5e7fa68e52bc77569);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_5f6cc281fa21a60f5b531ad548117736_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5f6cc281fa21a60f5b531ad548117736_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0f740892fb1d759b9551c13b92f78f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a0f740892fb1d759b9551c13b92f78f1);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_int_pos_355));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_355);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_647832d5d012ef5f736460e94c883bb6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_647832d5d012ef5f736460e94c883bb6);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ce56c9f8af242ba13b62b42dfca1350));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0ce56c9f8af242ba13b62b42dfca1350);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_680f1ebaae31ccd9a76118853c6fdaca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_680f1ebaae31ccd9a76118853c6fdaca);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_225b94f6d4a8d9b49b6a3ffca91d338a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_225b94f6d4a8d9b49b6a3ffca91d338a);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_493f424513579c28b69e138fe767e833));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_493f424513579c28b69e138fe767e833);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_str_plain_kind_str_plain_bits_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_str_plain_kind_str_plain_bits_str_plain_key_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_11ac93de96990698448876d5cbc16304));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_11ac93de96990698448876d5cbc16304);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_193723f23fa211109d45772bb00c7736));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_193723f23fa211109d45772bb00c7736);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_int_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_int_type_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_849295482a97faaf99989251c01fbde0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_849295482a97faaf99989251c01fbde0_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_d99cd32b2d7afd3bf6a283d8c5b7a69b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d99cd32b2d7afd3bf6a283d8c5b7a69b_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_25a81b431d8f95202605afd02d6547fe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_25a81b431d8f95202605afd02d6547fe_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fmt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_fmt_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_a_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_dtype_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_b295c15c2e548774f38c3a3cedeccfbe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b295c15c2e548774f38c3a3cedeccfbe_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_val_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_val_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 13
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
static PyObject *module_var_accessor_numpy$_core$getlimits$DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$getlimits->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$getlimits->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$getlimits->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$getlimits$_MACHAR_PARAMS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$getlimits->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$getlimits->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__MACHAR_PARAMS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$getlimits->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MACHAR_PARAMS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MACHAR_PARAMS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MACHAR_PARAMS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MACHAR_PARAMS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__MACHAR_PARAMS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__MACHAR_PARAMS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__MACHAR_PARAMS);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$getlimits$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$getlimits->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$getlimits->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$getlimits->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$getlimits$_convert_to_float(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$getlimits->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$getlimits->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_to_float);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$getlimits->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__convert_to_float);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__convert_to_float, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__convert_to_float);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__convert_to_float, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_to_float);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_to_float);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_to_float);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$getlimits$_populate_finfo_constants(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$getlimits->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$getlimits->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__populate_finfo_constants);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$getlimits->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__populate_finfo_constants);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__populate_finfo_constants, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__populate_finfo_constants);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__populate_finfo_constants, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__populate_finfo_constants);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__populate_finfo_constants);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__populate_finfo_constants);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$getlimits$_title_fmt(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$getlimits->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$getlimits->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__title_fmt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$getlimits->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__title_fmt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__title_fmt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__title_fmt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__title_fmt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__title_fmt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__title_fmt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__title_fmt);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$getlimits$cached_property(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$getlimits->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$getlimits->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$getlimits->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$getlimits$iinfo(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$getlimits->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$getlimits->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_iinfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$getlimits->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_iinfo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_iinfo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_iinfo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_iinfo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_iinfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_iinfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_iinfo);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$getlimits$math(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$getlimits->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$getlimits->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$getlimits->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$getlimits$ntypes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$getlimits->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$getlimits->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_ntypes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$getlimits->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ntypes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ntypes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ntypes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ntypes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_ntypes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_ntypes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ntypes);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$getlimits$numeric(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$getlimits->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$getlimits->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_numeric);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$getlimits->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_numeric);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_numeric, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_numeric);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_numeric, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_numeric);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_numeric);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_numeric);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$getlimits$set_module(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$getlimits->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$getlimits->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$getlimits->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_module);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_module, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_module);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_module, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$getlimits$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$getlimits->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$getlimits->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$getlimits->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_54c3845f5fc3817cc96603e39375cf3f;
static PyCodeObject *code_objects_d0cd2763f8006d92b3df8a6b4d5af39b;
static PyCodeObject *code_objects_4c9e9d204bd444811b912f9133bcf67e;
static PyCodeObject *code_objects_ba4147c3bf4b0434ad1bde3759943c2d;
static PyCodeObject *code_objects_c6db80419790a89762bb25e860ba0fa8;
static PyCodeObject *code_objects_1f6e06319c408cc3992e3eebcdb797aa;
static PyCodeObject *code_objects_c31676e10c95526ff1145ad5ba6c32d0;
static PyCodeObject *code_objects_f430a7b0e700278e3cdffbf959f2eeec;
static PyCodeObject *code_objects_6aa9abded6d0b7da4cd903ae0fb56ba0;
static PyCodeObject *code_objects_5d656a69b53e08c3e3634f6e9ed6a68c;
static PyCodeObject *code_objects_3d174c7c59a521fd05e17243157ed29f;
static PyCodeObject *code_objects_fabe96afd588165cd72ce69806f009ef;
static PyCodeObject *code_objects_83818225ecda3e0730a8794a50514c4e;
static PyCodeObject *code_objects_0a6bb3aeb5b7cbac9b7b4f1d60f8be3e;
static PyCodeObject *code_objects_c187ae2b34b5ff3ae2b3a252662c9734;
static PyCodeObject *code_objects_9e3d1e4e2c9f8553dbdcc2f6bb617839;
static PyCodeObject *code_objects_12de822368dc4e3001ded73bf1c8db10;
static PyCodeObject *code_objects_1964e09b61838af3b1ae1100c2d83a13;
static PyCodeObject *code_objects_8433ba56827355598c459c3b847c0372;
static PyCodeObject *code_objects_a7b82efc7c1e26376b179f82b209f568;
static PyCodeObject *code_objects_a9eb053695ceebd93d660b94772de3b5;
static PyCodeObject *code_objects_bc787ad75c9599ec67526f1992a22328;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_11ac93de96990698448876d5cbc16304); CHECK_OBJECT(module_filename_obj);
code_objects_54c3845f5fc3817cc96603e39375cf3f = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_193723f23fa211109d45772bb00c7736, mod_consts.const_str_digest_193723f23fa211109d45772bb00c7736, NULL, NULL, 0, 0, 0);
code_objects_d0cd2763f8006d92b3df8a6b4d5af39b = MAKE_CODE_OBJECT(module_filename_obj, 412, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_647832d5d012ef5f736460e94c883bb6, mod_consts.const_tuple_str_plain_self_str_plain_int_type_tuple, NULL, 2, 0, 0);
code_objects_4c9e9d204bd444811b912f9133bcf67e = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___new__, mod_consts.const_str_digest_9921f9bcf5458277b73e01603fff03a9, mod_consts.const_tuple_849295482a97faaf99989251c01fbde0_tuple, NULL, 2, 0, 0);
code_objects_ba4147c3bf4b0434ad1bde3759943c2d = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_04bfb3f910884592424fce6703571236, mod_consts.const_tuple_d99cd32b2d7afd3bf6a283d8c5b7a69b_tuple, NULL, 1, 0, 0);
code_objects_c6db80419790a89762bb25e860ba0fa8 = MAKE_CODE_OBJECT(module_filename_obj, 460, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_493f424513579c28b69e138fe767e833, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1f6e06319c408cc3992e3eebcdb797aa = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_dc1b8110f5b3291b1f7289ae32fc17db, mod_consts.const_tuple_25a81b431d8f95202605afd02d6547fe_tuple, NULL, 1, 0, 0);
code_objects_c31676e10c95526ff1145ad5ba6c32d0 = MAKE_CODE_OBJECT(module_filename_obj, 449, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_225b94f6d4a8d9b49b6a3ffca91d338a, mod_consts.const_tuple_str_plain_self_str_plain_fmt_tuple, NULL, 1, 0, 0);
code_objects_f430a7b0e700278e3cdffbf959f2eeec = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__fr0, mod_consts.const_str_plain__fr0, mod_consts.const_tuple_str_plain_a_tuple, NULL, 1, 0, 0);
code_objects_6aa9abded6d0b7da4cd903ae0fb56ba0 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__fr1, mod_consts.const_str_plain__fr1, mod_consts.const_tuple_str_plain_a_tuple, NULL, 1, 0, 0);
code_objects_5d656a69b53e08c3e3634f6e9ed6a68c = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__init, mod_consts.const_str_digest_313212deb5eaf98ebc9b4ddb74fe967f, mod_consts.const_tuple_str_plain_self_str_plain_dtype_tuple, NULL, 2, 0, 0);
code_objects_3d174c7c59a521fd05e17243157ed29f = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_epsneg, mod_consts.const_str_digest_b0aac7238dd10e7c210b66f63697cc68, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_fabe96afd588165cd72ce69806f009ef = MAKE_CODE_OBJECT(module_filename_obj, 61, 0, mod_consts.const_str_plain_finfo, mod_consts.const_str_plain_finfo, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_83818225ecda3e0730a8794a50514c4e = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_str, mod_consts.const_str_digest_e15d39998e3dd20ff1ebb96f19745cae, mod_consts.const_tuple_b295c15c2e548774f38c3a3cedeccfbe_tuple, mod_consts.const_tuple_str_plain_self_tuple, 2, 0, 0);
code_objects_0a6bb3aeb5b7cbac9b7b4f1d60f8be3e = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_iexp, mod_consts.const_str_digest_65a972710d220dabc9894f4ccd7a05fa, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c187ae2b34b5ff3ae2b3a252662c9734 = MAKE_CODE_OBJECT(module_filename_obj, 355, 0, mod_consts.const_str_plain_iinfo, mod_consts.const_str_plain_iinfo, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9e3d1e4e2c9f8553dbdcc2f6bb617839 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_machep, mod_consts.const_str_digest_6321c70f5a422822dfd8d72974778952, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_12de822368dc4e3001ded73bf1c8db10 = MAKE_CODE_OBJECT(module_filename_obj, 437, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_max, mod_consts.const_str_digest_680f1ebaae31ccd9a76118853c6fdaca, mod_consts.const_tuple_str_plain_self_str_plain_val_tuple, NULL, 1, 0, 0);
code_objects_1964e09b61838af3b1ae1100c2d83a13 = MAKE_CODE_OBJECT(module_filename_obj, 424, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_min, mod_consts.const_str_digest_0ce56c9f8af242ba13b62b42dfca1350, mod_consts.const_tuple_str_plain_self_str_plain_val_tuple, NULL, 1, 0, 0);
code_objects_8433ba56827355598c459c3b847c0372 = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_negep, mod_consts.const_str_digest_2dc49c1f7ca0fe7a134c8a2b5f7d1762, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a7b82efc7c1e26376b179f82b209f568 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_nexp, mod_consts.const_str_digest_d9f5d00b25c9be7a85729a4f01689565, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a9eb053695ceebd93d660b94772de3b5 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_resolution, mod_consts.const_str_digest_d6a2ad8a7028b2b871bd69ed863dd4cd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bc787ad75c9599ec67526f1992a22328 = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_tiny, mod_consts.const_str_digest_e7f7c31d206df2b5e7fa68e52bc77569, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__10_iexp(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__11___str__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__12___repr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__13_tiny(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__14___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__15_min(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__16_max(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__17___str__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__18___repr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__1__fr0(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__2__fr1(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__3___new__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__4__init(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__5_epsneg(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__6_resolution(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__7_machep(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__8_negep(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__9_nexp(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$_core$getlimits$$$function__1__fr0(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__1__fr0;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__1__fr0 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__1__fr0)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__1__fr0);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__1__fr0 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__1__fr0 = MAKE_FUNCTION_FRAME(tstate, code_objects_f430a7b0e700278e3cdffbf959f2eeec, module_numpy$_core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__1__fr0->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__1__fr0 = cache_frame_frame_numpy$_core$getlimits$$$function__1__fr0;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__1__fr0);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__1__fr0) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_1 = par_a;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_1 = "o";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_a);
tmp_expression_value_2 = par_a;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$getlimits$$$function__1__fr0->m_frame.f_lineno = 20;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = mod_consts.const_tuple_int_pos_1_tuple;
CHECK_OBJECT(par_a);
tmp_assattr_target_1 = par_a;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_shape, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
if (par_a == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 22;
type_description_1 = "o";
    goto frame_exception_exit_1;
}

tmp_return_value = par_a;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__1__fr0, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__1__fr0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__1__fr0, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__1__fr0,
    type_description_1,
    par_a
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__1__fr0 == cache_frame_frame_numpy$_core$getlimits$$$function__1__fr0) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__1__fr0);
    cache_frame_frame_numpy$_core$getlimits$$$function__1__fr0 = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__1__fr0);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_a);
par_a = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
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


static PyObject *impl_numpy$_core$getlimits$$$function__2__fr1(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_a = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__2__fr1;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__2__fr1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__2__fr1)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__2__fr1);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__2__fr1 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__2__fr1 = MAKE_FUNCTION_FRAME(tstate, code_objects_6aa9abded6d0b7da4cd903ae0fb56ba0, module_numpy$_core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__2__fr1->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__2__fr1 = cache_frame_frame_numpy$_core$getlimits$$$function__2__fr1;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__2__fr1);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__2__fr1) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_a);
tmp_expression_value_1 = par_a;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "o";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_a);
tmp_expression_value_2 = par_a;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$getlimits$$$function__2__fr1->m_frame.f_lineno = 28;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_a;
    assert(old != NULL);
    par_a = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = const_tuple_empty;
CHECK_OBJECT(par_a);
tmp_assattr_target_1 = par_a;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_shape, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
if (par_a == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 30;
type_description_1 = "o";
    goto frame_exception_exit_1;
}

tmp_return_value = par_a;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__2__fr1, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__2__fr1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__2__fr1, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__2__fr1,
    type_description_1,
    par_a
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__2__fr1 == cache_frame_frame_numpy$_core$getlimits$$$function__2__fr1) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__2__fr1);
    cache_frame_frame_numpy$_core$getlimits$$$function__2__fr1 = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__2__fr1);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_a);
par_a = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_a);
par_a = NULL;
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


static PyObject *impl_numpy$_core$getlimits$$$function__3___new__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_dtype = python_pars[1];
PyObject *var_obj = NULL;
PyObject *var_dtypes = NULL;
PyObject *var_newdtype = NULL;
PyObject *var_dt = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__3___new__;
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
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__3___new__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__3___new__)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__3___new__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__3___new__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__3___new__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4c9e9d204bd444811b912f9133bcf67e, module_numpy$_core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__3___new__->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__3___new__ = cache_frame_frame_numpy$_core$getlimits$$$function__3___new__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__3___new__);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__3___new__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__finfo_cache);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_dtype);
tmp_args_element_value_1 = par_dtype;
frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame.f_lineno = 180;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_obj == NULL);
var_obj = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_obj);
tmp_cmp_expr_left_1 = var_obj;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(var_obj);
tmp_return_value = var_obj;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__3___new__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__3___new__, exception_keeper_lineno_1);
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
    exception_lineno = 179;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame)) {
        frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_3;
branch_no_2:;
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
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_left_3 = par_dtype;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_3 = module_var_accessor_numpy$_core$getlimits$warnings(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_warn);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_1bb08d6d00ad9fa304240ae8ae3405b9;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$_core$getlimits$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame.f_lineno = 188;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$_core$getlimits$numeric(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 196;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_dtype);
tmp_args_element_value_2 = par_dtype;
frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame.f_lineno = 196;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dtype, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_dtype;
    assert(old != NULL);
    par_dtype = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__3___new__, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__3___new__, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_type_arg_1;
tmp_called_instance_2 = module_var_accessor_numpy$_core$getlimits$numeric(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_dtype);
tmp_type_arg_1 = par_dtype;
tmp_args_element_value_3 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame.f_lineno = 199;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_dtype, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = par_dtype;
    assert(old != NULL);
    par_dtype = tmp_assign_source_3;
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 195;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame)) {
        frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_5;
branch_end_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_cls);
tmp_expression_value_5 = par_cls;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__finfo_cache);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dtype);
tmp_args_element_value_4 = par_dtype;
frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame.f_lineno = 201;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_obj;
    var_obj = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_obj);
tmp_cmp_expr_left_5 = var_obj;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(var_obj);
tmp_return_value = var_obj;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_list_element_1;
CHECK_OBJECT(par_dtype);
tmp_list_element_1 = par_dtype;
tmp_assign_source_5 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_5, 0, tmp_list_element_1);
assert(var_dtypes == NULL);
var_dtypes = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_5;
tmp_called_instance_3 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dtype);
tmp_args_element_value_5 = par_dtype;
frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame.f_lineno = 205;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_obj2sctype, tmp_args_element_value_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_newdtype == NULL);
var_newdtype = tmp_assign_source_6;
}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_newdtype);
tmp_cmp_expr_left_6 = var_newdtype;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_right_6 = par_dtype;
tmp_condition_result_6 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
CHECK_OBJECT(var_dtypes);
tmp_list_arg_value_1 = var_dtypes;
CHECK_OBJECT(var_newdtype);
tmp_item_value_1 = var_newdtype;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(var_newdtype);
tmp_assign_source_7 = var_newdtype;
{
    PyObject *old = par_dtype;
    assert(old != NULL);
    par_dtype = tmp_assign_source_7;
    Py_INCREF(par_dtype);
    Py_DECREF(old);
}

}
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_1;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
PyObject *tmp_expression_value_6;
if (par_dtype == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 209;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_issubclass_cls_1 = par_dtype;
tmp_expression_value_6 = module_var_accessor_numpy$_core$getlimits$numeric(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_inexact);
if (tmp_issubclass_classes_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
CHECK_OBJECT(tmp_issubclass_classes_1);
Py_DECREF(tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_31aa61424dcfec2038b29c7de17c8186;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
if (par_dtype == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 210;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}

tmp_operand_value_2 = par_dtype;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_c2b437067d0b2663a182d5693884b4ea;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame.f_lineno = 210;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 210;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_7:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_cls);
tmp_expression_value_8 = par_cls;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__finfo_cache);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (par_dtype == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 211;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = par_dtype;
frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame.f_lineno = 211;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_obj;
    assert(old != NULL);
    var_obj = tmp_assign_source_8;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_obj);
tmp_cmp_expr_left_7 = var_obj;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
CHECK_OBJECT(var_obj);
tmp_return_value = var_obj;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_3;
PyObject *tmp_issubclass_cls_2;
PyObject *tmp_issubclass_classes_2;
PyObject *tmp_expression_value_9;
if (par_dtype == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 214;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_issubclass_cls_2 = par_dtype;
tmp_expression_value_9 = module_var_accessor_numpy$_core$getlimits$numeric(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_floating);
if (tmp_issubclass_classes_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
CHECK_OBJECT(tmp_issubclass_classes_2);
Py_DECREF(tmp_issubclass_classes_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
tmp_expression_value_10 = module_var_accessor_numpy$_core$getlimits$_convert_to_float(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__convert_to_float);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (par_dtype == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 215;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_1 = par_dtype;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_newdtype;
    assert(old != NULL);
    var_newdtype = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_newdtype);
tmp_cmp_expr_left_8 = var_newdtype;
if (par_dtype == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 216;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_8 = par_dtype;
tmp_condition_result_10 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
CHECK_OBJECT(var_dtypes);
tmp_list_arg_value_2 = var_dtypes;
CHECK_OBJECT(var_newdtype);
tmp_item_value_2 = var_newdtype;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(var_newdtype);
tmp_assign_source_10 = var_newdtype;
{
    PyObject *old = par_dtype;
    par_dtype = tmp_assign_source_10;
    Py_INCREF(par_dtype);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(par_cls);
tmp_expression_value_12 = par_cls;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__finfo_cache);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dtype);
tmp_args_element_value_7 = par_dtype;
tmp_args_element_value_8 = Py_None;
frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame.f_lineno = 221;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_obj;
    assert(old != NULL);
    var_obj = tmp_assign_source_11;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_obj);
tmp_cmp_expr_left_9 = var_obj;
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_11 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_dtypes);
tmp_iter_arg_1 = var_dtypes;
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_12;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_13 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 226;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_14 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_dt;
    var_dt = tmp_assign_source_14;
    Py_INCREF(var_dt);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_ass_subscript_1;
if (var_obj == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_obj);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 227;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}

tmp_ass_subvalue_1 = var_obj;
if (par_cls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 227;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}

tmp_expression_value_13 = par_cls;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__finfo_cache);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_dt);
tmp_ass_subscript_1 = var_dt;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
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
if (var_obj == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_obj);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_obj;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_11:;
branch_no_10:;
branch_no_9:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_instance_4 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_cls);
tmp_args_element_value_9 = par_cls;
frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame.f_lineno = 229;
tmp_expression_value_14 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain___new__, tmp_args_element_value_9);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__init);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (par_dtype == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 229;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_10 = par_dtype;
frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame.f_lineno = 229;
tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_obj;
    assert(old != NULL);
    var_obj = tmp_assign_source_15;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_dtypes);
tmp_iter_arg_2 = var_dtypes;
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_16;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_17 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 230;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_18 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_dt;
    var_dt = tmp_assign_source_18;
    Py_INCREF(var_dt);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_ass_subscript_2;
if (var_obj == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_obj);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}

tmp_ass_subvalue_2 = var_obj;
if (par_cls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}

tmp_expression_value_15 = par_cls;
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__finfo_cache);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_dt);
tmp_ass_subscript_2 = var_dt;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
goto loop_start_2;
loop_end_2:;
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
if (var_obj == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_obj);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 232;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_obj;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__3___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__3___new__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__3___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__3___new__,
    type_description_1,
    par_cls,
    par_dtype,
    var_obj,
    var_dtypes,
    var_newdtype,
    var_dt
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__3___new__ == cache_frame_frame_numpy$_core$getlimits$$$function__3___new__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__3___new__);
    cache_frame_frame_numpy$_core$getlimits$$$function__3___new__ = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__3___new__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_dtype);
par_dtype = NULL;
Py_XDECREF(var_obj);
var_obj = NULL;
Py_XDECREF(var_dtypes);
var_dtypes = NULL;
Py_XDECREF(var_newdtype);
var_newdtype = NULL;
Py_XDECREF(var_dt);
var_dt = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_dtype);
par_dtype = NULL;
Py_XDECREF(var_obj);
var_obj = NULL;
Py_XDECREF(var_dtypes);
var_dtypes = NULL;
Py_XDECREF(var_newdtype);
var_newdtype = NULL;
Py_XDECREF(var_dt);
var_dt = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

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


static PyObject *impl_numpy$_core$getlimits$$$function__4__init(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_dtype = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__4__init;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__4__init = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__4__init)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__4__init);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__4__init == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__4__init = MAKE_FUNCTION_FRAME(tstate, code_objects_5d656a69b53e08c3e3634f6e9ed6a68c, module_numpy$_core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__4__init->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__4__init = cache_frame_frame_numpy$_core$getlimits$$$function__4__init;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__4__init);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__4__init) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_instance_1 = module_var_accessor_numpy$_core$getlimits$numeric(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dtype);
tmp_args_element_value_1 = par_dtype;
frame_frame_numpy$_core$getlimits$$$function__4__init->m_frame.f_lineno = 235;
tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dtype, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_dtype, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_itemsize);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_8;
tmp_assattr_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_bits, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__fmt, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__repr, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
tmp_called_value_1 = module_var_accessor_numpy$_core$getlimits$_populate_finfo_constants(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__populate_finfo_constants);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$getlimits$$$function__4__init->m_frame.f_lineno = 239;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__4__init, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__4__init->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__4__init, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__4__init,
    type_description_1,
    par_self,
    par_dtype
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__4__init == cache_frame_frame_numpy$_core$getlimits$$$function__4__init) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__4__init);
    cache_frame_frame_numpy$_core$getlimits$$$function__4__init = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__4__init);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$getlimits$$$function__5_epsneg(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__5_epsneg;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__5_epsneg = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__5_epsneg)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__5_epsneg);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__5_epsneg == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__5_epsneg = MAKE_FUNCTION_FRAME(tstate, code_objects_3d174c7c59a521fd05e17243157ed29f, module_numpy$_core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__5_epsneg->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__5_epsneg = cache_frame_frame_numpy$_core$getlimits$$$function__5_epsneg;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__5_epsneg);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__5_epsneg) == 2);

// Framed code:
{
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_truediv_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_eps);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_truediv_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__radix);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 245;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__5_epsneg, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__5_epsneg->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__5_epsneg, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__5_epsneg,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__5_epsneg == cache_frame_frame_numpy$_core$getlimits$$$function__5_epsneg) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__5_epsneg);
    cache_frame_frame_numpy$_core$getlimits$$$function__5_epsneg = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__5_epsneg);

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


static PyObject *impl_numpy$_core$getlimits$$$function__6_resolution(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__6_resolution;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__6_resolution = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__6_resolution)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__6_resolution);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__6_resolution == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__6_resolution = MAKE_FUNCTION_FRAME(tstate, code_objects_a9eb053695ceebd93d660b94772de3b5, module_numpy$_core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__6_resolution->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__6_resolution = cache_frame_frame_numpy$_core$getlimits$$$function__6_resolution;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__6_resolution);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__6_resolution) == 2);

// Framed code:
{
PyObject *tmp_pow_expr_left_1;
PyObject *tmp_pow_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_dtype);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$getlimits$$$function__6_resolution->m_frame.f_lineno = 249;
tmp_pow_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_type,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_10_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_pow_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_precision);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_pow_expr_left_1);

exception_lineno = 249;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_pow_expr_right_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_pow_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_pow_expr_left_1);

exception_lineno = 249;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
CHECK_OBJECT(tmp_pow_expr_left_1);
Py_DECREF(tmp_pow_expr_left_1);
CHECK_OBJECT(tmp_pow_expr_right_1);
Py_DECREF(tmp_pow_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__6_resolution, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__6_resolution->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__6_resolution, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__6_resolution,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__6_resolution == cache_frame_frame_numpy$_core$getlimits$$$function__6_resolution) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__6_resolution);
    cache_frame_frame_numpy$_core$getlimits$$$function__6_resolution = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__6_resolution);

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


static PyObject *impl_numpy$_core$getlimits$$$function__7_machep(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__7_machep;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__7_machep = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__7_machep)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__7_machep);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__7_machep == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__7_machep = MAKE_FUNCTION_FRAME(tstate, code_objects_9e3d1e4e2c9f8553dbdcc2f6bb617839, module_numpy$_core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__7_machep->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__7_machep = cache_frame_frame_numpy$_core$getlimits$$$function__7_machep;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__7_machep);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__7_machep) == 2);

// Framed code:
{
PyObject *tmp_int_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$_core$getlimits$math(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_log2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_eps);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 253;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$getlimits$$$function__7_machep->m_frame.f_lineno = 253;
tmp_int_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__7_machep, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__7_machep->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__7_machep, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__7_machep,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__7_machep == cache_frame_frame_numpy$_core$getlimits$$$function__7_machep) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__7_machep);
    cache_frame_frame_numpy$_core$getlimits$$$function__7_machep = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__7_machep);

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


static PyObject *impl_numpy$_core$getlimits$$$function__8_negep(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__8_negep;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__8_negep = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__8_negep)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__8_negep);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__8_negep == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__8_negep = MAKE_FUNCTION_FRAME(tstate, code_objects_8433ba56827355598c459c3b847c0372, module_numpy$_core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__8_negep->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__8_negep = cache_frame_frame_numpy$_core$getlimits$$$function__8_negep;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__8_negep);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__8_negep) == 2);

// Framed code:
{
PyObject *tmp_int_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$_core$getlimits$math(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_log2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_epsneg);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 257;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$getlimits$$$function__8_negep->m_frame.f_lineno = 257;
tmp_int_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__8_negep, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__8_negep->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__8_negep, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__8_negep,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__8_negep == cache_frame_frame_numpy$_core$getlimits$$$function__8_negep) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__8_negep);
    cache_frame_frame_numpy$_core$getlimits$$$function__8_negep = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__8_negep);

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


static PyObject *impl_numpy$_core$getlimits$$$function__9_nexp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__9_nexp;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__9_nexp = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__9_nexp)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__9_nexp);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__9_nexp == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__9_nexp = MAKE_FUNCTION_FRAME(tstate, code_objects_a7b82efc7c1e26376b179f82b209f568, module_numpy$_core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__9_nexp->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__9_nexp = cache_frame_frame_numpy$_core$getlimits$$$function__9_nexp;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__9_nexp);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__9_nexp) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$_core$getlimits$math(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ceil);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_numpy$_core$getlimits$math(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 262;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_log2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 262;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_maxexp);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 262;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_minexp);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 262;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 262;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_int_pos_2;
tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 262;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$getlimits$$$function__9_nexp->m_frame.f_lineno = 262;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 262;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$getlimits$$$function__9_nexp->m_frame.f_lineno = 262;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__9_nexp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__9_nexp->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__9_nexp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__9_nexp,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__9_nexp == cache_frame_frame_numpy$_core$getlimits$$$function__9_nexp) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__9_nexp);
    cache_frame_frame_numpy$_core$getlimits$$$function__9_nexp = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__9_nexp);

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


static PyObject *impl_numpy$_core$getlimits$$$function__10_iexp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__10_iexp;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__10_iexp = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__10_iexp)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__10_iexp);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__10_iexp == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__10_iexp = MAKE_FUNCTION_FRAME(tstate, code_objects_0a6bb3aeb5b7cbac9b7b4f1d60f8be3e, module_numpy$_core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__10_iexp->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__10_iexp = cache_frame_frame_numpy$_core$getlimits$$$function__10_iexp;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__10_iexp);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__10_iexp) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$_core$getlimits$math(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ceil);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_numpy$_core$getlimits$math(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 267;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_log2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 267;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_maxexp);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 267;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_minexp);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 267;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 267;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$getlimits$$$function__10_iexp->m_frame.f_lineno = 267;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 267;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$getlimits$$$function__10_iexp->m_frame.f_lineno = 267;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__10_iexp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__10_iexp->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__10_iexp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__10_iexp,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__10_iexp == cache_frame_frame_numpy$_core$getlimits$$$function__10_iexp) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__10_iexp);
    cache_frame_frame_numpy$_core$getlimits$$$function__10_iexp = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__10_iexp);

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


static PyObject *impl_numpy$_core$getlimits$$$function__11___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_fmt = NULL;
PyObject *var_get_str = NULL;
PyObject *var_precision = NULL;
PyObject *var_machep = NULL;
PyObject *var_negep = NULL;
PyObject *var_minexp = NULL;
PyObject *var_maxexp = NULL;
PyObject *var_resolution = NULL;
PyObject *var_eps = NULL;
PyObject *var_epsneg = NULL;
PyObject *var_tiny = NULL;
PyObject *var_smallest_normal = NULL;
PyObject *var_smallest_subnormal = NULL;
PyObject *var_nexp = NULL;
PyObject *var_max_ = NULL;
PyObject *var_min_ = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__11___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__11___str__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__11___str__)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__11___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__11___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__11___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1f6e06319c408cc3992e3eebcdb797aa, module_numpy$_core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__11___str__->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__11___str__ = cache_frame_frame_numpy$_core$getlimits$$$function__11___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__11___str__);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__11___str__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
tmp_name_value_1 = mod_consts.const_str_plain__fmt;
tmp_default_value_1 = Py_None;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "coooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_assignment_expr_1__value == NULL);
tmp_assignment_expr_1__value = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_2 = tmp_assignment_expr_1__value;
assert(var_fmt == NULL);
Py_INCREF(tmp_assign_source_2);
var_fmt = tmp_assign_source_2;
}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_cmp_expr_left_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_1);
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
CHECK_OBJECT(var_fmt);
tmp_return_value = var_fmt;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_defaults_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_3 = MAKE_FUNCTION_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str(tstate, tmp_defaults_1, tmp_closure_1);

assert(var_get_str == NULL);
var_get_str = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
CHECK_OBJECT(var_get_str);
tmp_called_value_1 = var_get_str;
frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame.f_lineno = 280;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_precision_int_pos_3_tuple);

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_precision == NULL);
var_precision = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
CHECK_OBJECT(var_get_str);
tmp_called_value_2 = var_get_str;
frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame.f_lineno = 281;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_machep_int_pos_6_tuple);

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_machep == NULL);
var_machep = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
CHECK_OBJECT(var_get_str);
tmp_called_value_3 = var_get_str;
frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame.f_lineno = 282;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_negep_int_pos_6_tuple);

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_negep == NULL);
var_negep = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
CHECK_OBJECT(var_get_str);
tmp_called_value_4 = var_get_str;
frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame.f_lineno = 283;
tmp_assign_source_7 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_minexp_int_pos_6_tuple);

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_minexp == NULL);
var_minexp = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_5;
CHECK_OBJECT(var_get_str);
tmp_called_value_5 = var_get_str;
frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame.f_lineno = 284;
tmp_assign_source_8 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_maxexp_int_pos_6_tuple);

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_maxexp == NULL);
var_maxexp = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_6;
CHECK_OBJECT(var_get_str);
tmp_called_value_6 = var_get_str;
frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame.f_lineno = 285;
tmp_assign_source_9 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_resolution_tuple);

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_resolution == NULL);
var_resolution = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_7;
CHECK_OBJECT(var_get_str);
tmp_called_value_7 = var_get_str;
frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame.f_lineno = 286;
tmp_assign_source_10 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_eps_tuple);

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_eps == NULL);
var_eps = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_8;
CHECK_OBJECT(var_get_str);
tmp_called_value_8 = var_get_str;
frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame.f_lineno = 287;
tmp_assign_source_11 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_epsneg_tuple);

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_epsneg == NULL);
var_epsneg = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_9;
CHECK_OBJECT(var_get_str);
tmp_called_value_9 = var_get_str;
frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame.f_lineno = 288;
tmp_assign_source_12 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_tiny_tuple);

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_tiny == NULL);
var_tiny = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_10;
CHECK_OBJECT(var_get_str);
tmp_called_value_10 = var_get_str;
frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame.f_lineno = 289;
tmp_assign_source_13 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_plain_smallest_normal_tuple);

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_smallest_normal == NULL);
var_smallest_normal = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_11;
CHECK_OBJECT(var_get_str);
tmp_called_value_11 = var_get_str;
frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame.f_lineno = 290;
tmp_assign_source_14 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_str_plain_smallest_subnormal_tuple);

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_smallest_subnormal == NULL);
var_smallest_subnormal = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_12;
CHECK_OBJECT(var_get_str);
tmp_called_value_12 = var_get_str;
frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame.f_lineno = 291;
tmp_assign_source_15 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_12, mod_consts.const_tuple_str_plain_nexp_int_pos_6_tuple);

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_nexp == NULL);
var_nexp = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_13;
CHECK_OBJECT(var_get_str);
tmp_called_value_13 = var_get_str;
frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame.f_lineno = 292;
tmp_assign_source_16 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_13, mod_consts.const_tuple_str_plain_max_tuple);

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_max_ == NULL);
var_max_ = tmp_assign_source_16;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain_min);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain_max);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_min);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_5 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_max);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 293;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_digest_32766fbb40234c03441c251c7c12889e;
assert(var_min_ == NULL);
Py_INCREF(tmp_assign_source_17);
var_min_ = tmp_assign_source_17;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_14;
CHECK_OBJECT(var_get_str);
tmp_called_value_14 = var_get_str;
frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame.f_lineno = 296;
tmp_assign_source_18 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_14, mod_consts.const_tuple_str_plain_min_tuple);

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_min_ == NULL);
var_min_ = tmp_assign_source_18;
}
branch_end_2:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_58e328a0ea4297471e3883dad4910e11;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 31);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyObject *tmp_format_value_6;
PyObject *tmp_format_spec_6;
PyObject *tmp_format_value_7;
PyObject *tmp_format_spec_7;
PyObject *tmp_format_value_8;
PyObject *tmp_format_spec_8;
PyObject *tmp_format_value_9;
PyObject *tmp_format_spec_9;
PyObject *tmp_format_value_10;
PyObject *tmp_format_spec_10;
PyObject *tmp_format_value_11;
PyObject *tmp_format_spec_11;
PyObject *tmp_format_value_12;
PyObject *tmp_format_spec_12;
PyObject *tmp_format_value_13;
PyObject *tmp_format_spec_13;
PyObject *tmp_format_value_14;
PyObject *tmp_format_spec_14;
PyObject *tmp_format_value_15;
PyObject *tmp_format_spec_15;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_6 = Nuitka_Cell_GET(par_self);
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_dtype);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_a447119752cfc3a87f11c8347852fbe7;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_precision);
tmp_format_value_2 = var_precision;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_eac5dfe63f48d06d6ce2205099f98891;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(var_resolution);
tmp_format_value_3 = var_resolution;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ebf008c505897d73a8b55a23ea154653;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
CHECK_OBJECT(var_machep);
tmp_format_value_4 = var_machep;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_e28f0f73762ebf1a350299a4e124ee56;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
CHECK_OBJECT(var_eps);
tmp_format_value_5 = var_eps;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 9, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_c8c8cee72ae936af6be63e93e08d485d;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 10, tmp_tuple_element_1);
CHECK_OBJECT(var_negep);
tmp_format_value_6 = var_negep;
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 11, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ea1509db16bb849e58916d0b1a0902e7;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 12, tmp_tuple_element_1);
CHECK_OBJECT(var_epsneg);
tmp_format_value_7 = var_epsneg;
tmp_format_spec_7 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 13, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_7d04bf5356cb5853cf89166c4176d893;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 14, tmp_tuple_element_1);
CHECK_OBJECT(var_minexp);
tmp_format_value_8 = var_minexp;
tmp_format_spec_8 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 15, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_b039481f78536309d195a2fd6fe39a14;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 16, tmp_tuple_element_1);
CHECK_OBJECT(var_tiny);
tmp_format_value_9 = var_tiny;
tmp_format_spec_9 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 17, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_5e1c4b6f7c8dfc06cbac5c3d74ebacfc;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 18, tmp_tuple_element_1);
CHECK_OBJECT(var_maxexp);
tmp_format_value_10 = var_maxexp;
tmp_format_spec_10 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 19, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_062797bc238ff7e6d26ed52b13257ef6;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 20, tmp_tuple_element_1);
CHECK_OBJECT(var_max_);
tmp_format_value_11 = var_max_;
tmp_format_spec_11 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_11, tmp_format_spec_11);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 21, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_e42189fd124dec27ff18b15c69a7f42f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 22, tmp_tuple_element_1);
CHECK_OBJECT(var_nexp);
tmp_format_value_12 = var_nexp;
tmp_format_spec_12 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_12, tmp_format_spec_12);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 23, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_1ef42bccdc276ec87f67b6323f3a3d3a;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 24, tmp_tuple_element_1);
CHECK_OBJECT(var_min_);
tmp_format_value_13 = var_min_;
tmp_format_spec_13 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_13, tmp_format_spec_13);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 25, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ee7c877c25e39778fa59c4c415a85441;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 26, tmp_tuple_element_1);
CHECK_OBJECT(var_smallest_normal);
tmp_format_value_14 = var_smallest_normal;
tmp_format_spec_14 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_14, tmp_format_spec_14);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 27, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_b501b996dda52c8dd0fd02db48c449fa;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 28, tmp_tuple_element_1);
CHECK_OBJECT(var_smallest_subnormal);
tmp_format_value_15 = var_smallest_subnormal;
tmp_format_spec_15 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_15, tmp_format_spec_15);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "coooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 29, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_2a8eab127c35f1224b62330189ddd24a;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 30, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_19 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_19 == NULL));
{
    PyObject *old = var_fmt;
    assert(old != NULL);
    var_fmt = tmp_assign_source_19;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_fmt);
tmp_assattr_value_1 = var_fmt;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_assattr_target_1 = Nuitka_Cell_GET(par_self);
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__fmt, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "coooooooooooooooo";
    goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__11___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__11___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__11___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__11___str__,
    type_description_1,
    par_self,
    var_fmt,
    var_get_str,
    var_precision,
    var_machep,
    var_negep,
    var_minexp,
    var_maxexp,
    var_resolution,
    var_eps,
    var_epsneg,
    var_tiny,
    var_smallest_normal,
    var_smallest_subnormal,
    var_nexp,
    var_max_,
    var_min_
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__11___str__ == cache_frame_frame_numpy$_core$getlimits$$$function__11___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__11___str__);
    cache_frame_frame_numpy$_core$getlimits$$$function__11___str__ = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__11___str__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_fmt);
tmp_return_value = var_fmt;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
Py_XDECREF(var_fmt);
var_fmt = NULL;
Py_XDECREF(var_get_str);
var_get_str = NULL;
Py_XDECREF(var_precision);
var_precision = NULL;
Py_XDECREF(var_machep);
var_machep = NULL;
Py_XDECREF(var_negep);
var_negep = NULL;
Py_XDECREF(var_minexp);
var_minexp = NULL;
Py_XDECREF(var_maxexp);
var_maxexp = NULL;
Py_XDECREF(var_resolution);
var_resolution = NULL;
Py_XDECREF(var_eps);
var_eps = NULL;
Py_XDECREF(var_epsneg);
var_epsneg = NULL;
Py_XDECREF(var_tiny);
var_tiny = NULL;
Py_XDECREF(var_smallest_normal);
var_smallest_normal = NULL;
Py_XDECREF(var_smallest_subnormal);
var_smallest_subnormal = NULL;
Py_XDECREF(var_nexp);
var_nexp = NULL;
Py_XDECREF(var_max_);
var_max_ = NULL;
Py_XDECREF(var_min_);
var_min_ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
Py_XDECREF(var_fmt);
var_fmt = NULL;
Py_XDECREF(var_get_str);
var_get_str = NULL;
Py_XDECREF(var_precision);
var_precision = NULL;
Py_XDECREF(var_machep);
var_machep = NULL;
Py_XDECREF(var_negep);
var_negep = NULL;
Py_XDECREF(var_minexp);
var_minexp = NULL;
Py_XDECREF(var_maxexp);
var_maxexp = NULL;
Py_XDECREF(var_resolution);
var_resolution = NULL;
Py_XDECREF(var_eps);
var_eps = NULL;
Py_XDECREF(var_epsneg);
var_epsneg = NULL;
Py_XDECREF(var_tiny);
var_tiny = NULL;
Py_XDECREF(var_smallest_normal);
var_smallest_normal = NULL;
Py_XDECREF(var_smallest_subnormal);
var_smallest_subnormal = NULL;
Py_XDECREF(var_nexp);
var_nexp = NULL;
Py_XDECREF(var_max_);
var_max_ = NULL;
Py_XDECREF(var_min_);
var_min_ = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

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


static PyObject *impl_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
PyObject *par_pad = python_pars[1];
PyObject *var_val = NULL;
PyObject *var_s = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str = MAKE_FUNCTION_FRAME(tstate, code_objects_83818225ecda3e0730a8794a50514c4e, module_numpy$_core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str = cache_frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 274;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_name);
tmp_name_value_1 = par_name;
tmp_default_value_1 = Py_None;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
assert(tmp_assignment_expr_1__value == NULL);
tmp_assignment_expr_1__value = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_2 = tmp_assignment_expr_1__value;
assert(var_val == NULL);
Py_INCREF(tmp_assign_source_2);
var_val = tmp_assign_source_2;
}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_cmp_expr_left_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_1);
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
tmp_return_value = mod_consts.const_str_angle_undefined;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_pad);
tmp_cmp_expr_left_2 = par_pad;
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_val);
tmp_unicode_arg_1 = var_val;
tmp_expression_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ljust);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_pad);
tmp_args_element_value_1 = par_pad;
frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str->m_frame.f_lineno = 277;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
assert(var_s == NULL);
var_s = tmp_assign_source_3;
}
branch_no_2:;
{
PyObject *tmp_unicode_arg_2;
CHECK_OBJECT(var_val);
tmp_unicode_arg_2 = var_val;
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str,
    type_description_1,
    par_name,
    par_pad,
    var_val,
    var_s,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str == cache_frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str);
    cache_frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_val);
CHECK_OBJECT(var_val);
Py_DECREF(var_val);
var_val = NULL;
Py_XDECREF(var_s);
var_s = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_val);
var_val = NULL;
Py_XDECREF(var_s);
var_s = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_pad);
Py_DECREF(par_pad);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_pad);
Py_DECREF(par_pad);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$getlimits$$$function__12___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_repr_str = NULL;
PyObject *var_c = NULL;
PyObject *var_fmt_str = NULL;
PyObject *var_max_str = NULL;
PyObject *var_min_str = NULL;
PyObject *var_resolution_str = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__12___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__12___repr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__12___repr__)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__12___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__12___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__12___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ba4147c3bf4b0434ad1bde3759943c2d, module_numpy$_core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__12___repr__->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__12___repr__ = cache_frame_frame_numpy$_core$getlimits$$$function__12___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__12___repr__);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__12___repr__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_name_value_1 = mod_consts.const_str_plain__repr;
tmp_default_value_1 = Py_None;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_assignment_expr_1__value == NULL);
tmp_assignment_expr_1__value = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_2 = tmp_assignment_expr_1__value;
assert(var_repr_str == NULL);
Py_INCREF(tmp_assign_source_2);
var_repr_str = tmp_assign_source_2;
}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_cmp_expr_left_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_1);
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
CHECK_OBJECT(var_repr_str);
tmp_return_value = var_repr_str;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_c == NULL);
var_c = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_2;
tmp_expression_value_5 = module_var_accessor_numpy$_core$getlimits$_MACHAR_PARAMS(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MACHAR_PARAMS);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 321;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 321;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = MAKE_DICT_EMPTY(tstate);
frame_frame_numpy$_core$getlimits$$$function__12___repr__->m_frame.f_lineno = 321;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$getlimits$$$function__12___repr__->m_frame.f_lineno = 321;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_fmt_str_digest_eee7b0934fe224b34ba6722d84ccd2bf_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_fmt_str == NULL);
var_fmt_str = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_fmt_str);
tmp_cmp_expr_left_2 = var_fmt_str;
tmp_cmp_expr_right_2 = mod_consts.const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf;
tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain_max);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain_min);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_fmt_str);
tmp_mod_expr_left_1 = var_fmt_str;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_max);
if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_10 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$getlimits$$$function__12___repr__->m_frame.f_lineno = 323;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_max_str == NULL);
var_max_str = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(var_fmt_str);
tmp_mod_expr_left_2 = var_fmt_str;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_mod_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_min);
if (tmp_mod_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_12 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$getlimits$$$function__12___repr__->m_frame.f_lineno = 324;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_min_str == NULL);
var_min_str = tmp_assign_source_6;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_max);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_max_str == NULL);
var_max_str = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unicode_arg_2;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_unicode_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_min);
if (tmp_unicode_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
CHECK_OBJECT(tmp_unicode_arg_2);
Py_DECREF(tmp_unicode_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_min_str == NULL);
var_min_str = tmp_assign_source_8;
}
branch_end_2:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unicode_arg_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_unicode_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_resolution);
if (tmp_unicode_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = BUILTIN_UNICODE1(tmp_unicode_arg_3);
CHECK_OBJECT(tmp_unicode_arg_3);
Py_DECREF(tmp_unicode_arg_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_resolution_str == NULL);
var_resolution_str = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(var_c);
tmp_format_value_1 = var_c;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 10);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyObject *tmp_format_value_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_bd74e2e7c54f8e7abc6d13bd1a5dae55;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_resolution_str);
tmp_format_value_2 = var_resolution_str;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_5011c4c6effddad10644e3458ab7bf28;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(var_min_str);
tmp_format_value_3 = var_min_str;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_4851334840d34b49c06389f4acf326f1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
CHECK_OBJECT(var_max_str);
tmp_format_value_4 = var_max_str;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_22d139cce07af3b6f1e2b25fdbcb758e;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_format_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_dtype);
if (tmp_format_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
CHECK_OBJECT(tmp_format_value_5);
Py_DECREF(tmp_format_value_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 9, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_10 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_10 == NULL));
{
    PyObject *old = var_repr_str;
    assert(old != NULL);
    var_repr_str = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_repr_str);
tmp_assattr_value_1 = var_repr_str;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__repr, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__12___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__12___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__12___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__12___repr__,
    type_description_1,
    par_self,
    var_repr_str,
    var_c,
    var_fmt_str,
    var_max_str,
    var_min_str,
    var_resolution_str
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__12___repr__ == cache_frame_frame_numpy$_core$getlimits$$$function__12___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__12___repr__);
    cache_frame_frame_numpy$_core$getlimits$$$function__12___repr__ = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__12___repr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_repr_str);
tmp_return_value = var_repr_str;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_repr_str);
var_repr_str = NULL;
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_fmt_str);
var_fmt_str = NULL;
Py_XDECREF(var_max_str);
var_max_str = NULL;
Py_XDECREF(var_min_str);
var_min_str = NULL;
Py_XDECREF(var_resolution_str);
var_resolution_str = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_repr_str);
var_repr_str = NULL;
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_fmt_str);
var_fmt_str = NULL;
Py_XDECREF(var_max_str);
var_max_str = NULL;
Py_XDECREF(var_min_str);
var_min_str = NULL;
Py_XDECREF(var_resolution_str);
var_resolution_str = NULL;
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


static PyObject *impl_numpy$_core$getlimits$$$function__13_tiny(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__13_tiny;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__13_tiny = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__13_tiny)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__13_tiny);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__13_tiny == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__13_tiny = MAKE_FUNCTION_FRAME(tstate, code_objects_bc787ad75c9599ec67526f1992a22328, module_numpy$_core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__13_tiny->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__13_tiny = cache_frame_frame_numpy$_core$getlimits$$$function__13_tiny;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__13_tiny);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__13_tiny) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_smallest_normal);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__13_tiny, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__13_tiny->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__13_tiny, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__13_tiny,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__13_tiny == cache_frame_frame_numpy$_core$getlimits$$$function__13_tiny) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__13_tiny);
    cache_frame_frame_numpy$_core$getlimits$$$function__13_tiny = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__13_tiny);

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


static PyObject *impl_numpy$_core$getlimits$$$function__14___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_int_type = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__14___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__14___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__14___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__14___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__14___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__14___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d0cd2763f8006d92b3df8a6b4d5af39b, module_numpy$_core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__14___init__->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__14___init__ = cache_frame_frame_numpy$_core$getlimits$$$function__14___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__14___init__);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__14___init__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_instance_1 = module_var_accessor_numpy$_core$getlimits$numeric(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_int_type);
tmp_args_element_value_1 = par_int_type;
frame_frame_numpy$_core$getlimits$$$function__14___init__->m_frame.f_lineno = 414;
tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dtype, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_dtype, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "oo";
    goto try_except_handler_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__14___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__14___init__, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_TypeError;
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
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_type_arg_1;
PyObject *tmp_assattr_target_2;
tmp_called_instance_2 = module_var_accessor_numpy$_core$getlimits$numeric(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numeric);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_int_type);
tmp_type_arg_1 = par_int_type;
tmp_args_element_value_2 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_args_element_value_2 == NULL));
frame_frame_numpy$_core$getlimits$$$function__14___init__->m_frame.f_lineno = 416;
tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_dtype, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_dtype, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto try_except_handler_2;
}
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 413;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$_core$getlimits$$$function__14___init__->m_frame)) {
        frame_frame_numpy$_core$getlimits$$$function__14___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_1:;
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_kind);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_kind, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_itemsize);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_8;
tmp_assattr_value_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_bits, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_assattr_target_5;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_1fb8303ac42db8ab17be5f2ef764dc5e;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_kind);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_bits);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
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
tmp_assattr_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_key, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_kind);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_iu;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "oo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_b99f4ed01107a5ec2d731598b869331b;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_kind);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
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


exception_lineno = 421;
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
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_numpy$_core$getlimits$$$function__14___init__->m_frame.f_lineno = 421;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 421;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__14___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__14___init__,
    type_description_1,
    par_self,
    par_int_type
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__14___init__ == cache_frame_frame_numpy$_core$getlimits$$$function__14___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__14___init__);
    cache_frame_frame_numpy$_core$getlimits$$$function__14___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__14___init__);

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
CHECK_OBJECT(par_int_type);
Py_DECREF(par_int_type);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_int_type);
Py_DECREF(par_int_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$getlimits$$$function__15_min(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_val = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__15_min;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__15_min = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__15_min)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__15_min);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__15_min == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__15_min = MAKE_FUNCTION_FRAME(tstate, code_objects_1964e09b61838af3b1ae1100c2d83a13, module_numpy$_core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__15_min->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__15_min = cache_frame_frame_numpy$_core$getlimits$$$function__15_min;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__15_min);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__15_min) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_kind);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_u;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
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
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = module_var_accessor_numpy$_core$getlimits$iinfo(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_iinfo);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 430;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__min_vals);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_key);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_2);

exception_lineno = 430;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(var_val == NULL);
var_val = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__15_min, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__15_min, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_2 = PyExc_KeyError;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_int_arg_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_lshift_expr_left_1;
PyObject *tmp_lshift_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_5;
tmp_lshift_expr_left_1 = const_int_pos_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_bits);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_lshift_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_lshift_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_operand_value_1 = BINARY_OPERATION_LSHIFT_OBJECT_LONG_OBJECT(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
CHECK_OBJECT(tmp_lshift_expr_right_1);
Py_DECREF(tmp_lshift_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_int_arg_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oo";
    goto try_except_handler_3;
}
assert(var_val == NULL);
var_val = tmp_assign_source_2;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_val);
tmp_ass_subvalue_1 = var_val;
tmp_expression_value_6 = module_var_accessor_numpy$_core$getlimits$iinfo(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_iinfo);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 433;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__min_vals);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_key);
if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_1);

exception_lineno = 433;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "oo";
    goto try_except_handler_3;
}
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 429;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$_core$getlimits$$$function__15_min->m_frame)) {
        frame_frame_numpy$_core$getlimits$$$function__15_min->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
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
if (var_val == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_val);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 434;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_val;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__15_min, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__15_min->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__15_min, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__15_min,
    type_description_1,
    par_self,
    var_val
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__15_min == cache_frame_frame_numpy$_core$getlimits$$$function__15_min) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__15_min);
    cache_frame_frame_numpy$_core$getlimits$$$function__15_min = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__15_min);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_val);
var_val = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_val);
var_val = NULL;
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


static PyObject *impl_numpy$_core$getlimits$$$function__16_max(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_val = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__16_max;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__16_max = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__16_max)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__16_max);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__16_max == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__16_max = MAKE_FUNCTION_FRAME(tstate, code_objects_12de822368dc4e3001ded73bf1c8db10, module_numpy$_core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__16_max->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__16_max = cache_frame_frame_numpy$_core$getlimits$$$function__16_max;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__16_max);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__16_max) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_numpy$_core$getlimits$iinfo(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_iinfo);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 440;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__max_vals);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_key);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_1);

exception_lineno = 440;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(var_val == NULL);
var_val = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__16_max, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__16_max, exception_keeper_lineno_1);
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
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_kind);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_u;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oo";
    goto try_except_handler_3;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_int_arg_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_lshift_expr_left_1;
PyObject *tmp_lshift_expr_right_1;
PyObject *tmp_expression_value_5;
tmp_lshift_expr_left_1 = const_int_pos_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_lshift_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_bits);
if (tmp_lshift_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_sub_expr_left_1 = BINARY_OPERATION_LSHIFT_OBJECT_LONG_OBJECT(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
CHECK_OBJECT(tmp_lshift_expr_right_1);
Py_DECREF(tmp_lshift_expr_right_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_int_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "oo";
    goto try_except_handler_3;
}
assert(var_val == NULL);
var_val = tmp_assign_source_2;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_int_arg_2;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_lshift_expr_left_2;
PyObject *tmp_lshift_expr_right_2;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_expression_value_6;
tmp_lshift_expr_left_2 = const_int_pos_1;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_sub_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_bits);
if (tmp_sub_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_lshift_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_left_3);
Py_DECREF(tmp_sub_expr_left_3);
if (tmp_lshift_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_sub_expr_left_2 = BINARY_OPERATION_LSHIFT_OBJECT_LONG_OBJECT(tmp_lshift_expr_left_2, tmp_lshift_expr_right_2);
CHECK_OBJECT(tmp_lshift_expr_right_2);
Py_DECREF(tmp_lshift_expr_right_2);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_int_arg_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_assign_source_3 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "oo";
    goto try_except_handler_3;
}
assert(var_val == NULL);
var_val = tmp_assign_source_3;
}
branch_end_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_val);
tmp_ass_subvalue_1 = var_val;
tmp_expression_value_7 = module_var_accessor_numpy$_core$getlimits$iinfo(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_iinfo);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 446;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__max_vals);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_key);
if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_1);

exception_lineno = 446;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oo";
    goto try_except_handler_3;
}
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 439;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$_core$getlimits$$$function__16_max->m_frame)) {
        frame_frame_numpy$_core$getlimits$$$function__16_max->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_1:;
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
if (var_val == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_val);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 447;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_val;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__16_max, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__16_max->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__16_max, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__16_max,
    type_description_1,
    par_self,
    var_val
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__16_max == cache_frame_frame_numpy$_core$getlimits$$$function__16_max) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__16_max);
    cache_frame_frame_numpy$_core$getlimits$$$function__16_max = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__16_max);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_val);
var_val = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_val);
var_val = NULL;
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


static PyObject *impl_numpy$_core$getlimits$$$function__17___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__17___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__17___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__17___str__)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__17___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__17___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__17___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c31676e10c95526ff1145ad5ba6c32d0, module_numpy$_core$getlimits, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__17___str__->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__17___str__ = cache_frame_frame_numpy$_core$getlimits$$$function__17___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__17___str__);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__17___str__) == 2);

// Framed code:
{
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_d699850a7ed4dcad4593c97865f24dd4;
tmp_dict_key_1 = mod_consts.const_str_plain_dtype;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_dtype);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_res = PyDict_SetItem(tmp_mod_expr_right_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_min;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_min);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oN";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_mod_expr_right_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_max;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_max);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oN";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_mod_expr_right_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__17___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__17___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__17___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__17___str__,
    type_description_1,
    par_self,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__17___str__ == cache_frame_frame_numpy$_core$getlimits$$$function__17___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__17___str__);
    cache_frame_frame_numpy$_core$getlimits$$$function__17___str__ = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__17___str__);

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


static PyObject *impl_numpy$_core$getlimits$$$function__18___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$function__18___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$getlimits$$$function__18___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$getlimits$$$function__18___repr__)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$getlimits$$$function__18___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$getlimits$$$function__18___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$getlimits$$$function__18___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c6db80419790a89762bb25e860ba0fa8, module_numpy$_core$getlimits, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$getlimits$$$function__18___repr__->m_type_description == NULL);
frame_frame_numpy$_core$getlimits$$$function__18___repr__ = cache_frame_frame_numpy$_core$getlimits$$$function__18___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$function__18___repr__);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$function__18___repr__) == 2);

// Framed code:
{
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_689f5c49db7f0f46fe96e883a6a93baa;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_min);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_max);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
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


exception_lineno = 461;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$function__18___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$function__18___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$function__18___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$function__18___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$getlimits$$$function__18___repr__ == cache_frame_frame_numpy$_core$getlimits$$$function__18___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$getlimits$$$function__18___repr__);
    cache_frame_frame_numpy$_core$getlimits$$$function__18___repr__ = NULL;
}

assertFrameObject(frame_frame_numpy$_core$getlimits$$$function__18___repr__);

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



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__10_iexp(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__10_iexp,
        mod_consts.const_str_plain_iexp,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_65a972710d220dabc9894f4ccd7a05fa,
#endif
        code_objects_0a6bb3aeb5b7cbac9b7b4f1d60f8be3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__11___str__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__11___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dc1b8110f5b3291b1f7289ae32fc17db,
#endif
        code_objects_1f6e06319c408cc3992e3eebcdb797aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str(PyThreadState *tstate, PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str,
        mod_consts.const_str_plain_get_str,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e15d39998e3dd20ff1ebb96f19745cae,
#endif
        code_objects_83818225ecda3e0730a8794a50514c4e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__12___repr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__12___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_04bfb3f910884592424fce6703571236,
#endif
        code_objects_ba4147c3bf4b0434ad1bde3759943c2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__13_tiny(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__13_tiny,
        mod_consts.const_str_plain_tiny,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e7f7c31d206df2b5e7fa68e52bc77569,
#endif
        code_objects_bc787ad75c9599ec67526f1992a22328,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        mod_consts.const_str_digest_c1a5c351ea14f15a4186b1de28b65db1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__14___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__14___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_647832d5d012ef5f736460e94c883bb6,
#endif
        code_objects_d0cd2763f8006d92b3df8a6b4d5af39b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__15_min(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__15_min,
        mod_consts.const_str_plain_min,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0ce56c9f8af242ba13b62b42dfca1350,
#endif
        code_objects_1964e09b61838af3b1ae1100c2d83a13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        mod_consts.const_str_digest_3122c1a6126f732cd94f8864df7d76ff,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__16_max(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__16_max,
        mod_consts.const_str_plain_max,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_680f1ebaae31ccd9a76118853c6fdaca,
#endif
        code_objects_12de822368dc4e3001ded73bf1c8db10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        mod_consts.const_str_digest_8f6c2ba61d1aad5f470aa0d7e1c51ed6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__17___str__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__17___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_225b94f6d4a8d9b49b6a3ffca91d338a,
#endif
        code_objects_c31676e10c95526ff1145ad5ba6c32d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        mod_consts.const_str_digest_c1416ee2e3faf191d9259e1f3f7581c0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__18___repr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__18___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_493f424513579c28b69e138fe767e833,
#endif
        code_objects_c6db80419790a89762bb25e860ba0fa8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__1__fr0(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__1__fr0,
        mod_consts.const_str_plain__fr0,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f430a7b0e700278e3cdffbf959f2eeec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        mod_consts.const_str_digest_c585224fd2c43f929c10a58162297da8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__2__fr1(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__2__fr1,
        mod_consts.const_str_plain__fr1,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6aa9abded6d0b7da4cd903ae0fb56ba0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        mod_consts.const_str_digest_0dfcf8cd171b40dc563f1a190d516493,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__3___new__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__3___new__,
        mod_consts.const_str_plain___new__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9921f9bcf5458277b73e01603fff03a9,
#endif
        code_objects_4c9e9d204bd444811b912f9133bcf67e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__4__init(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__4__init,
        mod_consts.const_str_plain__init,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_313212deb5eaf98ebc9b4ddb74fe967f,
#endif
        code_objects_5d656a69b53e08c3e3634f6e9ed6a68c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__5_epsneg(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__5_epsneg,
        mod_consts.const_str_plain_epsneg,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b0aac7238dd10e7c210b66f63697cc68,
#endif
        code_objects_3d174c7c59a521fd05e17243157ed29f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__6_resolution(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__6_resolution,
        mod_consts.const_str_plain_resolution,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d6a2ad8a7028b2b871bd69ed863dd4cd,
#endif
        code_objects_a9eb053695ceebd93d660b94772de3b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__7_machep(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__7_machep,
        mod_consts.const_str_plain_machep,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6321c70f5a422822dfd8d72974778952,
#endif
        code_objects_9e3d1e4e2c9f8553dbdcc2f6bb617839,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__8_negep(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__8_negep,
        mod_consts.const_str_plain_negep,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2dc49c1f7ca0fe7a134c8a2b5f7d1762,
#endif
        code_objects_8433ba56827355598c459c3b847c0372,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$getlimits$$$function__9_nexp(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$getlimits$$$function__9_nexp,
        mod_consts.const_str_plain_nexp,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d9f5d00b25c9be7a85729a4f01689565,
#endif
        code_objects_a7b82efc7c1e26376b179f82b209f568,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$getlimits,
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

static function_impl_code const function_table_numpy$_core$getlimits[] = {
impl_numpy$_core$getlimits$$$function__11___str__$$$function__1_get_str,
impl_numpy$_core$getlimits$$$function__1__fr0,
impl_numpy$_core$getlimits$$$function__2__fr1,
impl_numpy$_core$getlimits$$$function__3___new__,
impl_numpy$_core$getlimits$$$function__4__init,
impl_numpy$_core$getlimits$$$function__5_epsneg,
impl_numpy$_core$getlimits$$$function__6_resolution,
impl_numpy$_core$getlimits$$$function__7_machep,
impl_numpy$_core$getlimits$$$function__8_negep,
impl_numpy$_core$getlimits$$$function__9_nexp,
impl_numpy$_core$getlimits$$$function__10_iexp,
impl_numpy$_core$getlimits$$$function__11___str__,
impl_numpy$_core$getlimits$$$function__12___repr__,
impl_numpy$_core$getlimits$$$function__13_tiny,
impl_numpy$_core$getlimits$$$function__14___init__,
impl_numpy$_core$getlimits$$$function__15_min,
impl_numpy$_core$getlimits$$$function__16_max,
impl_numpy$_core$getlimits$$$function__17___str__,
impl_numpy$_core$getlimits$$$function__18___repr__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$_core$getlimits);
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
        module_numpy$_core$getlimits,
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
        function_table_numpy$_core$getlimits,
        sizeof(function_table_numpy$_core$getlimits) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy._core.getlimits";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$_core$getlimits(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$_core$getlimits");

    // Store the module for future use.
    module_numpy$_core$getlimits = module;

    moduledict_numpy$_core$getlimits = MODULE_DICT(module_numpy$_core$getlimits);

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
        PRINT_STRING("numpy$_core$getlimits: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$_core$getlimits: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$_core$getlimits: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._core.getlimits" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$_core$getlimits\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$_core$getlimits,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$_core$getlimits,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$_core$getlimits,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_core$getlimits,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_core$getlimits,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$_core$getlimits);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$_core$getlimits);
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

        UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_numpy$_core$getlimits$$$class__1_finfo_61 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$class__1_finfo_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_numpy$_core$getlimits$$$class__2_iinfo_355 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$getlimits$$$class__2_iinfo_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_454d0777cd09130adadab5cb34c54852;
UPDATE_STRING_DICT0(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$_core$getlimits = MAKE_MODULE_FRAME(code_objects_54c3845f5fc3817cc96603e39375cf3f, module_numpy$_core$getlimits);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$_core$getlimits$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$_core$getlimits$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST2(tstate, mod_consts.const_str_plain_finfo,mod_consts.const_str_plain_iinfo);
UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_math;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$_core$getlimits;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 6;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_math, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPES();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$_core$getlimits;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 8;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$_core$getlimits,
        mod_consts.const_str_plain_cached_property,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_cached_property);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$_core$getlimits;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_set_module_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 11;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$_core$getlimits,
        mod_consts.const_str_plain_set_module,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_set_module);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = const_str_empty;
tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$_core$getlimits;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_numeric_str_plain_numerictypes_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 13;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$_core$getlimits,
        mod_consts.const_str_plain_numeric,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_numeric);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_numeric, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_numpy$_core$getlimits,
        mod_consts.const_str_plain_numerictypes,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_numerictypes);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_ntypes, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__multiarray_umath;
tmp_globals_arg_value_5 = (PyObject *)moduledict_numpy$_core$getlimits;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain__populate_finfo_constants_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 14;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_numpy$_core$getlimits,
        mod_consts.const_str_plain__populate_finfo_constants,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__populate_finfo_constants);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__populate_finfo_constants, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;

tmp_assign_source_14 = MAKE_FUNCTION_numpy$_core$getlimits$$$function__1__fr0(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__fr0, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;

tmp_assign_source_15 = MAKE_FUNCTION_numpy$_core$getlimits$$$function__2__fr1(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__fr1, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_csingle);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_single);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_assign_source_16 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto dict_build_exception_1;
}
tmp_expression_value_3 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_complex128);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto dict_build_exception_1;
}
tmp_expression_value_4 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 35;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_float64);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 35;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto dict_build_exception_1;
}
tmp_expression_value_5 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto dict_build_exception_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_clongdouble);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto dict_build_exception_1;
}
tmp_expression_value_6 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 36;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_longdouble);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 36;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto dict_build_exception_1;
}
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_16);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_to_float, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_digest_71f9600c11b1b2dcd32646ee953369ea;
UPDATE_STRING_DICT0(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__title_fmt, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_8;
tmp_expression_value_7 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto frame_exception_exit_1;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_double);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
tmp_dict_key_3 = mod_consts.const_str_plain_itype;
tmp_expression_value_8 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_int64);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_dict_value_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_9;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_fmt;
tmp_dict_value_3 = mod_consts.const_str_digest_16c966c18ae1e919ca62dfb9d9bdceba;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_title;
tmp_expression_value_9 = module_var_accessor_numpy$_core$getlimits$_title_fmt(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__title_fmt);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto dict_build_exception_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_format);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto dict_build_exception_2;
}
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 45;
tmp_dict_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_double_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_dict_key_2);
Py_DECREF(tmp_dict_value_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_assign_source_18 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_10;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_13;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_16;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_expression_value_17;
tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto dict_build_exception_3;
}
tmp_expression_value_10 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto dict_build_exception_3;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_single);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto dict_build_exception_3;
}
tmp_dict_key_4 = mod_consts.const_str_plain_itype;
tmp_expression_value_11 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 47;

    goto dict_build_exception_3;
}
tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_int32);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 47;

    goto dict_build_exception_3;
}
tmp_dict_value_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_12;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_fmt;
tmp_dict_value_4 = mod_consts.const_str_digest_b11b128c563b5ffb658ae9500081eb04;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_title;
tmp_expression_value_12 = module_var_accessor_numpy$_core$getlimits$_title_fmt(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__title_fmt);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto dict_build_exception_4;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_format);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto dict_build_exception_4;
}
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 49;
tmp_dict_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_single_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_dict_key_2);
Py_DECREF(tmp_dict_value_2);
goto dict_build_exception_3;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto dict_build_exception_3;
}
tmp_expression_value_13 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto dict_build_exception_3;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_longdouble);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto dict_build_exception_3;
}
tmp_dict_key_5 = mod_consts.const_str_plain_itype;
tmp_expression_value_14 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 51;

    goto dict_build_exception_3;
}
tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_longlong);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 51;

    goto dict_build_exception_3;
}
tmp_dict_value_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_15;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_fmt;
tmp_dict_value_5 = mod_consts.const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_title;
tmp_expression_value_15 = module_var_accessor_numpy$_core$getlimits$_title_fmt(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__title_fmt);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto dict_build_exception_5;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_format);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto dict_build_exception_5;
}
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 53;
tmp_dict_value_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_61eb47d02a6bf21baa1afce40f67ac8b_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_dict_key_2);
Py_DECREF(tmp_dict_value_2);
goto dict_build_exception_3;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;
tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto dict_build_exception_3;
}
tmp_expression_value_16 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto dict_build_exception_3;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_half);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto dict_build_exception_3;
}
tmp_dict_key_6 = mod_consts.const_str_plain_itype;
tmp_expression_value_17 = module_var_accessor_numpy$_core$getlimits$ntypes(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ntypes);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 55;

    goto dict_build_exception_3;
}
tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_int16);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 55;

    goto dict_build_exception_3;
}
tmp_dict_value_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_18;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_fmt;
tmp_dict_value_6 = mod_consts.const_str_digest_08664f457b1a8dc7f05c9e1db0d9e3bd;
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_title;
tmp_expression_value_18 = module_var_accessor_numpy$_core$getlimits$_title_fmt(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__title_fmt);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto dict_build_exception_6;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_format);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto dict_build_exception_6;
}
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 57;
tmp_dict_value_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_half_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_dict_value_2, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_dict_key_2);
Py_DECREF(tmp_dict_value_2);
goto dict_build_exception_3;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;
tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto dict_build_exception_3;
}
}
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_assign_source_18);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;
UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain__MACHAR_PARAMS, tmp_assign_source_18);
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
PyObject *tmp_called_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_1;
tmp_called_value_6 = module_var_accessor_numpy$_core$getlimits$set_module(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_module);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto try_except_handler_2;
}
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 60;
tmp_called_value_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_numpy_tuple);

if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_2;
}
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_numpy$_core$getlimits$$$class__1_finfo_61 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_550c831de70f5cd0f0c93e595c10a837;
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_fd5c7331527c2a9c81043143a548ff80;
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_finfo;
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_61;
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain__finfo_cache, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_numpy$_core$getlimits$$$class__1_finfo_2 = MAKE_CLASS_FRAME(tstate, code_objects_fabe96afd588165cd72ce69806f009ef, module_numpy$_core$getlimits, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$class__1_finfo_2);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$class__1_finfo_2) == 2);

// Framed code:
{
PyObject *tmp_classmethod_arg_1;
PyObject *tmp_expression_value_19;
tmp_expression_value_19 = IMPORT_HARD_TYPES();
assert(!(tmp_expression_value_19 == NULL));
tmp_classmethod_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_GenericAlias);
if (tmp_classmethod_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
CHECK_OBJECT(tmp_classmethod_arg_1);
Py_DECREF(tmp_classmethod_arg_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, const_str_plain___class_getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_numpy$_core$getlimits$$$function__3___new__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain___new__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$_core$getlimits$$$function__4__init(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain__init, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_2;
tmp_called_value_7 = module_var_accessor_numpy$_core$getlimits$cached_property(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_args_element_value_2 = MAKE_FUNCTION_numpy$_core$getlimits$$$function__5_epsneg(tstate);

frame_frame_numpy$_core$getlimits$$$class__1_finfo_2->m_frame.f_lineno = 242;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain_epsneg, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_3;
tmp_called_value_8 = module_var_accessor_numpy$_core$getlimits$cached_property(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_args_element_value_3 = MAKE_FUNCTION_numpy$_core$getlimits$$$function__6_resolution(tstate);

frame_frame_numpy$_core$getlimits$$$class__1_finfo_2->m_frame.f_lineno = 247;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain_resolution, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_4;
tmp_called_value_9 = module_var_accessor_numpy$_core$getlimits$cached_property(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_args_element_value_4 = MAKE_FUNCTION_numpy$_core$getlimits$$$function__7_machep(tstate);

frame_frame_numpy$_core$getlimits$$$class__1_finfo_2->m_frame.f_lineno = 251;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain_machep, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_5;
tmp_called_value_10 = module_var_accessor_numpy$_core$getlimits$cached_property(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_args_element_value_5 = MAKE_FUNCTION_numpy$_core$getlimits$$$function__8_negep(tstate);

frame_frame_numpy$_core$getlimits$$$class__1_finfo_2->m_frame.f_lineno = 255;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain_negep, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_6;
tmp_called_value_11 = module_var_accessor_numpy$_core$getlimits$cached_property(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_args_element_value_6 = MAKE_FUNCTION_numpy$_core$getlimits$$$function__9_nexp(tstate);

frame_frame_numpy$_core$getlimits$$$class__1_finfo_2->m_frame.f_lineno = 259;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain_nexp, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_7;
tmp_called_value_12 = module_var_accessor_numpy$_core$getlimits$cached_property(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_args_element_value_7 = MAKE_FUNCTION_numpy$_core$getlimits$$$function__10_iexp(tstate);

frame_frame_numpy$_core$getlimits$$$class__1_finfo_2->m_frame.f_lineno = 264;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain_iexp, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_numpy$_core$getlimits$$$function__11___str__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$_core$getlimits$$$function__12___repr__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_8;
tmp_called_value_13 = module_var_accessor_numpy$_core$getlimits$cached_property(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 336;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_args_element_value_8 = MAKE_FUNCTION_numpy$_core$getlimits$$$function__13_tiny(tstate);

frame_frame_numpy$_core$getlimits$$$class__1_finfo_2->m_frame.f_lineno = 336;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain_tiny, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$class__1_finfo_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$class__1_finfo_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$class__1_finfo_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$class__1_finfo_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_numpy$_core$getlimits$$$class__1_finfo_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_5f6cc281fa21a60f5b531ad548117736_tuple;
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__1_finfo_61, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_14 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_finfo;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_numpy$_core$getlimits$$$class__1_finfo_61;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 61;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_22;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_args_element_value_1 = outline_0_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_numpy$_core$getlimits$$$class__1_finfo_61);
locals_numpy$_core$getlimits$$$class__1_finfo_61 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$_core$getlimits$$$class__1_finfo_61);
locals_numpy$_core$getlimits$$$class__1_finfo_61 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 61;
goto try_except_handler_2;
outline_result_2:;
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 60;
tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_finfo, tmp_assign_source_21);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_called_value_15;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_9;
tmp_called_value_16 = module_var_accessor_numpy$_core$getlimits$set_module(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_module);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 354;

    goto try_except_handler_5;
}
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 354;
tmp_called_value_15 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_16, mod_consts.const_tuple_str_plain_numpy_tuple);

if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_5;
}
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_numpy$_core$getlimits$$$class__2_iinfo_355 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_550c831de70f5cd0f0c93e595c10a837;
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__2_iinfo_355, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_a0f740892fb1d759b9551c13b92f78f1;
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__2_iinfo_355, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_iinfo;
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__2_iinfo_355, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_355;
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__2_iinfo_355, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__2_iinfo_355, mod_consts.const_str_plain__min_vals, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__2_iinfo_355, mod_consts.const_str_plain__max_vals, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_numpy$_core$getlimits$$$class__2_iinfo_3 = MAKE_CLASS_FRAME(tstate, code_objects_c187ae2b34b5ff3ae2b3a252662c9734, module_numpy$_core$getlimits, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$getlimits$$$class__2_iinfo_3);
assert(Py_REFCNT(frame_frame_numpy$_core$getlimits$$$class__2_iinfo_3) == 2);

// Framed code:
{
PyObject *tmp_classmethod_arg_2;
PyObject *tmp_expression_value_20;
tmp_expression_value_20 = IMPORT_HARD_TYPES();
assert(!(tmp_expression_value_20 == NULL));
tmp_classmethod_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_GenericAlias);
if (tmp_classmethod_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_2);
CHECK_OBJECT(tmp_classmethod_arg_2);
Py_DECREF(tmp_classmethod_arg_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__2_iinfo_355, const_str_plain___class_getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}

tmp_dictset_value = MAKE_FUNCTION_numpy$_core$getlimits$$$function__14___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__2_iinfo_355, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_10;
tmp_called_value_17 = (PyObject *)&PyProperty_Type;

tmp_args_element_value_10 = MAKE_FUNCTION_numpy$_core$getlimits$$$function__15_min(tstate);

frame_frame_numpy$_core$getlimits$$$class__2_iinfo_3->m_frame.f_lineno = 423;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__2_iinfo_355, mod_consts.const_str_plain_min, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_11;
tmp_called_value_18 = (PyObject *)&PyProperty_Type;

tmp_args_element_value_11 = MAKE_FUNCTION_numpy$_core$getlimits$$$function__16_max(tstate);

frame_frame_numpy$_core$getlimits$$$class__2_iinfo_3->m_frame.f_lineno = 436;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__2_iinfo_355, mod_consts.const_str_plain_max, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits$$$class__2_iinfo_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits$$$class__2_iinfo_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits$$$class__2_iinfo_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$getlimits$$$class__2_iinfo_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_numpy$_core$getlimits$$$class__2_iinfo_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;

tmp_dictset_value = MAKE_FUNCTION_numpy$_core$getlimits$$$function__17___str__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__2_iinfo_355, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$_core$getlimits$$$function__18___repr__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__2_iinfo_355, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain_dtype_str_plain_kind_str_plain_bits_str_plain_key_tuple;
tmp_result = DICT_SET_ITEM(locals_numpy$_core$getlimits$$$class__2_iinfo_355, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_19;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_called_value_19 = (PyObject *)&PyType_Type;
tmp_tuple_element_2 = mod_consts.const_str_plain_iinfo;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_numpy$_core$getlimits$$$class__2_iinfo_355;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 355;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_26;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_args_element_value_9 = outline_1_var___class__;
Py_INCREF(tmp_args_element_value_9);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_numpy$_core$getlimits$$$class__2_iinfo_355);
locals_numpy$_core$getlimits$$$class__2_iinfo_355 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$_core$getlimits$$$class__2_iinfo_355);
locals_numpy$_core$getlimits$$$class__2_iinfo_355 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 355;
goto try_except_handler_5;
outline_result_4:;
frame_frame_numpy$_core$getlimits->m_frame.f_lineno = 354;
tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)mod_consts.const_str_plain_iinfo, tmp_assign_source_25);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$getlimits, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$getlimits->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$getlimits, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$_core$getlimits);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$_core$getlimits", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._core.getlimits" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$_core$getlimits);
    return module_numpy$_core$getlimits;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$getlimits, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$_core$getlimits", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

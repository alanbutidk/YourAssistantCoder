/* Generated code for Python module 'numpy$matrixlib$defmatrix'
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



/* The "module_numpy$matrixlib$defmatrix" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$matrixlib$defmatrix;
PyDictObject *moduledict_numpy$matrixlib$defmatrix;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_9613c3fc04783ef5920752aa27696d66;
PyObject *const_str_plain_data;
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_chr_59_tuple;
PyObject *const_tuple_str_chr_44_tuple;
PyObject *const_str_plain_newrow;
PyObject *const_str_plain_ast;
PyObject *const_str_plain_literal_eval;
PyObject *const_str_plain_Ncols;
PyObject *const_str_digest_8c57929e8f06c6c88acc03cad6d1877a;
PyObject *const_str_plain_newdata;
PyObject *const_str_plain_matrix;
PyObject *const_tuple_str_plain_dtype_str_plain_copy_tuple;
PyObject *const_str_digest_6dab3f82de45a5f3df15008158c482a9;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_98b9e470692e5d4174e49c791c334258;
PyObject *const_str_plain_PendingDeprecationWarning;
PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
PyObject *const_str_plain_dtype;
PyObject *const_str_plain_astype;
PyObject *const_str_plain_N;
PyObject *const_str_plain_ndarray;
PyObject *const_str_plain_view;
PyObject *const_str_plain_copy;
PyObject *const_str_plain__convert_from_string;
PyObject *const_str_plain_array;
PyObject *const_str_plain_ndim;
PyObject *const_str_plain_shape;
PyObject *const_int_pos_2;
PyObject *const_str_digest_fe92ed1d0079004be741055e3e33b687;
PyObject *const_tuple_int_pos_1_int_pos_1_tuple;
PyObject *const_str_plain_C;
PyObject *const_str_plain_flags;
PyObject *const_str_plain_fortran;
PyObject *const_str_plain_F;
PyObject *const_str_plain___new__;
PyObject *const_tuple_str_plain_buffer_str_plain_order_tuple;
PyObject *const_str_plain__getitem;
PyObject *const_str_digest_43d95b98f33ffd170812ad62d79b96ce;
PyObject *const_str_plain_newshape;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_b8e805e5e03e933d6d347507988636bc;
PyObject *const_str_plain___getitem__;
PyObject *const_str_plain_isscalar;
PyObject *const_str_plain_dot;
PyObject *const_str_plain_asmatrix;
PyObject *const_str_plain___rmul__;
PyObject *const_slice_none_none_none;
PyObject *const_str_plain_matrix_power;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_plain_transpose;
PyObject *const_str_digest_02d49603c645ebadab75b4dbf099fadb;
PyObject *const_str_digest_9ae50301b68863ffaddbf8f7a01e5a2a;
PyObject *const_str_digest_aa3dede15f20d47209893c4452455444;
PyObject *const_str_plain___array__;
PyObject *const_str_plain_tolist;
PyObject *const_str_digest_600874b955a9548c181976bd76ebad6f;
PyObject *const_dict_59e37d231bc1f549a9bff6ecc16f6241;
PyObject *const_str_plain__collapse;
PyObject *const_str_digest_f61582bca4150690504a28ff984abac4;
PyObject *const_str_plain_squeeze;
PyObject *const_tuple_str_plain_axis_tuple;
PyObject *const_str_digest_e7e2fcbbb2788d6d30a65f9b666c6e61;
PyObject *const_str_plain_flatten;
PyObject *const_tuple_str_plain_order_tuple;
PyObject *const_str_digest_37d0e8b76d820acf88f5fafce125d544;
PyObject *const_str_plain_mean;
PyObject *const_str_digest_88161457d419ee0fff410b0fb94f98e7;
PyObject *const_str_plain_std;
PyObject *const_str_digest_181517c4f76101a738f3ebf4e4a0771b;
PyObject *const_str_plain_var;
PyObject *const_str_digest_8dbe682221d616e32a5e8fceac966634;
PyObject *const_str_plain_prod;
PyObject *const_str_digest_ee01866068b04c58cc9c7137d2023280;
PyObject *const_str_plain_any;
PyObject *const_str_digest_ad8be0d4c200fa3522551f309d54a21f;
PyObject *const_str_plain_all;
PyObject *const_str_digest_b3a5ce4f65b7c7e8a14a2ed806d31684;
PyObject *const_str_plain_max;
PyObject *const_str_digest_8b5b95a953d41be178da813cffbe644a;
PyObject *const_str_plain_argmax;
PyObject *const_str_plain__align;
PyObject *const_str_digest_fa38eece66ea5507c47bba1c629673ce;
PyObject *const_str_plain_min;
PyObject *const_str_digest_e765343c20ad7a3118d01ebea0d9e40e;
PyObject *const_str_plain_argmin;
PyObject *const_str_digest_c59ee9746985ab5000d2a1e4d32e846f;
PyObject *const_str_plain_ptp;
PyObject *const_str_digest_1bf83ae43bb07dc6597f05a9adb85d9b;
PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
PyObject *const_tuple_str_plain_inv_tuple;
PyObject *const_str_plain_inv;
PyObject *const_tuple_str_plain_pinv_tuple;
PyObject *const_str_plain_pinv;
PyObject *const_str_digest_6d27ab044f94e355fb03a45ddbef84f5;
PyObject *const_str_digest_dffec97eccf8d3dba9b703927ffbe2f8;
PyObject *const_str_plain_ravel;
PyObject *const_str_digest_9cc0b09ea67cb49b226d4776ab160f82;
PyObject *const_str_digest_734d9cbcf17b6087c9ecdcb1b1947d48;
PyObject *const_str_digest_c67370d6b4c78ea1929eb2f29082c0f1;
PyObject *const_str_plain_complexfloating;
PyObject *const_str_plain_conjugate;
PyObject *const_str_digest_c1e25ad155a44ddcae2c1544916e1d62;
PyObject *const_str_plain_strip;
PyObject *const_str_digest_fc3a20cddd431307ad412b0987890c97;
PyObject *const_str_digest_d7268deb65fe801e7a9f063f492a09bd;
PyObject *const_str_plain_coltup;
PyObject *const_str_plain_rowtup;
PyObject *const_str_plain_concatenate;
PyObject *const_dict_22b54c5c9112a5c8c51dc4a23fd6481b;
PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
PyObject *const_str_plain__getframe;
PyObject *const_str_plain_f_back;
PyObject *const_str_plain_f_globals;
PyObject *const_str_plain_f_locals;
PyObject *const_str_plain__from_string;
PyObject *const_tuple_type_tuple_type_list_tuple;
PyObject *const_str_plain_arr_rows;
PyObject *const_str_digest_9c131f31b9d67be17acf040abfbc0150;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_bmat;
PyObject *const_str_plain_sys;
PyObject *const_str_digest_b7a345dfe4be14248864e7854d4e6836;
PyObject *const_str_plain__core;
PyObject *const_str_plain_numeric;
PyObject *const_tuple_str_plain_concatenate_str_plain_isscalar_tuple;
PyObject *const_str_digest_1cc096bfca6f12718d06670f9299228c;
PyObject *const_tuple_str_plain_set_module_tuple;
PyObject *const_str_plain_set_module;
PyObject *const_tuple_str_plain_matrix_power_tuple;
PyObject *const_tuple_str_plain_numpy_tuple;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_4179858148d85e138b7e27f6f7ce41c6;
PyObject *const_str_digest_e40e10c89a4ef3d33193f0182ba8e728;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_74;
PyObject *const_str_plain___firstlineno__;
PyObject *const_float_10_0;
PyObject *const_str_plain___array_priority__;
PyObject *const_tuple_none_true_tuple;
PyObject *const_str_digest_1c36b38458ff1db84b085447a05c3d16;
PyObject *const_str_plain___array_finalize__;
PyObject *const_str_digest_14b978ce7c037d3173fa4835be41293d;
PyObject *const_str_digest_7da80760fc959b79301ad98d717ef35f;
PyObject *const_str_plain___mul__;
PyObject *const_str_digest_4f5206ba907c53056db354048ad2d50d;
PyObject *const_str_digest_bc6dd796856908bac67295c89f492ef3;
PyObject *const_str_plain___imul__;
PyObject *const_str_digest_ae4ea51befc6c57f132c0b55fd06ea2b;
PyObject *const_str_plain___pow__;
PyObject *const_str_digest_9a52124d9489c5c315b64f9c2d8cd9d9;
PyObject *const_str_plain___ipow__;
PyObject *const_str_digest_a89078cc3f022df00f3d6d91ab7a6d6f;
PyObject *const_str_plain___rpow__;
PyObject *const_str_digest_1267eb91ea5fe0833144def3b9fe2682;
PyObject *const_str_digest_8a83dcef2e6bd9d496f5d0a5eb2cc910;
PyObject *const_str_digest_63171a923bc41d228d84f75cac4966c9;
PyObject *const_str_digest_9d0a0c8aea757ec593a24e69bf81fe39;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_c6adc001cc8e72f18d0b95b95de5f5d7;
PyObject *const_str_digest_af33cf1f188dd02b519023303c28a3df;
PyObject *const_tuple_str_plain_C_tuple;
PyObject *const_str_digest_4c81ed43ac05d2eb21e65fd9b585476c;
PyObject *const_str_digest_65808ce70b38edf8b5f42ff5e1a1b89b;
PyObject *const_tuple_none_none_none_int_0_tuple;
PyObject *const_str_digest_9c889cdf0a0db6f8e023b7083ff0a7b7;
PyObject *const_str_digest_fffaeb4698eab82f762072b6cfe9c5ab;
PyObject *const_str_digest_6089ef6633e4ad7cbe458e6cf5cc4b01;
PyObject *const_tuple_none_none_tuple;
PyObject *const_str_digest_e4012dec941dfd9b1f371a24dd877ca4;
PyObject *const_str_digest_86647aea99ab58ef2932c7b7801b7a38;
PyObject *const_str_digest_332ae9ffc5f026a025249301b28b6f6f;
PyObject *const_str_digest_1c135c5c8789cb37205a6015177c7164;
PyObject *const_str_digest_647f13fd901de876155daa64efa61f9d;
PyObject *const_str_digest_91092e62d85c021736a02a669d23c0f1;
PyObject *const_str_digest_5c5f46e6eef0fb14d19d9ba43b05c9a6;
PyObject *const_str_plain_property;
PyObject *const_str_plain_I;
PyObject *const_str_digest_3ea6027b0b514a2987cd71ce18a291b4;
PyObject *const_str_plain_A;
PyObject *const_str_digest_aa07900215d927819b44749d1afa8ef7;
PyObject *const_str_plain_A1;
PyObject *const_str_digest_6225495cdff28d969d1ecae9cc0cf81d;
PyObject *const_str_digest_34b40de538a9dbded2b9da73c6292521;
PyObject *const_str_plain_T;
PyObject *const_str_digest_7a542796b3476d3c45acba02c67f8c3c;
PyObject *const_str_plain_H;
PyObject *const_str_digest_62607bac5b4a9373d2b2ee47ef1fd742;
PyObject *const_str_plain_fget;
PyObject *const_str_plain_getT;
PyObject *const_str_plain_getA;
PyObject *const_str_plain_getA1;
PyObject *const_str_plain_getH;
PyObject *const_str_plain_getI;
PyObject *const_tuple_str_plain__getitem_str_plain_shape_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_a82469370746fc722dd10d77ec3793db;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple;
PyObject *const_str_digest_14ef8b8a24232c0c3ac29f651f02f92b;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_M_str_plain_N_str_plain_func_tuple;
PyObject *const_tuple_6cc4e551f50dd7d1380dffbbf92de02a_tuple;
PyObject *const_tuple_f3eff72771f6ec804ad1e70539765fcb_tuple;
PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
PyObject *const_tuple_f6f4bba3de8817a308a6ce33dfc202ef_tuple;
PyObject *const_tuple_str_plain_self_str_plain_axis_tuple;
PyObject *const_tuple_e5bc706f4914f9d539f70eccf2c833d1_tuple;
PyObject *const_tuple_ac12f526a4c9417a7835994d158d3d9e_tuple;
PyObject *const_tuple_str_plain_self_str_plain_axis_str_plain_out_tuple;
PyObject *const_tuple_str_plain_data_str_plain_dtype_tuple;
PyObject *const_tuple_6715b5ebdc26546a9322e2be5fff1d8e_tuple;
PyObject *const_tuple_str_plain_self_str_plain_order_tuple;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_axis_str_plain_dtype_str_plain_out_tuple;
PyObject *const_tuple_4e9611fe9f690a396349674e30886900_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[221];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.matrixlib.defmatrix"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_9613c3fc04783ef5920752aa27696d66);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_59_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_44_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_newrow);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_ast);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_literal_eval);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Ncols);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c57929e8f06c6c88acc03cad6d1877a);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_newdata);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_matrix);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_str_plain_copy_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_6dab3f82de45a5f3df15008158c482a9);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_98b9e470692e5d4174e49c791c334258);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_PendingDeprecationWarning);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_astype);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_N);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_view);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__convert_from_string);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe92ed1d0079004be741055e3e33b687);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_C);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_flags);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_fortran);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_F);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain___new__);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_buffer_str_plain_order_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__getitem);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_43d95b98f33ffd170812ad62d79b96ce);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_newshape);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8e805e5e03e933d6d347507988636bc);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_isscalar);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_dot);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_asmatrix);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain___rmul__);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_slice_none_none_none);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_matrix_power);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_transpose);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_02d49603c645ebadab75b4dbf099fadb);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ae50301b68863ffaddbf8f7a01e5a2a);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa3dede15f20d47209893c4452455444);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain___array__);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_tolist);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_600874b955a9548c181976bd76ebad6f);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_dict_59e37d231bc1f549a9bff6ecc16f6241);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain__collapse);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_f61582bca4150690504a28ff984abac4);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_squeeze);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_e7e2fcbbb2788d6d30a65f9b666c6e61);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_flatten);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_order_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_37d0e8b76d820acf88f5fafce125d544);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_mean);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_88161457d419ee0fff410b0fb94f98e7);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_std);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_181517c4f76101a738f3ebf4e4a0771b);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_var);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_8dbe682221d616e32a5e8fceac966634);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_prod);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee01866068b04c58cc9c7137d2023280);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_any);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad8be0d4c200fa3522551f309d54a21f);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_all);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_b3a5ce4f65b7c7e8a14a2ed806d31684);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b5b95a953d41be178da813cffbe644a);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_argmax);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain__align);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_fa38eece66ea5507c47bba1c629673ce);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_e765343c20ad7a3118d01ebea0d9e40e);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_argmin);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_c59ee9746985ab5000d2a1e4d32e846f);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_ptp);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_1bf83ae43bb07dc6597f05a9adb85d9b);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_inv_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_inv);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pinv_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_pinv);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d27ab044f94e355fb03a45ddbef84f5);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_dffec97eccf8d3dba9b703927ffbe2f8);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_ravel);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_9cc0b09ea67cb49b226d4776ab160f82);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_734d9cbcf17b6087c9ecdcb1b1947d48);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_c67370d6b4c78ea1929eb2f29082c0f1);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_complexfloating);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_conjugate);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_c1e25ad155a44ddcae2c1544916e1d62);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc3a20cddd431307ad412b0987890c97);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7268deb65fe801e7a9f063f492a09bd);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_coltup);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_rowtup);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_concatenate);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_dict_22b54c5c9112a5c8c51dc4a23fd6481b);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_dict_54f4aa72cf3f950a22814f798a2888e8);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain__getframe);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_f_back);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_f_globals);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_f_locals);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__from_string);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_type_tuple_type_list_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_arr_rows);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c131f31b9d67be17acf040abfbc0150);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_bmat);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain__core);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_numeric);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_concatenate_str_plain_isscalar_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_module_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_module);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_matrix_power_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numpy_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_4179858148d85e138b7e27f6f7ce41c6);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_e40e10c89a4ef3d33193f0182ba8e728);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_int_pos_74);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_float_10_0);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain___array_priority__);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_none_true_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c36b38458ff1db84b085447a05c3d16);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain___array_finalize__);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_14b978ce7c037d3173fa4835be41293d);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_7da80760fc959b79301ad98d717ef35f);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain___mul__);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f5206ba907c53056db354048ad2d50d);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc6dd796856908bac67295c89f492ef3);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain___imul__);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae4ea51befc6c57f132c0b55fd06ea2b);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain___pow__);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a52124d9489c5c315b64f9c2d8cd9d9);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain___ipow__);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_a89078cc3f022df00f3d6d91ab7a6d6f);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain___rpow__);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_1267eb91ea5fe0833144def3b9fe2682);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a83dcef2e6bd9d496f5d0a5eb2cc910);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_63171a923bc41d228d84f75cac4966c9);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d0a0c8aea757ec593a24e69bf81fe39);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_c6adc001cc8e72f18d0b95b95de5f5d7);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_af33cf1f188dd02b519023303c28a3df);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_C_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c81ed43ac05d2eb21e65fd9b585476c);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_65808ce70b38edf8b5f42ff5e1a1b89b);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_int_0_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c889cdf0a0db6f8e023b7083ff0a7b7);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_fffaeb4698eab82f762072b6cfe9c5ab);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_6089ef6633e4ad7cbe458e6cf5cc4b01);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_e4012dec941dfd9b1f371a24dd877ca4);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_86647aea99ab58ef2932c7b7801b7a38);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_332ae9ffc5f026a025249301b28b6f6f);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c135c5c8789cb37205a6015177c7164);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_647f13fd901de876155daa64efa61f9d);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_91092e62d85c021736a02a669d23c0f1);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c5f46e6eef0fb14d19d9ba43b05c9a6);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_I);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ea6027b0b514a2987cd71ce18a291b4);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_A);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa07900215d927819b44749d1afa8ef7);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_A1);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_6225495cdff28d969d1ecae9cc0cf81d);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_34b40de538a9dbded2b9da73c6292521);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a542796b3476d3c45acba02c67f8c3c);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_H);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_62607bac5b4a9373d2b2ee47ef1fd742);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_fget);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_getT);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_getA);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_getA1);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_getH);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_getI);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__getitem_str_plain_shape_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_a82469370746fc722dd10d77ec3793db);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_14ef8b8a24232c0c3ac29f651f02f92b);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_M_str_plain_N_str_plain_func_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_6cc4e551f50dd7d1380dffbbf92de02a_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_f3eff72771f6ec804ad1e70539765fcb_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_f6f4bba3de8817a308a6ce33dfc202ef_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_axis_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_e5bc706f4914f9d539f70eccf2c833d1_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_ac12f526a4c9417a7835994d158d3d9e_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_out_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_dtype_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_6715b5ebdc26546a9322e2be5fff1d8e_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_order_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_dtype_str_plain_out_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_4e9611fe9f690a396349674e30886900_tuple);
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
void checkModuleConstants_numpy$matrixlib$defmatrix(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_9613c3fc04783ef5920752aa27696d66));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9613c3fc04783ef5920752aa27696d66);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_59_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_59_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_44_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_44_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_newrow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_newrow);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_ast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ast);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_literal_eval));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_literal_eval);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_Ncols));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Ncols);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c57929e8f06c6c88acc03cad6d1877a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c57929e8f06c6c88acc03cad6d1877a);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_newdata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_newdata);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_matrix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_matrix);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_str_plain_copy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_str_plain_copy_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_6dab3f82de45a5f3df15008158c482a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6dab3f82de45a5f3df15008158c482a9);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_98b9e470692e5d4174e49c791c334258));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98b9e470692e5d4174e49c791c334258);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_PendingDeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PendingDeprecationWarning);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_astype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_astype);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_N));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_N);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndarray);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_view));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_view);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__convert_from_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__convert_from_string);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe92ed1d0079004be741055e3e33b687));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fe92ed1d0079004be741055e3e33b687);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_int_pos_1_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_C));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_C);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_flags));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flags);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_fortran));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fortran);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_F));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_F);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain___new__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___new__);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_buffer_str_plain_order_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_buffer_str_plain_order_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__getitem));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__getitem);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_43d95b98f33ffd170812ad62d79b96ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43d95b98f33ffd170812ad62d79b96ce);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_newshape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_newshape);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8e805e5e03e933d6d347507988636bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8e805e5e03e933d6d347507988636bc);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_isscalar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isscalar);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_dot));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dot);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_asmatrix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asmatrix);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain___rmul__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rmul__);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_slice_none_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_none_none);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_matrix_power));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_matrix_power);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_transpose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transpose);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_02d49603c645ebadab75b4dbf099fadb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_02d49603c645ebadab75b4dbf099fadb);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ae50301b68863ffaddbf8f7a01e5a2a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ae50301b68863ffaddbf8f7a01e5a2a);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa3dede15f20d47209893c4452455444));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aa3dede15f20d47209893c4452455444);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain___array__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___array__);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_tolist));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tolist);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_600874b955a9548c181976bd76ebad6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_600874b955a9548c181976bd76ebad6f);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_dict_59e37d231bc1f549a9bff6ecc16f6241));
CHECK_OBJECT_DEEP(mod_consts.const_dict_59e37d231bc1f549a9bff6ecc16f6241);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain__collapse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__collapse);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_f61582bca4150690504a28ff984abac4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f61582bca4150690504a28ff984abac4);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_squeeze));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_squeeze);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_axis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_axis_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_e7e2fcbbb2788d6d30a65f9b666c6e61));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e7e2fcbbb2788d6d30a65f9b666c6e61);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_flatten));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flatten);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_order_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_order_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_37d0e8b76d820acf88f5fafce125d544));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37d0e8b76d820acf88f5fafce125d544);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_mean));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mean);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_88161457d419ee0fff410b0fb94f98e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_88161457d419ee0fff410b0fb94f98e7);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_std));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_std);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_181517c4f76101a738f3ebf4e4a0771b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_181517c4f76101a738f3ebf4e4a0771b);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_var));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_var);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_8dbe682221d616e32a5e8fceac966634));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8dbe682221d616e32a5e8fceac966634);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_prod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prod);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee01866068b04c58cc9c7137d2023280));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee01866068b04c58cc9c7137d2023280);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_any);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad8be0d4c200fa3522551f309d54a21f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad8be0d4c200fa3522551f309d54a21f);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_all);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_b3a5ce4f65b7c7e8a14a2ed806d31684));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b3a5ce4f65b7c7e8a14a2ed806d31684);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b5b95a953d41be178da813cffbe644a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b5b95a953d41be178da813cffbe644a);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_argmax));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_argmax);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain__align));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__align);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_fa38eece66ea5507c47bba1c629673ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fa38eece66ea5507c47bba1c629673ce);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_e765343c20ad7a3118d01ebea0d9e40e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e765343c20ad7a3118d01ebea0d9e40e);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_argmin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_argmin);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_c59ee9746985ab5000d2a1e4d32e846f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c59ee9746985ab5000d2a1e4d32e846f);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_ptp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ptp);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_1bf83ae43bb07dc6597f05a9adb85d9b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1bf83ae43bb07dc6597f05a9adb85d9b);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_inv_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_inv_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_inv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inv);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pinv_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pinv_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_pinv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pinv);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d27ab044f94e355fb03a45ddbef84f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d27ab044f94e355fb03a45ddbef84f5);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_dffec97eccf8d3dba9b703927ffbe2f8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dffec97eccf8d3dba9b703927ffbe2f8);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_ravel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ravel);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_9cc0b09ea67cb49b226d4776ab160f82));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9cc0b09ea67cb49b226d4776ab160f82);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_734d9cbcf17b6087c9ecdcb1b1947d48));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_734d9cbcf17b6087c9ecdcb1b1947d48);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_c67370d6b4c78ea1929eb2f29082c0f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c67370d6b4c78ea1929eb2f29082c0f1);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_complexfloating));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_complexfloating);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_conjugate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conjugate);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_c1e25ad155a44ddcae2c1544916e1d62));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c1e25ad155a44ddcae2c1544916e1d62);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc3a20cddd431307ad412b0987890c97));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc3a20cddd431307ad412b0987890c97);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7268deb65fe801e7a9f063f492a09bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d7268deb65fe801e7a9f063f492a09bd);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_coltup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_coltup);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_rowtup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rowtup);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_concatenate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_concatenate);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_dict_22b54c5c9112a5c8c51dc4a23fd6481b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_22b54c5c9112a5c8c51dc4a23fd6481b);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_dict_54f4aa72cf3f950a22814f798a2888e8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_54f4aa72cf3f950a22814f798a2888e8);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain__getframe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__getframe);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_f_back));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f_back);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_f_globals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f_globals);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_f_locals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f_locals);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__from_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__from_string);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_type_tuple_type_list_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_tuple_type_list_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_arr_rows));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arr_rows);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c131f31b9d67be17acf040abfbc0150));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c131f31b9d67be17acf040abfbc0150);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_bmat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bmat);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain__core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__core);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_numeric));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numeric);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_concatenate_str_plain_isscalar_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_concatenate_str_plain_isscalar_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_module_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_set_module_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_module);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_matrix_power_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_matrix_power_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_numpy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_numpy_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_4179858148d85e138b7e27f6f7ce41c6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4179858148d85e138b7e27f6f7ce41c6);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_e40e10c89a4ef3d33193f0182ba8e728));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e40e10c89a4ef3d33193f0182ba8e728);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_int_pos_74));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_74);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_float_10_0));
CHECK_OBJECT_DEEP(mod_consts.const_float_10_0);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain___array_priority__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___array_priority__);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_none_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_true_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c36b38458ff1db84b085447a05c3d16));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c36b38458ff1db84b085447a05c3d16);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain___array_finalize__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___array_finalize__);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_14b978ce7c037d3173fa4835be41293d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_14b978ce7c037d3173fa4835be41293d);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_7da80760fc959b79301ad98d717ef35f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7da80760fc959b79301ad98d717ef35f);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain___mul__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___mul__);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f5206ba907c53056db354048ad2d50d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f5206ba907c53056db354048ad2d50d);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc6dd796856908bac67295c89f492ef3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc6dd796856908bac67295c89f492ef3);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain___imul__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___imul__);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae4ea51befc6c57f132c0b55fd06ea2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae4ea51befc6c57f132c0b55fd06ea2b);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain___pow__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pow__);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a52124d9489c5c315b64f9c2d8cd9d9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9a52124d9489c5c315b64f9c2d8cd9d9);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain___ipow__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ipow__);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_a89078cc3f022df00f3d6d91ab7a6d6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a89078cc3f022df00f3d6d91ab7a6d6f);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain___rpow__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rpow__);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_1267eb91ea5fe0833144def3b9fe2682));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1267eb91ea5fe0833144def3b9fe2682);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a83dcef2e6bd9d496f5d0a5eb2cc910));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a83dcef2e6bd9d496f5d0a5eb2cc910);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_63171a923bc41d228d84f75cac4966c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_63171a923bc41d228d84f75cac4966c9);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d0a0c8aea757ec593a24e69bf81fe39));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d0a0c8aea757ec593a24e69bf81fe39);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_c6adc001cc8e72f18d0b95b95de5f5d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c6adc001cc8e72f18d0b95b95de5f5d7);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_af33cf1f188dd02b519023303c28a3df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af33cf1f188dd02b519023303c28a3df);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_C_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_C_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c81ed43ac05d2eb21e65fd9b585476c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c81ed43ac05d2eb21e65fd9b585476c);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_65808ce70b38edf8b5f42ff5e1a1b89b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65808ce70b38edf8b5f42ff5e1a1b89b);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_int_0_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c889cdf0a0db6f8e023b7083ff0a7b7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c889cdf0a0db6f8e023b7083ff0a7b7);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_fffaeb4698eab82f762072b6cfe9c5ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fffaeb4698eab82f762072b6cfe9c5ab);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_6089ef6633e4ad7cbe458e6cf5cc4b01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6089ef6633e4ad7cbe458e6cf5cc4b01);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_e4012dec941dfd9b1f371a24dd877ca4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e4012dec941dfd9b1f371a24dd877ca4);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_86647aea99ab58ef2932c7b7801b7a38));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86647aea99ab58ef2932c7b7801b7a38);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_332ae9ffc5f026a025249301b28b6f6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_332ae9ffc5f026a025249301b28b6f6f);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c135c5c8789cb37205a6015177c7164));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c135c5c8789cb37205a6015177c7164);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_647f13fd901de876155daa64efa61f9d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_647f13fd901de876155daa64efa61f9d);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_91092e62d85c021736a02a669d23c0f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91092e62d85c021736a02a669d23c0f1);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c5f46e6eef0fb14d19d9ba43b05c9a6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c5f46e6eef0fb14d19d9ba43b05c9a6);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_I));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_I);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ea6027b0b514a2987cd71ce18a291b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3ea6027b0b514a2987cd71ce18a291b4);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_A));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_A);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa07900215d927819b44749d1afa8ef7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aa07900215d927819b44749d1afa8ef7);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_A1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_A1);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_6225495cdff28d969d1ecae9cc0cf81d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6225495cdff28d969d1ecae9cc0cf81d);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_34b40de538a9dbded2b9da73c6292521));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34b40de538a9dbded2b9da73c6292521);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a542796b3476d3c45acba02c67f8c3c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a542796b3476d3c45acba02c67f8c3c);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_H));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_H);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_62607bac5b4a9373d2b2ee47ef1fd742));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62607bac5b4a9373d2b2ee47ef1fd742);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_fget));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fget);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_getT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getT);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_getA));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getA);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_getA1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getA1);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_getH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getH);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_getI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getI);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__getitem_str_plain_shape_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__getitem_str_plain_shape_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_a82469370746fc722dd10d77ec3793db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a82469370746fc722dd10d77ec3793db);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_14ef8b8a24232c0c3ac29f651f02f92b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_14ef8b8a24232c0c3ac29f651f02f92b);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_M_str_plain_N_str_plain_func_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_M_str_plain_N_str_plain_func_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_6cc4e551f50dd7d1380dffbbf92de02a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6cc4e551f50dd7d1380dffbbf92de02a_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_f3eff72771f6ec804ad1e70539765fcb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f3eff72771f6ec804ad1e70539765fcb_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_f6f4bba3de8817a308a6ce33dfc202ef_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f6f4bba3de8817a308a6ce33dfc202ef_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_axis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_axis_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_e5bc706f4914f9d539f70eccf2c833d1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e5bc706f4914f9d539f70eccf2c833d1_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_ac12f526a4c9417a7835994d158d3d9e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ac12f526a4c9417a7835994d158d3d9e_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_out_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_out_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_data_str_plain_dtype_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_6715b5ebdc26546a9322e2be5fff1d8e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6715b5ebdc26546a9322e2be5fff1d8e_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_order_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_order_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_dtype_str_plain_out_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_dtype_str_plain_out_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_4e9611fe9f690a396349674e30886900_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4e9611fe9f690a396349674e30886900_tuple);
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
static PyObject *module_var_accessor_numpy$matrixlib$defmatrix$N(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$matrixlib$defmatrix->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$matrixlib$defmatrix->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_N);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$matrixlib$defmatrix->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_N);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_N, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_N);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_N, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_N);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_N);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_N);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$matrixlib$defmatrix$PendingDeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$matrixlib$defmatrix->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$matrixlib$defmatrix->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_PendingDeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$matrixlib$defmatrix->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PendingDeprecationWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PendingDeprecationWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PendingDeprecationWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PendingDeprecationWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_PendingDeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_PendingDeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PendingDeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$matrixlib$defmatrix$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$matrixlib$defmatrix->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$matrixlib$defmatrix->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$matrixlib$defmatrix->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$matrixlib$defmatrix$_convert_from_string(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$matrixlib$defmatrix->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$matrixlib$defmatrix->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_from_string);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$matrixlib$defmatrix->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__convert_from_string);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__convert_from_string, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__convert_from_string);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__convert_from_string, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_from_string);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_from_string);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_from_string);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$matrixlib$defmatrix$_from_string(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$matrixlib$defmatrix->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$matrixlib$defmatrix->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain__from_string);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$matrixlib$defmatrix->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__from_string);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__from_string, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__from_string);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__from_string, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain__from_string);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain__from_string);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__from_string);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$matrixlib$defmatrix$asmatrix(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$matrixlib$defmatrix->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$matrixlib$defmatrix->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_asmatrix);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$matrixlib$defmatrix->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asmatrix);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asmatrix, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asmatrix);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asmatrix, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_asmatrix);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_asmatrix);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asmatrix);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$matrixlib$defmatrix$ast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$matrixlib$defmatrix->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$matrixlib$defmatrix->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_ast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$matrixlib$defmatrix->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_ast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_ast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ast);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$matrixlib$defmatrix$concatenate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$matrixlib$defmatrix->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$matrixlib$defmatrix->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_concatenate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$matrixlib$defmatrix->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_concatenate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_concatenate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_concatenate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_concatenate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_concatenate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_concatenate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_concatenate);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$matrixlib$defmatrix$isscalar(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$matrixlib$defmatrix->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$matrixlib$defmatrix->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_isscalar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$matrixlib$defmatrix->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isscalar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isscalar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isscalar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isscalar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_isscalar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_isscalar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_isscalar);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$matrixlib$defmatrix$matrix(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$matrixlib$defmatrix->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$matrixlib$defmatrix->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_matrix);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$matrixlib$defmatrix->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_matrix);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_matrix, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_matrix);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_matrix, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_matrix);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_matrix);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_matrix);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$matrixlib$defmatrix$matrix_power(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$matrixlib$defmatrix->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$matrixlib$defmatrix->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_matrix_power);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$matrixlib$defmatrix->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_matrix_power);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_matrix_power, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_matrix_power);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_matrix_power, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_matrix_power);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_matrix_power);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_matrix_power);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$matrixlib$defmatrix$set_module(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$matrixlib$defmatrix->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$matrixlib$defmatrix->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$matrixlib$defmatrix->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$matrixlib$defmatrix$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$matrixlib$defmatrix->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$matrixlib$defmatrix->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$matrixlib$defmatrix->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_535a7e905d2ad485874ec9c6c2505cd4;
static PyCodeObject *code_objects_3575a730cdd3cec46150fdf09fcae233;
static PyCodeObject *code_objects_45a112af5ae1c1b6e8a7b39b0ec5ff09;
static PyCodeObject *code_objects_3af4a1886f82d853877aec02a45582a0;
static PyCodeObject *code_objects_7d2af1009f4d69667b551a0373df095f;
static PyCodeObject *code_objects_2db0ff414481092d8d40d4cbf7e1c017;
static PyCodeObject *code_objects_b9fdc83c7f310e9afeb797c1a5c57c56;
static PyCodeObject *code_objects_81c30f3ee3d404acc0aabfbeef90f3fc;
static PyCodeObject *code_objects_99d7490fab4db0d40b65615eef7f866e;
static PyCodeObject *code_objects_7035197528e1b667eee49a1181f065bf;
static PyCodeObject *code_objects_6f43188662b80ae8d281070bd10502bf;
static PyCodeObject *code_objects_4a0919f67dab67e55e92c40c22b9010f;
static PyCodeObject *code_objects_bada56b65f1ed78d7066f2d8506dd92f;
static PyCodeObject *code_objects_48cef7affe1a6af29eca7cc16e0116db;
static PyCodeObject *code_objects_796544c2429a10282b8d1c528e88d004;
static PyCodeObject *code_objects_344f4b82964d5d778ba6e5bf62ed424e;
static PyCodeObject *code_objects_4071f86d2fa70a162a692a2c10a13575;
static PyCodeObject *code_objects_9ae8838b0521fda2562d745e0a701083;
static PyCodeObject *code_objects_b4847189f73aea246134a1294d7580e6;
static PyCodeObject *code_objects_6fc77021de346ad0b7bd39219dca7fea;
static PyCodeObject *code_objects_19c588d6b2721fdb3cc8c8456d8ca542;
static PyCodeObject *code_objects_86d53dd5aa79e15ec8579ead251a63b4;
static PyCodeObject *code_objects_d858e4b0c092bb0d784c49a4e419a040;
static PyCodeObject *code_objects_e75063601413b071d14f74bcdb2a4b4e;
static PyCodeObject *code_objects_5c3736be0ba329ec4068dff7ff829afa;
static PyCodeObject *code_objects_3eb9615bb0f3f43e70e49801fb22b143;
static PyCodeObject *code_objects_7f613864c2cdf09b020f4515196ded41;
static PyCodeObject *code_objects_b3a88fbab749eb8e9bc7cb44a7e1b917;
static PyCodeObject *code_objects_357cb0d45dcc2b70543094664cda9c9e;
static PyCodeObject *code_objects_c66a123001a0b609b063b205801d7ddb;
static PyCodeObject *code_objects_81972b96beebcd03e7459412192c9034;
static PyCodeObject *code_objects_bfdf5ba3173094fabe08ed0de712ffee;
static PyCodeObject *code_objects_3bf9d1371cecd4072bdcecc29a25b155;
static PyCodeObject *code_objects_bec4d649b75e71f223d46e65207ac407;
static PyCodeObject *code_objects_f4d278bbda0862c6f89dab31ba8a2445;
static PyCodeObject *code_objects_656306132b367d632e4516a23c21e659;
static PyCodeObject *code_objects_e79e08e055bd5ac7368ad638fc0823c4;
static PyCodeObject *code_objects_92a5768a9ceacc428f9c4a1f1a2c3805;
static PyCodeObject *code_objects_b26cff032fd11f43dd97c086bcf50eff;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_a82469370746fc722dd10d77ec3793db); CHECK_OBJECT(module_filename_obj);
code_objects_535a7e905d2ad485874ec9c6c2505cd4 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_b8e805e5e03e933d6d347507988636bc, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple, NULL, 1, 0, 0);
code_objects_3575a730cdd3cec46150fdf09fcae233 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_14ef8b8a24232c0c3ac29f651f02f92b, mod_consts.const_str_digest_14ef8b8a24232c0c3ac29f651f02f92b, NULL, NULL, 0, 0, 0);
code_objects_45a112af5ae1c1b6e8a7b39b0ec5ff09 = MAKE_CODE_OBJECT(module_filename_obj, 846, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_A, mod_consts.const_str_digest_aa07900215d927819b44749d1afa8ef7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3af4a1886f82d853877aec02a45582a0 = MAKE_CODE_OBJECT(module_filename_obj, 876, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_A1, mod_consts.const_str_digest_6225495cdff28d969d1ecae9cc0cf81d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7d2af1009f4d69667b551a0373df095f = MAKE_CODE_OBJECT(module_filename_obj, 976, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_H, mod_consts.const_str_digest_62607bac5b4a9373d2b2ee47ef1fd742, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2db0ff414481092d8d40d4cbf7e1c017 = MAKE_CODE_OBJECT(module_filename_obj, 801, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_I, mod_consts.const_str_digest_3ea6027b0b514a2987cd71ce18a291b4, mod_consts.const_tuple_str_plain_self_str_plain_M_str_plain_N_str_plain_func_tuple, NULL, 1, 0, 0);
code_objects_b9fdc83c7f310e9afeb797c1a5c57c56 = MAKE_CODE_OBJECT(module_filename_obj, 943, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_T, mod_consts.const_str_digest_7a542796b3476d3c45acba02c67f8c3c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_81c30f3ee3d404acc0aabfbeef90f3fc = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___array_finalize__, mod_consts.const_str_digest_14b978ce7c037d3173fa4835be41293d, mod_consts.const_tuple_6cc4e551f50dd7d1380dffbbf92de02a_tuple, NULL, 2, 0, 0);
code_objects_99d7490fab4db0d40b65615eef7f866e = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getitem__, mod_consts.const_str_digest_7da80760fc959b79301ad98d717ef35f, mod_consts.const_tuple_f3eff72771f6ec804ad1e70539765fcb_tuple, NULL, 2, 0, 0);
code_objects_7035197528e1b667eee49a1181f065bf = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___imul__, mod_consts.const_str_digest_ae4ea51befc6c57f132c0b55fd06ea2b, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_6f43188662b80ae8d281070bd10502bf = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___ipow__, mod_consts.const_str_digest_a89078cc3f022df00f3d6d91ab7a6d6f, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_4a0919f67dab67e55e92c40c22b9010f = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___mul__, mod_consts.const_str_digest_4f5206ba907c53056db354048ad2d50d, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_bada56b65f1ed78d7066f2d8506dd92f = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___new__, mod_consts.const_str_digest_1c36b38458ff1db84b085447a05c3d16, mod_consts.const_tuple_f6f4bba3de8817a308a6ce33dfc202ef_tuple, NULL, 4, 0, 0);
code_objects_48cef7affe1a6af29eca7cc16e0116db = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___pow__, mod_consts.const_str_digest_9a52124d9489c5c315b64f9c2d8cd9d9, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_796544c2429a10282b8d1c528e88d004 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___rmul__, mod_consts.const_str_digest_bc6dd796856908bac67295c89f492ef3, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_344f4b82964d5d778ba6e5bf62ed424e = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___rpow__, mod_consts.const_str_digest_1267eb91ea5fe0833144def3b9fe2682, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_4071f86d2fa70a162a692a2c10a13575 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__align, mod_consts.const_str_digest_8a83dcef2e6bd9d496f5d0a5eb2cc910, mod_consts.const_tuple_str_plain_self_str_plain_axis_tuple, NULL, 2, 0, 0);
code_objects_9ae8838b0521fda2562d745e0a701083 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__collapse, mod_consts.const_str_digest_63171a923bc41d228d84f75cac4966c9, mod_consts.const_tuple_str_plain_self_str_plain_axis_tuple, NULL, 2, 0, 0);
code_objects_b4847189f73aea246134a1294d7580e6 = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__convert_from_string, mod_consts.const_str_plain__convert_from_string, mod_consts.const_tuple_e5bc706f4914f9d539f70eccf2c833d1_tuple, NULL, 1, 0, 0);
code_objects_6fc77021de346ad0b7bd39219dca7fea = MAKE_CODE_OBJECT(module_filename_obj, 1017, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__from_string, mod_consts.const_str_plain__from_string, mod_consts.const_tuple_ac12f526a4c9417a7835994d158d3d9e_tuple, NULL, 3, 0, 0);
code_objects_19c588d6b2721fdb3cc8c8456d8ca542 = MAKE_CODE_OBJECT(module_filename_obj, 579, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_all, mod_consts.const_str_digest_86647aea99ab58ef2932c7b7801b7a38, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_out_tuple, NULL, 3, 0, 0);
code_objects_86d53dd5aa79e15ec8579ead251a63b4 = MAKE_CODE_OBJECT(module_filename_obj, 556, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_any, mod_consts.const_str_digest_e4012dec941dfd9b1f371a24dd877ca4, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_out_tuple, NULL, 3, 0, 0);
code_objects_d858e4b0c092bb0d784c49a4e419a040 = MAKE_CODE_OBJECT(module_filename_obj, 654, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_argmax, mod_consts.const_str_digest_1c135c5c8789cb37205a6015177c7164, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_out_tuple, NULL, 3, 0, 0);
code_objects_e75063601413b071d14f74bcdb2a4b4e = MAKE_CODE_OBJECT(module_filename_obj, 728, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_argmin, mod_consts.const_str_digest_91092e62d85c021736a02a669d23c0f1, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_out_tuple, NULL, 3, 0, 0);
code_objects_5c3736be0ba329ec4068dff7ff829afa = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_asmatrix, mod_consts.const_str_plain_asmatrix, mod_consts.const_tuple_str_plain_data_str_plain_dtype_tuple, NULL, 2, 0, 0);
code_objects_3eb9615bb0f3f43e70e49801fb22b143 = MAKE_CODE_OBJECT(module_filename_obj, 1043, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_bmat, mod_consts.const_str_plain_bmat, mod_consts.const_tuple_6715b5ebdc26546a9322e2be5fff1d8e_tuple, NULL, 3, 0, 0);
code_objects_7f613864c2cdf09b020f4515196ded41 = MAKE_CODE_OBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_flatten, mod_consts.const_str_digest_4c81ed43ac05d2eb21e65fd9b585476c, mod_consts.const_tuple_str_plain_self_str_plain_order_tuple, NULL, 2, 0, 0);
code_objects_b3a88fbab749eb8e9bc7cb44a7e1b917 = MAKE_CODE_OBJECT(module_filename_obj, 74, 0, mod_consts.const_str_plain_matrix, mod_consts.const_str_plain_matrix, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_357cb0d45dcc2b70543094664cda9c9e = MAKE_CODE_OBJECT(module_filename_obj, 619, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_max, mod_consts.const_str_digest_332ae9ffc5f026a025249301b28b6f6f, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_out_tuple, NULL, 3, 0, 0);
code_objects_c66a123001a0b609b063b205801d7ddb = MAKE_CODE_OBJECT(module_filename_obj, 419, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_mean, mod_consts.const_str_digest_65808ce70b38edf8b5f42ff5e1a1b89b, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_dtype_str_plain_out_tuple, NULL, 4, 0, 0);
code_objects_81972b96beebcd03e7459412192c9034 = MAKE_CODE_OBJECT(module_filename_obj, 693, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_min, mod_consts.const_str_digest_647f13fd901de876155daa64efa61f9d, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_out_tuple, NULL, 3, 0, 0);
code_objects_bfdf5ba3173094fabe08ed0de712ffee = MAKE_CODE_OBJECT(module_filename_obj, 523, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_prod, mod_consts.const_str_digest_6089ef6633e4ad7cbe458e6cf5cc4b01, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_dtype_str_plain_out_tuple, NULL, 4, 0, 0);
code_objects_3bf9d1371cecd4072bdcecc29a25b155 = MAKE_CODE_OBJECT(module_filename_obj, 767, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_ptp, mod_consts.const_str_digest_5c5f46e6eef0fb14d19d9ba43b05c9a6, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_out_tuple, NULL, 3, 0, 0);
code_objects_bec4d649b75e71f223d46e65207ac407 = MAKE_CODE_OBJECT(module_filename_obj, 904, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_ravel, mod_consts.const_str_digest_34b40de538a9dbded2b9da73c6292521, mod_consts.const_tuple_str_plain_self_str_plain_order_tuple, NULL, 2, 0, 0);
code_objects_f4d278bbda0862c6f89dab31ba8a2445 = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_squeeze, mod_consts.const_str_digest_af33cf1f188dd02b519023303c28a3df, mod_consts.const_tuple_str_plain_self_str_plain_axis_tuple, NULL, 2, 0, 0);
code_objects_656306132b367d632e4516a23c21e659 = MAKE_CODE_OBJECT(module_filename_obj, 453, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_std, mod_consts.const_str_digest_9c889cdf0a0db6f8e023b7083ff0a7b7, mod_consts.const_tuple_4e9611fe9f690a396349674e30886900_tuple, NULL, 5, 0, 0);
code_objects_e79e08e055bd5ac7368ad638fc0823c4 = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_sum, mod_consts.const_str_digest_c6adc001cc8e72f18d0b95b95de5f5d7, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_dtype_str_plain_out_tuple, NULL, 4, 0, 0);
code_objects_92a5768a9ceacc428f9c4a1f1a2c3805 = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_tolist, mod_consts.const_str_digest_9d0a0c8aea757ec593a24e69bf81fe39, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b26cff032fd11f43dd97c086bcf50eff = MAKE_CODE_OBJECT(module_filename_obj, 488, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_var, mod_consts.const_str_digest_fffaeb4698eab82f762072b6cfe9c5ab, mod_consts.const_tuple_4e9611fe9f690a396349674e30886900_tuple, NULL, 5, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_numpy$matrixlib$defmatrix$$$function__4___array_finalize__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__10___ipow__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__11___rpow__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__12__align(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__13__collapse(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__14_tolist(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__15_sum(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__16_squeeze(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__17_flatten(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__18_mean(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__19_std(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__1__convert_from_string(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__20_var(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__21_prod(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__22_any(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__23_all(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__24_max(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__25_argmax(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__26_min(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__27_argmin(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__28_ptp(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__29_I(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__2_asmatrix(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__30_A(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__31_A1(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__32_ravel(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__33_T(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__34_H(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__35__from_string(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__36_bmat(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__3___new__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__4___array_finalize__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__5___getitem__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__6___mul__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__7___rmul__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__8___imul__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__9___pow__(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$matrixlib$defmatrix$$$function__1__convert_from_string(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data = python_pars[0];
PyObject *var_char = NULL;
PyObject *var_rows = NULL;
PyObject *var_newdata = NULL;
PyObject *var_count = NULL;
PyObject *var_row = NULL;
PyObject *var_trow = NULL;
PyObject *var_newrow = NULL;
PyObject *var_col = NULL;
PyObject *var_temp = NULL;
PyObject *var_Ncols = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_str_digest_9613c3fc04783ef5920752aa27696d66;
tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_1 == NULL));
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string = MAKE_FUNCTION_FRAME(tstate, code_objects_b4847189f73aea246134a1294d7580e6, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string) == 2);

// Framed code:
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
type_description_1 = "ooooooooooo";
exception_lineno = 17;
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
    PyObject *old = var_char;
    var_char = tmp_assign_source_3;
    Py_INCREF(var_char);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
if (par_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 18;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_1 = par_data;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_replace);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_char);
tmp_args_element_value_1 = var_char;
tmp_args_element_value_2 = const_str_empty;
frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string->m_frame.f_lineno = 18;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_data;
    par_data = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
if (par_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 20;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = par_data;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_split);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string->m_frame.f_lineno = 20;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_chr_59_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_rows == NULL);
var_rows = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_newdata == NULL);
var_newdata = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(var_rows);
tmp_args_element_value_3 = var_rows;
frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string->m_frame.f_lineno = 22;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_7;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
exception_lineno = 22;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
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



exception_lineno = 22;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_count;
    var_count = tmp_assign_source_12;
    Py_INCREF(var_count);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_row;
    var_row = tmp_assign_source_13;
    Py_INCREF(var_row);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_row);
tmp_expression_value_3 = var_row;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_split);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string->m_frame.f_lineno = 23;
tmp_assign_source_14 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_chr_44_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_trow;
    var_trow = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_newrow;
    var_newrow = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(var_trow);
tmp_iter_arg_4 = var_trow;
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
exception_lineno = 25;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_18 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_col;
    var_col = tmp_assign_source_18;
    Py_INCREF(var_col);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_col);
tmp_expression_value_4 = var_col;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_split);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string->m_frame.f_lineno = 26;
tmp_assign_source_19 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_temp;
    var_temp = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_5;
if (var_newrow == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newrow);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 27;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}

tmp_list_arg_value_1 = var_newrow;
tmp_called_value_6 = (PyObject *)&PyMap_Type;
tmp_expression_value_5 = module_var_accessor_numpy$matrixlib$defmatrix$ast(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ast);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_literal_eval);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_temp);
tmp_args_element_value_5 = var_temp;
frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string->m_frame.f_lineno = 27;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_value_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
goto loop_start_3;
loop_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_3;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_count);
tmp_cmp_expr_left_1 = var_count;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_len_arg_1;
if (var_newrow == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newrow);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 29;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}

tmp_len_arg_1 = var_newrow;
tmp_assign_source_20 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_Ncols;
    var_Ncols = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
if (var_newrow == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newrow);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 30;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}

tmp_len_arg_2 = var_newrow;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
if (var_Ncols == NULL) {
Py_DECREF(tmp_cmp_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Ncols);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 30;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}

tmp_cmp_expr_right_2 = var_Ncols;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_8c57929e8f06c6c88acc03cad6d1877a;
frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string->m_frame.f_lineno = 31;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 31;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
goto try_except_handler_3;
}
branch_no_2:;
branch_end_1:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_1;
if (var_newdata == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newdata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 32;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}

tmp_list_arg_value_2 = var_newdata;
if (var_newrow == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newrow);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 32;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}

tmp_item_value_1 = var_newrow;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_5;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
if (var_newdata == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newdata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 33;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_newdata;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string,
    type_description_1,
    par_data,
    var_char,
    var_rows,
    var_newdata,
    var_count,
    var_row,
    var_trow,
    var_newrow,
    var_col,
    var_temp,
    var_Ncols
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__1__convert_from_string);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_data);
par_data = NULL;
Py_XDECREF(var_char);
var_char = NULL;
CHECK_OBJECT(var_rows);
CHECK_OBJECT(var_rows);
Py_DECREF(var_rows);
var_rows = NULL;
Py_XDECREF(var_newdata);
var_newdata = NULL;
Py_XDECREF(var_count);
var_count = NULL;
Py_XDECREF(var_row);
var_row = NULL;
Py_XDECREF(var_trow);
var_trow = NULL;
Py_XDECREF(var_newrow);
var_newrow = NULL;
Py_XDECREF(var_col);
var_col = NULL;
Py_XDECREF(var_temp);
var_temp = NULL;
Py_XDECREF(var_Ncols);
var_Ncols = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_data);
par_data = NULL;
Py_XDECREF(var_char);
var_char = NULL;
Py_XDECREF(var_rows);
var_rows = NULL;
Py_XDECREF(var_newdata);
var_newdata = NULL;
Py_XDECREF(var_count);
var_count = NULL;
Py_XDECREF(var_row);
var_row = NULL;
Py_XDECREF(var_trow);
var_trow = NULL;
Py_XDECREF(var_newrow);
var_newrow = NULL;
Py_XDECREF(var_col);
var_col = NULL;
Py_XDECREF(var_temp);
var_temp = NULL;
Py_XDECREF(var_Ncols);
var_Ncols = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

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


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__2_asmatrix(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data = python_pars[0];
PyObject *par_dtype = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix = MAKE_FUNCTION_FRAME(tstate, code_objects_5c3736be0ba329ec4068dff7ff829afa, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_1 = module_var_accessor_numpy$matrixlib$defmatrix$matrix(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_matrix);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_kw_call_arg_value_0_1 = par_data;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_0_1 = par_dtype;
tmp_kw_call_dict_value_1_1 = Py_False;
frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix->m_frame.f_lineno = 70;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_dtype_str_plain_copy_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix,
    type_description_1,
    par_data,
    par_dtype
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__2_asmatrix);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__3___new__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_subtype = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_copy = python_pars[3];
PyObject *var_dtype2 = NULL;
PyObject *var_intype = NULL;
PyObject *var_new = NULL;
PyObject *var_arr = NULL;
PyObject *var_ndim = NULL;
PyObject *var_shape = NULL;
PyObject *var_order = NULL;
PyObject *var_ret = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__ = MAKE_FUNCTION_FRAME(tstate, code_objects_bada56b65f1ed78d7066f2d8506dd92f, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__ = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$matrixlib$defmatrix$warnings(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_98b9e470692e5d4174e49c791c334258;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_numpy$matrixlib$defmatrix$PendingDeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PendingDeprecationWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__->m_frame.f_lineno = 120;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_data);
tmp_isinstance_inst_1 = par_data;
tmp_isinstance_cls_1 = module_var_accessor_numpy$matrixlib$defmatrix$matrix(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_matrix);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooooooo";
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
CHECK_OBJECT(par_data);
tmp_expression_value_2 = par_data;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_dtype2 == NULL);
var_dtype2 = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_left_1 = par_dtype;
tmp_cmp_expr_right_1 = Py_None;
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
CHECK_OBJECT(var_dtype2);
tmp_assign_source_2 = var_dtype2;
{
    PyObject *old = par_dtype;
    assert(old != NULL);
    par_dtype = tmp_assign_source_2;
    Py_INCREF(par_dtype);
    Py_DECREF(old);
}

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_dtype2);
tmp_cmp_expr_left_2 = var_dtype2;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_right_2 = par_dtype;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_copy);
tmp_operand_value_1 = par_copy;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooooooooo";
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
CHECK_OBJECT(par_data);
tmp_return_value = par_data;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_data);
tmp_called_instance_1 = par_data;
CHECK_OBJECT(par_dtype);
tmp_args_element_value_1 = par_dtype;
frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__->m_frame.f_lineno = 132;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_astype, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_data);
tmp_isinstance_inst_2 = par_data;
tmp_expression_value_3 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooooooo";
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
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_left_3 = par_dtype;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_data);
tmp_expression_value_4 = par_data;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_dtype);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_intype == NULL);
var_intype = tmp_assign_source_3;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dtype);
tmp_args_element_value_2 = par_dtype;
frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__->m_frame.f_lineno = 138;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_dtype, tmp_args_element_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_intype == NULL);
var_intype = tmp_assign_source_4;
}
branch_end_5:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_data);
tmp_called_instance_3 = par_data;
CHECK_OBJECT(par_subtype);
tmp_args_element_value_3 = par_subtype;
frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__->m_frame.f_lineno = 139;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_view, tmp_args_element_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_new == NULL);
var_new = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_intype);
tmp_cmp_expr_left_4 = var_intype;
CHECK_OBJECT(par_data);
tmp_expression_value_5 = par_data;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_new);
tmp_called_instance_4 = var_new;
CHECK_OBJECT(var_intype);
tmp_args_element_value_4 = var_intype;
frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__->m_frame.f_lineno = 141;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_astype, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_1;
CHECK_OBJECT(par_copy);
tmp_truth_name_1 = CHECK_IF_TRUE(par_copy);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_new);
tmp_expression_value_6 = var_new;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_copy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__->m_frame.f_lineno = 143;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_7;
branch_no_7:;
CHECK_OBJECT(var_new);
tmp_return_value = var_new;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_7:;
branch_no_4:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
CHECK_OBJECT(par_data);
tmp_isinstance_inst_3 = par_data;
tmp_isinstance_cls_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
tmp_called_value_3 = module_var_accessor_numpy$matrixlib$defmatrix$_convert_from_string(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__convert_from_string);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_5 = par_data;
frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__->m_frame.f_lineno = 148;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_data;
    assert(old != NULL);
    par_data = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_8:;
{
PyObject *tmp_assign_source_7;
bool tmp_condition_result_9;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_copy);
tmp_operand_value_2 = par_copy;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_7 = Py_None;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_7 = Py_True;
condexpr_end_1:;
{
    PyObject *old = par_copy;
    assert(old != NULL);
    par_copy = tmp_assign_source_7;
    Py_INCREF(par_copy);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_7 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_array);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_kw_call_arg_value_0_1 = par_data;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_0_1 = par_dtype;
CHECK_OBJECT(par_copy);
tmp_kw_call_dict_value_1_1 = par_copy;
frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__->m_frame.f_lineno = 152;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_dtype_str_plain_copy_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_arr == NULL);
var_arr = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_arr);
tmp_expression_value_8 = var_arr;
tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ndim);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ndim == NULL);
var_ndim = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_arr);
tmp_expression_value_9 = var_arr;
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_shape);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_shape == NULL);
var_shape = tmp_assign_source_10;
}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_ndim);
tmp_cmp_expr_left_5 = var_ndim;
tmp_cmp_expr_right_5 = mod_consts.const_int_pos_2;
tmp_condition_result_10 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_fe92ed1d0079004be741055e3e33b687;
frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__->m_frame.f_lineno = 156;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 156;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
goto branch_end_9;
branch_no_9:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_ndim);
tmp_cmp_expr_left_6 = var_ndim;
tmp_cmp_expr_right_6 = const_int_0;
tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = mod_consts.const_tuple_int_pos_1_int_pos_1_tuple;
{
    PyObject *old = var_shape;
    assert(old != NULL);
    var_shape = tmp_assign_source_11;
    Py_INCREF(var_shape);
    Py_DECREF(old);
}

}
goto branch_end_10;
branch_no_10:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_ndim);
tmp_cmp_expr_left_7 = var_ndim;
tmp_cmp_expr_right_7 = const_int_pos_1;
tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = const_int_pos_1;
tmp_assign_source_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
PyTuple_SET_ITEM0(tmp_assign_source_12, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_shape);
tmp_expression_value_10 = var_shape;
tmp_subscript_value_1 = const_int_0;
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_1, 0);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assign_source_12);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
{
    PyObject *old = var_shape;
    assert(old != NULL);
    var_shape = tmp_assign_source_12;
    Py_DECREF(old);
}

}
branch_no_11:;
branch_end_10:;
branch_end_9:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_str_plain_C;
assert(var_order == NULL);
Py_INCREF(tmp_assign_source_13);
var_order = tmp_assign_source_13;
}
{
nuitka_bool tmp_condition_result_13;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
CHECK_OBJECT(var_ndim);
tmp_cmp_expr_left_8 = var_ndim;
tmp_cmp_expr_right_8 = mod_consts.const_int_pos_2;
tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_arr);
tmp_expression_value_12 = var_arr;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_flags);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_fortran);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 163;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_condition_result_13 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_13 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = mod_consts.const_str_plain_F;
{
    PyObject *old = var_order;
    assert(old != NULL);
    var_order = tmp_assign_source_14;
    Py_INCREF(var_order);
    Py_DECREF(old);
}

}
branch_no_12:;
{
PyObject *tmp_operand_value_3;
CHECK_OBJECT(var_order);
tmp_operand_value_3 = var_order;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
tmp_expression_value_14 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain___new__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_subtype);
tmp_kw_call_arg_value_0_2 = par_subtype;
CHECK_OBJECT(var_shape);
tmp_kw_call_arg_value_1_1 = var_shape;
CHECK_OBJECT(var_arr);
tmp_expression_value_15 = var_arr;
tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_dtype);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 169;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arr);
tmp_kw_call_dict_value_0_2 = var_arr;
CHECK_OBJECT(var_order);
tmp_kw_call_dict_value_1_2 = var_order;
frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__->m_frame.f_lineno = 169;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_buffer_str_plain_order_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ret == NULL);
var_ret = tmp_assign_source_15;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__,
    type_description_1,
    par_subtype,
    par_data,
    par_dtype,
    par_copy,
    var_dtype2,
    var_intype,
    var_new,
    var_arr,
    var_ndim,
    var_shape,
    var_order,
    var_ret
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__ == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__ = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__3___new__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_ret);
tmp_return_value = var_ret;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_data);
par_data = NULL;
Py_XDECREF(par_dtype);
par_dtype = NULL;
Py_XDECREF(par_copy);
par_copy = NULL;
Py_XDECREF(var_dtype2);
var_dtype2 = NULL;
Py_XDECREF(var_intype);
var_intype = NULL;
Py_XDECREF(var_new);
var_new = NULL;
Py_XDECREF(var_arr);
var_arr = NULL;
Py_XDECREF(var_ndim);
var_ndim = NULL;
Py_XDECREF(var_shape);
var_shape = NULL;
Py_XDECREF(var_order);
var_order = NULL;
Py_XDECREF(var_ret);
var_ret = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_data);
par_data = NULL;
Py_XDECREF(par_dtype);
par_dtype = NULL;
Py_XDECREF(par_copy);
par_copy = NULL;
Py_XDECREF(var_dtype2);
var_dtype2 = NULL;
Py_XDECREF(var_intype);
var_intype = NULL;
Py_XDECREF(var_new);
var_new = NULL;
Py_XDECREF(var_arr);
var_arr = NULL;
Py_XDECREF(var_ndim);
var_ndim = NULL;
Py_XDECREF(var_shape);
var_shape = NULL;
Py_XDECREF(var_order);
var_order = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_subtype);
Py_DECREF(par_subtype);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_subtype);
Py_DECREF(par_subtype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__4___array_finalize__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_obj = python_pars[1];
PyObject *var_ndim = NULL;
PyObject *var_newshape = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__ = MAKE_FUNCTION_FRAME(tstate, code_objects_81c30f3ee3d404acc0aabfbeef90f3fc, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__ = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__getitem, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_obj);
tmp_isinstance_inst_1 = par_obj;
tmp_isinstance_cls_1 = module_var_accessor_numpy$matrixlib$defmatrix$matrix(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_matrix);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_obj);
tmp_expression_value_1 = par_obj;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__getitem);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 176;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndim);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_ndim == NULL);
var_ndim = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_ndim);
tmp_cmp_expr_left_1 = var_ndim;
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_2;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_ndim);
tmp_cmp_expr_left_2 = var_ndim;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_2;
tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_tuple_arg_1;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_shape);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_3;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_tuple_arg_1 = MAKE_GENERATOR_numpy$matrixlib$defmatrix$$$function__4___array_finalize__$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_assign_source_2 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_newshape == NULL);
var_newshape = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_newshape);
tmp_len_arg_1 = var_newshape;
tmp_assign_source_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_assign_source_4 == NULL));
{
    PyObject *old = var_ndim;
    assert(old != NULL);
    var_ndim = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
CHECK_OBJECT(var_ndim);
tmp_cmp_expr_left_3 = var_ndim;
tmp_cmp_expr_right_3 = 2;
tmp_condition_result_4 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_newshape);
tmp_assattr_value_2 = var_newshape;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_shape, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
CHECK_OBJECT(var_ndim);
tmp_cmp_expr_left_4 = var_ndim;
tmp_cmp_expr_right_4 = 2;
tmp_condition_result_5 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_43d95b98f33ffd170812ad62d79b96ce;
frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__->m_frame.f_lineno = 188;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 188;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_5:;
branch_end_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_shape);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_newshape == NULL);
var_newshape = tmp_assign_source_5;
}
branch_end_3:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_ndim);
tmp_cmp_expr_left_5 = var_ndim;
tmp_cmp_expr_right_5 = const_int_0;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = mod_consts.const_tuple_int_pos_1_int_pos_1_tuple;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_shape, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_ndim);
tmp_cmp_expr_left_6 = var_ndim;
tmp_cmp_expr_right_6 = const_int_pos_1;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooo";
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
PyObject *tmp_assattr_value_4;
PyObject *tmp_tuple_element_1;
PyObject *tmp_assattr_target_4;
tmp_tuple_element_1 = const_int_pos_1;
tmp_assattr_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyTuple_SET_ITEM0(tmp_assattr_value_4, 0, tmp_tuple_element_1);
if (var_newshape == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newshape);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}

tmp_expression_value_5 = var_newshape;
tmp_subscript_value_1 = const_int_0;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assattr_value_4, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assattr_value_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_shape, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__,
    type_description_1,
    par_self,
    par_obj,
    var_ndim,
    var_newshape
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__ == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__ = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__4___array_finalize__);

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
Py_XDECREF(var_ndim);
var_ndim = NULL;
Py_XDECREF(var_newshape);
var_newshape = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ndim);
var_ndim = NULL;
Py_XDECREF(var_newshape);
var_newshape = NULL;
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
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct numpy$matrixlib$defmatrix$$$function__4___array_finalize__$$$genexpr__1_genexpr_locals {
PyObject *var_x;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *numpy$matrixlib$defmatrix$$$function__4___array_finalize__$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct numpy$matrixlib$defmatrix$$$function__4___array_finalize__$$$genexpr__1_genexpr_locals *generator_heap = (struct numpy$matrixlib$defmatrix$$$function__4___array_finalize__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_x = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_535a7e905d2ad485874ec9c6c2505cd4, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 182;
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
    PyObject *old = generator_heap->var_x;
    generator_heap->var_x = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_x);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(generator_heap->var_x);
tmp_cmp_expr_left_1 = generator_heap->var_x;
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
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
CHECK_OBJECT(generator_heap->var_x);
tmp_expression_value_1 = generator_heap->var_x;
Py_INCREF(tmp_expression_value_1);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "No";
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


generator_heap->exception_lineno = 182;
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
    generator_heap->var_x
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

Py_XDECREF(generator_heap->var_x);
generator_heap->var_x = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_x);
generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$matrixlib$defmatrix$$$function__4___array_finalize__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$matrixlib$defmatrix$$$function__4___array_finalize__$$$genexpr__1_genexpr_context,
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_b8e805e5e03e933d6d347507988636bc,
#endif
        code_objects_535a7e905d2ad485874ec9c6c2505cd4,
        closure,
        1,
#if 1
        sizeof(struct numpy$matrixlib$defmatrix$$$function__4___array_finalize__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__5___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_index = python_pars[1];
PyObject *var_out = NULL;
PyObject *var_sh = NULL;
PyObject *var_n = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_99d7490fab4db0d40b65615eef7f866e, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__ = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__getitem, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 201;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_index);
tmp_args_element_value_2 = par_index;
frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__->m_frame.f_lineno = 201;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain___getitem__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var_out == NULL);
var_out = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__getitem, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 200;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__->m_frame)) {
        frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_3;
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
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__getitem, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_out);
tmp_isinstance_inst_1 = var_out;
tmp_expression_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooo";
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
CHECK_OBJECT(var_out);
tmp_return_value = var_out;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_out);
tmp_expression_value_3 = var_out;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_out);
tmp_expression_value_4 = var_out;
tmp_subscript_value_1 = const_tuple_empty;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_out);
tmp_expression_value_5 = var_out;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_out);
tmp_expression_value_7 = var_out;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_shape);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 0);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_sh == NULL);
var_sh = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_index);
tmp_len_arg_1 = par_index;
tmp_assign_source_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
assert(var_n == NULL);
var_n = tmp_assign_source_3;
}
goto try_end_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = const_int_0;
assert(var_n == NULL);
Py_INCREF(tmp_assign_source_4);
var_n = tmp_assign_source_4;
}
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 213;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__->m_frame)) {
        frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_5;
branch_end_4:;
goto try_end_3;
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
try_end_3:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
bool tmp_tmp_and_left_value_1_cbool_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
int tmp_truth_name_1;
CHECK_OBJECT(var_n);
tmp_cmp_expr_left_4 = var_n;
tmp_cmp_expr_right_4 = 1;
tmp_tmp_and_left_value_1_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
tmp_and_left_value_1 = tmp_tmp_and_left_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_called_value_1 = module_var_accessor_numpy$matrixlib$defmatrix$isscalar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isscalar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_index);
tmp_expression_value_8 = par_index;
tmp_subscript_value_3 = const_int_pos_1;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_3, 1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__->m_frame.f_lineno = 217;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 217;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_condition_result_5 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_5 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_tuple_element_1;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(var_sh);
tmp_tuple_element_1 = var_sh;
tmp_assattr_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assattr_value_4, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_assattr_value_4, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_out);
tmp_assattr_target_4 = var_out;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_shape, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_tuple_element_2;
PyObject *tmp_assattr_target_5;
tmp_tuple_element_2 = const_int_pos_1;
tmp_assattr_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assattr_value_5, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_sh);
tmp_tuple_element_2 = var_sh;
PyTuple_SET_ITEM0(tmp_assattr_value_5, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_out);
tmp_assattr_target_5 = var_out;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_shape, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_end_5:;
branch_no_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__,
    type_description_1,
    par_self,
    par_index,
    var_out,
    var_sh,
    var_n
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__ == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__ = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__5___getitem__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_out);
tmp_return_value = var_out;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_out);
CHECK_OBJECT(var_out);
Py_DECREF(var_out);
var_out = NULL;
Py_XDECREF(var_sh);
var_sh = NULL;
Py_XDECREF(var_n);
var_n = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_out);
var_out = NULL;
Py_XDECREF(var_sh);
var_sh = NULL;
Py_XDECREF(var_n);
var_n = NULL;
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
CHECK_OBJECT(par_index);
Py_DECREF(par_index);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_index);
Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__6___mul__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4a0919f67dab67e55e92c40c22b9010f, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__ = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_other);
tmp_isinstance_inst_1 = par_other;
tmp_expression_value_1 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 224;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndarray);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = (PyObject *)&PyList_Type;
PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = (PyObject *)&PyTuple_Type;
PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 2, tmp_tuple_element_1);
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dot);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
tmp_called_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$asmatrix(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asmatrix);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 226;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__->m_frame.f_lineno = 226;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 226;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__->m_frame.f_lineno = 226;
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


exception_lineno = 226;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_3;
tmp_called_value_3 = module_var_accessor_numpy$matrixlib$defmatrix$isscalar(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isscalar);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_args_element_value_4 = par_other;
frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__->m_frame.f_lineno = 227;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 227;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_other);
tmp_expression_value_3 = par_other;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___rmul__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_instance_1 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_5 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_6 = par_other;
frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__->m_frame.f_lineno = 228;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_dot,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__ == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__ = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__6___mul__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_NotImplemented;
Py_INCREF(tmp_return_value);
goto function_return_exit;

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


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__7___rmul__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__ = MAKE_FUNCTION_FRAME(tstate, code_objects_796544c2429a10282b8d1c528e88d004, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__ = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_args_element_value_1 = par_other;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__->m_frame.f_lineno = 232;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_dot,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__ == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__ = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__7___rmul__);

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


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__8___imul__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7035197528e1b667eee49a1181f065bf, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__ = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_self);
tmp_mult_expr_left_1 = par_self;
CHECK_OBJECT(par_other);
tmp_mult_expr_right_1 = par_other;
tmp_ass_subvalue_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_subscribed_1 = par_self;
tmp_ass_subscript_1 = mod_consts.const_slice_none_none_none;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__ == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__ = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__8___imul__);

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


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__9___pow__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__ = MAKE_FUNCTION_FRAME(tstate, code_objects_48cef7affe1a6af29eca7cc16e0116db, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__ = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$matrixlib$defmatrix$matrix_power(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_matrix_power);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_2 = par_other;
frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__->m_frame.f_lineno = 239;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__ == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__ = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__9___pow__);

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


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__10___ipow__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6f43188662b80ae8d281070bd10502bf, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__ = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_pow_expr_left_1;
PyObject *tmp_pow_expr_right_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_self);
tmp_pow_expr_left_1 = par_self;
CHECK_OBJECT(par_other);
tmp_pow_expr_right_1 = par_other;
tmp_ass_subvalue_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_subscribed_1 = par_self;
tmp_ass_subscript_1 = mod_consts.const_slice_none_none_none;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__ == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__ = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__10___ipow__);

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


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__11___rpow__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = Py_NotImplemented;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__12__align(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__12__align;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__12__align = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__12__align)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__12__align);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__12__align == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__12__align = MAKE_FUNCTION_FRAME(tstate, code_objects_4071f86d2fa70a162a692a2c10a13575, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__12__align->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__12__align = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__12__align;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__12__align);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__12__align) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_axis);
tmp_cmp_expr_left_1 = par_axis;
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
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_subscript_value_1 = mod_consts.const_tuple_int_0_int_0_tuple;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_axis);
tmp_cmp_expr_left_2 = par_axis;
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
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
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_axis);
tmp_cmp_expr_left_3 = par_axis;
tmp_cmp_expr_right_3 = const_int_pos_1;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oo";
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
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_numpy$matrixlib$defmatrix$$$function__12__align->m_frame.f_lineno = 257;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_transpose);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_02d49603c645ebadab75b4dbf099fadb;
frame_frame_numpy$matrixlib$defmatrix$$$function__12__align->m_frame.f_lineno = 259;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 259;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_end_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__12__align, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__12__align->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__12__align, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__12__align,
    type_description_1,
    par_self,
    par_axis
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__12__align == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__12__align) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__12__align);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__12__align = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__12__align);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__13__collapse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse = MAKE_FUNCTION_FRAME(tstate, code_objects_9ae8838b0521fda2562d745e0a701083, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_axis);
tmp_cmp_expr_left_1 = par_axis;
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
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_subscript_value_1 = mod_consts.const_tuple_int_0_int_0_tuple;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse,
    type_description_1,
    par_self,
    par_axis
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__13__collapse);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__14_tolist(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist = MAKE_FUNCTION_FRAME(tstate, code_objects_92a5768a9ceacc428f9c4a1f1a2c3805, module_numpy$matrixlib$defmatrix, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist->m_frame.f_lineno = 292;
tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain___array__);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist->m_frame.f_lineno = 292;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_tolist);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__14_tolist);

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


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__15_sum(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum = MAKE_FUNCTION_FRAME(tstate, code_objects_e79e08e055bd5ac7368ad638fc0823c4, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_sum);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_axis);
tmp_tuple_element_1 = par_axis;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_dtype);
tmp_tuple_element_1 = par_dtype;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_59e37d231bc1f549a9bff6ecc16f6241);
frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum->m_frame.f_lineno = 327;
tmp_called_instance_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_1 = par_axis;
frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum->m_frame.f_lineno = 327;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__collapse, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum,
    type_description_1,
    par_self,
    par_axis,
    par_dtype,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__15_sum);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__16_squeeze(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze = MAKE_FUNCTION_FRAME(tstate, code_objects_f4d278bbda0862c6f89dab31ba8a2445, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 379;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_squeeze);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_0_1 = par_self;
CHECK_OBJECT(par_axis);
tmp_kw_call_dict_value_0_1 = par_axis;
frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze->m_frame.f_lineno = 379;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_axis_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze,
    type_description_1,
    par_self,
    par_axis
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__16_squeeze);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__17_flatten(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_order = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten = MAKE_FUNCTION_FRAME(tstate, code_objects_7f613864c2cdf09b020f4515196ded41, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 417;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_flatten);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_0_1 = par_self;
CHECK_OBJECT(par_order);
tmp_kw_call_dict_value_0_1 = par_order;
frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten->m_frame.f_lineno = 417;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_order_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten,
    type_description_1,
    par_self,
    par_order
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__17_flatten);

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
CHECK_OBJECT(par_order);
Py_DECREF(par_order);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_order);
Py_DECREF(par_order);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__18_mean(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean = MAKE_FUNCTION_FRAME(tstate, code_objects_c66a123001a0b609b063b205801d7ddb, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 451;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mean);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_axis);
tmp_tuple_element_1 = par_axis;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_dtype);
tmp_tuple_element_1 = par_dtype;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_59e37d231bc1f549a9bff6ecc16f6241);
frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean->m_frame.f_lineno = 451;
tmp_called_instance_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_1 = par_axis;
frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean->m_frame.f_lineno = 451;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__collapse, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean,
    type_description_1,
    par_self,
    par_axis,
    par_dtype,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__18_mean);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__19_std(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_ddof = python_pars[4];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__19_std;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__19_std = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__19_std)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__19_std);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__19_std == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__19_std = MAKE_FUNCTION_FRAME(tstate, code_objects_656306132b367d632e4516a23c21e659, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__19_std->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__19_std = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__19_std;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__19_std);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__19_std) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 485;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_std);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 5);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_axis);
tmp_tuple_element_1 = par_axis;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_dtype);
tmp_tuple_element_1 = par_dtype;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(par_ddof);
tmp_tuple_element_1 = par_ddof;
PyTuple_SET_ITEM0(tmp_args_value_1, 4, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_59e37d231bc1f549a9bff6ecc16f6241);
frame_frame_numpy$matrixlib$defmatrix$$$function__19_std->m_frame.f_lineno = 485;
tmp_called_instance_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_1 = par_axis;
frame_frame_numpy$matrixlib$defmatrix$$$function__19_std->m_frame.f_lineno = 485;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__collapse, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__19_std, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__19_std->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__19_std, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__19_std,
    type_description_1,
    par_self,
    par_axis,
    par_dtype,
    par_out,
    par_ddof
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__19_std == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__19_std) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__19_std);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__19_std = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__19_std);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_ddof);
Py_DECREF(par_ddof);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_ddof);
Py_DECREF(par_ddof);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__20_var(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
PyObject *par_ddof = python_pars[4];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__20_var;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__20_var = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__20_var)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__20_var);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__20_var == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__20_var = MAKE_FUNCTION_FRAME(tstate, code_objects_b26cff032fd11f43dd97c086bcf50eff, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__20_var->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__20_var = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__20_var;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__20_var);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__20_var) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 520;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_var);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 5);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_axis);
tmp_tuple_element_1 = par_axis;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_dtype);
tmp_tuple_element_1 = par_dtype;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(par_ddof);
tmp_tuple_element_1 = par_ddof;
PyTuple_SET_ITEM0(tmp_args_value_1, 4, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_59e37d231bc1f549a9bff6ecc16f6241);
frame_frame_numpy$matrixlib$defmatrix$$$function__20_var->m_frame.f_lineno = 520;
tmp_called_instance_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_1 = par_axis;
frame_frame_numpy$matrixlib$defmatrix$$$function__20_var->m_frame.f_lineno = 520;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__collapse, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__20_var, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__20_var->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__20_var, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__20_var,
    type_description_1,
    par_self,
    par_axis,
    par_dtype,
    par_out,
    par_ddof
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__20_var == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__20_var) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__20_var);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__20_var = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__20_var);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_ddof);
Py_DECREF(par_ddof);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
CHECK_OBJECT(par_ddof);
Py_DECREF(par_ddof);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__21_prod(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_out = python_pars[3];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod = MAKE_FUNCTION_FRAME(tstate, code_objects_bfdf5ba3173094fabe08ed0de712ffee, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 554;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_prod);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_axis);
tmp_tuple_element_1 = par_axis;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_dtype);
tmp_tuple_element_1 = par_dtype;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_args_value_1, 3, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_59e37d231bc1f549a9bff6ecc16f6241);
frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod->m_frame.f_lineno = 554;
tmp_called_instance_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_1 = par_axis;
frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod->m_frame.f_lineno = 554;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__collapse, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod,
    type_description_1,
    par_self,
    par_axis,
    par_dtype,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__21_prod);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__22_any(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__22_any;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__22_any = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__22_any)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__22_any);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__22_any == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__22_any = MAKE_FUNCTION_FRAME(tstate, code_objects_86d53dd5aa79e15ec8579ead251a63b4, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__22_any->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__22_any = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__22_any;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__22_any);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__22_any) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 577;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 577;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_any);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 577;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_axis);
tmp_tuple_element_1 = par_axis;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_59e37d231bc1f549a9bff6ecc16f6241);
frame_frame_numpy$matrixlib$defmatrix$$$function__22_any->m_frame.f_lineno = 577;
tmp_called_instance_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 577;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_1 = par_axis;
frame_frame_numpy$matrixlib$defmatrix$$$function__22_any->m_frame.f_lineno = 577;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__collapse, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 577;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__22_any, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__22_any->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__22_any, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__22_any,
    type_description_1,
    par_self,
    par_axis,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__22_any == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__22_any) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__22_any);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__22_any = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__22_any);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__23_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__23_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__23_all = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__23_all)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__23_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__23_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__23_all = MAKE_FUNCTION_FRAME(tstate, code_objects_19c588d6b2721fdb3cc8c8456d8ca542, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__23_all->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__23_all = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__23_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__23_all);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__23_all) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 617;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_all);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_axis);
tmp_tuple_element_1 = par_axis;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_59e37d231bc1f549a9bff6ecc16f6241);
frame_frame_numpy$matrixlib$defmatrix$$$function__23_all->m_frame.f_lineno = 617;
tmp_called_instance_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_1 = par_axis;
frame_frame_numpy$matrixlib$defmatrix$$$function__23_all->m_frame.f_lineno = 617;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__collapse, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__23_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__23_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__23_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__23_all,
    type_description_1,
    par_self,
    par_axis,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__23_all == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__23_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__23_all);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__23_all = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__23_all);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__24_max(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__24_max;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__24_max = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__24_max)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__24_max);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__24_max == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__24_max = MAKE_FUNCTION_FRAME(tstate, code_objects_357cb0d45dcc2b70543094664cda9c9e, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__24_max->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__24_max = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__24_max;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__24_max);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__24_max) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 652;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_max);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_axis);
tmp_tuple_element_1 = par_axis;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_59e37d231bc1f549a9bff6ecc16f6241);
frame_frame_numpy$matrixlib$defmatrix$$$function__24_max->m_frame.f_lineno = 652;
tmp_called_instance_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_1 = par_axis;
frame_frame_numpy$matrixlib$defmatrix$$$function__24_max->m_frame.f_lineno = 652;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__collapse, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__24_max, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__24_max->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__24_max, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__24_max,
    type_description_1,
    par_self,
    par_axis,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__24_max == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__24_max) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__24_max);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__24_max = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__24_max);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__25_argmax(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax = MAKE_FUNCTION_FRAME(tstate, code_objects_d858e4b0c092bb0d784c49a4e419a040, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 691;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 691;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_axis);
tmp_args_element_value_2 = par_axis;
CHECK_OBJECT(par_out);
tmp_args_element_value_3 = par_out;
frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax->m_frame.f_lineno = 691;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_argmax,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 691;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_4 = par_axis;
frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax->m_frame.f_lineno = 691;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__align, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 691;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax,
    type_description_1,
    par_self,
    par_axis,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__25_argmax);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__26_min(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__26_min;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__26_min = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__26_min)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__26_min);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__26_min == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__26_min = MAKE_FUNCTION_FRAME(tstate, code_objects_81972b96beebcd03e7459412192c9034, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__26_min->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__26_min = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__26_min;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__26_min);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__26_min) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 726;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_min);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_axis);
tmp_tuple_element_1 = par_axis;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_out);
tmp_tuple_element_1 = par_out;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_59e37d231bc1f549a9bff6ecc16f6241);
frame_frame_numpy$matrixlib$defmatrix$$$function__26_min->m_frame.f_lineno = 726;
tmp_called_instance_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_1 = par_axis;
frame_frame_numpy$matrixlib$defmatrix$$$function__26_min->m_frame.f_lineno = 726;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__collapse, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__26_min, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__26_min->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__26_min, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__26_min,
    type_description_1,
    par_self,
    par_axis,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__26_min == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__26_min) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__26_min);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__26_min = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__26_min);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__27_argmin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin = MAKE_FUNCTION_FRAME(tstate, code_objects_e75063601413b071d14f74bcdb2a4b4e, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 765;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 765;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_axis);
tmp_args_element_value_2 = par_axis;
CHECK_OBJECT(par_out);
tmp_args_element_value_3 = par_out;
frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin->m_frame.f_lineno = 765;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_argmin,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 765;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_4 = par_axis;
frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin->m_frame.f_lineno = 765;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__align, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 765;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin,
    type_description_1,
    par_self,
    par_axis,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__27_argmin);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__28_ptp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_out = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp = MAKE_FUNCTION_FRAME(tstate, code_objects_3bf9d1371cecd4072bdcecc29a25b155, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_instance_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 798;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_axis);
tmp_args_element_value_2 = par_axis;
CHECK_OBJECT(par_out);
tmp_args_element_value_3 = par_out;
frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp->m_frame.f_lineno = 798;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_ptp,
        call_args
    );
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 798;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_axis);
tmp_args_element_value_4 = par_axis;
frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp->m_frame.f_lineno = 798;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__align, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 798;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp,
    type_description_1,
    par_self,
    par_axis,
    par_out
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__28_ptp);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_out);
Py_DECREF(par_out);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__29_I(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_M = NULL;
PyObject *var_N = NULL;
PyObject *var_func = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__29_I;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__29_I = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__29_I)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__29_I);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__29_I == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__29_I = MAKE_FUNCTION_FRAME(tstate, code_objects_2db0ff414481092d8d40d4cbf7e1c017, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__29_I->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__29_I = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__29_I;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__29_I);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__29_I) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_shape);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 838;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 838;
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



exception_lineno = 838;
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



exception_lineno = 838;
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



exception_lineno = 838;
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
assert(var_M == NULL);
Py_INCREF(tmp_assign_source_4);
var_M = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_N == NULL);
Py_INCREF(tmp_assign_source_5);
var_N = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_M);
tmp_cmp_expr_left_1 = var_M;
CHECK_OBJECT(var_N);
tmp_cmp_expr_right_1 = var_N;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 839;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$matrixlib$defmatrix;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_inv_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$matrixlib$defmatrix$$$function__29_I->m_frame.f_lineno = 840;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 840;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$matrixlib$defmatrix,
        mod_consts.const_str_plain_inv,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_inv);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 840;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_func == NULL);
var_func = tmp_assign_source_6;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$matrixlib$defmatrix;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_pinv_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$matrixlib$defmatrix$$$function__29_I->m_frame.f_lineno = 842;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 842;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$matrixlib$defmatrix,
        mod_consts.const_str_plain_pinv,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_pinv);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 842;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_func == NULL);
var_func = tmp_assign_source_7;
}
branch_end_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_numpy$matrixlib$defmatrix$asmatrix(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asmatrix);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 843;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_func);
tmp_called_value_2 = var_func;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
frame_frame_numpy$matrixlib$defmatrix$$$function__29_I->m_frame.f_lineno = 843;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 843;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__29_I->m_frame.f_lineno = 843;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 843;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__29_I, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__29_I->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__29_I, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__29_I,
    type_description_1,
    par_self,
    var_M,
    var_N,
    var_func
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__29_I == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__29_I) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__29_I);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__29_I = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__29_I);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_M);
CHECK_OBJECT(var_M);
Py_DECREF(var_M);
var_M = NULL;
CHECK_OBJECT(var_N);
CHECK_OBJECT(var_N);
Py_DECREF(var_N);
var_N = NULL;
CHECK_OBJECT(var_func);
CHECK_OBJECT(var_func);
Py_DECREF(var_func);
var_func = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_M);
var_M = NULL;
Py_XDECREF(var_N);
var_N = NULL;
Py_XDECREF(var_func);
var_func = NULL;
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


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__30_A(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__30_A;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__30_A = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__30_A)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__30_A);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__30_A == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__30_A = MAKE_FUNCTION_FRAME(tstate, code_objects_45a112af5ae1c1b6e8a7b39b0ec5ff09, module_numpy$matrixlib$defmatrix, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__30_A->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__30_A = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__30_A;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__30_A);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__30_A) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_numpy$matrixlib$defmatrix$$$function__30_A->m_frame.f_lineno = 873;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain___array__);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 873;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__30_A, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__30_A->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__30_A, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__30_A,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__30_A == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__30_A) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__30_A);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__30_A = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__30_A);

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


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__31_A1(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1 = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1 = MAKE_FUNCTION_FRAME(tstate, code_objects_3af4a1886f82d853877aec02a45582a0, module_numpy$matrixlib$defmatrix, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1 = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1->m_frame.f_lineno = 902;
tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain___array__);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 902;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1->m_frame.f_lineno = 902;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_ravel);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 902;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1 == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1 = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__31_A1);

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


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__32_ravel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_order = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel = MAKE_FUNCTION_FRAME(tstate, code_objects_bec4d649b75e71f223d46e65207ac407, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 940;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 940;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ravel);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 940;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_0_1 = par_self;
CHECK_OBJECT(par_order);
tmp_kw_call_dict_value_0_1 = par_order;
frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel->m_frame.f_lineno = 940;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_order_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 940;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel,
    type_description_1,
    par_self,
    par_order
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__32_ravel);

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
CHECK_OBJECT(par_order);
Py_DECREF(par_order);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_order);
Py_DECREF(par_order);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__33_T(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__33_T;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__33_T = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__33_T)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__33_T);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__33_T == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__33_T = MAKE_FUNCTION_FRAME(tstate, code_objects_b9fdc83c7f310e9afeb797c1a5c57c56, module_numpy$matrixlib$defmatrix, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__33_T->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__33_T = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__33_T;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__33_T);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__33_T) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_numpy$matrixlib$defmatrix$$$function__33_T->m_frame.f_lineno = 973;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_transpose);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 973;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__33_T, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__33_T->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__33_T, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__33_T,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__33_T == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__33_T) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__33_T);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__33_T = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__33_T);

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


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__34_H(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__34_H;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__34_H = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__34_H)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__34_H);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__34_H == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__34_H = MAKE_FUNCTION_FRAME(tstate, code_objects_7d2af1009f4d69667b551a0373df095f, module_numpy$matrixlib$defmatrix, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__34_H->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__34_H = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__34_H;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__34_H);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__34_H) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1005;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_issubclass_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_issubclass_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1005;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_issubclass_cls_1);

exception_lineno = 1005;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_issubclass_classes_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_complexfloating);
if (tmp_issubclass_classes_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_issubclass_cls_1);

exception_lineno = 1005;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
CHECK_OBJECT(tmp_issubclass_cls_1);
Py_DECREF(tmp_issubclass_cls_1);
CHECK_OBJECT(tmp_issubclass_classes_1);
Py_DECREF(tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1005;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_numpy$matrixlib$defmatrix$$$function__34_H->m_frame.f_lineno = 1006;
tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_transpose);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1006;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__34_H->m_frame.f_lineno = 1006;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_conjugate);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1006;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_3;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
frame_frame_numpy$matrixlib$defmatrix$$$function__34_H->m_frame.f_lineno = 1008;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_transpose);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1008;
type_description_1 = "o";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__34_H, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__34_H->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__34_H, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__34_H,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__34_H == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__34_H) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__34_H);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__34_H = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__34_H);

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


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__35__from_string(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_str = python_pars[0];
PyObject *par_gdict = python_pars[1];
PyObject *par_ldict = python_pars[2];
PyObject *var_rows = NULL;
PyObject *var_rowtup = NULL;
PyObject *var_row = NULL;
PyObject *var_trow = NULL;
PyObject *var_newrow = NULL;
PyObject *var_x = NULL;
PyObject *var_coltup = NULL;
PyObject *var_col = NULL;
PyObject *var_thismat = NULL;
PyObject *var_e = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string = MAKE_FUNCTION_FRAME(tstate, code_objects_6fc77021de346ad0b7bd39219dca7fea, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_str);
tmp_expression_value_1 = par_str;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1018;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string->m_frame.f_lineno = 1018;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_59_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1018;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_rows == NULL);
var_rows = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_rowtup == NULL);
var_rowtup = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_rows);
tmp_iter_arg_1 = var_rows;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1020;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 1020;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_5 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_row;
    var_row = tmp_assign_source_5;
    Py_INCREF(var_row);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_row);
tmp_expression_value_2 = var_row;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_split);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1021;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string->m_frame.f_lineno = 1021;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_chr_44_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1021;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_trow;
    var_trow = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_newrow;
    var_newrow = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_trow);
tmp_iter_arg_2 = var_trow;
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1023;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 1023;
        goto try_except_handler_3;
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
    PyObject *old = var_x;
    var_x = tmp_assign_source_10;
    Py_INCREF(var_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
if (var_newrow == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newrow);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1024;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}

tmp_list_arg_value_1 = var_newrow;
CHECK_OBJECT(var_x);
tmp_expression_value_3 = var_x;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_split);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1024;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string->m_frame.f_lineno = 1024;
tmp_value_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1024;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1024;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1023;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_assign_source_11;
if (var_newrow == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newrow);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1025;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_assign_source_11 = var_newrow;
{
    PyObject *old = var_trow;
    assert(old != NULL);
    var_trow = tmp_assign_source_11;
    Py_INCREF(var_trow);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_coltup;
    var_coltup = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_trow);
tmp_iter_arg_3 = var_trow;
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1027;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_14 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 1027;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_15 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_col;
    var_col = tmp_assign_source_15;
    Py_INCREF(var_col);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_col);
tmp_expression_value_4 = var_col;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_strip);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1028;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string->m_frame.f_lineno = 1028;
tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1028;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_col;
    assert(old != NULL);
    var_col = tmp_assign_source_16;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_ldict);
tmp_expression_value_5 = par_ldict;
CHECK_OBJECT(var_col);
tmp_subscript_value_1 = var_col;
tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1030;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_thismat;
    var_thismat = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string, exception_keeper_lineno_2);
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
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_gdict);
tmp_expression_value_6 = par_gdict;
CHECK_OBJECT(var_col);
tmp_subscript_value_2 = var_col;
tmp_assign_source_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1033;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_thismat;
    var_thismat = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
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
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_19); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_19);
var_e = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_raise_cause_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_fc3a20cddd431307ad412b0987890c97;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_col);
tmp_operand_value_1 = var_col;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1035;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1035;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_d7268deb65fe801e7a9f063f492a09bd;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string->m_frame.f_lineno = 1035;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NameError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 1035;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooooooo";
goto try_except_handler_9;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_8;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 1032;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string->m_frame)) {
        frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooo";
goto try_except_handler_8;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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

goto try_except_handler_6;
// End of try:
// End of try:
try_end_3:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 1029;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string->m_frame)) {
        frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooo";
goto try_except_handler_6;
branch_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_4;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_1;
if (var_coltup == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_coltup);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1037;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_list_arg_value_2 = var_coltup;
CHECK_OBJECT(var_thismat);
tmp_item_value_1 = var_thismat;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1027;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_3;
loop_end_3:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
if (var_rowtup == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rowtup);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1038;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_3 = var_rowtup;
tmp_called_value_5 = module_var_accessor_numpy$matrixlib$defmatrix$concatenate(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_concatenate);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1038;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
if (var_coltup == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_coltup);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1038;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_tuple_element_2 = var_coltup;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_22b54c5c9112a5c8c51dc4a23fd6481b);
frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string->m_frame.f_lineno = 1038;
tmp_item_value_2 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1038;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_2);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1020;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_6;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
tmp_called_value_6 = module_var_accessor_numpy$matrixlib$defmatrix$concatenate(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_concatenate);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1039;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_rowtup == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rowtup);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1039;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_3 = var_rowtup;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_54f4aa72cf3f950a22814f798a2888e8);
frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string->m_frame.f_lineno = 1039;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1039;
type_description_1 = "ooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string,
    type_description_1,
    par_str,
    par_gdict,
    par_ldict,
    var_rows,
    var_rowtup,
    var_row,
    var_trow,
    var_newrow,
    var_x,
    var_coltup,
    var_col,
    var_thismat,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__35__from_string);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_rows);
CHECK_OBJECT(var_rows);
Py_DECREF(var_rows);
var_rows = NULL;
Py_XDECREF(var_rowtup);
var_rowtup = NULL;
Py_XDECREF(var_row);
var_row = NULL;
Py_XDECREF(var_trow);
var_trow = NULL;
Py_XDECREF(var_newrow);
var_newrow = NULL;
Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_coltup);
var_coltup = NULL;
Py_XDECREF(var_col);
var_col = NULL;
Py_XDECREF(var_thismat);
var_thismat = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_rows);
var_rows = NULL;
Py_XDECREF(var_rowtup);
var_rowtup = NULL;
Py_XDECREF(var_row);
var_row = NULL;
Py_XDECREF(var_trow);
var_trow = NULL;
Py_XDECREF(var_newrow);
var_newrow = NULL;
Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_coltup);
var_coltup = NULL;
Py_XDECREF(var_col);
var_col = NULL;
Py_XDECREF(var_thismat);
var_thismat = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_str);
Py_DECREF(par_str);
CHECK_OBJECT(par_gdict);
Py_DECREF(par_gdict);
CHECK_OBJECT(par_ldict);
Py_DECREF(par_ldict);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_str);
Py_DECREF(par_str);
CHECK_OBJECT(par_gdict);
Py_DECREF(par_gdict);
CHECK_OBJECT(par_ldict);
Py_DECREF(par_ldict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$matrixlib$defmatrix$$$function__36_bmat(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_obj = python_pars[0];
PyObject *par_ldict = python_pars[1];
PyObject *par_gdict = python_pars[2];
PyObject *var_frame = NULL;
PyObject *var_glob_dict = NULL;
PyObject *var_loc_dict = NULL;
PyObject *var_arr_rows = NULL;
PyObject *var_row = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat)) {
    Py_XDECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat = MAKE_FUNCTION_FRAME(tstate, code_objects_3eb9615bb0f3f43e70e49801fb22b143, module_numpy$matrixlib$defmatrix, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat->m_type_description == NULL);
frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat = cache_frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_obj);
tmp_isinstance_inst_1 = par_obj;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1097;
type_description_1 = "oooooooo";
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
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_gdict);
tmp_cmp_expr_left_1 = par_gdict;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_SYS();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat->m_frame.f_lineno = 1100;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__getframe);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1100;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_f_back);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1100;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_frame == NULL);
var_frame = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_frame);
tmp_expression_value_2 = var_frame;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_f_globals);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1101;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_glob_dict == NULL);
var_glob_dict = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_frame);
tmp_expression_value_3 = var_frame;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_f_locals);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1102;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_loc_dict == NULL);
var_loc_dict = tmp_assign_source_3;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(par_gdict);
tmp_assign_source_4 = par_gdict;
assert(var_glob_dict == NULL);
Py_INCREF(tmp_assign_source_4);
var_glob_dict = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(par_ldict);
tmp_assign_source_5 = par_ldict;
assert(var_loc_dict == NULL);
Py_INCREF(tmp_assign_source_5);
var_loc_dict = tmp_assign_source_5;
}
branch_end_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_numpy$matrixlib$defmatrix$matrix(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_matrix);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1107;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$_from_string(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__from_string);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1107;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_obj);
tmp_args_element_value_2 = par_obj;
CHECK_OBJECT(var_glob_dict);
tmp_args_element_value_3 = var_glob_dict;
CHECK_OBJECT(var_loc_dict);
tmp_args_element_value_4 = var_loc_dict;
frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat->m_frame.f_lineno = 1107;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1107;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat->m_frame.f_lineno = 1107;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1107;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_obj);
tmp_isinstance_inst_2 = par_obj;
tmp_isinstance_cls_2 = mod_consts.const_tuple_type_tuple_type_list_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1109;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_arr_rows == NULL);
var_arr_rows = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_obj);
tmp_iter_arg_1 = par_obj;
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1112;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_7;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 1112;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_9 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_row;
    var_row = tmp_assign_source_9;
    Py_INCREF(var_row);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_row);
tmp_isinstance_inst_3 = var_row;
tmp_expression_value_4 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1113;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1113;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_cls_3);
Py_DECREF(tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1113;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_3 = module_var_accessor_numpy$matrixlib$defmatrix$matrix(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_matrix);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1114;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_called_value_4 = module_var_accessor_numpy$matrixlib$defmatrix$concatenate(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_concatenate);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1114;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_obj);
tmp_tuple_element_1 = par_obj;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_22b54c5c9112a5c8c51dc4a23fd6481b);
frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat->m_frame.f_lineno = 1114;
tmp_args_element_value_5 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1114;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat->m_frame.f_lineno = 1114;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1114;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
if (var_arr_rows == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arr_rows);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1116;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_arr_rows;
tmp_called_value_5 = module_var_accessor_numpy$matrixlib$defmatrix$concatenate(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_concatenate);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1116;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_row);
tmp_tuple_element_2 = var_row;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_22b54c5c9112a5c8c51dc4a23fd6481b);
frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat->m_frame.f_lineno = 1116;
tmp_item_value_1 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1116;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_end_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1112;
type_description_1 = "oooooooo";
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
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_3;
tmp_called_value_6 = module_var_accessor_numpy$matrixlib$defmatrix$matrix(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_matrix);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_numpy$matrixlib$defmatrix$concatenate(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_concatenate);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (var_arr_rows == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arr_rows);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 1117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_3 = var_arr_rows;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts.const_dict_54f4aa72cf3f950a22814f798a2888e8);
frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat->m_frame.f_lineno = 1117;
tmp_args_element_value_6 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
CHECK_OBJECT(tmp_kwargs_value_3);
Py_DECREF(tmp_kwargs_value_3);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat->m_frame.f_lineno = 1117;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_obj);
tmp_isinstance_inst_4 = par_obj;
tmp_expression_value_5 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1118;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1118;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
CHECK_OBJECT(tmp_isinstance_cls_4);
Py_DECREF(tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1118;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
tmp_called_value_8 = module_var_accessor_numpy$matrixlib$defmatrix$matrix(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_matrix);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1119;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_obj);
tmp_args_element_value_7 = par_obj;
frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat->m_frame.f_lineno = 1119;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1119;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_5:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat,
    type_description_1,
    par_obj,
    par_ldict,
    par_gdict,
    var_frame,
    var_glob_dict,
    var_loc_dict,
    var_arr_rows,
    var_row
);


// Release cached frame if used for exception.
if (frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat == cache_frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat);
    cache_frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat = NULL;
}

assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$function__36_bmat);

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
Py_XDECREF(var_frame);
var_frame = NULL;
Py_XDECREF(var_glob_dict);
var_glob_dict = NULL;
Py_XDECREF(var_loc_dict);
var_loc_dict = NULL;
Py_XDECREF(var_arr_rows);
var_arr_rows = NULL;
Py_XDECREF(var_row);
var_row = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_frame);
var_frame = NULL;
Py_XDECREF(var_glob_dict);
var_glob_dict = NULL;
Py_XDECREF(var_loc_dict);
var_loc_dict = NULL;
Py_XDECREF(var_arr_rows);
var_arr_rows = NULL;
Py_XDECREF(var_row);
var_row = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_ldict);
Py_DECREF(par_ldict);
CHECK_OBJECT(par_gdict);
Py_DECREF(par_gdict);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_ldict);
Py_DECREF(par_ldict);
CHECK_OBJECT(par_gdict);
Py_DECREF(par_gdict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__10___ipow__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__10___ipow__,
        mod_consts.const_str_plain___ipow__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a89078cc3f022df00f3d6d91ab7a6d6f,
#endif
        code_objects_6f43188662b80ae8d281070bd10502bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__11___rpow__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__11___rpow__,
        mod_consts.const_str_plain___rpow__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1267eb91ea5fe0833144def3b9fe2682,
#endif
        code_objects_344f4b82964d5d778ba6e5bf62ed424e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__12__align(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__12__align,
        mod_consts.const_str_plain__align,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8a83dcef2e6bd9d496f5d0a5eb2cc910,
#endif
        code_objects_4071f86d2fa70a162a692a2c10a13575,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_9ae50301b68863ffaddbf8f7a01e5a2a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__13__collapse(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__13__collapse,
        mod_consts.const_str_plain__collapse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_63171a923bc41d228d84f75cac4966c9,
#endif
        code_objects_9ae8838b0521fda2562d745e0a701083,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_aa3dede15f20d47209893c4452455444,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__14_tolist(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__14_tolist,
        mod_consts.const_str_plain_tolist,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9d0a0c8aea757ec593a24e69bf81fe39,
#endif
        code_objects_92a5768a9ceacc428f9c4a1f1a2c3805,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_600874b955a9548c181976bd76ebad6f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__15_sum(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__15_sum,
        const_str_plain_sum,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c6adc001cc8e72f18d0b95b95de5f5d7,
#endif
        code_objects_e79e08e055bd5ac7368ad638fc0823c4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_f61582bca4150690504a28ff984abac4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__16_squeeze(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__16_squeeze,
        mod_consts.const_str_plain_squeeze,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_af33cf1f188dd02b519023303c28a3df,
#endif
        code_objects_f4d278bbda0862c6f89dab31ba8a2445,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_e7e2fcbbb2788d6d30a65f9b666c6e61,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__17_flatten(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__17_flatten,
        mod_consts.const_str_plain_flatten,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c81ed43ac05d2eb21e65fd9b585476c,
#endif
        code_objects_7f613864c2cdf09b020f4515196ded41,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_37d0e8b76d820acf88f5fafce125d544,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__18_mean(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__18_mean,
        mod_consts.const_str_plain_mean,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_65808ce70b38edf8b5f42ff5e1a1b89b,
#endif
        code_objects_c66a123001a0b609b063b205801d7ddb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_88161457d419ee0fff410b0fb94f98e7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__19_std(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__19_std,
        mod_consts.const_str_plain_std,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9c889cdf0a0db6f8e023b7083ff0a7b7,
#endif
        code_objects_656306132b367d632e4516a23c21e659,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_181517c4f76101a738f3ebf4e4a0771b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__1__convert_from_string(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__1__convert_from_string,
        mod_consts.const_str_plain__convert_from_string,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b4847189f73aea246134a1294d7580e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__20_var(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__20_var,
        mod_consts.const_str_plain_var,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fffaeb4698eab82f762072b6cfe9c5ab,
#endif
        code_objects_b26cff032fd11f43dd97c086bcf50eff,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_8dbe682221d616e32a5e8fceac966634,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__21_prod(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__21_prod,
        mod_consts.const_str_plain_prod,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6089ef6633e4ad7cbe458e6cf5cc4b01,
#endif
        code_objects_bfdf5ba3173094fabe08ed0de712ffee,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_ee01866068b04c58cc9c7137d2023280,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__22_any(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__22_any,
        mod_consts.const_str_plain_any,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e4012dec941dfd9b1f371a24dd877ca4,
#endif
        code_objects_86d53dd5aa79e15ec8579ead251a63b4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_ad8be0d4c200fa3522551f309d54a21f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__23_all(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__23_all,
        mod_consts.const_str_plain_all,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_86647aea99ab58ef2932c7b7801b7a38,
#endif
        code_objects_19c588d6b2721fdb3cc8c8456d8ca542,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_b3a5ce4f65b7c7e8a14a2ed806d31684,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__24_max(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__24_max,
        mod_consts.const_str_plain_max,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_332ae9ffc5f026a025249301b28b6f6f,
#endif
        code_objects_357cb0d45dcc2b70543094664cda9c9e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_8b5b95a953d41be178da813cffbe644a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__25_argmax(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__25_argmax,
        mod_consts.const_str_plain_argmax,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1c135c5c8789cb37205a6015177c7164,
#endif
        code_objects_d858e4b0c092bb0d784c49a4e419a040,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_fa38eece66ea5507c47bba1c629673ce,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__26_min(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__26_min,
        mod_consts.const_str_plain_min,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_647f13fd901de876155daa64efa61f9d,
#endif
        code_objects_81972b96beebcd03e7459412192c9034,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_e765343c20ad7a3118d01ebea0d9e40e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__27_argmin(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__27_argmin,
        mod_consts.const_str_plain_argmin,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_91092e62d85c021736a02a669d23c0f1,
#endif
        code_objects_e75063601413b071d14f74bcdb2a4b4e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_c59ee9746985ab5000d2a1e4d32e846f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__28_ptp(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__28_ptp,
        mod_consts.const_str_plain_ptp,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5c5f46e6eef0fb14d19d9ba43b05c9a6,
#endif
        code_objects_3bf9d1371cecd4072bdcecc29a25b155,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_1bf83ae43bb07dc6597f05a9adb85d9b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__29_I(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__29_I,
        mod_consts.const_str_plain_I,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3ea6027b0b514a2987cd71ce18a291b4,
#endif
        code_objects_2db0ff414481092d8d40d4cbf7e1c017,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_6d27ab044f94e355fb03a45ddbef84f5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__2_asmatrix(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__2_asmatrix,
        mod_consts.const_str_plain_asmatrix,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5c3736be0ba329ec4068dff7ff829afa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_6dab3f82de45a5f3df15008158c482a9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__30_A(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__30_A,
        mod_consts.const_str_plain_A,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aa07900215d927819b44749d1afa8ef7,
#endif
        code_objects_45a112af5ae1c1b6e8a7b39b0ec5ff09,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_dffec97eccf8d3dba9b703927ffbe2f8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__31_A1(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__31_A1,
        mod_consts.const_str_plain_A1,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6225495cdff28d969d1ecae9cc0cf81d,
#endif
        code_objects_3af4a1886f82d853877aec02a45582a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_9cc0b09ea67cb49b226d4776ab160f82,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__32_ravel(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__32_ravel,
        mod_consts.const_str_plain_ravel,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_34b40de538a9dbded2b9da73c6292521,
#endif
        code_objects_bec4d649b75e71f223d46e65207ac407,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_734d9cbcf17b6087c9ecdcb1b1947d48,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__33_T(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__33_T,
        mod_consts.const_str_plain_T,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7a542796b3476d3c45acba02c67f8c3c,
#endif
        code_objects_b9fdc83c7f310e9afeb797c1a5c57c56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_c67370d6b4c78ea1929eb2f29082c0f1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__34_H(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__34_H,
        mod_consts.const_str_plain_H,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_62607bac5b4a9373d2b2ee47ef1fd742,
#endif
        code_objects_7d2af1009f4d69667b551a0373df095f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_c1e25ad155a44ddcae2c1544916e1d62,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__35__from_string(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__35__from_string,
        mod_consts.const_str_plain__from_string,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6fc77021de346ad0b7bd39219dca7fea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__36_bmat(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__36_bmat,
        mod_consts.const_str_plain_bmat,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3eb9615bb0f3f43e70e49801fb22b143,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        mod_consts.const_str_digest_9c131f31b9d67be17acf040abfbc0150,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__3___new__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__3___new__,
        mod_consts.const_str_plain___new__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1c36b38458ff1db84b085447a05c3d16,
#endif
        code_objects_bada56b65f1ed78d7066f2d8506dd92f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__4___array_finalize__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__4___array_finalize__,
        mod_consts.const_str_plain___array_finalize__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_14b978ce7c037d3173fa4835be41293d,
#endif
        code_objects_81c30f3ee3d404acc0aabfbeef90f3fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__5___getitem__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__5___getitem__,
        mod_consts.const_str_plain___getitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7da80760fc959b79301ad98d717ef35f,
#endif
        code_objects_99d7490fab4db0d40b65615eef7f866e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__6___mul__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__6___mul__,
        mod_consts.const_str_plain___mul__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4f5206ba907c53056db354048ad2d50d,
#endif
        code_objects_4a0919f67dab67e55e92c40c22b9010f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__7___rmul__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__7___rmul__,
        mod_consts.const_str_plain___rmul__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bc6dd796856908bac67295c89f492ef3,
#endif
        code_objects_796544c2429a10282b8d1c528e88d004,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__8___imul__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__8___imul__,
        mod_consts.const_str_plain___imul__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ae4ea51befc6c57f132c0b55fd06ea2b,
#endif
        code_objects_7035197528e1b667eee49a1181f065bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__9___pow__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$matrixlib$defmatrix$$$function__9___pow__,
        mod_consts.const_str_plain___pow__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9a52124d9489c5c315b64f9c2d8cd9d9,
#endif
        code_objects_48cef7affe1a6af29eca7cc16e0116db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$matrixlib$defmatrix,
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

static function_impl_code const function_table_numpy$matrixlib$defmatrix[] = {
impl_numpy$matrixlib$defmatrix$$$function__1__convert_from_string,
impl_numpy$matrixlib$defmatrix$$$function__2_asmatrix,
impl_numpy$matrixlib$defmatrix$$$function__3___new__,
impl_numpy$matrixlib$defmatrix$$$function__4___array_finalize__,
impl_numpy$matrixlib$defmatrix$$$function__5___getitem__,
impl_numpy$matrixlib$defmatrix$$$function__6___mul__,
impl_numpy$matrixlib$defmatrix$$$function__7___rmul__,
impl_numpy$matrixlib$defmatrix$$$function__8___imul__,
impl_numpy$matrixlib$defmatrix$$$function__9___pow__,
impl_numpy$matrixlib$defmatrix$$$function__10___ipow__,
impl_numpy$matrixlib$defmatrix$$$function__11___rpow__,
impl_numpy$matrixlib$defmatrix$$$function__12__align,
impl_numpy$matrixlib$defmatrix$$$function__13__collapse,
impl_numpy$matrixlib$defmatrix$$$function__14_tolist,
impl_numpy$matrixlib$defmatrix$$$function__15_sum,
impl_numpy$matrixlib$defmatrix$$$function__16_squeeze,
impl_numpy$matrixlib$defmatrix$$$function__17_flatten,
impl_numpy$matrixlib$defmatrix$$$function__18_mean,
impl_numpy$matrixlib$defmatrix$$$function__19_std,
impl_numpy$matrixlib$defmatrix$$$function__20_var,
impl_numpy$matrixlib$defmatrix$$$function__21_prod,
impl_numpy$matrixlib$defmatrix$$$function__22_any,
impl_numpy$matrixlib$defmatrix$$$function__23_all,
impl_numpy$matrixlib$defmatrix$$$function__24_max,
impl_numpy$matrixlib$defmatrix$$$function__25_argmax,
impl_numpy$matrixlib$defmatrix$$$function__26_min,
impl_numpy$matrixlib$defmatrix$$$function__27_argmin,
impl_numpy$matrixlib$defmatrix$$$function__28_ptp,
impl_numpy$matrixlib$defmatrix$$$function__29_I,
impl_numpy$matrixlib$defmatrix$$$function__30_A,
impl_numpy$matrixlib$defmatrix$$$function__31_A1,
impl_numpy$matrixlib$defmatrix$$$function__32_ravel,
impl_numpy$matrixlib$defmatrix$$$function__33_T,
impl_numpy$matrixlib$defmatrix$$$function__34_H,
impl_numpy$matrixlib$defmatrix$$$function__35__from_string,
impl_numpy$matrixlib$defmatrix$$$function__36_bmat,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$matrixlib$defmatrix);
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
        module_numpy$matrixlib$defmatrix,
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
        function_table_numpy$matrixlib$defmatrix,
        sizeof(function_table_numpy$matrixlib$defmatrix) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.matrixlib.defmatrix";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$matrixlib$defmatrix(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$matrixlib$defmatrix");

    // Store the module for future use.
    module_numpy$matrixlib$defmatrix = module;

    moduledict_numpy$matrixlib$defmatrix = MODULE_DICT(module_numpy$matrixlib$defmatrix);

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
        PRINT_STRING("numpy$matrixlib$defmatrix: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$matrixlib$defmatrix: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$matrixlib$defmatrix: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.matrixlib.defmatrix" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$matrixlib$defmatrix\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$matrixlib$defmatrix,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$matrixlib$defmatrix,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$matrixlib$defmatrix,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$matrixlib$defmatrix,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$matrixlib$defmatrix,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$matrixlib$defmatrix);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$matrixlib$defmatrix);
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

        UPDATE_STRING_DICT1(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_numpy$matrixlib$defmatrix$$$class__1_matrix_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
UPDATE_STRING_DICT0(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$matrixlib$defmatrix = MAKE_MODULE_FRAME(code_objects_3575a730cdd3cec46150fdf09fcae233, module_numpy$matrixlib$defmatrix);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$matrixlib$defmatrix$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$matrixlib$defmatrix$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST3(tstate, mod_consts.const_str_plain_matrix,mod_consts.const_str_plain_bmat,mod_consts.const_str_plain_asmatrix);
UPDATE_STRING_DICT1(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_ast;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$matrixlib$defmatrix;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_ast, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$matrixlib$defmatrix;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 5;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$matrixlib$defmatrix;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 7;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_import_name_from_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$matrixlib$defmatrix,
        mod_consts.const_str_plain__core,
        const_int_0
    );
} else {
    tmp_import_name_from_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__core);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$matrixlib$defmatrix,
        mod_consts.const_str_plain_numeric,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_numeric);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_N, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_b7a345dfe4be14248864e7854d4e6836;
tmp_globals_arg_value_4 = (PyObject *)moduledict_numpy$matrixlib$defmatrix;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_concatenate_str_plain_isscalar_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 8;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$matrixlib$defmatrix,
        mod_consts.const_str_plain_concatenate,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_concatenate);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_concatenate, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_numpy$matrixlib$defmatrix,
        mod_consts.const_str_plain_isscalar,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_isscalar);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_isscalar, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c;
tmp_globals_arg_value_5 = (PyObject *)moduledict_numpy$matrixlib$defmatrix;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_set_module_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 9;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_numpy$matrixlib$defmatrix,
        mod_consts.const_str_plain_set_module,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_set_module);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
tmp_globals_arg_value_6 = (PyObject *)moduledict_numpy$matrixlib$defmatrix;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_matrix_power_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 13;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_numpy$matrixlib$defmatrix,
        mod_consts.const_str_plain_matrix_power,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_matrix_power);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_matrix_power, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;

tmp_assign_source_14 = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__1__convert_from_string(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_from_string, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_defaults_1;
tmp_called_value_2 = module_var_accessor_numpy$matrixlib$defmatrix$set_module(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_module);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto frame_exception_exit_1;
}
frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 36;
tmp_called_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_numpy_tuple);

if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_args_element_value_1 = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__2_asmatrix(tstate, tmp_defaults_1);

frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 36;
tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_asmatrix, tmp_assign_source_15);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$matrixlib$defmatrix$N(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_N);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;

    goto try_except_handler_2;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndarray);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_2;
}
tmp_assign_source_16 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_16, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_17 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
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


exception_lineno = 74;

    goto try_except_handler_2;
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


exception_lineno = 74;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_19 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_19;
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


exception_lineno = 74;

    goto try_except_handler_2;
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
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_matrix;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 74;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_20;
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


exception_lineno = 74;

    goto try_except_handler_2;
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
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_7, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_2;
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


exception_lineno = 74;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_2;
}
frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 74;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 74;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_21;
}
branch_end_1:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
tmp_called_value_5 = module_var_accessor_numpy$matrixlib$defmatrix$set_module(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_module);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto try_except_handler_2;
}
frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 73;
tmp_called_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_numpy_tuple);

if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_2;
}
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4179858148d85e138b7e27f6f7ce41c6;
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_e40e10c89a4ef3d33193f0182ba8e728;
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_matrix;
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_74;
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_4;
}
frame_frame_numpy$matrixlib$defmatrix$$$class__1_matrix_2 = MAKE_CLASS_FRAME(tstate, code_objects_b3a88fbab749eb8e9bc7cb44a7e1b917, module_numpy$matrixlib$defmatrix, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$matrixlib$defmatrix$$$class__1_matrix_2);
assert(Py_REFCNT(frame_frame_numpy$matrixlib$defmatrix$$$class__1_matrix_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_float_10_0;
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain___array_priority__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_true_tuple;
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__3___new__(tstate, tmp_defaults_2);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain___new__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__4___array_finalize__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain___array_finalize__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__5___getitem__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain___getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__6___mul__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain___mul__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__7___rmul__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain___rmul__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__8___imul__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain___imul__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__9___pow__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain___pow__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__10___ipow__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain___ipow__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__11___rpow__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain___rpow__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__12__align(tstate);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain__align, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__13__collapse(tstate);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain__collapse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__14_tolist(tstate);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_tolist, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_none_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__15_sum(tstate, tmp_defaults_3);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, const_str_plain_sum, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__16_squeeze(tstate, tmp_defaults_4);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_squeeze, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_str_plain_C_tuple;
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__17_flatten(tstate, tmp_defaults_5);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_flatten, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_6;
tmp_defaults_6 = mod_consts.const_tuple_none_none_none_tuple;
Py_INCREF(tmp_defaults_6);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__18_mean(tstate, tmp_defaults_6);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_mean, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_7;
tmp_defaults_7 = mod_consts.const_tuple_none_none_none_int_0_tuple;
Py_INCREF(tmp_defaults_7);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__19_std(tstate, tmp_defaults_7);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_std, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_8;
tmp_defaults_8 = mod_consts.const_tuple_none_none_none_int_0_tuple;
Py_INCREF(tmp_defaults_8);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__20_var(tstate, tmp_defaults_8);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_var, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_9;
tmp_defaults_9 = mod_consts.const_tuple_none_none_none_tuple;
Py_INCREF(tmp_defaults_9);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__21_prod(tstate, tmp_defaults_9);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_prod, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_10;
tmp_defaults_10 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_10);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__22_any(tstate, tmp_defaults_10);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_any, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_11;
tmp_defaults_11 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_11);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__23_all(tstate, tmp_defaults_11);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_all, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_12;
tmp_defaults_12 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_12);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__24_max(tstate, tmp_defaults_12);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_max, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 619;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_13;
tmp_defaults_13 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_13);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__25_argmax(tstate, tmp_defaults_13);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_argmax, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 654;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_14;
tmp_defaults_14 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_14);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__26_min(tstate, tmp_defaults_14);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_min, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 693;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_15;
tmp_defaults_15 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_15);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__27_argmin(tstate, tmp_defaults_15);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_argmin, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 728;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_16;
tmp_defaults_16 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_16);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__28_ptp(tstate, tmp_defaults_16);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_ptp, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 767;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
tmp_called_value_6 = PyObject_GetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_property);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_3 = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__29_I(tstate);

frame_frame_numpy$matrixlib$defmatrix$$$class__1_matrix_2->m_frame.f_lineno = 800;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 800;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_I, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 801;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
tmp_called_value_7 = PyObject_GetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_property);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_4 = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__30_A(tstate);

frame_frame_numpy$matrixlib$defmatrix$$$class__1_matrix_2->m_frame.f_lineno = 845;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 845;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_A, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 846;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
tmp_called_value_8 = PyObject_GetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_property);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_5 = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__31_A1(tstate);

frame_frame_numpy$matrixlib$defmatrix$$$class__1_matrix_2->m_frame.f_lineno = 875;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 875;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_A1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 876;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_17;
tmp_defaults_17 = mod_consts.const_tuple_str_plain_C_tuple;
Py_INCREF(tmp_defaults_17);

tmp_dictset_value = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__32_ravel(tstate, tmp_defaults_17);

tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_ravel, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 904;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_6;
tmp_called_value_9 = PyObject_GetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_6 = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__33_T(tstate);

frame_frame_numpy$matrixlib$defmatrix$$$class__1_matrix_2->m_frame.f_lineno = 942;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 942;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_T, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 943;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_7;
tmp_called_value_10 = PyObject_GetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_property);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_7 = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__34_H(tstate);

frame_frame_numpy$matrixlib$defmatrix$$$class__1_matrix_2->m_frame.f_lineno = 975;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 975;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_H, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 976;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = PyObject_GetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_T);

if (unlikely(tmp_expression_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);

exception_lineno = 1011;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1011;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_fget);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1011;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_getT, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1011;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = PyObject_GetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_A);

if (unlikely(tmp_expression_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_A);

exception_lineno = 1012;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1012;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_fget);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1012;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_getA, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1012;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_expression_value_10;
tmp_expression_value_10 = PyObject_GetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_A1);

if (unlikely(tmp_expression_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_A1);

exception_lineno = 1013;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1013;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_fget);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1013;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_getA1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1013;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_expression_value_11;
tmp_expression_value_11 = PyObject_GetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_H);

if (unlikely(tmp_expression_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_H);

exception_lineno = 1014;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1014;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_fget);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1014;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_getH, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1014;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_expression_value_12;
tmp_expression_value_12 = PyObject_GetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_I);

if (unlikely(tmp_expression_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_I);

exception_lineno = 1015;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1015;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_fget);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1015;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain_getI, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1015;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix$$$class__1_matrix_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix$$$class__1_matrix_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix$$$class__1_matrix_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$matrixlib$defmatrix$$$class__1_matrix_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_numpy$matrixlib$defmatrix$$$class__1_matrix_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__getitem_str_plain_shape_tuple;
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_4;
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


exception_lineno = 74;

    goto try_except_handler_4;
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
tmp_res = PyObject_SetItem(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_matrix;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 74;
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_23;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_args_element_value_2 = outline_0_var___class__;
Py_INCREF(tmp_args_element_value_2);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74);
locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74);
locals_numpy$matrixlib$defmatrix$$$class__1_matrix_74 = NULL;
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
exception_lineno = 74;
goto try_except_handler_2;
outline_result_2:;
frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 73;
tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_matrix, tmp_assign_source_22);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_assign_source_24;

tmp_assign_source_24 = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__35__from_string(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain__from_string, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_12;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_8;
PyObject *tmp_defaults_18;
tmp_called_value_13 = module_var_accessor_numpy$matrixlib$defmatrix$set_module(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_module);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1042;

    goto frame_exception_exit_1;
}
frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 1042;
tmp_called_value_12 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_13, mod_consts.const_tuple_str_plain_numpy_tuple);

if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1042;

    goto frame_exception_exit_1;
}
tmp_defaults_18 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_18);

tmp_args_element_value_8 = MAKE_FUNCTION_numpy$matrixlib$defmatrix$$$function__36_bmat(tstate, tmp_defaults_18);

frame_frame_numpy$matrixlib$defmatrix->m_frame.f_lineno = 1042;
tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1042;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)mod_consts.const_str_plain_bmat, tmp_assign_source_25);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$matrixlib$defmatrix, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$matrixlib$defmatrix->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$matrixlib$defmatrix, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$matrixlib$defmatrix);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$matrixlib$defmatrix", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.matrixlib.defmatrix" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$matrixlib$defmatrix);
    return module_numpy$matrixlib$defmatrix;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$matrixlib$defmatrix, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$matrixlib$defmatrix", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

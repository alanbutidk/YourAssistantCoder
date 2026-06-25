/* Generated code for Python module 'numpy$ma$mrecords'
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



/* The "module_numpy$ma$mrecords" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$ma$mrecords;
PyDictObject *moduledict_numpy$ma$mrecords;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_f;
PyObject *const_tuple_type_tuple_type_list_tuple;
PyObject *const_tuple_str_chr_44_tuple;
PyObject *const_str_digest_f3a190834665fa4724d7f6ba660b6b13;
PyObject *const_str_plain_new_names;
PyObject *const_str_plain_descr;
PyObject *const_str_plain_reserved_fields;
PyObject *const_str_plain_ndescr;
PyObject *const_str_plain_np;
PyObject *const_str_plain_dtype;
PyObject *const_str_digest_42539613c74e89bd124a4f1cc1071cc0;
PyObject *const_str_plain_names;
PyObject *const_str_digest_a589ec2ab241b2d264123a2d98e27962;
PyObject *const_str_plain_empty;
PyObject *const_str_plain_shape;
PyObject *const_tuple_str_plain_dtype_tuple;
PyObject *const_str_plain_flat;
PyObject *const_str_plain_recarray;
PyObject *const_str_plain___new__;
PyObject *const_tuple_25718b0597d86bff74b411964a7f1ec0_tuple;
PyObject *const_str_plain_ma;
PyObject *const_str_plain_make_mask_descr;
PyObject *const_str_plain_nomask;
PyObject *const_str_plain_size;
PyObject *const_str_plain__mask;
PyObject *const_str_plain_array;
PyObject *const_tuple_str_plain_copy_tuple;
PyObject *const_str_plain_resize;
PyObject *const_str_plain_reshape;
PyObject *const_str_digest_00945b49c359db5f3c350d47cdf6a82f;
PyObject *const_str_digest_a33a7f2ea77534fc656fc93a26bbac49;
PyObject *const_str_plain_MAError;
PyObject *const_str_plain___setmask__;
PyObject *const_str_plain_mask;
PyObject *const_str_plain__sharedmask;
PyObject *const_str_plain_ndarray;
PyObject *const_str_plain___getattribute__;
PyObject *const_str_plain_make_mask_none;
PyObject *const_str_plain_view;
PyObject *const_str_plain_update;
PyObject *const_tuple_str_plain__mask_tuple;
PyObject *const_str_plain__update_from;
PyObject *const_str_plain__baseclass;
PyObject *const_str_digest_15d8e5e4a41f57dc53ea7157d3f66838;
PyObject *const_str_digest_720e0bf783eda8b71a6ba0d87205bdc6;
PyObject *const_str_plain_ndim;
PyObject *const_str_plain__data;
PyObject *const_str_digest_ee36ec451788824d4239bba76c611339;
PyObject *const_str_plain_fields;
PyObject *const_slice_none_int_pos_2_none;
PyObject *const_tuple_type_TypeError_type_KeyError_tuple;
PyObject *const_str_digest_fff4ab4551f9666d83eaf3360a5a7db9;
PyObject *const_str_plain_getfield;
PyObject *const_str_digest_7353e29abe9415b3536b6964da1d1938;
PyObject *const_tuple_str_plain__mask_none_tuple;
PyObject *const_str_plain_any;
PyObject *const_str_plain_MaskedArray;
PyObject *const_str_plain__isfield;
PyObject *const_tuple_str_plain__fill_value_none_tuple;
PyObject *const_str_plain__fill_value;
PyObject *const_str_plain_item;
PyObject *const_str_plain_obj;
PyObject *const_tuple_str_plain_mask_str_plain_fieldmask_tuple;
PyObject *const_str_plain___setattr__;
PyObject *const_str_plain__optinfo;
PyObject *const_str_plain_ret;
PyObject *const_str_plain___delattr__;
PyObject *const_str_plain_fielddict;
PyObject *const_str_plain_masked;
PyObject *const_str_plain_filled;
PyObject *const_str_plain_getmaskarray;
PyObject *const_str_plain_setfield;
PyObject *const_str_plain___setitem__;
PyObject *const_str_digest_86a9aaf93c28d548d79ef4ac839a6917;
PyObject *const_str_plain_asarray;
PyObject *const_str_plain_mrecarray;
PyObject *const_str_digest_579a7b0dcd70c048136d116ba173db62;
PyObject *const_str_digest_1400f289656eb84f7e5337e4e3d6a151;
PyObject *const_str_chr_40;
PyObject *const_str_chr_44;
PyObject *const_str_chr_41;
PyObject *const_str_chr_91;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_str_chr_93;
PyObject *const_str_digest_3b128563182f4ce6c29b50e5d8c13861;
PyObject *const_str_chr_37;
PyObject *const_str_plain_max;
PyObject *const_int_pos_4;
PyObject *const_str_digest_15c36e3f31c51fe996d0a438273b7770;
PyObject *const_str_plain_fmt;
PyObject *const_str_plain_insert;
PyObject *const_tuple_int_0_str_digest_422163440baabc56f6c63c24e5ec4a1a_tuple;
PyObject *const_str_plain_extend;
PyObject *const_str_digest_0292da606fbc4445beec4cf4c5a5c05d;
PyObject *const_str_plain_fill_value;
PyObject *const_str_digest_2f4024f52de62105376212a7e49e2d0e;
PyObject *const_str_newline;
PyObject *const_str_digest_fa6646acfb016de97075f6657c0face8;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_0976a077f238ec3a536c0cd087cfb5f0;
PyObject *const_str_plain___bases__;
PyObject *const_str_plain___array__;
PyObject *const_str_plain_output;
PyObject *const_str_digest_35665a333214865352f15a9a644fba78;
PyObject *const_str_plain__hardmask;
PyObject *const_str_digest_b0f9fe06c5cbc5bf903faac3694d919b;
PyObject *const_str_digest_badc1050e31ffb5309134b27e658e4b9;
PyObject *const_str_plain_copy;
PyObject *const_str_digest_e96fb5a1c4b867aef51acd99f9a977b4;
PyObject *const_str_plain_tolist;
PyObject *const_dict_73de9ad74cfede370cfd865b06a915a9;
PyObject *const_str_digest_eff24e9be578270e28348f0afc46928a;
PyObject *const_str_plain_flags;
PyObject *const_str_plain_fnc;
PyObject *const_str_plain_tobytes;
PyObject *const_str_digest_45027196d3f9c51c081a2146399610e2;
PyObject *const_str_plain___setstate__;
PyObject *const_str_plain_bool;
PyObject *const_str_digest_69f11415f172f74db2ddf3aead74577d;
PyObject *const_str_plain__mrreconstruct;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain___getstate__;
PyObject *const_str_digest_8888beef60a4557d1fb47b6158f0acd0;
PyObject *const_str_plain_b1;
PyObject *const_tuple_str_plain_mask_str_plain_dtype_tuple;
PyObject *const_str_digest_37e31420396c99f6c6270077b44e0a82;
PyObject *const_str_plain_getdata;
PyObject *const_str_plain_atleast_1d;
PyObject *const_str_plain_rec;
PyObject *const_str_plain_fromarrays;
PyObject *const_tuple_07b74ff566720a73f9292b90db4431b5_tuple;
PyObject *const_str_digest_8d81892b7ddb05b397638207f4487ef0;
PyObject *const_str_plain_fromrecords;
PyObject *const_int_pos_2;
PyObject *const_slice_none_none_none;
PyObject *const_str_digest_6a92a2fd34672b2c1edbc9b0e84ab9d1;
PyObject *const_str_digest_7297515c0264332491e110183d446497;
PyObject *const_str_plain_arr;
PyObject *const_tuple_type_ValueError_type_TypeError_tuple;
PyObject *const_str_plain_vartypes;
PyObject *const_str_plain_append;
PyObject *const_tuple_type_complex_tuple;
PyObject *const_tuple_type_float_tuple;
PyObject *const_tuple_type_int_tuple;
PyObject *const_str_digest_0661bdcc583cd43e7fd4306f9d290f56;
PyObject *const_str_plain_readline;
PyObject *const_str_digest_3b7523c6495ca265d7e12bb9215e0a7d;
PyObject *const_str_chr_39;
PyObject *const_str_digest_2511f293e5bceac4266463b4a55013c9;
PyObject *const_str_plain_seek;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_digest_5757d7b2b57d90bab525d3668ae1f9a6;
PyObject *const_str_digest_eb2ca531b696d80ecd0cc40cd7802fae;
PyObject *const_str_plain_openfile;
PyObject *const_str_plain_ftext;
PyObject *const_str_plain_find;
PyObject *const_str_plain_commentchar;
PyObject *const_str_plain_strip;
PyObject *const_str_plain_delimiter;
PyObject *const_str_plain_masked_array;
PyObject *const_str_plain__guessvartypes;
PyObject *const_str_digest_e8c410ee6027bfe93acdb13d1ab06759;
PyObject *const_str_digest_7c962fc1fc1d149325bec925ba7f73df;
PyObject *const_str_digest_ad6c2366d0aa924cec013baf5b60040b;
PyObject *const_str_digest_06328b6b9e88469afcf68054958c0af6;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
PyObject *const_str_plain_default_fill_value;
PyObject *const_str_plain_T;
PyObject *const_tuple_str_plain_mask_str_plain_dtype_str_plain_fill_value_tuple;
PyObject *const_str_digest_957c98f982513a353a02d8f218da845f;
PyObject *const_str_plain_values;
PyObject *const_str_plain_newdata;
PyObject *const_str_plain_MaskedRecords;
PyObject *const_str_plain_newmask;
PyObject *const_str_digest_45f6dee1c518f36ed5cb36fb3857d8cf;
PyObject *const_str_digest_35bb1f376a7cb45bc47774411b14f4b2;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_numpy;
PyObject *const_str_digest_e2b728902bc5ac4ffc49ba9390615520;
PyObject *const_str_plain__core;
PyObject *const_str_plain_records;
PyObject *const_str_plain__byteorderconv;
PyObject *const_str_plain_core;
PyObject *const_str_plain__check_fill_value;
PyObject *const_list_87d4bfa4becd56e764327f5ff006e878_list;
PyObject *const_list_55d12180a4b6835c3cbad6dccc630874_list;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain__checknames;
PyObject *const_str_plain__get_fieldmask;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_ff5e7b936a151aeb01e9c959d123a9cd;
PyObject *const_str_digest_80e2b685742e6e709d531a9b1d6f078f;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_76;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_6f6db7c50c8b15db9973e878b7529d30;
PyObject *const_str_plain___array_finalize__;
PyObject *const_str_digest_630a89ec4fafc9a66a6f395871ed4024;
PyObject *const_str_plain_property;
PyObject *const_str_digest_bf08a394f716242cf0afe6780e521a36;
PyObject *const_str_plain__fieldmask;
PyObject *const_str_digest_7990b0bfce3a1f61b593486bfe82176b;
PyObject *const_str_plain___len__;
PyObject *const_str_digest_0475c39e9c4541ab8c1e3742bcbf1a5f;
PyObject *const_str_digest_cbc573c6ec8865810bb592957a20bfe4;
PyObject *const_str_digest_dc6813c82cc389e614f1a8541f051131;
PyObject *const_str_digest_7166884e546acee04932e044ca7e9057;
PyObject *const_str_digest_1e7cb630b7d94595250d95886ff5cc2e;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_18d0f84b9ce243b7cbd0608779a5466a;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_46f6bc39dd4483f89282d46d0210fafb;
PyObject *const_tuple_none_none_tuple;
PyObject *const_str_digest_5034f972335c79a56af5111520379e56;
PyObject *const_str_plain_harden_mask;
PyObject *const_str_digest_4126fdd18698d12df98bec84f42f7714;
PyObject *const_str_plain_soften_mask;
PyObject *const_str_digest_88848f3644a4d547ce1ce1a0c3e008fe;
PyObject *const_str_digest_18e892f1b5cf8f31cb2c1f6af643d1ab;
PyObject *const_str_digest_2242c26d17aa52eff91eb13c1fff14a7;
PyObject *const_str_digest_0164da4c032872cdb206d9b803f18057;
PyObject *const_str_digest_875b4b29bbdccc2460d4c05aa48889c7;
PyObject *const_str_plain___reduce__;
PyObject *const_str_digest_8b3c4bcd543563dcf5905f6f5eb1e8ab;
PyObject *const_tuple_684554007431e177a44bcb5dd8bea4f4_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_tuple_none_none_none_none_none_false_none_none_tuple;
PyObject *const_tuple_none_str_chr_35_str_empty_none_none_tuple;
PyObject *const_str_plain_fromtextfile;
PyObject *const_str_plain_addfield;
PyObject *const_str_digest_472d819bb329e689252a6e7dae87ab7e;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_n_tuple;
PyObject *const_str_digest_a5716cead8a51eed310dac24cff97989;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_c6e264e77825991208b4c72eccfad3e2_tuple;
PyObject *const_tuple_03ef1993db8a8160886f34dabd0ef9f6_tuple;
PyObject *const_tuple_4993c54ab99c745f6875bbed67cbfc12_tuple;
PyObject *const_tuple_str_plain_self_str_plain_state_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_c52edb17c14fc9aaee567858a3c70b4b_tuple;
PyObject *const_tuple_1a432cc76bbc0678d1e2ca5d8cc11d27_tuple;
PyObject *const_tuple_862b2dcfd772ed54f3beb331494ee339_tuple;
PyObject *const_tuple_str_plain_self_str_plain_indx_str_plain_value_tuple;
PyObject *const_tuple_cc0e7c659d44cae2ccae9c0b32260014_tuple;
PyObject *const_tuple_str_plain_self_str_plain_mstr_tuple;
PyObject *const_tuple_c9cf30460eb7ec9f1bb8f4fdeaa3cd50_tuple;
PyObject *const_tuple_str_plain_self_str_plain_mdescr_str_plain_fdmask_tuple;
PyObject *const_tuple_str_plain_arr_str_plain_vartypes_str_plain_f_tuple;
PyObject *const_tuple_55c278320a6afea041a849601cd80cde_tuple;
PyObject *const_tuple_8d5f1c78716ca0a8416dabc70b0fcb68_tuple;
PyObject *const_tuple_str_plain_self_str_plain_copied_tuple;
PyObject *const_tuple_881c76f41b53c97aabef982a7203f792_tuple;
PyObject *const_tuple_4e7452baec43561b8d6361f4c1b16b0b_tuple;
PyObject *const_tuple_cd384e532dcf53aea7c9777cd0cc009a_tuple;
PyObject *const_tuple_str_plain_fname_str_plain_f_str_plain_e_tuple;
PyObject *const_tuple_ac410c6f6c73b6fc300f78b83a60a7dd_tuple;
PyObject *const_tuple_b1244a42499c974cdb7af2bb94f4aba7_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[264];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.ma.mrecords"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_f);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_type_tuple_type_list_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_44_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3a190834665fa4724d7f6ba660b6b13);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_new_names);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_descr);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_reserved_fields);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndescr);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_np);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_42539613c74e89bd124a4f1cc1071cc0);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_names);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_a589ec2ab241b2d264123a2d98e27962);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_flat);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_recarray);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain___new__);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_25718b0597d86bff74b411964a7f1ec0_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_ma);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_mask_descr);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_nomask);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__mask);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_copy_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_resize);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_reshape);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_00945b49c359db5f3c350d47cdf6a82f);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_a33a7f2ea77534fc656fc93a26bbac49);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAError);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain___setmask__);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_mask);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__sharedmask);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain___getattribute__);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_mask_none);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_view);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__mask_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__update_from);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__baseclass);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_15d8e5e4a41f57dc53ea7157d3f66838);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_720e0bf783eda8b71a6ba0d87205bdc6);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__data);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee36ec451788824d4239bba76c611339);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_fields);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_2_none);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_type_KeyError_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_fff4ab4551f9666d83eaf3360a5a7db9);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_getfield);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_7353e29abe9415b3536b6964da1d1938);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__mask_none_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_any);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_MaskedArray);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain__isfield);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__fill_value_none_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain__fill_value);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_item);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_obj);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mask_str_plain_fieldmask_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain___setattr__);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__optinfo);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_ret);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain___delattr__);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_fielddict);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_masked);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_filled);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_getmaskarray);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_setfield);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain___setitem__);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_86a9aaf93c28d548d79ef4ac839a6917);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_asarray);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_mrecarray);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_579a7b0dcd70c048136d116ba173db62);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_1400f289656eb84f7e5337e4e3d6a151);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_chr_40);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_chr_44);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_chr_91);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_chr_93);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b128563182f4ce6c29b50e5d8c13861);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_chr_37);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_15c36e3f31c51fe996d0a438273b7770);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_fmt);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_insert);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_str_digest_422163440baabc56f6c63c24e5ec4a1a_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_extend);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_0292da606fbc4445beec4cf4c5a5c05d);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_fill_value);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f4024f52de62105376212a7e49e2d0e);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_newline);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_fa6646acfb016de97075f6657c0face8);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_0976a077f238ec3a536c0cd087cfb5f0);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain___bases__);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain___array__);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_output);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_35665a333214865352f15a9a644fba78);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain__hardmask);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0f9fe06c5cbc5bf903faac3694d919b);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_badc1050e31ffb5309134b27e658e4b9);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_e96fb5a1c4b867aef51acd99f9a977b4);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_tolist);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_dict_73de9ad74cfede370cfd865b06a915a9);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_eff24e9be578270e28348f0afc46928a);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_flags);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_fnc);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_tobytes);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_45027196d3f9c51c081a2146399610e2);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain___setstate__);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_69f11415f172f74db2ddf3aead74577d);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain__mrreconstruct);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain___getstate__);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_8888beef60a4557d1fb47b6158f0acd0);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_b1);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mask_str_plain_dtype_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_37e31420396c99f6c6270077b44e0a82);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_getdata);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_atleast_1d);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_rec);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_fromarrays);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_07b74ff566720a73f9292b90db4431b5_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d81892b7ddb05b397638207f4487ef0);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_fromrecords);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_slice_none_none_none);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a92a2fd34672b2c1edbc9b0e84ab9d1);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_7297515c0264332491e110183d446497);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_arr);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_type_ValueError_type_TypeError_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_vartypes);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_type_complex_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_type_float_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_0661bdcc583cd43e7fd4306f9d290f56);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_readline);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b7523c6495ca265d7e12bb9215e0a7d);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_chr_39);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_2511f293e5bceac4266463b4a55013c9);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_seek);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_5757d7b2b57d90bab525d3668ae1f9a6);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb2ca531b696d80ecd0cc40cd7802fae);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_openfile);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_ftext);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_find);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_commentchar);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_delimiter);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_masked_array);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain__guessvartypes);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8c410ee6027bfe93acdb13d1ab06759);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c962fc1fc1d149325bec925ba7f73df);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad6c2366d0aa924cec013baf5b60040b);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_06328b6b9e88469afcf68054958c0af6);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_fill_value);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mask_str_plain_dtype_str_plain_fill_value_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_957c98f982513a353a02d8f218da845f);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_newdata);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_MaskedRecords);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_newmask);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_45f6dee1c518f36ed5cb36fb3857d8cf);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_35bb1f376a7cb45bc47774411b14f4b2);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2b728902bc5ac4ffc49ba9390615520);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain__core);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_records);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain__byteorderconv);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_core);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain__check_fill_value);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_list_87d4bfa4becd56e764327f5ff006e878_list);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_list_55d12180a4b6835c3cbad6dccc630874_list);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain__checknames);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_fieldmask);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff5e7b936a151aeb01e9c959d123a9cd);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_80e2b685742e6e709d531a9b1d6f078f);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_int_pos_76);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f6db7c50c8b15db9973e878b7529d30);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain___array_finalize__);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_630a89ec4fafc9a66a6f395871ed4024);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf08a394f716242cf0afe6780e521a36);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain__fieldmask);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_7990b0bfce3a1f61b593486bfe82176b);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain___len__);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_0475c39e9c4541ab8c1e3742bcbf1a5f);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbc573c6ec8865810bb592957a20bfe4);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6813c82cc389e614f1a8541f051131);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_digest_7166884e546acee04932e044ca7e9057);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e7cb630b7d94595250d95886ff5cc2e);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_digest_18d0f84b9ce243b7cbd0608779a5466a);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_digest_46f6bc39dd4483f89282d46d0210fafb);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_digest_5034f972335c79a56af5111520379e56);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain_harden_mask);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_digest_4126fdd18698d12df98bec84f42f7714);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_plain_soften_mask);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_digest_88848f3644a4d547ce1ce1a0c3e008fe);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_digest_18e892f1b5cf8f31cb2c1f6af643d1ab);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_digest_2242c26d17aa52eff91eb13c1fff14a7);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_digest_0164da4c032872cdb206d9b803f18057);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_digest_875b4b29bbdccc2460d4c05aa48889c7);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_plain___reduce__);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b3c4bcd543563dcf5905f6f5eb1e8ab);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_684554007431e177a44bcb5dd8bea4f4_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_false_none_none_tuple);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_none_str_chr_35_str_empty_none_none_tuple);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_plain_fromtextfile);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_plain_addfield);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_digest_472d819bb329e689252a6e7dae87ab7e);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_n_tuple);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5716cead8a51eed310dac24cff97989);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_tuple_c6e264e77825991208b4c72eccfad3e2_tuple);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_tuple_03ef1993db8a8160886f34dabd0ef9f6_tuple);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_tuple_4993c54ab99c745f6875bbed67cbfc12_tuple);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_tuple_c52edb17c14fc9aaee567858a3c70b4b_tuple);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_tuple_1a432cc76bbc0678d1e2ca5d8cc11d27_tuple);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_tuple_862b2dcfd772ed54f3beb331494ee339_tuple);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_indx_str_plain_value_tuple);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_tuple_cc0e7c659d44cae2ccae9c0b32260014_tuple);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_mstr_tuple);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_tuple_c9cf30460eb7ec9f1bb8f4fdeaa3cd50_tuple);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_mdescr_str_plain_fdmask_tuple);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_arr_str_plain_vartypes_str_plain_f_tuple);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_tuple_55c278320a6afea041a849601cd80cde_tuple);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_tuple_8d5f1c78716ca0a8416dabc70b0fcb68_tuple);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_copied_tuple);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_tuple_881c76f41b53c97aabef982a7203f792_tuple);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_tuple_4e7452baec43561b8d6361f4c1b16b0b_tuple);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_tuple_cd384e532dcf53aea7c9777cd0cc009a_tuple);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fname_str_plain_f_str_plain_e_tuple);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_tuple_ac410c6f6c73b6fc300f78b83a60a7dd_tuple);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_tuple_b1244a42499c974cdb7af2bb94f4aba7_tuple);
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
void checkModuleConstants_numpy$ma$mrecords(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_f));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_type_tuple_type_list_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_tuple_type_list_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_44_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_44_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3a190834665fa4724d7f6ba660b6b13));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3a190834665fa4724d7f6ba660b6b13);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_new_names));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new_names);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_descr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_descr);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_reserved_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reserved_fields);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndescr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndescr);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_np));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_np);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_42539613c74e89bd124a4f1cc1071cc0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42539613c74e89bd124a4f1cc1071cc0);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_names));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_names);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_a589ec2ab241b2d264123a2d98e27962));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a589ec2ab241b2d264123a2d98e27962);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_flat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flat);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_recarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_recarray);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain___new__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___new__);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_25718b0597d86bff74b411964a7f1ec0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_25718b0597d86bff74b411964a7f1ec0_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_ma));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ma);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_mask_descr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_make_mask_descr);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_nomask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nomask);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__mask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mask);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_copy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_copy_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_resize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resize);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_reshape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reshape);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_00945b49c359db5f3c350d47cdf6a82f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_00945b49c359db5f3c350d47cdf6a82f);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_a33a7f2ea77534fc656fc93a26bbac49));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a33a7f2ea77534fc656fc93a26bbac49);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MAError);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain___setmask__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___setmask__);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_mask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mask);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__sharedmask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sharedmask);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndarray);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain___getattribute__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getattribute__);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_mask_none));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_make_mask_none);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_view));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_view);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__mask_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__mask_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__update_from));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__update_from);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__baseclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__baseclass);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_15d8e5e4a41f57dc53ea7157d3f66838));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15d8e5e4a41f57dc53ea7157d3f66838);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_720e0bf783eda8b71a6ba0d87205bdc6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_720e0bf783eda8b71a6ba0d87205bdc6);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__data);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee36ec451788824d4239bba76c611339));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee36ec451788824d4239bba76c611339);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fields);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_2_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_2_none);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_type_KeyError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_TypeError_type_KeyError_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_fff4ab4551f9666d83eaf3360a5a7db9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fff4ab4551f9666d83eaf3360a5a7db9);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_getfield));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getfield);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_7353e29abe9415b3536b6964da1d1938));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7353e29abe9415b3536b6964da1d1938);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__mask_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__mask_none_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_any);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_MaskedArray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MaskedArray);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain__isfield));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__isfield);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__fill_value_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__fill_value_none_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain__fill_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fill_value);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_item));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_item);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_obj));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_obj);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mask_str_plain_fieldmask_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mask_str_plain_fieldmask_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain___setattr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___setattr__);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__optinfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__optinfo);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_ret));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ret);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain___delattr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___delattr__);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_fielddict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fielddict);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_masked));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_masked);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_filled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_filled);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_getmaskarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getmaskarray);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_setfield));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setfield);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain___setitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___setitem__);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_86a9aaf93c28d548d79ef4ac839a6917));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86a9aaf93c28d548d79ef4ac839a6917);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_asarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asarray);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_mrecarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mrecarray);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_579a7b0dcd70c048136d116ba173db62));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_579a7b0dcd70c048136d116ba173db62);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_1400f289656eb84f7e5337e4e3d6a151));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1400f289656eb84f7e5337e4e3d6a151);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_chr_40));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_40);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_chr_44));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_44);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_chr_91));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_91);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_chr_93));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_93);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b128563182f4ce6c29b50e5d8c13861));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b128563182f4ce6c29b50e5d8c13861);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_chr_37));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_37);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_15c36e3f31c51fe996d0a438273b7770));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15c36e3f31c51fe996d0a438273b7770);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_fmt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fmt);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_insert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_insert);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_str_digest_422163440baabc56f6c63c24e5ec4a1a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_str_digest_422163440baabc56f6c63c24e5ec4a1a_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_extend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extend);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_0292da606fbc4445beec4cf4c5a5c05d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0292da606fbc4445beec4cf4c5a5c05d);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_fill_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fill_value);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f4024f52de62105376212a7e49e2d0e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f4024f52de62105376212a7e49e2d0e);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_newline);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_fa6646acfb016de97075f6657c0face8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fa6646acfb016de97075f6657c0face8);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_0976a077f238ec3a536c0cd087cfb5f0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0976a077f238ec3a536c0cd087cfb5f0);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain___bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___bases__);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain___array__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___array__);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_output));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_output);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_35665a333214865352f15a9a644fba78));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_35665a333214865352f15a9a644fba78);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain__hardmask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__hardmask);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0f9fe06c5cbc5bf903faac3694d919b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0f9fe06c5cbc5bf903faac3694d919b);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_badc1050e31ffb5309134b27e658e4b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_badc1050e31ffb5309134b27e658e4b9);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_e96fb5a1c4b867aef51acd99f9a977b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e96fb5a1c4b867aef51acd99f9a977b4);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_tolist));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tolist);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_dict_73de9ad74cfede370cfd865b06a915a9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_73de9ad74cfede370cfd865b06a915a9);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_eff24e9be578270e28348f0afc46928a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eff24e9be578270e28348f0afc46928a);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_flags));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flags);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_fnc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fnc);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_tobytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tobytes);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_45027196d3f9c51c081a2146399610e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45027196d3f9c51c081a2146399610e2);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain___setstate__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___setstate__);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_69f11415f172f74db2ddf3aead74577d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69f11415f172f74db2ddf3aead74577d);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain__mrreconstruct));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mrreconstruct);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain___getstate__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getstate__);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_8888beef60a4557d1fb47b6158f0acd0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8888beef60a4557d1fb47b6158f0acd0);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_b1);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mask_str_plain_dtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mask_str_plain_dtype_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_37e31420396c99f6c6270077b44e0a82));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37e31420396c99f6c6270077b44e0a82);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_getdata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getdata);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_atleast_1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_atleast_1d);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_rec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rec);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_fromarrays));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fromarrays);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_07b74ff566720a73f9292b90db4431b5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_07b74ff566720a73f9292b90db4431b5_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d81892b7ddb05b397638207f4487ef0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8d81892b7ddb05b397638207f4487ef0);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_fromrecords));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fromrecords);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_slice_none_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_none_none);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a92a2fd34672b2c1edbc9b0e84ab9d1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a92a2fd34672b2c1edbc9b0e84ab9d1);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_7297515c0264332491e110183d446497));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7297515c0264332491e110183d446497);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_arr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arr);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_type_ValueError_type_TypeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_ValueError_type_TypeError_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_vartypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vartypes);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_type_complex_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_complex_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_type_float_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_float_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_int_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_0661bdcc583cd43e7fd4306f9d290f56));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0661bdcc583cd43e7fd4306f9d290f56);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_readline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readline);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b7523c6495ca265d7e12bb9215e0a7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b7523c6495ca265d7e12bb9215e0a7d);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_chr_39));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_39);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_2511f293e5bceac4266463b4a55013c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2511f293e5bceac4266463b4a55013c9);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_seek));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seek);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_5757d7b2b57d90bab525d3668ae1f9a6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5757d7b2b57d90bab525d3668ae1f9a6);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb2ca531b696d80ecd0cc40cd7802fae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb2ca531b696d80ecd0cc40cd7802fae);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_openfile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_openfile);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_ftext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ftext);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_find));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_find);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_commentchar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_commentchar);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_delimiter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delimiter);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_masked_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_masked_array);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain__guessvartypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__guessvartypes);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8c410ee6027bfe93acdb13d1ab06759));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e8c410ee6027bfe93acdb13d1ab06759);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c962fc1fc1d149325bec925ba7f73df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c962fc1fc1d149325bec925ba7f73df);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad6c2366d0aa924cec013baf5b60040b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad6c2366d0aa924cec013baf5b60040b);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_06328b6b9e88469afcf68054958c0af6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_06328b6b9e88469afcf68054958c0af6);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_fill_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_fill_value);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mask_str_plain_dtype_str_plain_fill_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mask_str_plain_dtype_str_plain_fill_value_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_957c98f982513a353a02d8f218da845f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_957c98f982513a353a02d8f218da845f);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_newdata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_newdata);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_MaskedRecords));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MaskedRecords);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_newmask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_newmask);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_45f6dee1c518f36ed5cb36fb3857d8cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45f6dee1c518f36ed5cb36fb3857d8cf);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_35bb1f376a7cb45bc47774411b14f4b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_35bb1f376a7cb45bc47774411b14f4b2);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2b728902bc5ac4ffc49ba9390615520));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e2b728902bc5ac4ffc49ba9390615520);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain__core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__core);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_records));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_records);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain__byteorderconv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__byteorderconv);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_core);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain__check_fill_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__check_fill_value);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_list_87d4bfa4becd56e764327f5ff006e878_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_87d4bfa4becd56e764327f5ff006e878_list);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_list_55d12180a4b6835c3cbad6dccc630874_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_55d12180a4b6835c3cbad6dccc630874_list);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain__checknames));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__checknames);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_fieldmask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_fieldmask);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff5e7b936a151aeb01e9c959d123a9cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff5e7b936a151aeb01e9c959d123a9cd);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_80e2b685742e6e709d531a9b1d6f078f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80e2b685742e6e709d531a9b1d6f078f);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_int_pos_76));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_76);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f6db7c50c8b15db9973e878b7529d30));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f6db7c50c8b15db9973e878b7529d30);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain___array_finalize__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___array_finalize__);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_630a89ec4fafc9a66a6f395871ed4024));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_630a89ec4fafc9a66a6f395871ed4024);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf08a394f716242cf0afe6780e521a36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf08a394f716242cf0afe6780e521a36);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain__fieldmask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fieldmask);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_7990b0bfce3a1f61b593486bfe82176b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7990b0bfce3a1f61b593486bfe82176b);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain___len__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___len__);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_0475c39e9c4541ab8c1e3742bcbf1a5f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0475c39e9c4541ab8c1e3742bcbf1a5f);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbc573c6ec8865810bb592957a20bfe4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cbc573c6ec8865810bb592957a20bfe4);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6813c82cc389e614f1a8541f051131));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6813c82cc389e614f1a8541f051131);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_digest_7166884e546acee04932e044ca7e9057));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7166884e546acee04932e044ca7e9057);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e7cb630b7d94595250d95886ff5cc2e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e7cb630b7d94595250d95886ff5cc2e);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___str__);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_digest_18d0f84b9ce243b7cbd0608779a5466a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_18d0f84b9ce243b7cbd0608779a5466a);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_digest_46f6bc39dd4483f89282d46d0210fafb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_46f6bc39dd4483f89282d46d0210fafb);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_digest_5034f972335c79a56af5111520379e56));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5034f972335c79a56af5111520379e56);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain_harden_mask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_harden_mask);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_digest_4126fdd18698d12df98bec84f42f7714));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4126fdd18698d12df98bec84f42f7714);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_plain_soften_mask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_soften_mask);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_digest_88848f3644a4d547ce1ce1a0c3e008fe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_88848f3644a4d547ce1ce1a0c3e008fe);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_digest_18e892f1b5cf8f31cb2c1f6af643d1ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_18e892f1b5cf8f31cb2c1f6af643d1ab);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_digest_2242c26d17aa52eff91eb13c1fff14a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2242c26d17aa52eff91eb13c1fff14a7);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_digest_0164da4c032872cdb206d9b803f18057));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0164da4c032872cdb206d9b803f18057);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_digest_875b4b29bbdccc2460d4c05aa48889c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_875b4b29bbdccc2460d4c05aa48889c7);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_plain___reduce__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___reduce__);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b3c4bcd543563dcf5905f6f5eb1e8ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b3c4bcd543563dcf5905f6f5eb1e8ab);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_684554007431e177a44bcb5dd8bea4f4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_684554007431e177a44bcb5dd8bea4f4_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_false_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_none_none_false_none_none_tuple);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_none_str_chr_35_str_empty_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_str_chr_35_str_empty_none_none_tuple);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_plain_fromtextfile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fromtextfile);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_plain_addfield));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_addfield);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_digest_472d819bb329e689252a6e7dae87ab7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_472d819bb329e689252a6e7dae87ab7e);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_n_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_n_tuple);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5716cead8a51eed310dac24cff97989));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5716cead8a51eed310dac24cff97989);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_tuple_c6e264e77825991208b4c72eccfad3e2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c6e264e77825991208b4c72eccfad3e2_tuple);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_tuple_03ef1993db8a8160886f34dabd0ef9f6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_03ef1993db8a8160886f34dabd0ef9f6_tuple);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_tuple_4993c54ab99c745f6875bbed67cbfc12_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4993c54ab99c745f6875bbed67cbfc12_tuple);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_state_tuple);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_tuple_c52edb17c14fc9aaee567858a3c70b4b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c52edb17c14fc9aaee567858a3c70b4b_tuple);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_tuple_1a432cc76bbc0678d1e2ca5d8cc11d27_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1a432cc76bbc0678d1e2ca5d8cc11d27_tuple);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_tuple_862b2dcfd772ed54f3beb331494ee339_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_862b2dcfd772ed54f3beb331494ee339_tuple);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_indx_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_indx_str_plain_value_tuple);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_tuple_cc0e7c659d44cae2ccae9c0b32260014_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cc0e7c659d44cae2ccae9c0b32260014_tuple);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_mstr_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_mstr_tuple);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_tuple_c9cf30460eb7ec9f1bb8f4fdeaa3cd50_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c9cf30460eb7ec9f1bb8f4fdeaa3cd50_tuple);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_mdescr_str_plain_fdmask_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_mdescr_str_plain_fdmask_tuple);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_arr_str_plain_vartypes_str_plain_f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_arr_str_plain_vartypes_str_plain_f_tuple);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_tuple_55c278320a6afea041a849601cd80cde_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_55c278320a6afea041a849601cd80cde_tuple);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_tuple_8d5f1c78716ca0a8416dabc70b0fcb68_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8d5f1c78716ca0a8416dabc70b0fcb68_tuple);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_copied_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_copied_tuple);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_tuple_881c76f41b53c97aabef982a7203f792_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_881c76f41b53c97aabef982a7203f792_tuple);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_tuple_4e7452baec43561b8d6361f4c1b16b0b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4e7452baec43561b8d6361f4c1b16b0b_tuple);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_tuple_cd384e532dcf53aea7c9777cd0cc009a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cd384e532dcf53aea7c9777cd0cc009a_tuple);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fname_str_plain_f_str_plain_e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fname_str_plain_f_str_plain_e_tuple);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_tuple_ac410c6f6c73b6fc300f78b83a60a7dd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ac410c6f6c73b6fc300f78b83a60a7dd_tuple);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_tuple_b1244a42499c974cdb7af2bb94f4aba7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b1244a42499c974cdb7af2bb94f4aba7_tuple);
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
static PyObject *module_var_accessor_numpy$ma$mrecords$MaskedRecords(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$ma$mrecords->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$ma$mrecords->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_MaskedRecords);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$ma$mrecords->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MaskedRecords);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MaskedRecords, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MaskedRecords);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MaskedRecords, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_MaskedRecords);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_MaskedRecords);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MaskedRecords);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$ma$mrecords$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$ma$mrecords->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$ma$mrecords->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$ma$mrecords->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$ma$mrecords$_guessvartypes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$ma$mrecords->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$ma$mrecords->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain__guessvartypes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$ma$mrecords->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__guessvartypes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__guessvartypes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__guessvartypes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__guessvartypes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain__guessvartypes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain__guessvartypes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__guessvartypes);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$ma$mrecords$_mrreconstruct(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$ma$mrecords->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$ma$mrecords->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain__mrreconstruct);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$ma$mrecords->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__mrreconstruct);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__mrreconstruct, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__mrreconstruct);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__mrreconstruct, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain__mrreconstruct);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain__mrreconstruct);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__mrreconstruct);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$ma$mrecords$fromarrays(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$ma$mrecords->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$ma$mrecords->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_fromarrays);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$ma$mrecords->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fromarrays);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fromarrays, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fromarrays);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fromarrays, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_fromarrays);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_fromarrays);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_fromarrays);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$ma$mrecords$ma(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$ma$mrecords->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$ma$mrecords->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_ma);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$ma$mrecords->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ma);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ma, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ma);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ma, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_ma);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_ma);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ma);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$ma$mrecords$mrecarray(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$ma$mrecords->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$ma$mrecords->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_mrecarray);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$ma$mrecords->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mrecarray);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mrecarray, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mrecarray);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mrecarray, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_mrecarray);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_mrecarray);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_mrecarray);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$ma$mrecords$np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$ma$mrecords->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$ma$mrecords->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$ma$mrecords->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_np);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_np, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_np);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_np, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$ma$mrecords$openfile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$ma$mrecords->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$ma$mrecords->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_openfile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$ma$mrecords->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_openfile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_openfile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_openfile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_openfile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_openfile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_openfile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_openfile);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$ma$mrecords$reserved_fields(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$ma$mrecords->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$ma$mrecords->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_reserved_fields);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$ma$mrecords->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_reserved_fields);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_reserved_fields, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_reserved_fields);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_reserved_fields, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_reserved_fields);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_reserved_fields);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_reserved_fields);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$ma$mrecords$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$ma$mrecords->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$ma$mrecords->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$ma$mrecords->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_371c0de304d5e87c2c4ea1cb3a9c3d37;
static PyCodeObject *code_objects_e2a479160c6815a52e5d72265fa83485;
static PyCodeObject *code_objects_a2e590461e51026e84b1057a88c9e4f9;
static PyCodeObject *code_objects_3b120a39ec67a9e6ea67b057e6c414c2;
static PyCodeObject *code_objects_c7984d2a893214810f026820e8758edd;
static PyCodeObject *code_objects_3308612a9a4a1c2c38b0c9d37e535674;
static PyCodeObject *code_objects_c6a1e257ee3d00e25f5c6fc75d2c9541;
static PyCodeObject *code_objects_342a5b977809501f299cce0193d39874;
static PyCodeObject *code_objects_81769aa09c5fbc4f8fbf4f1dec104207;
static PyCodeObject *code_objects_b9ab975f01f70731dd4022b03f191e61;
static PyCodeObject *code_objects_6cff9daf3b369da829908c65a2ee8016;
static PyCodeObject *code_objects_73740bb4d286722d4bc9230a6d1da129;
static PyCodeObject *code_objects_b3924ce3588f8ba3764e512ca13d892a;
static PyCodeObject *code_objects_008712de8309dcdc98130da8823fb1e9;
static PyCodeObject *code_objects_5759ff439c4d88afc14705b3efaa54a4;
static PyCodeObject *code_objects_377f3721e6dbb94bf2344740dbca1181;
static PyCodeObject *code_objects_ef9b96cd439bc7f27edf00bfa38f40b7;
static PyCodeObject *code_objects_21ba47221a9abea0683e0b715f8f2190;
static PyCodeObject *code_objects_c64e1d935ded008c52e55b9cd06ab27c;
static PyCodeObject *code_objects_b4de830e88e584470fcbcda84c1e7b09;
static PyCodeObject *code_objects_d977c08e9ac080598754396e5022ef30;
static PyCodeObject *code_objects_d32ea54fd7890f5c1fc69d67efb1ac55;
static PyCodeObject *code_objects_532f084a1b5a5fcd82b11d050fd659b4;
static PyCodeObject *code_objects_fec36d3b9725e050255929a765e44445;
static PyCodeObject *code_objects_67c30a10b0a764fafc33082de784d3aa;
static PyCodeObject *code_objects_ae0bb4e2d423c9dc8541c50de3952e50;
static PyCodeObject *code_objects_e1469ad27438b8ab62a12a0f750f15ef;
static PyCodeObject *code_objects_0fd7a8bbb7f95b73666c07bd2489a336;
static PyCodeObject *code_objects_b35bf8201d2ec31419c524abca01cada;
static PyCodeObject *code_objects_859d4c38c1a30def806f08810db5d31a;
static PyCodeObject *code_objects_5ce0590313b5685f0f43e0fd09dfc1bf;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_472d819bb329e689252a6e7dae87ab7e); CHECK_OBJECT(module_filename_obj);
code_objects_371c0de304d5e87c2c4ea1cb3a9c3d37 = MAKE_CODE_OBJECT(module_filename_obj, 344, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_0976a077f238ec3a536c0cd087cfb5f0, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_n_tuple, NULL, 1, 0, 0);
code_objects_e2a479160c6815a52e5d72265fa83485 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_a5716cead8a51eed310dac24cff97989, mod_consts.const_str_digest_a5716cead8a51eed310dac24cff97989, NULL, NULL, 0, 0, 0);
code_objects_a2e590461e51026e84b1057a88c9e4f9 = MAKE_CODE_OBJECT(module_filename_obj, 76, 0, mod_consts.const_str_plain_MaskedRecords, mod_consts.const_str_plain_MaskedRecords, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3b120a39ec67a9e6ea67b057e6c414c2 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___array_finalize__, mod_consts.const_str_digest_630a89ec4fafc9a66a6f395871ed4024, mod_consts.const_tuple_c6e264e77825991208b4c72eccfad3e2_tuple, NULL, 2, 0, 0);
code_objects_c7984d2a893214810f026820e8758edd = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getattribute__, mod_consts.const_str_digest_cbc573c6ec8865810bb592957a20bfe4, mod_consts.const_tuple_03ef1993db8a8160886f34dabd0ef9f6_tuple, NULL, 2, 0, 0);
code_objects_3308612a9a4a1c2c38b0c9d37e535674 = MAKE_CODE_OBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getitem__, mod_consts.const_str_digest_7166884e546acee04932e044ca7e9057, mod_consts.const_tuple_4993c54ab99c745f6875bbed67cbfc12_tuple, NULL, 2, 0, 0);
code_objects_c6a1e257ee3d00e25f5c6fc75d2c9541 = MAKE_CODE_OBJECT(module_filename_obj, 430, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getstate__, mod_consts.const_str_digest_0164da4c032872cdb206d9b803f18057, mod_consts.const_tuple_str_plain_self_str_plain_state_tuple, NULL, 1, 0, 0);
code_objects_342a5b977809501f299cce0193d39874 = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___len__, mod_consts.const_str_digest_0475c39e9c4541ab8c1e3742bcbf1a5f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_81769aa09c5fbc4f8fbf4f1dec104207 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain___new__, mod_consts.const_str_digest_6f6db7c50c8b15db9973e878b7529d30, mod_consts.const_tuple_c52edb17c14fc9aaee567858a3c70b4b_tuple, NULL, 16, 0, 0);
code_objects_b9ab975f01f70731dd4022b03f191e61 = MAKE_CODE_OBJECT(module_filename_obj, 466, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___reduce__, mod_consts.const_str_digest_8b3c4bcd543563dcf5905f6f5eb1e8ab, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6cff9daf3b369da829908c65a2ee8016 = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_46f6bc39dd4483f89282d46d0210fafb, mod_consts.const_tuple_1a432cc76bbc0678d1e2ca5d8cc11d27_tuple, NULL, 1, 0, 0);
code_objects_73740bb4d286722d4bc9230a6d1da129 = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___setattr__, mod_consts.const_str_digest_dc6813c82cc389e614f1a8541f051131, mod_consts.const_tuple_862b2dcfd772ed54f3beb331494ee339_tuple, NULL, 3, 0, 0);
code_objects_b3924ce3588f8ba3764e512ca13d892a = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___setitem__, mod_consts.const_str_digest_1e7cb630b7d94595250d95886ff5cc2e, mod_consts.const_tuple_str_plain_self_str_plain_indx_str_plain_value_tuple, NULL, 3, 0, 0);
code_objects_008712de8309dcdc98130da8823fb1e9 = MAKE_CODE_OBJECT(module_filename_obj, 446, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___setstate__, mod_consts.const_str_digest_875b4b29bbdccc2460d4c05aa48889c7, mod_consts.const_tuple_cc0e7c659d44cae2ccae9c0b32260014_tuple, NULL, 2, 0, 0);
code_objects_5759ff439c4d88afc14705b3efaa54a4 = MAKE_CODE_OBJECT(module_filename_obj, 324, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_18d0f84b9ce243b7cbd0608779a5466a, mod_consts.const_tuple_str_plain_self_str_plain_mstr_tuple, NULL, 1, 0, 0);
code_objects_377f3721e6dbb94bf2344740dbca1181 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__checknames, mod_consts.const_str_plain__checknames, mod_consts.const_tuple_c9cf30460eb7ec9f1bb8f4fdeaa3cd50_tuple, NULL, 2, 0, 0);
code_objects_ef9b96cd439bc7f27edf00bfa38f40b7 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__data, mod_consts.const_str_digest_bf08a394f716242cf0afe6780e521a36, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_21ba47221a9abea0683e0b715f8f2190 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__fieldmask, mod_consts.const_str_digest_7990b0bfce3a1f61b593486bfe82176b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c64e1d935ded008c52e55b9cd06ab27c = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_fieldmask, mod_consts.const_str_plain__get_fieldmask, mod_consts.const_tuple_str_plain_self_str_plain_mdescr_str_plain_fdmask_tuple, NULL, 1, 0, 0);
code_objects_b4de830e88e584470fcbcda84c1e7b09 = MAKE_CODE_OBJECT(module_filename_obj, 602, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__guessvartypes, mod_consts.const_str_plain__guessvartypes, mod_consts.const_tuple_str_plain_arr_str_plain_vartypes_str_plain_f_tuple, NULL, 1, 0, 0);
code_objects_d977c08e9ac080598754396e5022ef30 = MAKE_CODE_OBJECT(module_filename_obj, 476, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__mrreconstruct, mod_consts.const_str_plain__mrreconstruct, mod_consts.const_tuple_55c278320a6afea041a849601cd80cde_tuple, NULL, 4, 0, 0);
code_objects_d32ea54fd7890f5c1fc69d67efb1ac55 = MAKE_CODE_OBJECT(module_filename_obj, 728, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_addfield, mod_consts.const_str_plain_addfield, mod_consts.const_tuple_8d5f1c78716ca0a8416dabc70b0fcb68_tuple, NULL, 3, 0, 0);
code_objects_532f084a1b5a5fcd82b11d050fd659b4 = MAKE_CODE_OBJECT(module_filename_obj, 405, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_copy, mod_consts.const_str_digest_18e892f1b5cf8f31cb2c1f6af643d1ab, mod_consts.const_tuple_str_plain_self_str_plain_copied_tuple, NULL, 1, 0, 0);
code_objects_fec36d3b9725e050255929a765e44445 = MAKE_CODE_OBJECT(module_filename_obj, 494, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_fromarrays, mod_consts.const_str_plain_fromarrays, mod_consts.const_tuple_881c76f41b53c97aabef982a7203f792_tuple, NULL, 9, 0, 0);
code_objects_67c30a10b0a764fafc33082de784d3aa = MAKE_CODE_OBJECT(module_filename_obj, 537, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_fromrecords, mod_consts.const_str_plain_fromrecords, mod_consts.const_tuple_4e7452baec43561b8d6361f4c1b16b0b_tuple, NULL, 10, 0, 0);
code_objects_ae0bb4e2d423c9dc8541c50de3952e50 = MAKE_CODE_OBJECT(module_filename_obj, 659, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_fromtextfile, mod_consts.const_str_plain_fromtextfile, mod_consts.const_tuple_cd384e532dcf53aea7c9777cd0cc009a_tuple, NULL, 6, 0, 0);
code_objects_e1469ad27438b8ab62a12a0f750f15ef = MAKE_CODE_OBJECT(module_filename_obj, 391, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_harden_mask, mod_consts.const_str_digest_4126fdd18698d12df98bec84f42f7714, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0fd7a8bbb7f95b73666c07bd2489a336 = MAKE_CODE_OBJECT(module_filename_obj, 639, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_openfile, mod_consts.const_str_plain_openfile, mod_consts.const_tuple_str_plain_fname_str_plain_f_str_plain_e_tuple, NULL, 1, 0, 0);
code_objects_b35bf8201d2ec31419c524abca01cada = MAKE_CODE_OBJECT(module_filename_obj, 398, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_soften_mask, mod_consts.const_str_digest_88848f3644a4d547ce1ce1a0c3e008fe, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_859d4c38c1a30def806f08810db5d31a = MAKE_CODE_OBJECT(module_filename_obj, 414, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_tolist, mod_consts.const_str_digest_2242c26d17aa52eff91eb13c1fff14a7, mod_consts.const_tuple_ac410c6f6c73b6fc300f78b83a60a7dd_tuple, NULL, 2, 0, 0);
code_objects_5ce0590313b5685f0f43e0fd09dfc1bf = MAKE_CODE_OBJECT(module_filename_obj, 351, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_view, mod_consts.const_str_digest_5034f972335c79a56af5111520379e56, mod_consts.const_tuple_b1244a42499c974cdb7af2bb94f4aba7_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_numpy$ma$mrecords$$$function__13___repr__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__10___getitem__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__11___setitem__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__12___str__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__13___repr__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__14_view(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__15_harden_mask(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__16_soften_mask(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__17_copy(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__18_tolist(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__19___getstate__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__1__checknames(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__20___setstate__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__21___reduce__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__22__mrreconstruct(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__23_fromarrays(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__24_fromrecords(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__25__guessvartypes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__26_openfile(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__27_fromtextfile(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__28_addfield(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__2__get_fieldmask(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__3___new__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__4___array_finalize__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__5__data(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__6__fieldmask(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__7___len__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__8___getattribute__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__9___setattr__(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$ma$mrecords$$$function__1__checknames(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_descr = python_pars[0];
PyObject *par_names = python_pars[1];
PyObject *var_ndescr = NULL;
PyObject *var_default_names = NULL;
PyObject *var_new_names = NULL;
PyObject *var_nnames = NULL;
PyObject *var_n = NULL;
PyObject *var_d = NULL;
PyObject *var_t = NULL;
PyObject *outline_0_var_i = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__1__checknames;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__1__checknames = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__1__checknames)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__1__checknames);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__1__checknames == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__1__checknames = MAKE_FUNCTION_FRAME(tstate, code_objects_377f3721e6dbb94bf2344740dbca1181, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__1__checknames->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__1__checknames = cache_frame_frame_numpy$ma$mrecords$$$function__1__checknames;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__1__checknames);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__1__checknames) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_descr);
tmp_len_arg_1 = par_descr;
tmp_assign_source_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ndescr == NULL);
var_ndescr = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
CHECK_OBJECT(var_ndescr);
tmp_xrange_low_1 = var_ndescr;
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
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
type_description_1 = "ooooooooo";
exception_lineno = 44;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_i;
    outline_0_var_i = tmp_assign_source_6;
    Py_INCREF(outline_0_var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_tuple_element_1 = mod_consts.const_str_plain_f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(outline_0_var_i);
tmp_format_value_1 = outline_0_var_i;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooooooo";
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
tmp_append_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_append_value_1 == NULL));
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooooooo";
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
Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 44;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_default_names == NULL);
var_default_names = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_names);
tmp_cmp_expr_left_1 = par_names;
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(var_default_names);
tmp_assign_source_7 = var_default_names;
assert(var_new_names == NULL);
Py_INCREF(tmp_assign_source_7);
var_new_names = tmp_assign_source_7;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_names);
tmp_isinstance_inst_1 = par_names;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_tuple_type_list_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_8;
CHECK_OBJECT(par_names);
tmp_assign_source_8 = par_names;
assert(var_new_names == NULL);
Py_INCREF(tmp_assign_source_8);
var_new_names = tmp_assign_source_8;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_names);
tmp_isinstance_inst_2 = par_names;
tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_names);
tmp_expression_value_1 = par_names;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__1__checknames->m_frame.f_lineno = 51;
tmp_assign_source_9 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_44_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_new_names == NULL);
var_new_names = tmp_assign_source_9;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_f3a190834665fa4724d7f6ba660b6b13;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_names);
tmp_operand_value_1 = par_names;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
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


exception_lineno = 53;
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
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_numpy$ma$mrecords$$$function__1__checknames->m_frame.f_lineno = 53;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NameError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 53;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_end_3:;
branch_end_2:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_new_names);
tmp_len_arg_2 = var_new_names;
tmp_assign_source_10 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_nnames == NULL);
var_nnames = tmp_assign_source_10;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_nnames);
tmp_cmp_expr_left_2 = var_nnames;
CHECK_OBJECT(var_ndescr);
tmp_cmp_expr_right_2 = var_ndescr;
tmp_condition_result_4 = RICH_COMPARE_LT_CBOOL_LONG_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(var_new_names);
tmp_iadd_expr_left_1 = var_new_names;
CHECK_OBJECT(var_default_names);
tmp_expression_value_2 = var_default_names;
CHECK_OBJECT(var_nnames);
tmp_start_value_1 = var_nnames;
tmp_stop_value_1 = Py_None;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_iadd_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = tmp_iadd_expr_left_1;
var_new_names = tmp_assign_source_11;

}
branch_no_4:;
branch_end_1:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_ndescr;
    assert(old != NULL);
    var_ndescr = tmp_assign_source_12;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
tmp_called_value_2 = (PyObject *)&PyZip_Type;
if (var_new_names == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_names);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = var_new_names;
CHECK_OBJECT(var_default_names);
tmp_args_element_value_2 = var_default_names;
CHECK_OBJECT(par_descr);
tmp_expression_value_3 = par_descr;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_descr);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__1__checknames->m_frame.f_lineno = 58;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_13;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_2 = tmp_for_loop_1__for_iterator;
tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 58;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_19 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_n;
    var_n = tmp_assign_source_19;
    Py_INCREF(var_n);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_20 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_d;
    var_d = tmp_assign_source_20;
    Py_INCREF(var_d);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_21 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var_t;
    var_t = tmp_assign_source_21;
    Py_INCREF(var_t);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_n);
tmp_cmp_expr_left_3 = var_n;
tmp_cmp_expr_right_3 = module_var_accessor_numpy$ma$mrecords$reserved_fields(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reserved_fields);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
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
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_t);
tmp_expression_value_4 = var_t;
tmp_subscript_value_2 = const_int_0;
tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 0);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_4 = module_var_accessor_numpy$ma$mrecords$reserved_fields(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reserved_fields);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 60;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_6 = (tmp_res == 1) ? true : false;
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
PyObject *tmp_tuple_element_3;
if (var_ndescr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ndescr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 61;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_list_arg_value_1 = var_ndescr;
CHECK_OBJECT(var_d);
tmp_tuple_element_3 = var_d;
tmp_item_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyTuple_SET_ITEM0(tmp_item_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_t);
tmp_expression_value_5 = var_t;
tmp_subscript_value_3 = const_int_pos_1;
tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_item_value_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_item_value_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
if (var_ndescr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ndescr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 63;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_list_arg_value_2 = var_ndescr;
CHECK_OBJECT(var_t);
tmp_item_value_2 = var_t;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_end_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
PyObject *tmp_tuple_element_4;
if (var_ndescr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ndescr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 65;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_list_arg_value_3 = var_ndescr;
CHECK_OBJECT(var_n);
tmp_tuple_element_4 = var_n;
tmp_item_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
PyTuple_SET_ITEM0(tmp_item_value_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_t);
tmp_expression_value_6 = var_t;
tmp_subscript_value_4 = const_int_pos_1;
tmp_tuple_element_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_4, 1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_item_value_3, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_item_value_3);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
branch_end_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
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
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_4;
tmp_expression_value_7 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_dtype);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (var_ndescr == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ndescr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 66;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = var_ndescr;
frame_frame_numpy$ma$mrecords$$$function__1__checknames->m_frame.f_lineno = 66;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__1__checknames, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__1__checknames->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__1__checknames, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__1__checknames,
    type_description_1,
    par_descr,
    par_names,
    var_ndescr,
    var_default_names,
    var_new_names,
    var_nnames,
    var_n,
    var_d,
    var_t
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__1__checknames == cache_frame_frame_numpy$ma$mrecords$$$function__1__checknames) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__1__checknames);
    cache_frame_frame_numpy$ma$mrecords$$$function__1__checknames = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__1__checknames);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_ndescr);
var_ndescr = NULL;
CHECK_OBJECT(var_default_names);
CHECK_OBJECT(var_default_names);
Py_DECREF(var_default_names);
var_default_names = NULL;
Py_XDECREF(var_new_names);
var_new_names = NULL;
Py_XDECREF(var_nnames);
var_nnames = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_d);
var_d = NULL;
Py_XDECREF(var_t);
var_t = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ndescr);
var_ndescr = NULL;
Py_XDECREF(var_default_names);
var_default_names = NULL;
Py_XDECREF(var_new_names);
var_new_names = NULL;
Py_XDECREF(var_nnames);
var_nnames = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_d);
var_d = NULL;
Py_XDECREF(var_t);
var_t = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_descr);
Py_DECREF(par_descr);
CHECK_OBJECT(par_names);
Py_DECREF(par_names);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_descr);
Py_DECREF(par_descr);
CHECK_OBJECT(par_names);
Py_DECREF(par_names);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$ma$mrecords$$$function__2__get_fieldmask(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_mdescr = NULL;
PyObject *var_fdmask = NULL;
PyObject *outline_0_var_n = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask = MAKE_FUNCTION_FRAME(tstate, code_objects_c64e1d935ded008c52e55b9cd06ab27c, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask = cache_frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_names);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 70;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_n;
    outline_0_var_n = tmp_assign_source_5;
    Py_INCREF(outline_0_var_n);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_n);
tmp_tuple_element_1 = outline_0_var_n;
tmp_append_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_a589ec2ab241b2d264123a2d98e27962;
PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_1);
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_1);
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
Py_XDECREF(outline_0_var_n);
outline_0_var_n = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_n);
outline_0_var_n = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 70;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_mdescr == NULL);
var_mdescr = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_3 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_empty);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_shape);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 71;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mdescr);
tmp_kw_call_dict_value_0_1 = var_mdescr;
frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask->m_frame.f_lineno = 71;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_fdmask == NULL);
var_fdmask = tmp_assign_source_6;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_assattr_target_1;
tmp_mult_expr_left_1 = MAKE_LIST1(tstate, Py_False);
CHECK_OBJECT(var_mdescr);
tmp_len_arg_1 = var_mdescr;
tmp_mult_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 72;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_arg_1 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
assert(!(tmp_tuple_arg_1 == NULL));
tmp_assattr_value_1 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_fdmask);
tmp_assattr_target_1 = var_fdmask;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_flat, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask,
    type_description_1,
    par_self,
    var_mdescr,
    var_fdmask
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask == cache_frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask);
    cache_frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__2__get_fieldmask);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_fdmask);
tmp_return_value = var_fdmask;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_mdescr);
CHECK_OBJECT(var_mdescr);
Py_DECREF(var_mdescr);
var_mdescr = NULL;
CHECK_OBJECT(var_fdmask);
CHECK_OBJECT(var_fdmask);
Py_DECREF(var_fdmask);
var_fdmask = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_mdescr);
var_mdescr = NULL;
Py_XDECREF(var_fdmask);
var_fdmask = NULL;
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


static PyObject *impl_numpy$ma$mrecords$$$function__3___new__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_shape = python_pars[1];
PyObject *par_dtype = python_pars[2];
PyObject *par_buf = python_pars[3];
PyObject *par_offset = python_pars[4];
PyObject *par_strides = python_pars[5];
PyObject *par_formats = python_pars[6];
PyObject *par_names = python_pars[7];
PyObject *par_titles = python_pars[8];
PyObject *par_byteorder = python_pars[9];
PyObject *par_aligned = python_pars[10];
PyObject *par_mask = python_pars[11];
PyObject *par_hard_mask = python_pars[12];
PyObject *par_fill_value = python_pars[13];
PyObject *par_keep_mask = python_pars[14];
PyObject *par_copy = python_pars[15];
PyObject *par_options = python_pars[16];
PyObject *var_self = NULL;
PyObject *var_mdtype = NULL;
PyObject *var_nd = NULL;
PyObject *var_nm = NULL;
PyObject *var_msg = NULL;
PyObject *var__mask = NULL;
PyObject *outline_0_var_m = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__3___new__;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__3___new__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__3___new__)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__3___new__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__3___new__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__3___new__ = MAKE_FUNCTION_FRAME(tstate, code_objects_81769aa09c5fbc4f8fbf4f1dec104207, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__3___new__->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__3___new__ = cache_frame_frame_numpy$ma$mrecords$$$function__3___new__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__3___new__);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__3___new__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
tmp_expression_value_2 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_recarray);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___new__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_kw_call_arg_value_0_1 = par_cls;
CHECK_OBJECT(par_shape);
tmp_kw_call_arg_value_1_1 = par_shape;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_0_1 = par_dtype;
CHECK_OBJECT(par_buf);
tmp_kw_call_dict_value_1_1 = par_buf;
CHECK_OBJECT(par_offset);
tmp_kw_call_dict_value_2_1 = par_offset;
CHECK_OBJECT(par_strides);
tmp_kw_call_dict_value_3_1 = par_strides;
CHECK_OBJECT(par_formats);
tmp_kw_call_dict_value_4_1 = par_formats;
CHECK_OBJECT(par_names);
tmp_kw_call_dict_value_5_1 = par_names;
CHECK_OBJECT(par_titles);
tmp_kw_call_dict_value_6_1 = par_titles;
CHECK_OBJECT(par_byteorder);
tmp_kw_call_dict_value_7_1 = par_byteorder;
CHECK_OBJECT(par_aligned);
tmp_kw_call_dict_value_8_1 = par_aligned;
frame_frame_numpy$ma$mrecords$$$function__3___new__->m_frame.f_lineno = 101;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[9] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_25718b0597d86bff74b411964a7f1ec0_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_self == NULL);
var_self = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_make_mask_descr);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_self);
tmp_expression_value_4 = var_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_dtype);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 106;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__3___new__->m_frame.f_lineno = 106;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_mdtype == NULL);
var_mdtype = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_mask);
tmp_cmp_expr_left_1 = par_mask;
tmp_expression_value_5 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_nomask);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_instance_1 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mask);
tmp_args_element_value_2 = par_mask;
frame_frame_numpy$ma$mrecords$$$function__3___new__->m_frame.f_lineno = 107;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_size, tmp_args_element_value_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_keep_mask);
tmp_operand_value_2 = par_keep_mask;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooooooooooooooooooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_assattr_target_1;
tmp_mult_expr_left_1 = MAKE_LIST1(tstate, Py_False);
CHECK_OBJECT(var_mdtype);
tmp_len_arg_1 = var_mdtype;
tmp_mult_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 109;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_arg_1 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
assert(!(tmp_tuple_arg_1 == NULL));
tmp_assattr_value_1 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_self);
tmp_assattr_target_1 = var_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__mask, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_expression_value_6 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_array);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mask);
tmp_kw_call_arg_value_0_2 = par_mask;
CHECK_OBJECT(par_copy);
tmp_kw_call_dict_value_0_2 = par_copy;
frame_frame_numpy$ma$mrecords$$$function__3___new__->m_frame.f_lineno = 111;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_copy_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_mask;
    assert(old != NULL);
    par_mask = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_mask);
tmp_expression_value_7 = par_mask;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_shape);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_self);
tmp_expression_value_8 = var_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_shape);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 112;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_self);
tmp_expression_value_9 = var_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_size);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_10;
PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_mask);
tmp_expression_value_10 = par_mask;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_size);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_iter_arg_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_4 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_4 == NULL));
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
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
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
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
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
assert(var_nd == NULL);
Py_INCREF(tmp_assign_source_7);
var_nd = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
assert(var_nm == NULL);
Py_INCREF(tmp_assign_source_8);
var_nm = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_nm);
tmp_cmp_expr_left_3 = var_nm;
tmp_cmp_expr_right_3 = const_int_pos_1;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_12;
tmp_expression_value_11 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_resize);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mask);
tmp_args_element_value_3 = par_mask;
CHECK_OBJECT(var_self);
tmp_expression_value_12 = var_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 115;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__3___new__->m_frame.f_lineno = 115;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_mask;
    assert(old != NULL);
    par_mask = tmp_assign_source_9;
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_nm);
tmp_cmp_expr_left_4 = var_nm;
CHECK_OBJECT(var_nd);
tmp_cmp_expr_right_4 = var_nd;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_14;
tmp_expression_value_13 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_reshape);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mask);
tmp_args_element_value_5 = par_mask;
CHECK_OBJECT(var_self);
tmp_expression_value_14 = var_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 117;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__3___new__->m_frame.f_lineno = 117;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_mask;
    assert(old != NULL);
    par_mask = tmp_assign_source_10;
    Py_DECREF(old);
}

}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_00945b49c359db5f3c350d47cdf6a82f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_nd);
tmp_format_value_1 = var_nd;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_a33a7f2ea77534fc656fc93a26bbac49;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_11 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_11 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_11;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_7;
tmp_called_instance_2 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_msg);
tmp_args_element_value_7 = var_msg;
frame_frame_numpy$ma$mrecords$$$function__3___new__->m_frame.f_lineno = 121;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_MAError, tmp_args_element_value_7);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 121;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_5:;
branch_end_4:;
branch_no_3:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(par_keep_mask);
tmp_operand_value_3 = par_keep_mask;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooooooooooooooooo";
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
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(var_self);
tmp_expression_value_15 = var_self;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___setmask__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_mask == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_8 = par_mask;
frame_frame_numpy$ma$mrecords$$$function__3___new__->m_frame.f_lineno = 123;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_True;
CHECK_OBJECT(var_self);
tmp_assattr_target_2 = var_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__sharedmask, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_16;
if (par_mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 126;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = par_mask;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_dtype);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mdtype);
tmp_cmp_expr_right_5 = var_mdtype;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_12;
if (par_mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 127;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_12 = par_mask;
assert(var__mask == NULL);
Py_INCREF(tmp_assign_source_12);
var__mask = tmp_assign_source_12;
}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
tmp_expression_value_17 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_array);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_2;
if (par_mask == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 129;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_iter_arg_2 = par_mask;
tmp_assign_source_14 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_15;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
exception_lineno = 129;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_17 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_m;
    outline_0_var_m = tmp_assign_source_17;
    Py_INCREF(outline_0_var_m);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_tuple_arg_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_list_element_1;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_m);
tmp_list_element_1 = outline_0_var_m;
tmp_mult_expr_left_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_mult_expr_left_2, 0, tmp_list_element_1);
CHECK_OBJECT(var_mdtype);
tmp_len_arg_2 = var_mdtype;
tmp_mult_expr_right_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 129;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_tuple_arg_2 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
assert(!(tmp_tuple_arg_2 == NULL));
tmp_append_value_1 = PySequence_Tuple(tmp_tuple_arg_2);
CHECK_OBJECT(tmp_tuple_arg_2);
Py_DECREF(tmp_tuple_arg_2);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_kw_call_arg_value_0_3 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_kw_call_arg_value_0_3);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
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
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_0_var_m);
outline_0_var_m = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_m);
outline_0_var_m = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 129;
goto frame_exception_exit_1;
outline_result_1:;
CHECK_OBJECT(var_mdtype);
tmp_kw_call_dict_value_0_3 = var_mdtype;
frame_frame_numpy$ma$mrecords$$$function__3___new__->m_frame.f_lineno = 129;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_0_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__mask == NULL);
var__mask = tmp_assign_source_13;
}
branch_end_7:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var__mask);
tmp_assattr_value_3 = var__mask;
CHECK_OBJECT(var_self);
tmp_assattr_target_3 = var_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__mask, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_end_6:;
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__3___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__3___new__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__3___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__3___new__,
    type_description_1,
    par_cls,
    par_shape,
    par_dtype,
    par_buf,
    par_offset,
    par_strides,
    par_formats,
    par_names,
    par_titles,
    par_byteorder,
    par_aligned,
    par_mask,
    par_hard_mask,
    par_fill_value,
    par_keep_mask,
    par_copy,
    par_options,
    var_self,
    var_mdtype,
    var_nd,
    var_nm,
    var_msg,
    var__mask
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__3___new__ == cache_frame_frame_numpy$ma$mrecords$$$function__3___new__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__3___new__);
    cache_frame_frame_numpy$ma$mrecords$$$function__3___new__ = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__3___new__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_self);
tmp_return_value = var_self;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_mask);
par_mask = NULL;
CHECK_OBJECT(var_self);
CHECK_OBJECT(var_self);
Py_DECREF(var_self);
var_self = NULL;
CHECK_OBJECT(var_mdtype);
CHECK_OBJECT(var_mdtype);
Py_DECREF(var_mdtype);
var_mdtype = NULL;
Py_XDECREF(var_nd);
var_nd = NULL;
Py_XDECREF(var_nm);
var_nm = NULL;
Py_XDECREF(var__mask);
var__mask = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_mask);
par_mask = NULL;
Py_XDECREF(var_self);
var_self = NULL;
Py_XDECREF(var_mdtype);
var_mdtype = NULL;
Py_XDECREF(var_nd);
var_nd = NULL;
Py_XDECREF(var_nm);
var_nm = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var__mask);
var__mask = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_shape);
Py_DECREF(par_shape);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);
CHECK_OBJECT(par_offset);
Py_DECREF(par_offset);
CHECK_OBJECT(par_strides);
Py_DECREF(par_strides);
CHECK_OBJECT(par_formats);
Py_DECREF(par_formats);
CHECK_OBJECT(par_names);
Py_DECREF(par_names);
CHECK_OBJECT(par_titles);
Py_DECREF(par_titles);
CHECK_OBJECT(par_byteorder);
Py_DECREF(par_byteorder);
CHECK_OBJECT(par_aligned);
Py_DECREF(par_aligned);
CHECK_OBJECT(par_hard_mask);
Py_DECREF(par_hard_mask);
CHECK_OBJECT(par_fill_value);
Py_DECREF(par_fill_value);
CHECK_OBJECT(par_keep_mask);
Py_DECREF(par_keep_mask);
CHECK_OBJECT(par_copy);
Py_DECREF(par_copy);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_shape);
Py_DECREF(par_shape);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);
CHECK_OBJECT(par_offset);
Py_DECREF(par_offset);
CHECK_OBJECT(par_strides);
Py_DECREF(par_strides);
CHECK_OBJECT(par_formats);
Py_DECREF(par_formats);
CHECK_OBJECT(par_names);
Py_DECREF(par_names);
CHECK_OBJECT(par_titles);
Py_DECREF(par_titles);
CHECK_OBJECT(par_byteorder);
Py_DECREF(par_byteorder);
CHECK_OBJECT(par_aligned);
Py_DECREF(par_aligned);
CHECK_OBJECT(par_hard_mask);
Py_DECREF(par_hard_mask);
CHECK_OBJECT(par_fill_value);
Py_DECREF(par_fill_value);
CHECK_OBJECT(par_keep_mask);
Py_DECREF(par_keep_mask);
CHECK_OBJECT(par_copy);
Py_DECREF(par_copy);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$ma$mrecords$$$function__4___array_finalize__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_obj = python_pars[1];
PyObject *var__mask = NULL;
PyObject *var_objmask = NULL;
PyObject *var__dtype = NULL;
PyObject *var_mdescr = NULL;
PyObject *var__dict = NULL;
PyObject *outline_0_var_m = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3b120a39ec67a9e6ea67b057e6c414c2, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__ = cache_frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_obj);
tmp_expression_value_1 = par_obj;
tmp_name_value_1 = mod_consts.const_str_plain__mask;
tmp_default_value_1 = Py_None;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var__mask == NULL);
var__mask = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var__mask);
tmp_cmp_expr_left_1 = var__mask;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_obj);
tmp_expression_value_2 = par_obj;
tmp_name_value_2 = mod_consts.const_str_plain__mask;
tmp_expression_value_3 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_default_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_nomask);
if (tmp_default_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_2, tmp_default_value_2);
CHECK_OBJECT(tmp_default_value_2);
Py_DECREF(tmp_default_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_objmask == NULL);
var_objmask = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_4 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
tmp_args_element_value_2 = mod_consts.const_str_plain_dtype;
frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__->m_frame.f_lineno = 139;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain___getattribute__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var__dtype == NULL);
var__dtype = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_objmask);
tmp_cmp_expr_left_2 = var_objmask;
tmp_expression_value_5 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_nomask);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_6 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_make_mask_none);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_shape);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 141;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__dtype);
tmp_kw_call_dict_value_0_1 = var__dtype;
frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__->m_frame.f_lineno = 141;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var__mask;
    assert(old != NULL);
    var__mask = tmp_assign_source_4;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__dtype);
tmp_args_element_value_3 = var__dtype;
frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__->m_frame.f_lineno = 143;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_make_mask_descr, tmp_args_element_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_mdescr == NULL);
var_mdescr = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_10;
tmp_expression_value_9 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_array);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_objmask);
tmp_iter_arg_1 = var_objmask;
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_8;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooo";
exception_lineno = 144;
        goto try_except_handler_3;
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
    PyObject *old = outline_0_var_m;
    outline_0_var_m = tmp_assign_source_10;
    Py_INCREF(outline_0_var_m);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_list_element_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_m);
tmp_list_element_1 = outline_0_var_m;
tmp_mult_expr_left_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_mult_expr_left_1, 0, tmp_list_element_1);
CHECK_OBJECT(var_mdescr);
tmp_len_arg_1 = var_mdescr;
tmp_mult_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 144;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
tmp_tuple_arg_1 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
assert(!(tmp_tuple_arg_1 == NULL));
tmp_append_value_1 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_kw_call_arg_value_0_2 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_kw_call_arg_value_0_2);
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
Py_XDECREF(outline_0_var_m);
outline_0_var_m = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_m);
outline_0_var_m = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 144;
goto frame_exception_exit_1;
outline_result_1:;
CHECK_OBJECT(var_mdescr);
tmp_kw_call_dict_value_0_2 = var_mdescr;
frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__->m_frame.f_lineno = 144;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_expression_value_8 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_view);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_10 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 145;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_recarray);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 145;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__->m_frame.f_lineno = 144;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var__mask;
    assert(old != NULL);
    var__mask = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_end_2:;
branch_no_1:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_assign_source_11 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_11);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var__dict == NULL);
var__dict = tmp_assign_source_11;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(var__dict);
tmp_expression_value_12 = var__dict;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_update);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__mask);
tmp_kw_call_value_0_1 = var__mask;
frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__->m_frame.f_lineno = 148;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain__mask_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(par_obj);
tmp_args_element_value_5 = par_obj;
frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__->m_frame.f_lineno = 149;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain__update_from, tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var__dict);
tmp_expression_value_13 = var__dict;
tmp_subscript_value_1 = mod_consts.const_str_plain__baseclass;
tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_14 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 150;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_ndarray);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 150;
type_description_1 = "ooooooo";
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


exception_lineno = 150;
type_description_1 = "ooooooo";
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_expression_value_15 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_recarray);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__dict);
tmp_ass_subscribed_1 = var__dict;
tmp_ass_subscript_1 = mod_consts.const_str_plain__baseclass;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__,
    type_description_1,
    par_self,
    par_obj,
    var__mask,
    var_objmask,
    var__dtype,
    var_mdescr,
    var__dict
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__ == cache_frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__);
    cache_frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__ = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__4___array_finalize__);

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
CHECK_OBJECT(var__mask);
CHECK_OBJECT(var__mask);
Py_DECREF(var__mask);
var__mask = NULL;
Py_XDECREF(var_objmask);
var_objmask = NULL;
Py_XDECREF(var__dtype);
var__dtype = NULL;
Py_XDECREF(var_mdescr);
var_mdescr = NULL;
CHECK_OBJECT(var__dict);
CHECK_OBJECT(var__dict);
Py_DECREF(var__dict);
var__dict = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__mask);
var__mask = NULL;
Py_XDECREF(var_objmask);
var_objmask = NULL;
Py_XDECREF(var__dtype);
var__dtype = NULL;
Py_XDECREF(var_mdescr);
var_mdescr = NULL;
Py_XDECREF(var__dict);
var__dict = NULL;
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


static PyObject *impl_numpy$ma$mrecords$$$function__5__data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__5__data;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__5__data = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__5__data)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__5__data);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__5__data == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__5__data = MAKE_FUNCTION_FRAME(tstate, code_objects_ef9b96cd439bc7f27edf00bfa38f40b7, module_numpy$ma$mrecords, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__5__data->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__5__data = cache_frame_frame_numpy$ma$mrecords$$$function__5__data;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__5__data);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__5__data) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_view);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
tmp_expression_value_3 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 159;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_recarray);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 159;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__5__data->m_frame.f_lineno = 159;
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


exception_lineno = 159;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__5__data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__5__data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__5__data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__5__data,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__5__data == cache_frame_frame_numpy$ma$mrecords$$$function__5__data) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__5__data);
    cache_frame_frame_numpy$ma$mrecords$$$function__5__data = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__5__data);

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


static PyObject *impl_numpy$ma$mrecords$$$function__6__fieldmask(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__6__fieldmask;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__6__fieldmask = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__6__fieldmask)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__6__fieldmask);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__6__fieldmask == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__6__fieldmask = MAKE_FUNCTION_FRAME(tstate, code_objects_21ba47221a9abea0683e0b715f8f2190, module_numpy$ma$mrecords, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__6__fieldmask->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__6__fieldmask = cache_frame_frame_numpy$ma$mrecords$$$function__6__fieldmask;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__6__fieldmask);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__6__fieldmask) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__mask);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__6__fieldmask, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__6__fieldmask->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__6__fieldmask, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__6__fieldmask,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__6__fieldmask == cache_frame_frame_numpy$ma$mrecords$$$function__6__fieldmask) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__6__fieldmask);
    cache_frame_frame_numpy$ma$mrecords$$$function__6__fieldmask = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__6__fieldmask);

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


static PyObject *impl_numpy$ma$mrecords$$$function__7___len__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__7___len__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__7___len__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__7___len__)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__7___len__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__7___len__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__7___len__ = MAKE_FUNCTION_FRAME(tstate, code_objects_342a5b977809501f299cce0193d39874, module_numpy$ma$mrecords, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__7___len__->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__7___len__ = cache_frame_frame_numpy$ma$mrecords$$$function__7___len__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__7___len__);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__7___len__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndim);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 175;
type_description_1 = "o";
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
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__data);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__7___len__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__7___len__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__7___len__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__7___len__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__7___len__ == cache_frame_frame_numpy$ma$mrecords$$$function__7___len__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__7___len__);
    cache_frame_frame_numpy$ma$mrecords$$$function__7___len__ = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__7___len__);

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


static PyObject *impl_numpy$ma$mrecords$$$function__8___getattribute__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_attr = python_pars[1];
PyObject *var_fielddict = NULL;
PyObject *var_res = NULL;
PyObject *var_e = NULL;
PyObject *var__localdict = NULL;
PyObject *var__data = NULL;
PyObject *var_obj = NULL;
PyObject *var_hasmasked = NULL;
PyObject *var__mask = NULL;
PyObject *var_tp_len = NULL;
PyObject *var__fill_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__8___getattribute__;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__8___getattribute__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__8___getattribute__)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__8___getattribute__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__8___getattribute__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__8___getattribute__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c7984d2a893214810f026820e8758edd, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__8___getattribute__ = cache_frame_frame_numpy$ma$mrecords$$$function__8___getattribute__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__8___getattribute__);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__8___getattribute__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_attr);
tmp_args_element_value_2 = par_attr;
frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = 182;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain___getattribute__,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__8___getattribute__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__8___getattribute__, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
    exception_lineno = 181;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame)) {
        frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooo";
goto try_except_handler_3;
branch_no_1:;
goto try_end_1;
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
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_2 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
tmp_args_element_value_4 = mod_consts.const_str_plain_dtype;
frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = 186;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_expression_value_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain___getattribute__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_fields);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_fielddict == NULL);
var_fielddict = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_fielddict);
tmp_expression_value_4 = var_fielddict;
CHECK_OBJECT(par_attr);
tmp_subscript_value_1 = par_attr;
tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
tmp_subscript_value_2 = mod_consts.const_slice_none_int_pos_2_none;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
assert(var_res == NULL);
var_res = tmp_assign_source_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__8___getattribute__, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__8___getattribute__, exception_keeper_lineno_3);
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
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_TypeError_type_KeyError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
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
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_3);
var_e = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_raise_cause_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_fff4ab4551f9666d83eaf3360a5a7db9;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_attr);
tmp_format_value_1 = par_attr;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = 190;
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


exception_lineno = 190;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 191;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooooo";
goto try_except_handler_6;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 187;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame)) {
        frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooo";
goto try_except_handler_5;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_5 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_5 = par_self;
tmp_args_element_value_6 = const_str_plain___dict__;
frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = 193;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain___getattribute__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__localdict == NULL);
var__localdict = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
tmp_expression_value_7 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_view);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_7 = par_self;
CHECK_OBJECT(var__localdict);
tmp_expression_value_8 = var__localdict;
tmp_subscript_value_3 = mod_consts.const_str_plain__baseclass;
tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 194;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = 194;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__data == NULL);
var__data = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_direct_call_arg2_1;
CHECK_OBJECT(var__data);
tmp_expression_value_9 = var__data;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_getfield);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_res);
tmp_direct_call_arg2_1 = var_res;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_6 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_obj == NULL);
var_obj = tmp_assign_source_6;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_obj);
tmp_expression_value_11 = var_obj;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_names);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_7353e29abe9415b3536b6964da1d1938;
frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = 197;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 197;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
assert(var_hasmasked == NULL);
Py_INCREF(tmp_assign_source_7);
var_hasmasked = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var__localdict);
tmp_expression_value_12 = var__localdict;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = 202;
tmp_assign_source_8 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain__mask_none_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__mask == NULL);
var__mask = tmp_assign_source_8;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var__mask);
tmp_cmp_expr_left_4 = var__mask;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var__mask);
tmp_expression_value_13 = var__mask;
CHECK_OBJECT(par_attr);
tmp_subscript_value_4 = par_attr;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var__mask;
    assert(old != NULL);
    var__mask = tmp_assign_source_9;
    Py_DECREF(old);
}

}
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__8___getattribute__, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__8___getattribute__, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_6);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_IndexError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
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
    exception_lineno = 204;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame)) {
        frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooo";
goto try_except_handler_8;
branch_no_5:;
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_4;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_4:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var__mask);
tmp_expression_value_14 = var__mask;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_dtype);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_tp_len == NULL);
var_tp_len = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_9;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var__mask);
tmp_expression_value_15 = var__mask;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_view);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = (PyObject *)&PyBool_Type;
tmp_args_element_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
bool tmp_condition_result_6;
PyObject *tmp_tuple_element_3;
PyTuple_SET_ITEM0(tmp_args_element_value_9, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_tp_len);
tmp_condition_result_6 = CHECK_IF_TRUE(var_tp_len) == 1;
if (tmp_condition_result_6 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_tp_len);
tmp_tuple_element_3 = var_tp_len;
tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_tuple_element_2, 0, tmp_tuple_element_3);
goto condexpr_end_1;
condexpr_false_1:;
tmp_tuple_element_2 = const_tuple_empty;
Py_INCREF(tmp_tuple_element_2);
condexpr_end_1:;
PyTuple_SET_ITEM(tmp_args_element_value_9, 1, tmp_tuple_element_2);
}
frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = 210;
tmp_called_instance_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = 210;
tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_any);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_hasmasked;
    assert(old != NULL);
    var_hasmasked = tmp_assign_source_11;
    Py_DECREF(old);
}

}
branch_no_4:;
{
nuitka_bool tmp_condition_result_7;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
int tmp_truth_name_2;
CHECK_OBJECT(var_obj);
tmp_expression_value_16 = var_obj;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_shape);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 211;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_hasmasked);
tmp_truth_name_2 = CHECK_IF_TRUE(var_hasmasked);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_7 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_7 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(var_obj);
tmp_expression_value_17 = var_obj;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_view);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_18 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 212;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_MaskedArray);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 212;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = 212;
tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_obj;
    assert(old != NULL);
    var_obj = tmp_assign_source_12;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_19;
PyObject *tmp_assattr_target_1;
tmp_expression_value_19 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_ndarray);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_obj);
tmp_assattr_target_1 = var_obj;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__baseclass, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_True;
CHECK_OBJECT(var_obj);
tmp_assattr_target_2 = var_obj;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__isfield, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
if (var__mask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 215;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_3 = var__mask;
CHECK_OBJECT(var_obj);
tmp_assattr_target_3 = var_obj;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__mask, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(var__localdict);
tmp_expression_value_20 = var__localdict;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = 217;
tmp_assign_source_13 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain__fill_value_none_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__fill_value == NULL);
var__fill_value = tmp_assign_source_13;
}
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var__fill_value);
tmp_cmp_expr_left_6 = var__fill_value;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
// Tried code:
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_5;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(var__fill_value);
tmp_expression_value_21 = var__fill_value;
CHECK_OBJECT(par_attr);
tmp_subscript_value_5 = par_attr;
tmp_assattr_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_5);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_obj);
tmp_assattr_target_4 = var_obj;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__fill_value, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooooooooo";
    goto try_except_handler_9;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 4.
exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__8___getattribute__, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__8___getattribute__, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_8);
// Tried code:
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
tmp_cmp_expr_right_7 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
assert(!(tmp_res == -1));
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_None;
CHECK_OBJECT(var_obj);
tmp_assattr_target_5 = var_obj;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__fill_value, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooooooooo";
    goto try_except_handler_10;
}
}
goto branch_end_8;
branch_no_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 219;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame)) {
        frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooo";
goto try_except_handler_10;
branch_end_8:;
goto try_end_7;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

goto try_end_6;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_6:;
branch_no_7:;
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(var_obj);
tmp_called_instance_5 = var_obj;
frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame.f_lineno = 224;
tmp_assign_source_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_item);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_obj;
    assert(old != NULL);
    var_obj = tmp_assign_source_14;
    Py_DECREF(old);
}

}
branch_end_6:;
if (var_obj == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_obj);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 225;
type_description_1 = "oooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__8___getattribute__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__8___getattribute__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__8___getattribute__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__8___getattribute__,
    type_description_1,
    par_self,
    par_attr,
    var_fielddict,
    var_res,
    var_e,
    var__localdict,
    var__data,
    var_obj,
    var_hasmasked,
    var__mask,
    var_tp_len,
    var__fill_value
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__8___getattribute__ == cache_frame_frame_numpy$ma$mrecords$$$function__8___getattribute__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__8___getattribute__);
    cache_frame_frame_numpy$ma$mrecords$$$function__8___getattribute__ = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__8___getattribute__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_fielddict);
var_fielddict = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var__localdict);
var__localdict = NULL;
Py_XDECREF(var__data);
var__data = NULL;
Py_XDECREF(var_obj);
var_obj = NULL;
Py_XDECREF(var_hasmasked);
var_hasmasked = NULL;
Py_XDECREF(var__mask);
var__mask = NULL;
Py_XDECREF(var_tp_len);
var_tp_len = NULL;
Py_XDECREF(var__fill_value);
var__fill_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_fielddict);
var_fielddict = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var__localdict);
var__localdict = NULL;
Py_XDECREF(var__data);
var__data = NULL;
Py_XDECREF(var_obj);
var_obj = NULL;
Py_XDECREF(var_hasmasked);
var_hasmasked = NULL;
Py_XDECREF(var__mask);
var__mask = NULL;
Py_XDECREF(var_tp_len);
var_tp_len = NULL;
Py_XDECREF(var__fill_value);
var__fill_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto function_exception_exit;
// End of try:

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

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_attr);
Py_DECREF(par_attr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$ma$mrecords$$$function__9___setattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_attr = python_pars[1];
PyObject *par_val = python_pars[2];
PyObject *var__localdict = NULL;
nuitka_bool var_newattr = NUITKA_BOOL_UNASSIGNED;
PyObject *var_ret = NULL;
PyObject *var_fielddict = NULL;
PyObject *var_optinfo = NULL;
PyObject *var_res = NULL;
PyObject *var_e = NULL;
PyObject *var__fill_value = NULL;
PyObject *var_dval = NULL;
PyObject *var_mval = NULL;
PyObject *var_obj = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__9___setattr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__9___setattr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__9___setattr__)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__9___setattr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__9___setattr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__9___setattr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_73740bb4d286722d4bc9230a6d1da129, module_numpy$ma$mrecords, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__9___setattr__ = cache_frame_frame_numpy$ma$mrecords$$$function__9___setattr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__9___setattr__);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__9___setattr__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_attr);
tmp_cmp_expr_left_1 = par_attr;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_str_plain_mask_str_plain_fieldmask_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oooobooooooooo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_val);
tmp_args_element_value_1 = par_val;
frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = 234;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain___setmask__, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
tmp_args_element_value_3 = const_str_plain___dict__;
frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = 237;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain___getattribute__,
        call_args
    );
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
assert(var__localdict == NULL);
var__localdict = tmp_assign_source_1;
}
{
nuitka_bool tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_attr);
tmp_cmp_expr_left_2 = par_attr;
CHECK_OBJECT(var__localdict);
tmp_cmp_expr_right_2 = var__localdict;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
var_newattr = tmp_assign_source_2;
}
{
nuitka_bool tmp_assign_source_3;
tmp_assign_source_3 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_instance_3 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_4 = par_self;
CHECK_OBJECT(par_attr);
tmp_args_element_value_5 = par_attr;
CHECK_OBJECT(par_val);
tmp_args_element_value_6 = par_val;
frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = 242;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain___setattr__,
        call_args
    );
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_2;
}
assert(var_ret == NULL);
var_ret = tmp_assign_source_4;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_5;
}
// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__9___setattr__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__9___setattr__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_Exception;
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
PyObject *tmp_assign_source_6;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_expression_value_2 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_3;
}
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_7 = par_self;
tmp_args_element_value_8 = mod_consts.const_str_plain_dtype;
frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = 245;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_expression_value_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain___getattribute__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_3;
}
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_fields);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_3;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 245;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_3;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_assign_source_6 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_6 = tmp_or_left_value_1;
or_end_1:;
assert(var_fielddict == NULL);
var_fielddict = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_called_instance_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_expression_value_3 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_3;
}
tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_9 = par_self;
tmp_args_element_value_10 = mod_consts.const_str_plain__optinfo;
frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = 246;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_or_left_value_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain___getattribute__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_3;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 246;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_3;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_or_right_value_2 = MAKE_DICT_EMPTY(tstate);
tmp_assign_source_7 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assign_source_7 = tmp_or_left_value_2;
or_end_2:;
assert(var_optinfo == NULL);
var_optinfo = tmp_assign_source_7;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_attr);
tmp_cmp_expr_left_4 = par_attr;
CHECK_OBJECT(var_fielddict);
tmp_cmp_expr_right_4 = var_fielddict;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_3;
}
tmp_or_left_value_3 = (tmp_res == 1) ? Py_True : Py_False;
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(par_attr);
tmp_cmp_expr_left_5 = par_attr;
CHECK_OBJECT(var_optinfo);
tmp_cmp_expr_right_5 = var_optinfo;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_3;
}
tmp_or_right_value_3 = (tmp_res == 1) ? Py_True : Py_False;
tmp_operand_value_1 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_operand_value_1 = tmp_or_left_value_3;
or_end_3:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 248;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame)) {
        frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooobooooooooo";
goto try_except_handler_3;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 240;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame)) {
        frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooobooooooooo";
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
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_8;
int tmp_or_left_truth_4;
PyObject *tmp_or_left_value_4;
PyObject *tmp_or_right_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_expression_value_5 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_11 = par_self;
tmp_args_element_value_12 = mod_consts.const_str_plain_dtype;
frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = 251;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_expression_value_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_6,
        mod_consts.const_str_plain___getattribute__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_fields);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_or_left_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_4);

exception_lineno = 251;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(tmp_or_left_value_4);
Py_DECREF(tmp_or_left_value_4);
tmp_or_right_value_4 = MAKE_DICT_EMPTY(tstate);
tmp_assign_source_8 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_assign_source_8 = tmp_or_left_value_4;
or_end_4:;
{
    PyObject *old = var_fielddict;
    var_fielddict = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(par_attr);
tmp_cmp_expr_left_7 = par_attr;
CHECK_OBJECT(var_fielddict);
tmp_cmp_expr_right_7 = var_fielddict;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
if (var_ret == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ret);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 254;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_ret;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
{
bool tmp_condition_result_6;
assert(var_newattr != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_6 = var_newattr == NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
// Tried code:
{
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_instance_7 = (PyObject *)&PyBaseObject_Type;
CHECK_OBJECT(par_self);
tmp_args_element_value_13 = par_self;
CHECK_OBJECT(par_attr);
tmp_args_element_value_14 = par_attr;
frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = 259;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_7,
        mod_consts.const_str_plain___delattr__,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__9___setattr__, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__9___setattr__, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = EXC_TYPE(tstate);
tmp_cmp_expr_right_8 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
if (var_ret == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ret);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 261;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_5;
}

tmp_return_value = var_ret;
Py_INCREF(tmp_return_value);
goto try_return_handler_5;
goto branch_end_7;
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 258;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame)) {
        frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooobooooooooo";
goto try_except_handler_5;
branch_end_7:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto frame_return_exit_1;
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
// End of try:
try_end_3:;
branch_no_6:;
branch_no_4:;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_value_2;
if (var_fielddict == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fielddict);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 264;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_6;
}

tmp_expression_value_7 = var_fielddict;
CHECK_OBJECT(par_attr);
tmp_subscript_value_1 = par_attr;
tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_6;
}
tmp_subscript_value_2 = mod_consts.const_slice_none_int_pos_2_none;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_6;
}
assert(var_res == NULL);
var_res = tmp_assign_source_9;
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__9___setattr__, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__9___setattr__, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_cmp_expr_right_9 = mod_consts.const_tuple_type_TypeError_type_KeyError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_10); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_10);
var_e = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_raise_cause_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_fff4ab4551f9666d83eaf3360a5a7db9;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_attr);
tmp_format_value_1 = par_attr;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oooobooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = 266;
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


exception_lineno = 266;
type_description_1 = "oooobooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 267;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooobooooooooo";
goto try_except_handler_8;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
goto branch_end_8;
branch_no_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 263;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame)) {
        frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooobooooooooo";
goto try_except_handler_7;
branch_end_8:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_4:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_val);
tmp_cmp_expr_left_10 = par_val;
tmp_expression_value_8 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_masked);
if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_right_10);
Py_DECREF(tmp_cmp_expr_right_10);
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var__localdict);
tmp_expression_value_9 = var__localdict;
tmp_subscript_value_3 = mod_consts.const_str_plain__fill_value;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
assert(var__fill_value == NULL);
var__fill_value = tmp_assign_source_11;
}
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(var__fill_value);
tmp_cmp_expr_left_11 = var__fill_value;
tmp_cmp_expr_right_11 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_4;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(var__localdict);
tmp_expression_value_11 = var__localdict;
tmp_subscript_value_4 = mod_consts.const_str_plain__fill_value;
tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_4);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_attr);
tmp_subscript_value_5 = par_attr;
tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
assert(var_dval == NULL);
var_dval = tmp_assign_source_12;
}
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(par_val);
tmp_assign_source_13 = par_val;
assert(var_dval == NULL);
Py_INCREF(tmp_assign_source_13);
var_dval = tmp_assign_source_13;
}
branch_end_10:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = Py_True;
assert(var_mval == NULL);
Py_INCREF(tmp_assign_source_14);
var_mval = tmp_assign_source_14;
}
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_15;
tmp_called_instance_8 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 277;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_val);
tmp_args_element_value_15 = par_val;
frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = 277;
tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_filled, tmp_args_element_value_15);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
assert(var_dval == NULL);
var_dval = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_16;
tmp_called_instance_9 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_called_instance_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_called_instance_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 278;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_val);
tmp_args_element_value_16 = par_val;
frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = 278;
tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_getmaskarray, tmp_args_element_value_16);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
assert(var_mval == NULL);
var_mval = tmp_assign_source_16;
}
branch_end_9:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_called_instance_10;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_1;
tmp_expression_value_13 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_17 = par_self;
tmp_args_element_value_18 = mod_consts.const_str_plain__data;
frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = 279;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_expression_value_12 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_10,
        mod_consts.const_str_plain___getattribute__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_10);
Py_DECREF(tmp_called_instance_10);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_setfield);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dval);
tmp_tuple_element_2 = var_dval;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_res);
tmp_direct_call_arg3_1 = var_res;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_17 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
assert(var_obj == NULL);
var_obj = tmp_assign_source_17;
}
{
PyObject *tmp_called_instance_11;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_6;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
CHECK_OBJECT(var__localdict);
tmp_expression_value_14 = var__localdict;
tmp_subscript_value_6 = mod_consts.const_str_plain__mask;
tmp_called_instance_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_6);
if (tmp_called_instance_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_attr);
tmp_args_element_value_19 = par_attr;
CHECK_OBJECT(var_mval);
tmp_args_element_value_20 = var_mval;
frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame.f_lineno = 280;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_11,
        mod_consts.const_str_plain___setitem__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_11);
Py_DECREF(tmp_called_instance_11);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooobooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__9___setattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__9___setattr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__9___setattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__9___setattr__,
    type_description_1,
    par_self,
    par_attr,
    par_val,
    var__localdict,
    (int)var_newattr,
    var_ret,
    var_fielddict,
    var_optinfo,
    var_res,
    var_e,
    var__fill_value,
    var_dval,
    var_mval,
    var_obj
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__9___setattr__ == cache_frame_frame_numpy$ma$mrecords$$$function__9___setattr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__9___setattr__);
    cache_frame_frame_numpy$ma$mrecords$$$function__9___setattr__ = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__9___setattr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_obj);
tmp_return_value = var_obj;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var__localdict);
var__localdict = NULL;
var_newattr = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_ret);
var_ret = NULL;
Py_XDECREF(var_fielddict);
var_fielddict = NULL;
Py_XDECREF(var_optinfo);
var_optinfo = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var__fill_value);
var__fill_value = NULL;
Py_XDECREF(var_dval);
var_dval = NULL;
Py_XDECREF(var_mval);
var_mval = NULL;
Py_XDECREF(var_obj);
var_obj = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__localdict);
var__localdict = NULL;
var_newattr = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_ret);
var_ret = NULL;
Py_XDECREF(var_fielddict);
var_fielddict = NULL;
Py_XDECREF(var_optinfo);
var_optinfo = NULL;
Py_XDECREF(var_res);
var_res = NULL;
Py_XDECREF(var__fill_value);
var__fill_value = NULL;
Py_XDECREF(var_dval);
var_dval = NULL;
Py_XDECREF(var_mval);
var_mval = NULL;
Py_XDECREF(var_obj);
var_obj = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_attr);
Py_DECREF(par_attr);
CHECK_OBJECT(par_val);
Py_DECREF(par_val);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_attr);
Py_DECREF(par_attr);
CHECK_OBJECT(par_val);
Py_DECREF(par_val);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$ma$mrecords$$$function__10___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_indx = python_pars[1];
PyObject *var__localdict = NULL;
PyObject *var__mask = NULL;
PyObject *var__data = NULL;
PyObject *var_obj = NULL;
PyObject *var_fval = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__10___getitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__10___getitem__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__10___getitem__)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__10___getitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__10___getitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__10___getitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3308612a9a4a1c2c38b0c9d37e535674, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__10___getitem__->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__10___getitem__ = cache_frame_frame_numpy$ma$mrecords$$$function__10___getitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__10___getitem__);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__10___getitem__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var__localdict == NULL);
var__localdict = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_2 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
tmp_args_element_value_2 = mod_consts.const_str_plain__mask;
frame_frame_numpy$ma$mrecords$$$function__10___getitem__->m_frame.f_lineno = 291;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain___getattribute__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var__mask == NULL);
var__mask = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
tmp_expression_value_4 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_view);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
CHECK_OBJECT(var__localdict);
tmp_expression_value_5 = var__localdict;
tmp_subscript_value_1 = mod_consts.const_str_plain__baseclass;
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 292;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__10___getitem__->m_frame.f_lineno = 292;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var__data == NULL);
var__data = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_indx);
tmp_isinstance_inst_1 = par_indx;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var__data);
tmp_expression_value_7 = var__data;
CHECK_OBJECT(par_indx);
tmp_subscript_value_2 = par_indx;
tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_view);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 299;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_MaskedArray);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 299;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__10___getitem__->m_frame.f_lineno = 299;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_obj == NULL);
var_obj = tmp_assign_source_4;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var__mask);
tmp_expression_value_9 = var__mask;
CHECK_OBJECT(par_indx);
tmp_subscript_value_3 = par_indx;
tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_3);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_obj);
tmp_assattr_target_1 = var_obj;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__mask, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_True;
CHECK_OBJECT(var_obj);
tmp_assattr_target_2 = var_obj;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__sharedmask, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var__localdict);
tmp_expression_value_10 = var__localdict;
tmp_subscript_value_4 = mod_consts.const_str_plain__fill_value;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_fval == NULL);
var_fval = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_fval);
tmp_cmp_expr_left_1 = var_fval;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_5;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_fval);
tmp_expression_value_11 = var_fval;
CHECK_OBJECT(par_indx);
tmp_subscript_value_5 = par_indx;
tmp_assattr_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_5);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_obj);
tmp_assattr_target_3 = var_obj;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__fill_value, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_obj);
tmp_expression_value_12 = var_obj;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_ndim);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_obj);
tmp_expression_value_13 = var_obj;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__mask);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 306;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
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
PyObject *tmp_expression_value_14;
tmp_expression_value_14 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_masked);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
CHECK_OBJECT(var_obj);
tmp_return_value = var_obj;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_16 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_asarray);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__data);
tmp_expression_value_17 = var__data;
CHECK_OBJECT(par_indx);
tmp_subscript_value_6 = par_indx;
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_6);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 311;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__10___getitem__->m_frame.f_lineno = 311;
tmp_expression_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_view);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = module_var_accessor_numpy$ma$mrecords$mrecarray(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mrecarray);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 311;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__10___getitem__->m_frame.f_lineno = 311;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_obj == NULL);
var_obj = tmp_assign_source_6;
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_18;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_7;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_21;
PyObject *tmp_assattr_target_4;
tmp_expression_value_19 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 312;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_asarray);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__mask);
tmp_expression_value_20 = var__mask;
CHECK_OBJECT(par_indx);
tmp_subscript_value_7 = par_indx;
tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_7);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 312;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__10___getitem__->m_frame.f_lineno = 312;
tmp_expression_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_view);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_21 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 312;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_recarray);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 312;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__10___getitem__->m_frame.f_lineno = 312;
tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_obj);
tmp_assattr_target_4 = var_obj;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__mask, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__10___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__10___getitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__10___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__10___getitem__,
    type_description_1,
    par_self,
    par_indx,
    var__localdict,
    var__mask,
    var__data,
    var_obj,
    var_fval
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__10___getitem__ == cache_frame_frame_numpy$ma$mrecords$$$function__10___getitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__10___getitem__);
    cache_frame_frame_numpy$ma$mrecords$$$function__10___getitem__ = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__10___getitem__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_obj);
tmp_return_value = var_obj;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__localdict);
CHECK_OBJECT(var__localdict);
Py_DECREF(var__localdict);
var__localdict = NULL;
CHECK_OBJECT(var__mask);
CHECK_OBJECT(var__mask);
Py_DECREF(var__mask);
var__mask = NULL;
CHECK_OBJECT(var__data);
CHECK_OBJECT(var__data);
Py_DECREF(var__data);
var__data = NULL;
Py_XDECREF(var_obj);
var_obj = NULL;
Py_XDECREF(var_fval);
var_fval = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__localdict);
var__localdict = NULL;
Py_XDECREF(var__mask);
var__mask = NULL;
Py_XDECREF(var__data);
var__data = NULL;
Py_XDECREF(var_obj);
var_obj = NULL;
Py_XDECREF(var_fval);
var_fval = NULL;
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
CHECK_OBJECT(par_indx);
Py_DECREF(par_indx);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_indx);
Py_DECREF(par_indx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$ma$mrecords$$$function__11___setitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_indx = python_pars[1];
PyObject *par_value = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__11___setitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__11___setitem__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__11___setitem__)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__11___setitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__11___setitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__11___setitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b3924ce3588f8ba3764e512ca13d892a, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__11___setitem__->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__11___setitem__ = cache_frame_frame_numpy$ma$mrecords$$$function__11___setitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__11___setitem__);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__11___setitem__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 320;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_MaskedArray);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_indx);
tmp_args_element_value_2 = par_indx;
CHECK_OBJECT(par_value);
tmp_args_element_value_3 = par_value;
frame_frame_numpy$ma$mrecords$$$function__11___setitem__->m_frame.f_lineno = 320;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain___setitem__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_indx);
tmp_isinstance_inst_1 = par_indx;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooo";
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_ass_subscript_1;
tmp_called_instance_2 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_4 = par_value;
frame_frame_numpy$ma$mrecords$$$function__11___setitem__->m_frame.f_lineno = 322;
tmp_ass_subvalue_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getmaskarray, tmp_args_element_value_4);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__mask);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 322;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_indx);
tmp_ass_subscript_1 = par_indx;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__11___setitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__11___setitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__11___setitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__11___setitem__,
    type_description_1,
    par_self,
    par_indx,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__11___setitem__ == cache_frame_frame_numpy$ma$mrecords$$$function__11___setitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__11___setitem__);
    cache_frame_frame_numpy$ma$mrecords$$$function__11___setitem__ = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__11___setitem__);

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
CHECK_OBJECT(par_indx);
Py_DECREF(par_indx);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_indx);
Py_DECREF(par_indx);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$ma$mrecords$$$function__12___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_mstr = NULL;
PyObject *outline_0_var_s = NULL;
PyObject *outline_1_var_f = NULL;
PyObject *outline_2_var_i = NULL;
PyObject *outline_3_var_s = NULL;
PyObject *outline_4_var_f = NULL;
PyObject *outline_5_var_i = NULL;
PyObject *tmp_listcomp$listcomp_1__$0 = NULL;
PyObject *tmp_listcomp$listcomp_1__contraction = NULL;
PyObject *tmp_listcomp$listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp$listcomp_2__$0 = NULL;
PyObject *tmp_listcomp$listcomp_2__contraction = NULL;
PyObject *tmp_listcomp$listcomp_2__iter_value_0 = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
PyObject *tmp_listcomp_3__$0 = NULL;
PyObject *tmp_listcomp_3__contraction = NULL;
PyObject *tmp_listcomp_3__iter_value_0 = NULL;
PyObject *tmp_listcomp_4__$0 = NULL;
PyObject *tmp_listcomp_4__contraction = NULL;
PyObject *tmp_listcomp_4__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__12___str__;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *tmp_return_value = NULL;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__12___str__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__12___str__)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__12___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__12___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__12___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5759ff439c4d88afc14705b3efaa54a4, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__12___str__->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__12___str__ = cache_frame_frame_numpy$ma$mrecords$$$function__12___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__12___str__);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__12___str__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
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
PyObject *tmp_assign_source_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
tmp_direct_call_arg1_1 = (PyObject *)&PyZip_Type;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_names);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto try_except_handler_3;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_1 = tmp_listcomp_2__$0;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 331;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_6 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_f;
    outline_1_var_f = tmp_assign_source_6;
    Py_INCREF(outline_1_var_f);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_1;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_1 = tmp_listcomp_2__contraction;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
CHECK_OBJECT(outline_1_var_f);
tmp_name_value_1 = outline_1_var_f;
tmp_append_value_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_1, NULL);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_direct_call_arg2_1 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_direct_call_arg2_1);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
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
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_1_var_f);
outline_1_var_f = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_f);
outline_1_var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 331;
goto try_except_handler_2;
outline_result_2:;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_iter_arg_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_7;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_2 = tmp_listcomp_1__$0;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 330;
        goto try_except_handler_5;
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
    PyObject *old = outline_0_var_s;
    outline_0_var_s = tmp_assign_source_9;
    Py_INCREF(outline_0_var_s);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_2 = tmp_listcomp_1__contraction;
tmp_tuple_element_1 = mod_consts.const_str_chr_40;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_str_arg_value_1 = mod_consts.const_str_chr_44;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(outline_0_var_s);
tmp_iter_arg_3 = outline_0_var_s;
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oo";
    goto try_except_handler_6;
}
assert(tmp_listcomp$listcomp_1__$0 == NULL);
tmp_listcomp$listcomp_1__$0 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp$listcomp_1__contraction == NULL);
tmp_listcomp$listcomp_1__contraction = tmp_assign_source_11;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
tmp_next_source_3 = tmp_listcomp$listcomp_1__$0;
tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 330;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_listcomp$listcomp_1__iter_value_0;
    tmp_listcomp$listcomp_1__iter_value_0 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_listcomp$listcomp_1__iter_value_0);
tmp_assign_source_13 = tmp_listcomp$listcomp_1__iter_value_0;
{
    PyObject *old = outline_2_var_i;
    outline_2_var_i = tmp_assign_source_13;
    Py_INCREF(outline_2_var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_3;
PyObject *tmp_append_value_3;
PyObject *tmp_unicode_arg_1;
CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
tmp_append_list_3 = tmp_listcomp$listcomp_1__contraction;
CHECK_OBJECT(outline_2_var_i);
tmp_unicode_arg_1 = outline_2_var_i;
tmp_append_value_3 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_append_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oo";
    goto try_except_handler_7;
}
tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oo";
    goto try_except_handler_7;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oo";
    goto try_except_handler_7;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
tmp_iterable_value_1 = tmp_listcomp$listcomp_1__contraction;
Py_INCREF(tmp_iterable_value_1);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
Py_DECREF(tmp_listcomp$listcomp_1__$0);
tmp_listcomp$listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
Py_DECREF(tmp_listcomp$listcomp_1__contraction);
tmp_listcomp$listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
tmp_listcomp$listcomp_1__iter_value_0 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
Py_DECREF(tmp_listcomp$listcomp_1__$0);
tmp_listcomp$listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
Py_DECREF(tmp_listcomp$listcomp_1__contraction);
tmp_listcomp$listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
tmp_listcomp$listcomp_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_XDECREF(outline_2_var_i);
outline_2_var_i = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_2_var_i);
outline_2_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 330;
goto tuple_build_exception_1;
outline_result_3:;
tmp_tuple_element_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_append_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_append_value_2 == NULL));
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_1);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
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
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_s);
outline_0_var_s = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_s);
outline_0_var_s = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 330;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_mstr == NULL);
var_mstr = tmp_assign_source_1;
}
{
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_chr_91;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_str_arg_value_2;
PyObject *tmp_iterable_value_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_str_arg_value_2 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
CHECK_OBJECT(var_mstr);
tmp_iterable_value_2 = var_mstr;
tmp_tuple_element_2 = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_93;
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
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_14;
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = (PyObject *)&PyZip_Type;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto try_except_handler_9;
}
tmp_iter_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_names);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto try_except_handler_9;
}
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto try_except_handler_9;
}
assert(tmp_listcomp_4__$0 == NULL);
tmp_listcomp_4__$0 = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_4__contraction == NULL);
tmp_listcomp_4__contraction = tmp_assign_source_17;
}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_listcomp_4__$0);
tmp_next_source_4 = tmp_listcomp_4__$0;
tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_18 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 335;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = tmp_listcomp_4__iter_value_0;
    tmp_listcomp_4__iter_value_0 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
tmp_assign_source_19 = tmp_listcomp_4__iter_value_0;
{
    PyObject *old = outline_4_var_f;
    outline_4_var_f = tmp_assign_source_19;
    Py_INCREF(outline_4_var_f);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_4;
PyObject *tmp_append_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_2;
CHECK_OBJECT(tmp_listcomp_4__contraction);
tmp_append_list_4 = tmp_listcomp_4__contraction;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
CHECK_OBJECT(outline_4_var_f);
tmp_name_value_2 = outline_4_var_f;
tmp_append_value_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_2, NULL);
if (tmp_append_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto try_except_handler_10;
}
tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto try_except_handler_10;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto try_except_handler_10;
}
goto loop_start_4;
loop_end_4:;
CHECK_OBJECT(tmp_listcomp_4__contraction);
tmp_args_element_value_1 = tmp_listcomp_4__contraction;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(tmp_listcomp_4__$0);
CHECK_OBJECT(tmp_listcomp_4__$0);
Py_DECREF(tmp_listcomp_4__$0);
tmp_listcomp_4__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_4__contraction);
CHECK_OBJECT(tmp_listcomp_4__contraction);
Py_DECREF(tmp_listcomp_4__contraction);
tmp_listcomp_4__contraction = NULL;
Py_XDECREF(tmp_listcomp_4__iter_value_0);
tmp_listcomp_4__iter_value_0 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_4__$0);
CHECK_OBJECT(tmp_listcomp_4__$0);
Py_DECREF(tmp_listcomp_4__$0);
tmp_listcomp_4__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_4__contraction);
CHECK_OBJECT(tmp_listcomp_4__contraction);
Py_DECREF(tmp_listcomp_4__contraction);
tmp_listcomp_4__contraction = NULL;
Py_XDECREF(tmp_listcomp_4__iter_value_0);
tmp_listcomp_4__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_XDECREF(outline_4_var_f);
outline_4_var_f = NULL;
goto outline_result_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_4_var_f);
outline_4_var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 335;
goto try_except_handler_8;
outline_result_5:;
frame_frame_numpy$ma$mrecords$$$function__12___str__->m_frame.f_lineno = 335;
tmp_iter_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto try_except_handler_8;
}
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto try_except_handler_8;
}
assert(tmp_listcomp_3__$0 == NULL);
tmp_listcomp_3__$0 = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_3__contraction == NULL);
tmp_listcomp_3__contraction = tmp_assign_source_20;
}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_listcomp_3__$0);
tmp_next_source_5 = tmp_listcomp_3__$0;
tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_5);
if (tmp_assign_source_21 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 334;
        goto try_except_handler_11;
    }
}

{
    PyObject *old = tmp_listcomp_3__iter_value_0;
    tmp_listcomp_3__iter_value_0 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
tmp_assign_source_22 = tmp_listcomp_3__iter_value_0;
{
    PyObject *old = outline_3_var_s;
    outline_3_var_s = tmp_assign_source_22;
    Py_INCREF(outline_3_var_s);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_5;
PyObject *tmp_append_value_5;
PyObject *tmp_str_arg_value_3;
PyObject *tmp_iterable_value_3;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_append_list_5 = tmp_listcomp_3__contraction;
tmp_str_arg_value_3 = mod_consts.const_str_chr_44;
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(outline_3_var_s);
tmp_iter_arg_6 = outline_3_var_s;
tmp_assign_source_23 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oo";
    goto try_except_handler_12;
}
assert(tmp_listcomp$listcomp_2__$0 == NULL);
tmp_listcomp$listcomp_2__$0 = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp$listcomp_2__contraction == NULL);
tmp_listcomp$listcomp_2__contraction = tmp_assign_source_24;
}
// Tried code:
loop_start_6:;
{
PyObject *tmp_next_source_6;
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_listcomp$listcomp_2__$0);
tmp_next_source_6 = tmp_listcomp$listcomp_2__$0;
tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_6);
if (tmp_assign_source_25 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_6;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 334;
        goto try_except_handler_13;
    }
}

{
    PyObject *old = tmp_listcomp$listcomp_2__iter_value_0;
    tmp_listcomp$listcomp_2__iter_value_0 = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_listcomp$listcomp_2__iter_value_0);
tmp_assign_source_26 = tmp_listcomp$listcomp_2__iter_value_0;
{
    PyObject *old = outline_5_var_i;
    outline_5_var_i = tmp_assign_source_26;
    Py_INCREF(outline_5_var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_6;
PyObject *tmp_append_value_6;
PyObject *tmp_unicode_arg_2;
CHECK_OBJECT(tmp_listcomp$listcomp_2__contraction);
tmp_append_list_6 = tmp_listcomp$listcomp_2__contraction;
CHECK_OBJECT(outline_5_var_i);
tmp_unicode_arg_2 = outline_5_var_i;
tmp_append_value_6 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
if (tmp_append_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oo";
    goto try_except_handler_13;
}
tmp_result = LIST_APPEND1(tmp_append_list_6, tmp_append_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oo";
    goto try_except_handler_13;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oo";
    goto try_except_handler_13;
}
goto loop_start_6;
loop_end_6:;
CHECK_OBJECT(tmp_listcomp$listcomp_2__contraction);
tmp_iterable_value_3 = tmp_listcomp$listcomp_2__contraction;
Py_INCREF(tmp_iterable_value_3);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(tmp_listcomp$listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp$listcomp_2__$0);
Py_DECREF(tmp_listcomp$listcomp_2__$0);
tmp_listcomp$listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp$listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp$listcomp_2__contraction);
Py_DECREF(tmp_listcomp$listcomp_2__contraction);
tmp_listcomp$listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp$listcomp_2__iter_value_0);
tmp_listcomp$listcomp_2__iter_value_0 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp$listcomp_2__$0);
Py_DECREF(tmp_listcomp$listcomp_2__$0);
tmp_listcomp$listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp$listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp$listcomp_2__contraction);
Py_DECREF(tmp_listcomp$listcomp_2__contraction);
tmp_listcomp$listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp$listcomp_2__iter_value_0);
tmp_listcomp$listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_XDECREF(outline_5_var_i);
outline_5_var_i = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_5_var_i);
outline_5_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 334;
goto try_except_handler_11;
outline_result_6:;
tmp_append_value_5 = UNICODE_JOIN(tstate, tmp_str_arg_value_3, tmp_iterable_value_3);
CHECK_OBJECT(tmp_iterable_value_3);
Py_DECREF(tmp_iterable_value_3);
if (tmp_append_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oo";
    goto try_except_handler_11;
}
tmp_result = LIST_APPEND1(tmp_append_list_5, tmp_append_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oo";
    goto try_except_handler_11;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oo";
    goto try_except_handler_11;
}
goto loop_start_5;
loop_end_5:;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_assign_source_14 = tmp_listcomp_3__contraction;
Py_INCREF(tmp_assign_source_14);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_XDECREF(outline_3_var_s);
outline_3_var_s = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_3_var_s);
outline_3_var_s = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 334;
goto frame_exception_exit_1;
outline_result_4:;
assert(var_mstr == NULL);
var_mstr = tmp_assign_source_14;
}
{
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_chr_40;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_str_arg_value_4;
PyObject *tmp_iterable_value_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
tmp_str_arg_value_4 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
CHECK_OBJECT(var_mstr);
tmp_iterable_value_4 = var_mstr;
tmp_tuple_element_3 = UNICODE_JOIN(tstate, tmp_str_arg_value_4, tmp_iterable_value_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__12___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__12___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__12___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__12___str__,
    type_description_1,
    par_self,
    var_mstr
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__12___str__ == cache_frame_frame_numpy$ma$mrecords$$$function__12___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__12___str__);
    cache_frame_frame_numpy$ma$mrecords$$$function__12___str__ = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__12___str__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_mstr);
CHECK_OBJECT(var_mstr);
Py_DECREF(var_mstr);
var_mstr = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_mstr);
var_mstr = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

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


static PyObject *impl_numpy$ma$mrecords$$$function__13___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var__names = NULL;
PyObject *var_fmt = NULL;
PyObject *var_reprstr = NULL;
PyObject *outline_0_var_f = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__13___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__13___repr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__13___repr__)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__13___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__13___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__13___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6cff9daf3b369da829908c65a2ee8016, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__13___repr__->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__13___repr__ = cache_frame_frame_numpy$ma$mrecords$$$function__13___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__13___repr__);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__13___repr__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_names);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var__names == NULL);
var__names = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_chr_37;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var__names);
tmp_iter_arg_1 = var__names;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_3;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_args_element_value_1 = MAKE_GENERATOR_numpy$ma$mrecords$$$function__13___repr__$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
frame_frame_numpy$ma$mrecords$$$function__13___repr__->m_frame.f_lineno = 344;
tmp_add_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
tmp_add_expr_right_1 = mod_consts.const_int_pos_4;
tmp_format_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
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


exception_lineno = 344;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_15c36e3f31c51fe996d0a438273b7770;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_2 == NULL));
assert(var_fmt == NULL);
var_fmt = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_4;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_names);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooo";
    goto try_except_handler_3;
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
type_description_1 = "oooo";
exception_lineno = 345;
        goto try_except_handler_4;
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
    PyObject *old = outline_0_var_f;
    outline_0_var_f = tmp_assign_source_8;
    Py_INCREF(outline_0_var_f);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
if (var_fmt == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fmt);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 345;
type_description_1 = "oooo";
    goto try_except_handler_4;
}

tmp_mod_expr_left_1 = var_fmt;
CHECK_OBJECT(outline_0_var_f);
tmp_tuple_element_2 = outline_0_var_f;
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_1;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
CHECK_OBJECT(outline_0_var_f);
tmp_name_value_1 = outline_0_var_f;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_1, NULL);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_append_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_4 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_4);
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
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_0_var_f);
outline_0_var_f = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_f);
outline_0_var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 345;
goto frame_exception_exit_1;
outline_result_2:;
assert(var_reprstr == NULL);
var_reprstr = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_reprstr);
tmp_expression_value_6 = var_reprstr;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_insert);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__13___repr__->m_frame.f_lineno = 346;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_int_0_str_digest_422163440baabc56f6c63c24e5ec4a1a_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_list_element_1;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_reprstr);
tmp_expression_value_7 = var_reprstr;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_extend);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (var_fmt == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fmt);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 347;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_mod_expr_left_2 = var_fmt;
tmp_tuple_element_3 = mod_consts.const_str_digest_0292da606fbc4445beec4cf4c5a5c05d;
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_fill_value);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_mod_expr_right_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_list_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 347;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_1);
tmp_list_element_1 = mod_consts.const_str_digest_2f4024f52de62105376212a7e49e2d0e;
PyList_SET_ITEM0(tmp_args_element_value_2, 1, tmp_list_element_1);
frame_frame_numpy$ma$mrecords$$$function__13___repr__->m_frame.f_lineno = 347;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_unicode_arg_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_newline;
CHECK_OBJECT(var_reprstr);
tmp_iterable_value_1 = var_reprstr;
tmp_unicode_arg_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__13___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__13___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__13___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__13___repr__,
    type_description_1,
    par_self,
    var__names,
    var_fmt,
    var_reprstr
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__13___repr__ == cache_frame_frame_numpy$ma$mrecords$$$function__13___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__13___repr__);
    cache_frame_frame_numpy$ma$mrecords$$$function__13___repr__ = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__13___repr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__names);
CHECK_OBJECT(var__names);
Py_DECREF(var__names);
var__names = NULL;
Py_XDECREF(var_fmt);
var_fmt = NULL;
CHECK_OBJECT(var_reprstr);
CHECK_OBJECT(var_reprstr);
Py_DECREF(var_reprstr);
var_reprstr = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__names);
var__names = NULL;
Py_XDECREF(var_fmt);
var_fmt = NULL;
Py_XDECREF(var_reprstr);
var_reprstr = NULL;
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



#if 1
struct numpy$ma$mrecords$$$function__13___repr__$$$genexpr__1_genexpr_locals {
PyObject *var_n;
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

static PyObject *numpy$ma$mrecords$$$function__13___repr__$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct numpy$ma$mrecords$$$function__13___repr__$$$genexpr__1_genexpr_locals *generator_heap = (struct numpy$ma$mrecords$$$function__13___repr__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_n = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_371c0de304d5e87c2c4ea1cb3a9c3d37, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 344;
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
    PyObject *old = generator_heap->var_n;
    generator_heap->var_n = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_n);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_len_arg_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_n);
tmp_len_arg_1 = generator_heap->var_n;
tmp_expression_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 344;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_len_arg_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_len_arg_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 344;
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


generator_heap->exception_lineno = 344;
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
    generator_heap->var_n
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

Py_XDECREF(generator_heap->var_n);
generator_heap->var_n = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_n);
generator_heap->var_n = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$ma$mrecords$$$function__13___repr__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$ma$mrecords$$$function__13___repr__$$$genexpr__1_genexpr_context,
        module_numpy$ma$mrecords,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_0976a077f238ec3a536c0cd087cfb5f0,
#endif
        code_objects_371c0de304d5e87c2c4ea1cb3a9c3d37,
        closure,
        1,
#if 1
        sizeof(struct numpy$ma$mrecords$$$function__13___repr__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_numpy$ma$mrecords$$$function__14_view(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_dtype = python_pars[1];
PyObject *par_type = python_pars[2];
PyObject *var_output = NULL;
PyObject *var_basetype = NULL;
PyObject *var_mdtype = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__14_view;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__14_view = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__14_view)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__14_view);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__14_view == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__14_view = MAKE_FUNCTION_FRAME(tstate, code_objects_5ce0590313b5685f0f43e0fd09dfc1bf, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__14_view->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__14_view = cache_frame_frame_numpy$ma$mrecords$$$function__14_view;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__14_view);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__14_view) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_left_1 = par_dtype;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_type);
tmp_cmp_expr_left_2 = par_type;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame.f_lineno = 359;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_view, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_output == NULL);
var_output = tmp_assign_source_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_2 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 361;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_type);
tmp_args_element_value_3 = par_type;
frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame.f_lineno = 361;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_view,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_output == NULL);
var_output = tmp_assign_source_2;
}
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_type);
tmp_cmp_expr_left_3 = par_type;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_dtype);
tmp_issubclass_cls_1 = par_dtype;
tmp_expression_value_3 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 365;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_issubclass_classes_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ndarray);
if (tmp_issubclass_classes_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
CHECK_OBJECT(tmp_issubclass_classes_1);
Py_DECREF(tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_4 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 366;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_4 = par_self;
CHECK_OBJECT(par_dtype);
tmp_args_element_value_5 = par_dtype;
frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame.f_lineno = 366;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_view,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_output == NULL);
var_output = tmp_assign_source_3;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_5 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 368;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_6 = par_self;
CHECK_OBJECT(par_dtype);
tmp_args_element_value_7 = par_dtype;
frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame.f_lineno = 368;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_view,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_output == NULL);
var_output = tmp_assign_source_4;
}
branch_end_4:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__14_view, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__14_view, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_8;
tmp_called_instance_5 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_dtype);
tmp_args_element_value_8 = par_dtype;
frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame.f_lineno = 371;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_dtype, tmp_args_element_value_8);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = par_dtype;
    assert(old != NULL);
    par_dtype = tmp_assign_source_5;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_dtype);
tmp_expression_value_6 = par_dtype;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_fields);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
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
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_9);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain___bases__);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(var_basetype == NULL);
var_basetype = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_6;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(par_self);
tmp_called_instance_7 = par_self;
frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame.f_lineno = 377;
tmp_called_instance_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain___array__);
if (tmp_called_instance_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_dtype);
tmp_args_element_value_9 = par_dtype;
CHECK_OBJECT(var_basetype);
tmp_args_element_value_10 = var_basetype;
frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame.f_lineno = 377;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_6,
        mod_consts.const_str_plain_view,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(var_output == NULL);
var_output = tmp_assign_source_7;
}
{
PyObject *tmp_called_instance_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(var_output);
tmp_called_instance_8 = var_output;
CHECK_OBJECT(par_self);
tmp_args_element_value_11 = par_self;
frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame.f_lineno = 378;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain__update_from, tmp_args_element_value_11);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_expression_value_10 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_12 = par_self;
CHECK_OBJECT(par_dtype);
tmp_args_element_value_13 = par_dtype;
frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame.f_lineno = 380;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_9,
        mod_consts.const_str_plain_view,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_9);
Py_DECREF(tmp_called_instance_9);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(var_output == NULL);
var_output = tmp_assign_source_8;
}
branch_end_6:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_None;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 381;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}

tmp_assattr_target_1 = var_output;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__fill_value, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
}
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 364;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame)) {
        frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_3;
branch_end_5:;
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
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_expression_value_11 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 383;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_14 = par_self;
CHECK_OBJECT(par_dtype);
tmp_args_element_value_15 = par_dtype;
CHECK_OBJECT(par_type);
tmp_args_element_value_16 = par_type;
frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame.f_lineno = 383;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_assign_source_9 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_10,
        mod_consts.const_str_plain_view,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_10);
Py_DECREF(tmp_called_instance_10);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_output == NULL);
var_output = tmp_assign_source_9;
}
branch_end_3:;
branch_end_1:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 385;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = var_output;
tmp_name_value_1 = mod_consts.const_str_plain__mask;
tmp_expression_value_13 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_default_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_nomask);
if (tmp_default_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_default_value_1);
Py_DECREF(tmp_default_value_1);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_14 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 385;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_nomask);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 385;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_16;
tmp_expression_value_15 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 386;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_make_mask_descr);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (var_output == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 386;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = var_output;
tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_dtype);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 386;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame.f_lineno = 386;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_mdtype == NULL);
var_mdtype = tmp_assign_source_10;
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_19;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__mask);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_view);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mdtype);
tmp_args_element_value_18 = var_mdtype;
tmp_expression_value_19 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 387;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_ndarray);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 387;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame.f_lineno = 387;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (var_output == NULL) {
Py_DECREF(tmp_assattr_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 387;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_2 = var_output;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__mask, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_expression_value_20;
PyObject *tmp_assattr_target_3;
PyObject *tmp_expression_value_21;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 388;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_20 = var_output;
tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_shape);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (var_output == NULL) {
Py_DECREF(tmp_assattr_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 388;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_21 = var_output;
tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain__mask);
if (tmp_assattr_target_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assattr_value_3);

exception_lineno = 388;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_shape, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_target_3);
Py_DECREF(tmp_assattr_target_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 389;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_output;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__14_view, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__14_view->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__14_view, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__14_view,
    type_description_1,
    par_self,
    par_dtype,
    par_type,
    var_output,
    var_basetype,
    var_mdtype
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__14_view == cache_frame_frame_numpy$ma$mrecords$$$function__14_view) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__14_view);
    cache_frame_frame_numpy$ma$mrecords$$$function__14_view = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__14_view);

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
Py_XDECREF(var_output);
var_output = NULL;
Py_XDECREF(var_basetype);
var_basetype = NULL;
Py_XDECREF(var_mdtype);
var_mdtype = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_dtype);
par_dtype = NULL;
Py_XDECREF(var_output);
var_output = NULL;
Py_XDECREF(var_basetype);
var_basetype = NULL;
Py_XDECREF(var_mdtype);
var_mdtype = NULL;
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
CHECK_OBJECT(par_type);
Py_DECREF(par_type);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_type);
Py_DECREF(par_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$ma$mrecords$$$function__15_harden_mask(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__15_harden_mask;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__15_harden_mask = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__15_harden_mask)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__15_harden_mask);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__15_harden_mask == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__15_harden_mask = MAKE_FUNCTION_FRAME(tstate, code_objects_e1469ad27438b8ab62a12a0f750f15ef, module_numpy$ma$mrecords, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__15_harden_mask->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__15_harden_mask = cache_frame_frame_numpy$ma$mrecords$$$function__15_harden_mask;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__15_harden_mask);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__15_harden_mask) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__hardmask, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__15_harden_mask, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__15_harden_mask->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__15_harden_mask, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__15_harden_mask,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__15_harden_mask == cache_frame_frame_numpy$ma$mrecords$$$function__15_harden_mask) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__15_harden_mask);
    cache_frame_frame_numpy$ma$mrecords$$$function__15_harden_mask = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__15_harden_mask);

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


static PyObject *impl_numpy$ma$mrecords$$$function__16_soften_mask(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__16_soften_mask;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__16_soften_mask = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__16_soften_mask)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__16_soften_mask);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__16_soften_mask == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__16_soften_mask = MAKE_FUNCTION_FRAME(tstate, code_objects_b35bf8201d2ec31419c524abca01cada, module_numpy$ma$mrecords, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__16_soften_mask->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__16_soften_mask = cache_frame_frame_numpy$ma$mrecords$$$function__16_soften_mask;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__16_soften_mask);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__16_soften_mask) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__hardmask, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__16_soften_mask, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__16_soften_mask->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__16_soften_mask, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__16_soften_mask,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__16_soften_mask == cache_frame_frame_numpy$ma$mrecords$$$function__16_soften_mask) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__16_soften_mask);
    cache_frame_frame_numpy$ma$mrecords$$$function__16_soften_mask = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__16_soften_mask);

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


static PyObject *impl_numpy$ma$mrecords$$$function__17_copy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_copied = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__17_copy;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__17_copy = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__17_copy)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__17_copy);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__17_copy == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__17_copy = MAKE_FUNCTION_FRAME(tstate, code_objects_532f084a1b5a5fcd82b11d050fd659b4, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__17_copy->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__17_copy = cache_frame_frame_numpy$ma$mrecords$$$function__17_copy;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__17_copy);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__17_copy) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_type_arg_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__data);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__17_copy->m_frame.f_lineno = 410;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_type_arg_1 = par_self;
tmp_args_element_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_numpy$ma$mrecords$$$function__17_copy->m_frame.f_lineno = 410;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_view, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_copied == NULL);
var_copied = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__mask);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__17_copy->m_frame.f_lineno = 411;
tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_copied);
tmp_assattr_target_1 = var_copied;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__mask, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__17_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__17_copy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__17_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__17_copy,
    type_description_1,
    par_self,
    var_copied
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__17_copy == cache_frame_frame_numpy$ma$mrecords$$$function__17_copy) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__17_copy);
    cache_frame_frame_numpy$ma$mrecords$$$function__17_copy = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__17_copy);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_copied);
tmp_return_value = var_copied;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_copied);
CHECK_OBJECT(var_copied);
Py_DECREF(var_copied);
var_copied = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_copied);
var_copied = NULL;
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


static PyObject *impl_numpy$ma$mrecords$$$function__18_tolist(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_fill_value = python_pars[1];
PyObject *var_result = NULL;
PyObject *var_mask = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__18_tolist;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__18_tolist = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__18_tolist)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__18_tolist);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__18_tolist == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__18_tolist = MAKE_FUNCTION_FRAME(tstate, code_objects_859d4c38c1a30def806f08810db5d31a, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__18_tolist->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__18_tolist = cache_frame_frame_numpy$ma$mrecords$$$function__18_tolist;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__18_tolist);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__18_tolist) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_fill_value);
tmp_cmp_expr_left_1 = par_fill_value;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_fill_value);
tmp_args_element_value_1 = par_fill_value;
frame_frame_numpy$ma$mrecords$$$function__18_tolist->m_frame.f_lineno = 424;
tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_filled, tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__18_tolist->m_frame.f_lineno = 424;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_tolist);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_called_instance_4;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 425;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_array);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
frame_frame_numpy$ma$mrecords$$$function__18_tolist->m_frame.f_lineno = 425;
tmp_called_instance_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_filled);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 425;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__18_tolist->m_frame.f_lineno = 425;
tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_tolist);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 425;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_73de9ad74cfede370cfd865b06a915a9);
frame_frame_numpy$ma$mrecords$$$function__18_tolist->m_frame.f_lineno = 425;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_5;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 426;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_array);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__mask);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 426;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__18_tolist->m_frame.f_lineno = 426;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_tolist);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 426;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__18_tolist->m_frame.f_lineno = 426;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_mask == NULL);
var_mask = tmp_assign_source_2;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = Py_None;
CHECK_OBJECT(var_result);
tmp_ass_subscribed_1 = var_result;
CHECK_OBJECT(var_mask);
tmp_ass_subscript_1 = var_mask;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_6;
CHECK_OBJECT(var_result);
tmp_called_instance_6 = var_result;
frame_frame_numpy$ma$mrecords$$$function__18_tolist->m_frame.f_lineno = 428;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_tolist);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__18_tolist, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__18_tolist->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__18_tolist, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__18_tolist,
    type_description_1,
    par_self,
    par_fill_value,
    var_result,
    var_mask
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__18_tolist == cache_frame_frame_numpy$ma$mrecords$$$function__18_tolist) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__18_tolist);
    cache_frame_frame_numpy$ma$mrecords$$$function__18_tolist = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__18_tolist);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
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
CHECK_OBJECT(par_fill_value);
Py_DECREF(par_fill_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_fill_value);
Py_DECREF(par_fill_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$ma$mrecords$$$function__19___getstate__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_state = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__19___getstate__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__19___getstate__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__19___getstate__)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__19___getstate__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__19___getstate__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__19___getstate__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c6a1e257ee3d00e25f5c6fc75d2c9541, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__19___getstate__->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__19___getstate__ = cache_frame_frame_numpy$ma$mrecords$$$function__19___getstate__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__19___getstate__);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__19___getstate__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = const_int_pos_1;
tmp_assign_source_1 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyTuple_SET_ITEM0(tmp_assign_source_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_shape);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_flags);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_fnc);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__data);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
frame_frame_numpy$ma$mrecords$$$function__19___getstate__->m_frame.f_lineno = 440;
tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_tobytes);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__mask);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
frame_frame_numpy$ma$mrecords$$$function__19___getstate__->m_frame.f_lineno = 441;
tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_tobytes);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_1, 5, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__fill_value);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_1, 6, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
assert(var_state == NULL);
var_state = tmp_assign_source_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__19___getstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__19___getstate__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__19___getstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__19___getstate__,
    type_description_1,
    par_self,
    var_state
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__19___getstate__ == cache_frame_frame_numpy$ma$mrecords$$$function__19___getstate__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__19___getstate__);
    cache_frame_frame_numpy$ma$mrecords$$$function__19___getstate__ = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__19___getstate__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_state);
tmp_return_value = var_state;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_state);
CHECK_OBJECT(var_state);
Py_DECREF(var_state);
var_state = NULL;
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


static PyObject *impl_numpy$ma$mrecords$$$function__20___setstate__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_state = python_pars[1];
PyObject *var_ver = NULL;
PyObject *var_shp = NULL;
PyObject *var_typ = NULL;
PyObject *var_isf = NULL;
PyObject *var_raw = NULL;
PyObject *var_msk = NULL;
PyObject *var_flv = NULL;
PyObject *var_mdtype = NULL;
PyObject *outline_0_var_k = NULL;
PyObject *outline_0_var__ = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__element_5 = NULL;
PyObject *tmp_tuple_unpack_1__element_6 = NULL;
PyObject *tmp_tuple_unpack_1__element_7 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__20___setstate__;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__20___setstate__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__20___setstate__)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__20___setstate__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__20___setstate__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__20___setstate__ = MAKE_FUNCTION_FRAME(tstate, code_objects_008712de8309dcdc98130da8823fb1e9, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__20___setstate__->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__20___setstate__ = cache_frame_frame_numpy$ma$mrecords$$$function__20___setstate__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__20___setstate__);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__20___setstate__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_state);
tmp_iter_arg_1 = par_state;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oooooooooo";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 7);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 460;
type_description_1 = "oooooooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 7);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 460;
type_description_1 = "oooooooooo";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 7);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 460;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 7);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 460;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_4 == NULL);
tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 4, 7);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 460;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_5 == NULL);
tmp_tuple_unpack_1__element_5 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 5, 7);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 460;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_6 == NULL);
tmp_tuple_unpack_1__element_6 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 6, 7);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 460;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_7 == NULL);
tmp_tuple_unpack_1__element_7 = tmp_assign_source_8;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 7);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 460;
type_description_1 = "oooooooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_6);
tmp_tuple_unpack_1__element_6 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_7);
tmp_tuple_unpack_1__element_7 = NULL;
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
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
assert(var_ver == NULL);
Py_INCREF(tmp_assign_source_9);
var_ver = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
assert(var_shp == NULL);
Py_INCREF(tmp_assign_source_10);
var_shp = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_3;
assert(var_typ == NULL);
Py_INCREF(tmp_assign_source_11);
var_typ = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_4;
assert(var_isf == NULL);
Py_INCREF(tmp_assign_source_12);
var_isf = tmp_assign_source_12;
}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_5;
assert(var_raw == NULL);
Py_INCREF(tmp_assign_source_13);
var_raw = tmp_assign_source_13;
}
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
tmp_assign_source_14 = tmp_tuple_unpack_1__element_6;
assert(var_msk == NULL);
Py_INCREF(tmp_assign_source_14);
var_msk = tmp_assign_source_14;
}
Py_XDECREF(tmp_tuple_unpack_1__element_6);
tmp_tuple_unpack_1__element_6 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
tmp_assign_source_15 = tmp_tuple_unpack_1__element_7;
assert(var_flv == NULL);
Py_INCREF(tmp_assign_source_15);
var_flv = tmp_assign_source_15;
}
Py_XDECREF(tmp_tuple_unpack_1__element_7);
tmp_tuple_unpack_1__element_7 = NULL;

{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_1;
tmp_expression_value_1 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 461;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(var_shp);
tmp_tuple_element_1 = var_shp;
tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_typ);
tmp_tuple_element_1 = var_typ;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_isf);
tmp_tuple_element_1 = var_isf;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_raw);
tmp_tuple_element_1 = var_raw;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 3, tmp_tuple_element_1);
frame_frame_numpy$ma$mrecords$$$function__20___setstate__->m_frame.f_lineno = 461;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain___setstate__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_2 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 462;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_descr);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_18;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_19 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 462;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_iter_arg_3 = tmp_listcomp_1__iter_value_0;
tmp_assign_source_20 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_8 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 0, 2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 462;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_9 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_22 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 1, 2);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 462;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 462;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_6;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_23 = tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_k;
    outline_0_var_k = tmp_assign_source_23;
    Py_INCREF(outline_0_var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_24 = tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var__;
    outline_0_var__ = tmp_assign_source_24;
    Py_INCREF(outline_0_var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_k);
tmp_tuple_element_2 = outline_0_var_k;
tmp_append_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_2);
tmp_expression_value_5 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 462;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_bool);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_append_value_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_append_value_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_args_element_value_3 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_args_element_value_3);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
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
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var__);
outline_0_var__ = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var__);
outline_0_var__ = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 462;
goto frame_exception_exit_1;
outline_result_1:;
frame_frame_numpy$ma$mrecords$$$function__20___setstate__->m_frame.f_lineno = 462;
tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_mdtype == NULL);
var_mdtype = tmp_assign_source_16;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain__mask;
tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_shp);
tmp_tuple_element_3 = var_shp;
tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_args_element_value_4, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_mdtype);
tmp_tuple_element_3 = var_mdtype;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 1, tmp_tuple_element_3);
CHECK_OBJECT(var_isf);
tmp_tuple_element_3 = var_isf;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 2, tmp_tuple_element_3);
CHECK_OBJECT(var_msk);
tmp_tuple_element_3 = var_msk;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 3, tmp_tuple_element_3);
frame_frame_numpy$ma$mrecords$$$function__20___setstate__->m_frame.f_lineno = 463;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain___setstate__, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_flv);
tmp_assattr_value_1 = var_flv;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_fill_value, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__20___setstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__20___setstate__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__20___setstate__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__20___setstate__,
    type_description_1,
    par_self,
    par_state,
    var_ver,
    var_shp,
    var_typ,
    var_isf,
    var_raw,
    var_msk,
    var_flv,
    var_mdtype
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__20___setstate__ == cache_frame_frame_numpy$ma$mrecords$$$function__20___setstate__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__20___setstate__);
    cache_frame_frame_numpy$ma$mrecords$$$function__20___setstate__ = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__20___setstate__);

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
CHECK_OBJECT(var_ver);
CHECK_OBJECT(var_ver);
Py_DECREF(var_ver);
var_ver = NULL;
CHECK_OBJECT(var_shp);
CHECK_OBJECT(var_shp);
Py_DECREF(var_shp);
var_shp = NULL;
CHECK_OBJECT(var_typ);
CHECK_OBJECT(var_typ);
Py_DECREF(var_typ);
var_typ = NULL;
CHECK_OBJECT(var_isf);
CHECK_OBJECT(var_isf);
Py_DECREF(var_isf);
var_isf = NULL;
CHECK_OBJECT(var_raw);
CHECK_OBJECT(var_raw);
Py_DECREF(var_raw);
var_raw = NULL;
CHECK_OBJECT(var_msk);
CHECK_OBJECT(var_msk);
Py_DECREF(var_msk);
var_msk = NULL;
CHECK_OBJECT(var_flv);
CHECK_OBJECT(var_flv);
Py_DECREF(var_flv);
var_flv = NULL;
CHECK_OBJECT(var_mdtype);
CHECK_OBJECT(var_mdtype);
Py_DECREF(var_mdtype);
var_mdtype = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ver);
var_ver = NULL;
Py_XDECREF(var_shp);
var_shp = NULL;
Py_XDECREF(var_typ);
var_typ = NULL;
Py_XDECREF(var_isf);
var_isf = NULL;
Py_XDECREF(var_raw);
var_raw = NULL;
Py_XDECREF(var_msk);
var_msk = NULL;
Py_XDECREF(var_flv);
var_flv = NULL;
Py_XDECREF(var_mdtype);
var_mdtype = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_state);
Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$ma$mrecords$$$function__21___reduce__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__21___reduce__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__21___reduce__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__21___reduce__)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__21___reduce__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__21___reduce__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__21___reduce__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b9ab975f01f70731dd4022b03f191e61, module_numpy$ma$mrecords, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__21___reduce__->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__21___reduce__ = cache_frame_frame_numpy$ma$mrecords$$$function__21___reduce__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__21___reduce__);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__21___reduce__) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_numpy$ma$mrecords$_mrreconstruct(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mrreconstruct);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 471;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__baseclass);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_tuple_int_0_tuple;
PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = const_str_plain_b;
PyTuple_SET_ITEM0(tmp_tuple_element_1, 3, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_tuple_element_1);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_numpy$ma$mrecords$$$function__21___reduce__->m_frame.f_lineno = 473;
tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain___getstate__);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__21___reduce__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__21___reduce__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__21___reduce__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__21___reduce__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__21___reduce__ == cache_frame_frame_numpy$ma$mrecords$$$function__21___reduce__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__21___reduce__);
    cache_frame_frame_numpy$ma$mrecords$$$function__21___reduce__ = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__21___reduce__);

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


static PyObject *impl_numpy$ma$mrecords$$$function__22__mrreconstruct(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_subtype = python_pars[0];
PyObject *par_baseclass = python_pars[1];
PyObject *par_baseshape = python_pars[2];
PyObject *par_basetype = python_pars[3];
PyObject *var__data = NULL;
PyObject *var__mask = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct = MAKE_FUNCTION_FRAME(tstate, code_objects_d977c08e9ac080598754396e5022ef30, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct = cache_frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 481;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndarray);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_baseclass);
tmp_args_element_value_1 = par_baseclass;
CHECK_OBJECT(par_baseshape);
tmp_args_element_value_2 = par_baseshape;
CHECK_OBJECT(par_basetype);
tmp_args_element_value_3 = par_basetype;
frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct->m_frame.f_lineno = 481;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain___new__,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_subtype);
tmp_args_element_value_4 = par_subtype;
frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct->m_frame.f_lineno = 481;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_view, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var__data == NULL);
var__data = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_3 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 482;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ndarray);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___new__);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 482;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ndarray);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 482;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_baseshape);
tmp_args_element_value_6 = par_baseshape;
tmp_args_element_value_7 = mod_consts.const_str_plain_b1;
frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct->m_frame.f_lineno = 482;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var__mask == NULL);
var__mask = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(par_subtype);
tmp_expression_value_5 = par_subtype;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___new__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_subtype);
tmp_kw_call_arg_value_0_1 = par_subtype;
CHECK_OBJECT(var__data);
tmp_kw_call_arg_value_1_1 = var__data;
CHECK_OBJECT(var__mask);
tmp_kw_call_dict_value_0_1 = var__mask;
CHECK_OBJECT(par_basetype);
tmp_kw_call_dict_value_1_1 = par_basetype;
frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct->m_frame.f_lineno = 483;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_mask_str_plain_dtype_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct,
    type_description_1,
    par_subtype,
    par_baseclass,
    par_baseshape,
    par_basetype,
    var__data,
    var__mask
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct == cache_frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct);
    cache_frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__22__mrreconstruct);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__data);
CHECK_OBJECT(var__data);
Py_DECREF(var__data);
var__data = NULL;
CHECK_OBJECT(var__mask);
CHECK_OBJECT(var__mask);
Py_DECREF(var__mask);
var__mask = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__data);
var__data = NULL;
Py_XDECREF(var__mask);
var__mask = NULL;
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
CHECK_OBJECT(par_baseclass);
Py_DECREF(par_baseclass);
CHECK_OBJECT(par_baseshape);
Py_DECREF(par_baseshape);
CHECK_OBJECT(par_basetype);
Py_DECREF(par_basetype);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_subtype);
Py_DECREF(par_subtype);
CHECK_OBJECT(par_baseclass);
Py_DECREF(par_baseclass);
CHECK_OBJECT(par_baseshape);
Py_DECREF(par_baseshape);
CHECK_OBJECT(par_basetype);
Py_DECREF(par_basetype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$ma$mrecords$$$function__23_fromarrays(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_arraylist = python_pars[0];
PyObject *par_dtype = python_pars[1];
PyObject *par_shape = python_pars[2];
PyObject *par_formats = python_pars[3];
PyObject *par_names = python_pars[4];
PyObject *par_titles = python_pars[5];
PyObject *par_aligned = python_pars[6];
PyObject *par_byteorder = python_pars[7];
PyObject *par_fill_value = python_pars[8];
PyObject *var_datalist = NULL;
PyObject *var_masklist = NULL;
PyObject *var__array = NULL;
PyObject *outline_0_var_x = NULL;
PyObject *outline_1_var_x = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__23_fromarrays;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__23_fromarrays = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__23_fromarrays)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__23_fromarrays);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__23_fromarrays == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__23_fromarrays = MAKE_FUNCTION_FRAME(tstate, code_objects_fec36d3b9725e050255929a765e44445, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__23_fromarrays->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__23_fromarrays = cache_frame_frame_numpy$ma$mrecords$$$function__23_fromarrays;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__23_fromarrays);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__23_fromarrays) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_arraylist);
tmp_iter_arg_1 = par_arraylist;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
exception_lineno = 525;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_x;
    outline_0_var_x = tmp_assign_source_5;
    Py_INCREF(outline_0_var_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_instance_1 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 525;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_x);
tmp_args_element_value_1 = outline_0_var_x;
frame_frame_numpy$ma$mrecords$$$function__23_fromarrays->m_frame.f_lineno = 525;
tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getdata, tmp_args_element_value_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "oooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_1);
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
exception_lineno = 525;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_datalist == NULL);
var_datalist = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_6;
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_arraylist);
tmp_iter_arg_2 = par_arraylist;
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_8;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_2 = tmp_listcomp_2__$0;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooo";
exception_lineno = 526;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_10 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_x;
    outline_1_var_x = tmp_assign_source_10;
    Py_INCREF(outline_1_var_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
tmp_expression_value_1 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 526;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_atleast_1d);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_called_instance_2 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 526;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(outline_1_var_x);
tmp_args_element_value_3 = outline_1_var_x;
frame_frame_numpy$ma$mrecords$$$function__23_fromarrays->m_frame.f_lineno = 526;
tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getmaskarray, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 526;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
frame_frame_numpy$ma$mrecords$$$function__23_fromarrays->m_frame.f_lineno = 526;
tmp_append_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_assign_source_6 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_assign_source_6);
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
exception_lineno = 526;
goto frame_exception_exit_1;
outline_result_2:;
assert(var_masklist == NULL);
var_masklist = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_args_element_value_4;
tmp_expression_value_4 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 527;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_rec);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_fromarrays);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_datalist);
tmp_kw_call_arg_value_0_1 = var_datalist;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_0_1 = par_dtype;
CHECK_OBJECT(par_shape);
tmp_kw_call_dict_value_1_1 = par_shape;
CHECK_OBJECT(par_formats);
tmp_kw_call_dict_value_2_1 = par_formats;
CHECK_OBJECT(par_names);
tmp_kw_call_dict_value_3_1 = par_names;
CHECK_OBJECT(par_titles);
tmp_kw_call_dict_value_4_1 = par_titles;
CHECK_OBJECT(par_aligned);
tmp_kw_call_dict_value_5_1 = par_aligned;
CHECK_OBJECT(par_byteorder);
tmp_kw_call_dict_value_6_1 = par_byteorder;
frame_frame_numpy$ma$mrecords$$$function__23_fromarrays->m_frame.f_lineno = 527;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_07b74ff566720a73f9292b90db4431b5_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_view);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = module_var_accessor_numpy$ma$mrecords$mrecarray(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mrecarray);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 530;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__23_fromarrays->m_frame.f_lineno = 527;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__array == NULL);
var__array = tmp_assign_source_11;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_assattr_target_1;
PyObject *tmp_expression_value_5;
tmp_direct_call_arg1_1 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(var_masklist);
tmp_direct_call_arg2_1 = var_masklist;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_list_arg_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__array);
tmp_expression_value_5 = var__array;
tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__mask);
if (tmp_assattr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assattr_value_1);

exception_lineno = 531;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_flat, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_target_1);
Py_DECREF(tmp_assattr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_fill_value);
tmp_cmp_expr_left_1 = par_fill_value;
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
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_fill_value);
tmp_assattr_value_2 = par_fill_value;
CHECK_OBJECT(var__array);
tmp_assattr_target_2 = var__array;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_fill_value, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 533;
type_description_1 = "oooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__23_fromarrays, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__23_fromarrays->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__23_fromarrays, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__23_fromarrays,
    type_description_1,
    par_arraylist,
    par_dtype,
    par_shape,
    par_formats,
    par_names,
    par_titles,
    par_aligned,
    par_byteorder,
    par_fill_value,
    var_datalist,
    var_masklist,
    var__array
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__23_fromarrays == cache_frame_frame_numpy$ma$mrecords$$$function__23_fromarrays) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__23_fromarrays);
    cache_frame_frame_numpy$ma$mrecords$$$function__23_fromarrays = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__23_fromarrays);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var__array);
tmp_return_value = var__array;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_datalist);
CHECK_OBJECT(var_datalist);
Py_DECREF(var_datalist);
var_datalist = NULL;
CHECK_OBJECT(var_masklist);
CHECK_OBJECT(var_masklist);
Py_DECREF(var_masklist);
var_masklist = NULL;
CHECK_OBJECT(var__array);
CHECK_OBJECT(var__array);
Py_DECREF(var__array);
var__array = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_datalist);
var_datalist = NULL;
Py_XDECREF(var_masklist);
var_masklist = NULL;
Py_XDECREF(var__array);
var__array = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_arraylist);
Py_DECREF(par_arraylist);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_shape);
Py_DECREF(par_shape);
CHECK_OBJECT(par_formats);
Py_DECREF(par_formats);
CHECK_OBJECT(par_names);
Py_DECREF(par_names);
CHECK_OBJECT(par_titles);
Py_DECREF(par_titles);
CHECK_OBJECT(par_aligned);
Py_DECREF(par_aligned);
CHECK_OBJECT(par_byteorder);
Py_DECREF(par_byteorder);
CHECK_OBJECT(par_fill_value);
Py_DECREF(par_fill_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_arraylist);
Py_DECREF(par_arraylist);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
CHECK_OBJECT(par_shape);
Py_DECREF(par_shape);
CHECK_OBJECT(par_formats);
Py_DECREF(par_formats);
CHECK_OBJECT(par_names);
Py_DECREF(par_names);
CHECK_OBJECT(par_titles);
Py_DECREF(par_titles);
CHECK_OBJECT(par_aligned);
Py_DECREF(par_aligned);
CHECK_OBJECT(par_byteorder);
Py_DECREF(par_byteorder);
CHECK_OBJECT(par_fill_value);
Py_DECREF(par_fill_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$ma$mrecords$$$function__24_fromrecords(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_reclist = python_pars[0];
PyObject *par_dtype = python_pars[1];
PyObject *par_shape = python_pars[2];
PyObject *par_formats = python_pars[3];
PyObject *par_names = python_pars[4];
PyObject *par_titles = python_pars[5];
PyObject *par_aligned = python_pars[6];
PyObject *par_byteorder = python_pars[7];
PyObject *par_fill_value = python_pars[8];
PyObject *par_mask = python_pars[9];
PyObject *var__mask = NULL;
PyObject *var_mrec = NULL;
PyObject *var_maskrecordlength = NULL;
PyObject *outline_0_var_m = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__24_fromrecords;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__24_fromrecords = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__24_fromrecords)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__24_fromrecords);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__24_fromrecords == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__24_fromrecords = MAKE_FUNCTION_FRAME(tstate, code_objects_67c30a10b0a764fafc33082de784d3aa, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__24_fromrecords->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__24_fromrecords = cache_frame_frame_numpy$ma$mrecords$$$function__24_fromrecords;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__24_fromrecords);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__24_fromrecords) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_reclist);
tmp_expression_value_1 = par_reclist;
tmp_name_value_1 = mod_consts.const_str_plain__mask;
tmp_default_value_1 = Py_None;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 571;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__mask == NULL);
var__mask = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_reclist);
tmp_isinstance_inst_1 = par_reclist;
tmp_expression_value_2 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 573;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndarray);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_reclist);
tmp_isinstance_inst_2 = par_reclist;
tmp_expression_value_3 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 575;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_MaskedArray);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_reclist);
tmp_called_instance_1 = par_reclist;
frame_frame_numpy$ma$mrecords$$$function__24_fromrecords->m_frame.f_lineno = 576;
tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_filled);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_view);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 576;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ndarray);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 576;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__24_fromrecords->m_frame.f_lineno = 576;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_reclist;
    assert(old != NULL);
    par_reclist = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_dtype);
tmp_cmp_expr_left_1 = par_dtype;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_reclist);
tmp_expression_value_6 = par_reclist;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_dtype);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_dtype;
    assert(old != NULL);
    par_dtype = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_reclist);
tmp_called_instance_2 = par_reclist;
frame_frame_numpy$ma$mrecords$$$function__24_fromrecords->m_frame.f_lineno = 580;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_tolist);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_reclist;
    assert(old != NULL);
    par_reclist = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_9 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 581;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_rec);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_fromrecords);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_reclist);
tmp_kw_call_arg_value_0_1 = par_reclist;
CHECK_OBJECT(par_dtype);
tmp_kw_call_dict_value_0_1 = par_dtype;
CHECK_OBJECT(par_shape);
tmp_kw_call_dict_value_1_1 = par_shape;
CHECK_OBJECT(par_formats);
tmp_kw_call_dict_value_2_1 = par_formats;
CHECK_OBJECT(par_names);
tmp_kw_call_dict_value_3_1 = par_names;
CHECK_OBJECT(par_titles);
tmp_kw_call_dict_value_4_1 = par_titles;
CHECK_OBJECT(par_aligned);
tmp_kw_call_dict_value_5_1 = par_aligned;
CHECK_OBJECT(par_byteorder);
tmp_kw_call_dict_value_6_1 = par_byteorder;
frame_frame_numpy$ma$mrecords$$$function__24_fromrecords->m_frame.f_lineno = 581;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
    tmp_expression_value_7 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_07b74ff566720a73f9292b90db4431b5_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_view);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_numpy$ma$mrecords$mrecarray(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mrecarray);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 583;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__24_fromrecords->m_frame.f_lineno = 581;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_mrec == NULL);
var_mrec = tmp_assign_source_5;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_fill_value);
tmp_cmp_expr_left_2 = par_fill_value;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_fill_value);
tmp_assattr_value_1 = par_fill_value;
CHECK_OBJECT(var_mrec);
tmp_assattr_target_1 = var_mrec;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_fill_value, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 586;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_mask);
tmp_cmp_expr_left_3 = par_mask;
tmp_expression_value_10 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 588;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_nomask);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
tmp_called_instance_3 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 589;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mask);
tmp_args_element_value_3 = par_mask;
frame_frame_numpy$ma$mrecords$$$function__24_fromrecords->m_frame.f_lineno = 589;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_asarray, tmp_args_element_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_mask;
    assert(old != NULL);
    par_mask = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_mask);
tmp_expression_value_11 = par_mask;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_dtype);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_maskrecordlength == NULL);
var_maskrecordlength = tmp_assign_source_7;
}
{
bool tmp_condition_result_6;
CHECK_OBJECT(var_maskrecordlength);
tmp_condition_result_6 = CHECK_IF_TRUE(var_maskrecordlength) == 1;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_mask);
tmp_assattr_value_2 = par_mask;
CHECK_OBJECT(var_mrec);
tmp_expression_value_12 = var_mrec;
tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__mask);
if (tmp_assattr_target_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 592;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_flat, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_target_2);
Py_DECREF(tmp_assattr_target_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 592;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_mask);
tmp_expression_value_13 = par_mask;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_2;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
PyObject *tmp_expression_value_14;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_mask);
tmp_iter_arg_1 = par_mask;
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_9;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 594;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_11 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_m;
    outline_0_var_m = tmp_assign_source_11;
    Py_INCREF(outline_0_var_m);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_tuple_arg_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_m);
tmp_tuple_arg_1 = outline_0_var_m;
tmp_append_value_1 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assattr_value_3 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assattr_value_3);
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
Py_XDECREF(outline_0_var_m);
outline_0_var_m = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_m);
outline_0_var_m = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 594;
goto frame_exception_exit_1;
outline_result_1:;
CHECK_OBJECT(var_mrec);
tmp_expression_value_14 = var_mrec;
tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__mask);
if (tmp_assattr_target_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assattr_value_3);

exception_lineno = 594;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_flat, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_target_3);
Py_DECREF(tmp_assattr_target_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_mrec);
tmp_called_instance_4 = var_mrec;
CHECK_OBJECT(par_mask);
tmp_args_element_value_4 = par_mask;
frame_frame_numpy$ma$mrecords$$$function__24_fromrecords->m_frame.f_lineno = 596;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain___setmask__, tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_end_7:;
branch_end_6:;
branch_no_5:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var__mask);
tmp_cmp_expr_left_5 = var__mask;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var__mask);
tmp_ass_subvalue_1 = var__mask;
CHECK_OBJECT(var_mrec);
tmp_expression_value_15 = var_mrec;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__mask);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_slice_none_none_none;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_8:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__24_fromrecords, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__24_fromrecords->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__24_fromrecords, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__24_fromrecords,
    type_description_1,
    par_reclist,
    par_dtype,
    par_shape,
    par_formats,
    par_names,
    par_titles,
    par_aligned,
    par_byteorder,
    par_fill_value,
    par_mask,
    var__mask,
    var_mrec,
    var_maskrecordlength
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__24_fromrecords == cache_frame_frame_numpy$ma$mrecords$$$function__24_fromrecords) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__24_fromrecords);
    cache_frame_frame_numpy$ma$mrecords$$$function__24_fromrecords = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__24_fromrecords);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_mrec);
tmp_return_value = var_mrec;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_reclist);
CHECK_OBJECT(par_reclist);
Py_DECREF(par_reclist);
par_reclist = NULL;
CHECK_OBJECT(par_dtype);
CHECK_OBJECT(par_dtype);
Py_DECREF(par_dtype);
par_dtype = NULL;
Py_XDECREF(par_mask);
par_mask = NULL;
CHECK_OBJECT(var__mask);
CHECK_OBJECT(var__mask);
Py_DECREF(var__mask);
var__mask = NULL;
CHECK_OBJECT(var_mrec);
CHECK_OBJECT(var_mrec);
Py_DECREF(var_mrec);
var_mrec = NULL;
Py_XDECREF(var_maskrecordlength);
var_maskrecordlength = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_reclist);
par_reclist = NULL;
Py_XDECREF(par_dtype);
par_dtype = NULL;
Py_XDECREF(par_mask);
par_mask = NULL;
Py_XDECREF(var__mask);
var__mask = NULL;
Py_XDECREF(var_mrec);
var_mrec = NULL;
Py_XDECREF(var_maskrecordlength);
var_maskrecordlength = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_shape);
Py_DECREF(par_shape);
CHECK_OBJECT(par_formats);
Py_DECREF(par_formats);
CHECK_OBJECT(par_names);
Py_DECREF(par_names);
CHECK_OBJECT(par_titles);
Py_DECREF(par_titles);
CHECK_OBJECT(par_aligned);
Py_DECREF(par_aligned);
CHECK_OBJECT(par_byteorder);
Py_DECREF(par_byteorder);
CHECK_OBJECT(par_fill_value);
Py_DECREF(par_fill_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_shape);
Py_DECREF(par_shape);
CHECK_OBJECT(par_formats);
Py_DECREF(par_formats);
CHECK_OBJECT(par_names);
Py_DECREF(par_names);
CHECK_OBJECT(par_titles);
Py_DECREF(par_titles);
CHECK_OBJECT(par_aligned);
Py_DECREF(par_aligned);
CHECK_OBJECT(par_byteorder);
Py_DECREF(par_byteorder);
CHECK_OBJECT(par_fill_value);
Py_DECREF(par_fill_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$ma$mrecords$$$function__25__guessvartypes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_arr = python_pars[0];
PyObject *var_vartypes = NULL;
PyObject *var_f = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
nuitka_bool tmp_try_except_2__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
nuitka_bool tmp_try_except_3__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_3;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_vartypes == NULL);
var_vartypes = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes = MAKE_FUNCTION_FRAME(tstate, code_objects_b4de830e88e584470fcbcda84c1e7b09, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes = cache_frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 613;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_arr);
tmp_args_element_value_1 = par_arr;
frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame.f_lineno = 613;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_asarray, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 613;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_arr;
    assert(old != NULL);
    par_arr = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_arr);
tmp_expression_value_1 = par_arr;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 614;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_2;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 614;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_arr);
tmp_expression_value_2 = par_arr;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 615;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_arr;
    assert(old != NULL);
    par_arr = tmp_assign_source_3;
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_arr);
tmp_expression_value_3 = par_arr;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ndim);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_2;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "ooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_7297515c0264332491e110183d446497;
frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame.f_lineno = 617;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 617;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
branch_end_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
if (par_arr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 619;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = par_arr;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 619;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 619;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_6 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_f;
    var_f = tmp_assign_source_6;
    Py_INCREF(var_f);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_TRUE;
tmp_try_except_3__unhandled_indicator = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_int_arg_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(var_f);
tmp_int_arg_1 = var_f;
tmp_capi_result_1 = PyNumber_Int(tmp_int_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 621;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
tmp_try_except_3__unhandled_indicator = tmp_assign_source_8;
}
// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = mod_consts.const_tuple_type_ValueError_type_TypeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "ooo";
    goto try_except_handler_4;
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
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_TRUE;
tmp_try_except_2__unhandled_indicator = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_float_arg_1;
PyObject *tmp_capi_result_2;
CHECK_OBJECT(var_f);
tmp_float_arg_1 = var_f;
tmp_capi_result_2 = TO_FLOAT(tmp_float_arg_1);
if (tmp_capi_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 624;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_capi_result_2);
Py_DECREF(tmp_capi_result_2);
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
tmp_try_except_2__unhandled_indicator = tmp_assign_source_10;
}
// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = mod_consts.const_tuple_type_ValueError_type_TypeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_real_arg_1;
PyObject *tmp_capi_result_3;
CHECK_OBJECT(var_f);
tmp_real_arg_1 = var_f;
tmp_capi_result_3 = BUILTIN_COMPLEX1(tstate, tmp_real_arg_1);
if (tmp_capi_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 627;
type_description_1 = "ooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_capi_result_3);
Py_DECREF(tmp_capi_result_3);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_12;
tmp_assign_source_12 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_12;
}
// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = mod_consts.const_tuple_type_ValueError_type_TypeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
type_description_1 = "ooo";
    goto try_except_handler_8;
}
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_expression_value_4;
if (var_vartypes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_vartypes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 629;
type_description_1 = "ooo";
    goto try_except_handler_8;
}

tmp_list_arg_value_1 = var_vartypes;
if (par_arr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 629;
type_description_1 = "ooo";
    goto try_except_handler_8;
}

tmp_expression_value_4 = par_arr;
tmp_item_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_dtype);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 629;
type_description_1 = "ooo";
    goto try_except_handler_8;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 626;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame)) {
        frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_8;
branch_end_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_2;
if (var_vartypes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_vartypes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 631;
type_description_1 = "ooo";
    goto try_except_handler_6;
}

tmp_expression_value_5 = var_vartypes;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_append);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
tmp_called_instance_2 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 631;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame.f_lineno = 631;
tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_dtype,
    PyTuple_GET_ITEM(mod_consts.const_tuple_type_complex_tuple, 0)
);

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 631;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame.f_lineno = 631;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_1 = "ooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_6:;
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 623;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame)) {
        frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_6;
branch_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_4;
// End of try:
try_end_5:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(tmp_try_except_2__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = tmp_try_except_2__unhandled_indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_3;
if (var_vartypes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_vartypes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 633;
type_description_1 = "ooo";
    goto try_except_handler_4;
}

tmp_expression_value_6 = var_vartypes;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_append);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 633;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_called_instance_3 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 633;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame.f_lineno = 633;
tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_dtype,
    PyTuple_GET_ITEM(mod_consts.const_tuple_type_float_tuple, 0)
);

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 633;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame.f_lineno = 633;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 633;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_7:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 620;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame)) {
        frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_4;
branch_end_3:;
goto try_end_6;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_2;
// End of try:
try_end_6:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_8;
nuitka_bool tmp_cmp_expr_right_8;
assert(tmp_try_except_3__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_8 = tmp_try_except_3__unhandled_indicator;
tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_instance_4;
if (var_vartypes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_vartypes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 635;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_expression_value_7 = var_vartypes;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_append);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_instance_4 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 635;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame.f_lineno = 635;
tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_dtype,
    PyTuple_GET_ITEM(mod_consts.const_tuple_type_int_tuple, 0)
);

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 635;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame.f_lineno = 635;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_8:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 619;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_7;
// Exception handler code:
try_except_handler_2:;
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
try_end_7:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_vartypes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_vartypes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 636;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_vartypes;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes,
    type_description_1,
    par_arr,
    var_vartypes,
    var_f
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes == cache_frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes);
    cache_frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__25__guessvartypes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_arr);
par_arr = NULL;
Py_XDECREF(var_vartypes);
var_vartypes = NULL;
Py_XDECREF(var_f);
var_f = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_arr);
par_arr = NULL;
Py_XDECREF(var_vartypes);
var_vartypes = NULL;
Py_XDECREF(var_f);
var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

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


static PyObject *impl_numpy$ma$mrecords$$$function__26_openfile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_fname = python_pars[0];
PyObject *var_f = NULL;
PyObject *var_e = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__26_openfile;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__26_openfile = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__26_openfile)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__26_openfile);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__26_openfile == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__26_openfile = MAKE_FUNCTION_FRAME(tstate, code_objects_0fd7a8bbb7f95b73666c07bd2489a336, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__26_openfile->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__26_openfile = cache_frame_frame_numpy$ma$mrecords$$$function__26_openfile;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__26_openfile);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__26_openfile) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_fname);
tmp_expression_value_1 = par_fname;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_readline);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;
type_description_1 = "ooo";
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
CHECK_OBJECT(par_fname);
tmp_return_value = par_fname;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_open_filename_1;
CHECK_OBJECT(par_fname);
tmp_open_filename_1 = par_fname;
tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(var_f == NULL);
var_f = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__26_openfile, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__26_openfile, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_FileNotFoundError;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_2);
var_e = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_raise_cause_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_3b7523c6495ca265d7e12bb9215e0a7d;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_fname);
tmp_format_value_1 = par_fname;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 651;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_39;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_numpy$ma$mrecords$$$function__26_openfile->m_frame.f_lineno = 651;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_FileNotFoundError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 651;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooo";
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

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 648;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$ma$mrecords$$$function__26_openfile->m_frame)) {
        frame_frame_numpy$ma$mrecords$$$function__26_openfile->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
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
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_f);
tmp_called_instance_1 = var_f;
frame_frame_numpy$ma$mrecords$$$function__26_openfile->m_frame.f_lineno = 652;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_readline);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_2_none;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_digest_2511f293e5bceac4266463b4a55013c9;
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "ooo";
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
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_f);
tmp_called_instance_2 = var_f;
frame_frame_numpy$ma$mrecords$$$function__26_openfile->m_frame.f_lineno = 653;
tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_seek,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_int_0_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 653;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
CHECK_OBJECT(var_f);
tmp_return_value = var_f;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_f);
tmp_called_instance_3 = var_f;
frame_frame_numpy$ma$mrecords$$$function__26_openfile->m_frame.f_lineno = 655;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, const_str_plain_close);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 655;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_5757d7b2b57d90bab525d3668ae1f9a6;
frame_frame_numpy$ma$mrecords$$$function__26_openfile->m_frame.f_lineno = 656;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 656;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__26_openfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__26_openfile->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__26_openfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__26_openfile,
    type_description_1,
    par_fname,
    var_f,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__26_openfile == cache_frame_frame_numpy$ma$mrecords$$$function__26_openfile) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__26_openfile);
    cache_frame_frame_numpy$ma$mrecords$$$function__26_openfile = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__26_openfile);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_f);
var_f = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_f);
var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_fname);
Py_DECREF(par_fname);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_fname);
Py_DECREF(par_fname);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$ma$mrecords$$$function__27_fromtextfile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_fname = python_pars[0];
PyObject *par_delimiter = python_pars[1];
PyObject *par_commentchar = python_pars[2];
PyObject *par_missingchar = python_pars[3];
PyObject *par_varnames = python_pars[4];
PyObject *par_vartypes = python_pars[5];
PyObject *var_ftext = NULL;
PyObject *var_line = NULL;
PyObject *var_firstline = NULL;
PyObject *var__varnames = NULL;
PyObject *var__variables = NULL;
PyObject *var__ = NULL;
PyObject *var_nfields = NULL;
PyObject *var_msg = NULL;
PyObject *var_mdescr = NULL;
PyObject *var_mfillv = NULL;
PyObject *var__mask = NULL;
PyObject *var__datalist = NULL;
PyObject *outline_0_var_line = NULL;
PyObject *outline_1_var_v = NULL;
PyObject *outline_2_var_f = NULL;
PyObject *outline_3_var_a = NULL;
PyObject *outline_3_var_m = NULL;
PyObject *outline_3_var_t = NULL;
PyObject *outline_3_var_f = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_3 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_4 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
PyObject *tmp_listcomp_3__$0 = NULL;
PyObject *tmp_listcomp_3__contraction = NULL;
PyObject *tmp_listcomp_3__iter_value_0 = NULL;
PyObject *tmp_listcomp_4__$0 = NULL;
PyObject *tmp_listcomp_4__contraction = NULL;
PyObject *tmp_listcomp_4__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile = MAKE_FUNCTION_FRAME(tstate, code_objects_ae0bb4e2d423c9dc8541c50de3952e50, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile = cache_frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$ma$mrecords$openfile(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openfile);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 686;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_fname);
tmp_args_element_value_1 = par_fname;
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 686;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 686;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ftext == NULL);
var_ftext = tmp_assign_source_1;
}
loop_start_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
if (var_ftext == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ftext);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 690;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = var_ftext;
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 690;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_readline);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 690;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    var_line = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_line);
tmp_expression_value_2 = var_line;
CHECK_OBJECT(var_line);
tmp_expression_value_3 = var_line;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_find);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 691;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_commentchar == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_commentchar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 691;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = par_commentchar;
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 691;
tmp_stop_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 691;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 691;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 691;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 691;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 691;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_firstline;
    var_firstline = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_firstline);
tmp_expression_value_4 = var_firstline;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_split);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 692;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_delimiter == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_delimiter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 692;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = par_delimiter;
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 692;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 692;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var__varnames;
    var__varnames = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var__varnames);
tmp_len_arg_1 = var__varnames;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 693;
type_description_1 = "oooooooooooooooooo";
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
goto loop_end_1;
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 689;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_varnames);
tmp_cmp_expr_left_2 = par_varnames;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(var__varnames);
tmp_assign_source_5 = var__varnames;
{
    PyObject *old = par_varnames;
    assert(old != NULL);
    par_varnames = tmp_assign_source_5;
    Py_INCREF(par_varnames);
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
tmp_expression_value_5 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 699;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_masked_array);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 699;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
if (var_ftext == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ftext);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 699;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_iter_arg_1 = var_ftext;
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 699;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_8;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
exception_lineno = 699;
        goto try_except_handler_3;
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
    PyObject *old = outline_0_var_line;
    outline_0_var_line = tmp_assign_source_10;
    Py_INCREF(outline_0_var_line);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_2;
bool tmp_tmp_and_right_value_1_cbool_1;
CHECK_OBJECT(outline_0_var_line);
tmp_expression_value_6 = outline_0_var_line;
tmp_subscript_value_2 = const_int_0;
tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 0);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
}
if (par_commentchar == NULL) {
Py_DECREF(tmp_cmp_expr_left_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_commentchar);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 700;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_cmp_expr_right_3 = par_commentchar;
tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(outline_0_var_line);
tmp_len_arg_2 = outline_0_var_line;
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_4 = 1;
tmp_tmp_and_right_value_1_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_and_right_value_1 = tmp_tmp_and_right_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_line);
tmp_expression_value_8 = outline_0_var_line;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_strip);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 699;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 699;
tmp_expression_value_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 699;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 699;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
}
if (par_delimiter == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_delimiter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 699;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_5 = par_delimiter;
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 699;
tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 699;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 699;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
}
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 699;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_args_element_value_4 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_args_element_value_4);
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
Py_XDECREF(outline_0_var_line);
outline_0_var_line = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_line);
outline_0_var_line = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 699;
goto frame_exception_exit_1;
outline_result_1:;
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 699;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 699;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__variables == NULL);
var__variables = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var__variables);
tmp_expression_value_9 = var__variables;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_shape);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 701;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 701;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 701;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 701;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 701;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_14);
var__ = tmp_assign_source_14;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
assert(var_nfields == NULL);
Py_INCREF(tmp_assign_source_15);
var_nfields = tmp_assign_source_15;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
if (var_ftext == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ftext);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 702;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = var_ftext;
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 702;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_close);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 702;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_vartypes);
tmp_cmp_expr_left_5 = par_vartypes;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_3;
tmp_called_value_8 = module_var_accessor_numpy$ma$mrecords$_guessvartypes(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__guessvartypes);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 706;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__variables);
tmp_expression_value_10 = var__variables;
tmp_subscript_value_3 = const_int_0;
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_3, 0);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 706;
tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_vartypes;
    assert(old != NULL);
    par_vartypes = tmp_assign_source_16;
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_17;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(par_vartypes);
tmp_iter_arg_3 = par_vartypes;
tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_19;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_2 = tmp_listcomp_2__$0;
tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_20 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
exception_lineno = 708;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_21 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_v;
    outline_1_var_v = tmp_assign_source_21;
    Py_INCREF(outline_1_var_v);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
tmp_called_instance_3 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 708;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(outline_1_var_v);
tmp_args_element_value_7 = outline_1_var_v;
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 708;
tmp_append_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_dtype, tmp_args_element_value_7);
if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_7;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_assign_source_17 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_assign_source_17);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
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
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_XDECREF(outline_1_var_v);
outline_1_var_v = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_v);
outline_1_var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 708;
goto frame_exception_exit_1;
outline_result_2:;
{
    PyObject *old = par_vartypes;
    assert(old != NULL);
    par_vartypes = tmp_assign_source_17;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_len_arg_3;
CHECK_OBJECT(par_vartypes);
tmp_len_arg_3 = par_vartypes;
tmp_cmp_expr_left_6 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 709;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_nfields);
tmp_cmp_expr_right_6 = var_nfields;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 709;
type_description_1 = "oooooooooooooooooo";
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
PyObject *tmp_assign_source_22;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_e8c410ee6027bfe93acdb13d1ab06759;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_len_arg_4;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_vartypes);
tmp_len_arg_4 = par_vartypes;
tmp_format_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "oooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "oooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_7c962fc1fc1d149325bec925ba7f73df;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_nfields);
tmp_format_value_2 = var_nfields;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "oooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ad6c2366d0aa924cec013baf5b60040b;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_22 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_22 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(var_msg);
tmp_iadd_expr_left_1 = var_msg;
tmp_iadd_expr_right_1 = mod_consts.const_str_digest_06328b6b9e88469afcf68054958c0af6;
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_23 = tmp_iadd_expr_left_1;
var_msg = tmp_assign_source_23;

}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_11 = module_var_accessor_numpy$ma$mrecords$warnings(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 712;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_warn);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 712;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_msg);
tmp_tuple_element_2 = var_msg;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 712;
tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 712;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_4;
tmp_called_value_10 = module_var_accessor_numpy$ma$mrecords$_guessvartypes(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__guessvartypes);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 713;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__variables);
tmp_expression_value_12 = var__variables;
tmp_subscript_value_4 = const_int_0;
tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_4, 0);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 713;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 713;
tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 713;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_vartypes;
    assert(old != NULL);
    par_vartypes = tmp_assign_source_24;
    Py_DECREF(old);
}

}
branch_no_5:;
branch_end_4:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_11 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(par_varnames);
tmp_args_element_value_9 = par_varnames;
if (par_vartypes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_vartypes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 716;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_10 = par_vartypes;
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 716;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 716;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_25 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 716;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_mdescr == NULL);
var_mdescr = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_iter_arg_4;
if (par_vartypes == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_vartypes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 717;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_iter_arg_4 = par_vartypes;
tmp_assign_source_27 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 717;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_8;
}
assert(tmp_listcomp_3__$0 == NULL);
tmp_listcomp_3__$0 = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_3__contraction == NULL);
tmp_listcomp_3__contraction = tmp_assign_source_28;
}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_listcomp_3__$0);
tmp_next_source_3 = tmp_listcomp_3__$0;
tmp_assign_source_29 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_29 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
exception_lineno = 717;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_listcomp_3__iter_value_0;
    tmp_listcomp_3__iter_value_0 = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
tmp_assign_source_30 = tmp_listcomp_3__iter_value_0;
{
    PyObject *old = outline_2_var_f;
    outline_2_var_f = tmp_assign_source_30;
    Py_INCREF(outline_2_var_f);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_3;
PyObject *tmp_append_value_3;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_append_list_3 = tmp_listcomp_3__contraction;
tmp_called_instance_4 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 717;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(outline_2_var_f);
tmp_args_element_value_11 = outline_2_var_f;
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 717;
tmp_append_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_default_fill_value, tmp_args_element_value_11);
if (tmp_append_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 717;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 717;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_9;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 717;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_9;
}
goto loop_start_4;
loop_end_4:;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_assign_source_26 = tmp_listcomp_3__contraction;
Py_INCREF(tmp_assign_source_26);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_XDECREF(outline_2_var_f);
outline_2_var_f = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_2_var_f);
outline_2_var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 717;
goto frame_exception_exit_1;
outline_result_3:;
assert(var_mfillv == NULL);
var_mfillv = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(var__variables);
tmp_expression_value_13 = var__variables;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_T);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 721;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_missingchar);
tmp_cmp_expr_right_7 = par_missingchar;
tmp_assign_source_31 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 721;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__mask == NULL);
var__mask = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_iter_arg_5;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
tmp_called_value_12 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(var__variables);
tmp_expression_value_14 = var__variables;
tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_T);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var__mask);
tmp_args_element_value_13 = var__mask;
if (par_vartypes == NULL) {
Py_DECREF(tmp_args_element_value_12);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_vartypes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 723;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_14 = par_vartypes;
CHECK_OBJECT(var_mfillv);
tmp_args_element_value_15 = var_mfillv;
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 723;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_33 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_10;
}
assert(tmp_listcomp_4__$0 == NULL);
tmp_listcomp_4__$0 = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_4__contraction == NULL);
tmp_listcomp_4__contraction = tmp_assign_source_34;
}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_35;
CHECK_OBJECT(tmp_listcomp_4__$0);
tmp_next_source_4 = tmp_listcomp_4__$0;
tmp_assign_source_35 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_35 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
exception_lineno = 722;
        goto try_except_handler_11;
    }
}

{
    PyObject *old = tmp_listcomp_4__iter_value_0;
    tmp_listcomp_4__iter_value_0 = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
tmp_iter_arg_6 = tmp_listcomp_4__iter_value_0;
tmp_assign_source_36 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_37;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_37 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 4);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 723;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_38 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 4);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 723;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_5 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_39 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 2, 4);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 723;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_3;
    tmp_listcomp$tuple_unpack_1__element_3 = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_6 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_40 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 3, 4);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 723;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_4;
    tmp_listcomp$tuple_unpack_1__element_4 = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 723;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_13;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_12;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_3);
tmp_listcomp$tuple_unpack_1__element_3 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_4);
tmp_listcomp$tuple_unpack_1__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_41;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_41 = tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = outline_3_var_a;
    outline_3_var_a = tmp_assign_source_41;
    Py_INCREF(outline_3_var_a);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_42;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_42 = tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = outline_3_var_m;
    outline_3_var_m = tmp_assign_source_42;
    Py_INCREF(outline_3_var_m);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_43;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_3);
tmp_assign_source_43 = tmp_listcomp$tuple_unpack_1__element_3;
{
    PyObject *old = outline_3_var_t;
    outline_3_var_t = tmp_assign_source_43;
    Py_INCREF(outline_3_var_t);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_3);
tmp_listcomp$tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_44;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_4);
tmp_assign_source_44 = tmp_listcomp$tuple_unpack_1__element_4;
{
    PyObject *old = outline_3_var_f;
    outline_3_var_f = tmp_assign_source_44;
    Py_INCREF(outline_3_var_f);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_4);
tmp_listcomp$tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_append_list_4;
PyObject *tmp_append_value_4;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
CHECK_OBJECT(tmp_listcomp_4__contraction);
tmp_append_list_4 = tmp_listcomp_4__contraction;
tmp_expression_value_15 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 722;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_masked_array);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 722;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(outline_3_var_a);
tmp_kw_call_arg_value_0_1 = outline_3_var_a;
CHECK_OBJECT(outline_3_var_m);
tmp_kw_call_dict_value_0_1 = outline_3_var_m;
CHECK_OBJECT(outline_3_var_t);
tmp_kw_call_dict_value_1_1 = outline_3_var_t;
CHECK_OBJECT(outline_3_var_f);
tmp_kw_call_dict_value_2_1 = outline_3_var_f;
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 722;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_append_value_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_13, args, kw_values, mod_consts.const_tuple_str_plain_mask_str_plain_dtype_str_plain_fill_value_tuple);
}

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_append_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 722;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 722;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_11;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 722;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_11;
}
goto loop_start_5;
loop_end_5:;
CHECK_OBJECT(tmp_listcomp_4__contraction);
tmp_assign_source_32 = tmp_listcomp_4__contraction;
Py_INCREF(tmp_assign_source_32);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(tmp_listcomp_4__$0);
CHECK_OBJECT(tmp_listcomp_4__$0);
Py_DECREF(tmp_listcomp_4__$0);
tmp_listcomp_4__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_4__contraction);
CHECK_OBJECT(tmp_listcomp_4__contraction);
Py_DECREF(tmp_listcomp_4__contraction);
tmp_listcomp_4__contraction = NULL;
Py_XDECREF(tmp_listcomp_4__iter_value_0);
tmp_listcomp_4__iter_value_0 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_4__$0);
CHECK_OBJECT(tmp_listcomp_4__$0);
Py_DECREF(tmp_listcomp_4__$0);
tmp_listcomp_4__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_4__contraction);
CHECK_OBJECT(tmp_listcomp_4__contraction);
Py_DECREF(tmp_listcomp_4__contraction);
tmp_listcomp_4__contraction = NULL;
Py_XDECREF(tmp_listcomp_4__iter_value_0);
tmp_listcomp_4__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_XDECREF(outline_3_var_a);
outline_3_var_a = NULL;
Py_XDECREF(outline_3_var_m);
outline_3_var_m = NULL;
Py_XDECREF(outline_3_var_t);
outline_3_var_t = NULL;
Py_XDECREF(outline_3_var_f);
outline_3_var_f = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_3_var_a);
outline_3_var_a = NULL;
Py_XDECREF(outline_3_var_m);
outline_3_var_m = NULL;
Py_XDECREF(outline_3_var_t);
outline_3_var_t = NULL;
Py_XDECREF(outline_3_var_f);
outline_3_var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 722;
goto frame_exception_exit_1;
outline_result_4:;
assert(var__datalist == NULL);
var__datalist = tmp_assign_source_32;
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_14 = module_var_accessor_numpy$ma$mrecords$fromarrays(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fromarrays);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 725;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__datalist);
tmp_kw_call_arg_value_0_2 = var__datalist;
CHECK_OBJECT(var_mdescr);
tmp_kw_call_dict_value_0_2 = var_mdescr;
frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame.f_lineno = 725;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts.const_tuple_str_plain_dtype_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 725;
type_description_1 = "oooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile,
    type_description_1,
    par_fname,
    par_delimiter,
    par_commentchar,
    par_missingchar,
    par_varnames,
    par_vartypes,
    var_ftext,
    var_line,
    var_firstline,
    var__varnames,
    var__variables,
    var__,
    var_nfields,
    var_msg,
    var_mdescr,
    var_mfillv,
    var__mask,
    var__datalist
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile == cache_frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile);
    cache_frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__27_fromtextfile);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_varnames);
CHECK_OBJECT(par_varnames);
Py_DECREF(par_varnames);
par_varnames = NULL;
Py_XDECREF(par_vartypes);
par_vartypes = NULL;
Py_XDECREF(var_ftext);
var_ftext = NULL;
CHECK_OBJECT(var_line);
CHECK_OBJECT(var_line);
Py_DECREF(var_line);
var_line = NULL;
CHECK_OBJECT(var_firstline);
CHECK_OBJECT(var_firstline);
Py_DECREF(var_firstline);
var_firstline = NULL;
CHECK_OBJECT(var__varnames);
CHECK_OBJECT(var__varnames);
Py_DECREF(var__varnames);
var__varnames = NULL;
CHECK_OBJECT(var__variables);
CHECK_OBJECT(var__variables);
Py_DECREF(var__variables);
var__variables = NULL;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
CHECK_OBJECT(var_nfields);
CHECK_OBJECT(var_nfields);
Py_DECREF(var_nfields);
var_nfields = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
CHECK_OBJECT(var_mdescr);
CHECK_OBJECT(var_mdescr);
Py_DECREF(var_mdescr);
var_mdescr = NULL;
CHECK_OBJECT(var_mfillv);
CHECK_OBJECT(var_mfillv);
Py_DECREF(var_mfillv);
var_mfillv = NULL;
CHECK_OBJECT(var__mask);
CHECK_OBJECT(var__mask);
Py_DECREF(var__mask);
var__mask = NULL;
CHECK_OBJECT(var__datalist);
CHECK_OBJECT(var__datalist);
Py_DECREF(var__datalist);
var__datalist = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_varnames);
par_varnames = NULL;
Py_XDECREF(par_vartypes);
par_vartypes = NULL;
Py_XDECREF(var_ftext);
var_ftext = NULL;
Py_XDECREF(var_line);
var_line = NULL;
Py_XDECREF(var_firstline);
var_firstline = NULL;
Py_XDECREF(var__varnames);
var__varnames = NULL;
Py_XDECREF(var__variables);
var__variables = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_nfields);
var_nfields = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_mdescr);
var_mdescr = NULL;
Py_XDECREF(var_mfillv);
var_mfillv = NULL;
Py_XDECREF(var__mask);
var__mask = NULL;
Py_XDECREF(var__datalist);
var__datalist = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_fname);
Py_DECREF(par_fname);
CHECK_OBJECT(par_delimiter);
Py_DECREF(par_delimiter);
CHECK_OBJECT(par_commentchar);
Py_DECREF(par_commentchar);
CHECK_OBJECT(par_missingchar);
Py_DECREF(par_missingchar);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_fname);
Py_DECREF(par_fname);
CHECK_OBJECT(par_delimiter);
Py_DECREF(par_delimiter);
CHECK_OBJECT(par_commentchar);
Py_DECREF(par_commentchar);
CHECK_OBJECT(par_missingchar);
Py_DECREF(par_missingchar);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$ma$mrecords$$$function__28_addfield(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_mrecord = python_pars[0];
PyObject *par_newfield = python_pars[1];
PyObject *par_newfieldname = python_pars[2];
PyObject *var__data = NULL;
PyObject *var__mask = NULL;
PyObject *var_newdtype = NULL;
PyObject *var_newdata = NULL;
PyObject *var_newmdtype = NULL;
PyObject *var_newmask = NULL;
PyObject *outline_0_var_f = NULL;
PyObject *outline_1_var_n = NULL;
PyObject *outline_2_var_f = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
PyObject *tmp_listcomp_3__$0 = NULL;
PyObject *tmp_listcomp_3__contraction = NULL;
PyObject *tmp_listcomp_3__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$function__28_addfield;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$ma$mrecords$$$function__28_addfield = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$ma$mrecords$$$function__28_addfield)) {
    Py_XDECREF(cache_frame_frame_numpy$ma$mrecords$$$function__28_addfield);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$ma$mrecords$$$function__28_addfield == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$ma$mrecords$$$function__28_addfield = MAKE_FUNCTION_FRAME(tstate, code_objects_d32ea54fd7890f5c1fc69d67efb1ac55, module_numpy$ma$mrecords, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$ma$mrecords$$$function__28_addfield->m_type_description == NULL);
frame_frame_numpy$ma$mrecords$$$function__28_addfield = cache_frame_frame_numpy$ma$mrecords$$$function__28_addfield;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$function__28_addfield);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$function__28_addfield) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_mrecord);
tmp_expression_value_1 = par_mrecord;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__data);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 736;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var__data == NULL);
var__data = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_mrecord);
tmp_expression_value_2 = par_mrecord;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__mask);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var__mask == NULL);
var__mask = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_newfieldname);
tmp_cmp_expr_left_1 = par_newfieldname;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_newfieldname);
tmp_cmp_expr_left_2 = par_newfieldname;
tmp_cmp_expr_right_2 = module_var_accessor_numpy$ma$mrecords$reserved_fields(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reserved_fields);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 738;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 738;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 1) ? true : false;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_plain_f;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var__data);
tmp_expression_value_3 = var__data;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dtype);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 739;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 739;
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


exception_lineno = 739;
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
tmp_assign_source_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_3 == NULL));
{
    PyObject *old = par_newfieldname;
    assert(old != NULL);
    par_newfieldname = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 740;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_newfield);
tmp_args_element_value_1 = par_newfield;
frame_frame_numpy$ma$mrecords$$$function__28_addfield->m_frame.f_lineno = 740;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_array, tmp_args_element_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 740;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_newfield;
    assert(old != NULL);
    par_newfield = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_list_element_1;
PyObject *tmp_tuple_element_2;
tmp_expression_value_4 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 743;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_dtype);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 743;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__data);
tmp_expression_value_6 = var__data;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 743;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_descr);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 743;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_newfieldname);
tmp_tuple_element_2 = par_newfieldname;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_newfield);
tmp_expression_value_7 = par_newfield;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_dtype);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 743;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_list_element_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_add_expr_right_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_add_expr_right_1, 0, tmp_list_element_1);
tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 743;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__28_addfield->m_frame.f_lineno = 743;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 743;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_newdtype == NULL);
var_newdtype = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_4;
tmp_expression_value_8 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 744;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_recarray);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 744;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__data);
tmp_expression_value_9 = var__data;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 744;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_newdtype);
tmp_args_element_value_4 = var_newdtype;
frame_frame_numpy$ma$mrecords$$$function__28_addfield->m_frame.f_lineno = 744;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 744;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_newdata == NULL);
var_newdata = tmp_assign_source_6;
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var__data);
tmp_expression_value_12 = var__data;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_fields);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_values);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$ma$mrecords$$$function__28_addfield->m_frame.f_lineno = 747;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_8;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 746;
        goto try_except_handler_3;
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
    PyObject *old = outline_0_var_f;
    outline_0_var_f = tmp_assign_source_10;
    Py_INCREF(outline_0_var_f);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
if (var_newdata == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newdata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 746;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_13 = var_newdata;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_setfield);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 746;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
if (var__data == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain__data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 746;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_14 = var__data;
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_getfield);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 746;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_f);
tmp_direct_call_arg2_2 = outline_0_var_f;
Py_INCREF(tmp_direct_call_arg2_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2};
    tmp_tuple_element_3 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 746;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(outline_0_var_f);
tmp_direct_call_arg3_1 = outline_0_var_f;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_append_value_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 746;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 746;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 746;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_outline_return_value_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_outline_return_value_1);
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
Py_XDECREF(outline_0_var_f);
outline_0_var_f = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_f);
outline_0_var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 746;
goto frame_exception_exit_1;
outline_result_1:;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
}
{
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_direct_call_arg2_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_16;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_1;
PyObject *tmp_call_result_1;
if (var_newdata == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newdata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 749;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = var_newdata;
tmp_direct_call_arg1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_setfield);
if (tmp_direct_call_arg1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 749;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_newfield);
tmp_expression_value_16 = par_newfield;
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__data);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_3);

exception_lineno = 749;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg2_3, 0, tmp_tuple_element_4);
if (var_newdata == NULL) {
Py_DECREF(tmp_direct_call_arg1_3);
Py_DECREF(tmp_direct_call_arg2_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newdata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 749;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_19 = var_newdata;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_3);
Py_DECREF(tmp_direct_call_arg2_3);

exception_lineno = 749;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_fields);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_3);
Py_DECREF(tmp_direct_call_arg2_3);

exception_lineno = 749;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_newfieldname);
tmp_subscript_value_1 = par_newfieldname;
tmp_direct_call_arg3_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_direct_call_arg3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_3);
Py_DECREF(tmp_direct_call_arg2_3);

exception_lineno = 749;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_3, tmp_direct_call_arg3_2};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 749;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_5;
if (var_newdata == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newdata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 750;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_20 = var_newdata;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_view);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 750;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_numpy$ma$mrecords$MaskedRecords(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MaskedRecords);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 750;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$ma$mrecords$$$function__28_addfield->m_frame.f_lineno = 750;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 750;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_newdata;
    var_newdata = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_6;
tmp_expression_value_21 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 753;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_dtype);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 753;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(var_newdtype);
tmp_expression_value_22 = var_newdtype;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_names);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 753;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 753;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_14;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_2 = tmp_listcomp_2__$0;
tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_15 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 753;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_16 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_n;
    outline_1_var_n = tmp_assign_source_16;
    Py_INCREF(outline_1_var_n);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_tuple_element_5;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
CHECK_OBJECT(outline_1_var_n);
tmp_tuple_element_5 = outline_1_var_n;
tmp_append_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_23;
PyTuple_SET_ITEM0(tmp_append_value_2, 0, tmp_tuple_element_5);
tmp_expression_value_23 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 753;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_3;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_bool);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 753;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_append_value_2, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_append_value_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 753;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 753;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_args_element_value_6 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_args_element_value_6);
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
Py_XDECREF(outline_1_var_n);
outline_1_var_n = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_n);
outline_1_var_n = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 753;
goto frame_exception_exit_1;
outline_result_2:;
frame_frame_numpy$ma$mrecords$$$function__28_addfield->m_frame.f_lineno = 753;
tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 753;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_newmdtype == NULL);
var_newmdtype = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_element_value_8;
tmp_expression_value_24 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 754;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_recarray);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 754;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (var__data == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 754;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_25 = var__data;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_shape);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 754;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_newmdtype);
tmp_args_element_value_8 = var_newmdtype;
frame_frame_numpy$ma$mrecords$$$function__28_addfield->m_frame.f_lineno = 754;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 754;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_newmask == NULL);
var_newmask = tmp_assign_source_17;
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(var__mask);
tmp_expression_value_28 = var__mask;
tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 757;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_fields);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 757;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_values);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 757;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
frame_frame_numpy$ma$mrecords$$$function__28_addfield->m_frame.f_lineno = 757;
tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 757;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 757;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
assert(tmp_listcomp_3__$0 == NULL);
tmp_listcomp_3__$0 = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_3__contraction == NULL);
tmp_listcomp_3__contraction = tmp_assign_source_19;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_listcomp_3__$0);
tmp_next_source_3 = tmp_listcomp_3__$0;
tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_20 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 756;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_listcomp_3__iter_value_0;
    tmp_listcomp_3__iter_value_0 = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
tmp_assign_source_21 = tmp_listcomp_3__iter_value_0;
{
    PyObject *old = outline_2_var_f;
    outline_2_var_f = tmp_assign_source_21;
    Py_INCREF(outline_2_var_f);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_3;
PyObject *tmp_append_value_3;
PyObject *tmp_direct_call_arg1_4;
PyObject *tmp_expression_value_29;
PyObject *tmp_direct_call_arg2_4;
PyObject *tmp_tuple_element_6;
PyObject *tmp_direct_call_arg1_5;
PyObject *tmp_expression_value_30;
PyObject *tmp_direct_call_arg2_5;
PyObject *tmp_direct_call_arg3_3;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_append_list_3 = tmp_listcomp_3__contraction;
if (var_newmask == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newmask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 756;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_29 = var_newmask;
tmp_direct_call_arg1_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_setfield);
if (tmp_direct_call_arg1_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
if (var__mask == NULL) {
Py_DECREF(tmp_direct_call_arg1_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 756;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_30 = var__mask;
tmp_direct_call_arg1_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_getfield);
if (tmp_direct_call_arg1_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_4);

exception_lineno = 756;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(outline_2_var_f);
tmp_direct_call_arg2_5 = outline_2_var_f;
Py_INCREF(tmp_direct_call_arg2_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5, tmp_direct_call_arg2_5};
    tmp_tuple_element_6 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_4);

exception_lineno = 756;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
tmp_direct_call_arg2_4 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg2_4, 0, tmp_tuple_element_6);
CHECK_OBJECT(outline_2_var_f);
tmp_direct_call_arg3_3 = outline_2_var_f;
Py_INCREF(tmp_direct_call_arg3_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4, tmp_direct_call_arg2_4, tmp_direct_call_arg3_3};
    tmp_append_value_3 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_append_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_outline_return_value_2 = tmp_listcomp_3__contraction;
Py_INCREF(tmp_outline_return_value_2);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_XDECREF(outline_2_var_f);
outline_2_var_f = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_2_var_f);
outline_2_var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 756;
goto frame_exception_exit_1;
outline_result_3:;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
}
{
PyObject *tmp_direct_call_arg1_6;
PyObject *tmp_expression_value_31;
PyObject *tmp_direct_call_arg2_6;
PyObject *tmp_tuple_element_7;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_9;
PyObject *tmp_direct_call_arg3_4;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_2;
PyObject *tmp_call_result_2;
if (var_newmask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newmask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 759;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_31 = var_newmask;
tmp_direct_call_arg1_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_setfield);
if (tmp_direct_call_arg1_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 759;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_direct_call_arg1_6);

exception_lineno = 759;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_newfield);
tmp_args_element_value_9 = par_newfield;
frame_frame_numpy$ma$mrecords$$$function__28_addfield->m_frame.f_lineno = 759;
tmp_tuple_element_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getmaskarray, tmp_args_element_value_9);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_6);

exception_lineno = 759;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_6 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg2_6, 0, tmp_tuple_element_7);
if (var_newmask == NULL) {
Py_DECREF(tmp_direct_call_arg1_6);
Py_DECREF(tmp_direct_call_arg2_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newmask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 760;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_34 = var_newmask;
tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_dtype);
if (tmp_expression_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_6);
Py_DECREF(tmp_direct_call_arg2_6);

exception_lineno = 760;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_fields);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_6);
Py_DECREF(tmp_direct_call_arg2_6);

exception_lineno = 760;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_newfieldname);
tmp_subscript_value_2 = par_newfieldname;
tmp_direct_call_arg3_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_direct_call_arg3_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_6);
Py_DECREF(tmp_direct_call_arg2_6);

exception_lineno = 760;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6, tmp_direct_call_arg2_6, tmp_direct_call_arg3_4};
    tmp_call_result_2 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 759;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
if (var_newmask == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_newmask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 761;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_1 = var_newmask;
CHECK_OBJECT(var_newdata);
tmp_assattr_target_1 = var_newdata;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__mask, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 761;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$function__28_addfield, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$function__28_addfield->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$function__28_addfield, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$function__28_addfield,
    type_description_1,
    par_mrecord,
    par_newfield,
    par_newfieldname,
    var__data,
    var__mask,
    var_newdtype,
    var_newdata,
    var_newmdtype,
    var_newmask
);


// Release cached frame if used for exception.
if (frame_frame_numpy$ma$mrecords$$$function__28_addfield == cache_frame_frame_numpy$ma$mrecords$$$function__28_addfield) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$ma$mrecords$$$function__28_addfield);
    cache_frame_frame_numpy$ma$mrecords$$$function__28_addfield = NULL;
}

assertFrameObject(frame_frame_numpy$ma$mrecords$$$function__28_addfield);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_newdata);
tmp_return_value = var_newdata;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_newfield);
CHECK_OBJECT(par_newfield);
Py_DECREF(par_newfield);
par_newfield = NULL;
CHECK_OBJECT(par_newfieldname);
CHECK_OBJECT(par_newfieldname);
Py_DECREF(par_newfieldname);
par_newfieldname = NULL;
Py_XDECREF(var__data);
var__data = NULL;
Py_XDECREF(var__mask);
var__mask = NULL;
CHECK_OBJECT(var_newdtype);
CHECK_OBJECT(var_newdtype);
Py_DECREF(var_newdtype);
var_newdtype = NULL;
CHECK_OBJECT(var_newdata);
CHECK_OBJECT(var_newdata);
Py_DECREF(var_newdata);
var_newdata = NULL;
CHECK_OBJECT(var_newmdtype);
CHECK_OBJECT(var_newmdtype);
Py_DECREF(var_newmdtype);
var_newmdtype = NULL;
Py_XDECREF(var_newmask);
var_newmask = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_newfield);
par_newfield = NULL;
CHECK_OBJECT(par_newfieldname);
CHECK_OBJECT(par_newfieldname);
Py_DECREF(par_newfieldname);
par_newfieldname = NULL;
Py_XDECREF(var__data);
var__data = NULL;
Py_XDECREF(var__mask);
var__mask = NULL;
Py_XDECREF(var_newdtype);
var_newdtype = NULL;
Py_XDECREF(var_newdata);
var_newdata = NULL;
Py_XDECREF(var_newmdtype);
var_newmdtype = NULL;
Py_XDECREF(var_newmask);
var_newmask = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_mrecord);
Py_DECREF(par_mrecord);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_mrecord);
Py_DECREF(par_mrecord);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__10___getitem__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__10___getitem__,
        mod_consts.const_str_plain___getitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7166884e546acee04932e044ca7e9057,
#endif
        code_objects_3308612a9a4a1c2c38b0c9d37e535674,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_579a7b0dcd70c048136d116ba173db62,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__11___setitem__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__11___setitem__,
        mod_consts.const_str_plain___setitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1e7cb630b7d94595250d95886ff5cc2e,
#endif
        code_objects_b3924ce3588f8ba3764e512ca13d892a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_1400f289656eb84f7e5337e4e3d6a151,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__12___str__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__12___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_18d0f84b9ce243b7cbd0608779a5466a,
#endif
        code_objects_5759ff439c4d88afc14705b3efaa54a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_3b128563182f4ce6c29b50e5d8c13861,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__13___repr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__13___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_46f6bc39dd4483f89282d46d0210fafb,
#endif
        code_objects_6cff9daf3b369da829908c65a2ee8016,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_fa6646acfb016de97075f6657c0face8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__14_view(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__14_view,
        mod_consts.const_str_plain_view,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5034f972335c79a56af5111520379e56,
#endif
        code_objects_5ce0590313b5685f0f43e0fd09dfc1bf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_35665a333214865352f15a9a644fba78,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__15_harden_mask(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__15_harden_mask,
        mod_consts.const_str_plain_harden_mask,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4126fdd18698d12df98bec84f42f7714,
#endif
        code_objects_e1469ad27438b8ab62a12a0f750f15ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_b0f9fe06c5cbc5bf903faac3694d919b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__16_soften_mask(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__16_soften_mask,
        mod_consts.const_str_plain_soften_mask,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_88848f3644a4d547ce1ce1a0c3e008fe,
#endif
        code_objects_b35bf8201d2ec31419c524abca01cada,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_badc1050e31ffb5309134b27e658e4b9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__17_copy(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__17_copy,
        mod_consts.const_str_plain_copy,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_18e892f1b5cf8f31cb2c1f6af643d1ab,
#endif
        code_objects_532f084a1b5a5fcd82b11d050fd659b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_e96fb5a1c4b867aef51acd99f9a977b4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__18_tolist(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__18_tolist,
        mod_consts.const_str_plain_tolist,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2242c26d17aa52eff91eb13c1fff14a7,
#endif
        code_objects_859d4c38c1a30def806f08810db5d31a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_eff24e9be578270e28348f0afc46928a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__19___getstate__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__19___getstate__,
        mod_consts.const_str_plain___getstate__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0164da4c032872cdb206d9b803f18057,
#endif
        code_objects_c6a1e257ee3d00e25f5c6fc75d2c9541,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_45027196d3f9c51c081a2146399610e2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__1__checknames(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__1__checknames,
        mod_consts.const_str_plain__checknames,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_377f3721e6dbb94bf2344740dbca1181,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_42539613c74e89bd124a4f1cc1071cc0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__20___setstate__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__20___setstate__,
        mod_consts.const_str_plain___setstate__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_875b4b29bbdccc2460d4c05aa48889c7,
#endif
        code_objects_008712de8309dcdc98130da8823fb1e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_69f11415f172f74db2ddf3aead74577d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__21___reduce__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__21___reduce__,
        mod_consts.const_str_plain___reduce__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8b3c4bcd543563dcf5905f6f5eb1e8ab,
#endif
        code_objects_b9ab975f01f70731dd4022b03f191e61,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_8888beef60a4557d1fb47b6158f0acd0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__22__mrreconstruct(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__22__mrreconstruct,
        mod_consts.const_str_plain__mrreconstruct,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d977c08e9ac080598754396e5022ef30,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_37e31420396c99f6c6270077b44e0a82,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__23_fromarrays(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__23_fromarrays,
        mod_consts.const_str_plain_fromarrays,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fec36d3b9725e050255929a765e44445,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_8d81892b7ddb05b397638207f4487ef0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__24_fromrecords(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__24_fromrecords,
        mod_consts.const_str_plain_fromrecords,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_67c30a10b0a764fafc33082de784d3aa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_6a92a2fd34672b2c1edbc9b0e84ab9d1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__25__guessvartypes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__25__guessvartypes,
        mod_consts.const_str_plain__guessvartypes,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b4de830e88e584470fcbcda84c1e7b09,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_0661bdcc583cd43e7fd4306f9d290f56,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__26_openfile(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__26_openfile,
        mod_consts.const_str_plain_openfile,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0fd7a8bbb7f95b73666c07bd2489a336,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_eb2ca531b696d80ecd0cc40cd7802fae,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__27_fromtextfile(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__27_fromtextfile,
        mod_consts.const_str_plain_fromtextfile,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ae0bb4e2d423c9dc8541c50de3952e50,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_957c98f982513a353a02d8f218da845f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__28_addfield(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__28_addfield,
        mod_consts.const_str_plain_addfield,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d32ea54fd7890f5c1fc69d67efb1ac55,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_45f6dee1c518f36ed5cb36fb3857d8cf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__2__get_fieldmask(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__2__get_fieldmask,
        mod_consts.const_str_plain__get_fieldmask,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c64e1d935ded008c52e55b9cd06ab27c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__3___new__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__3___new__,
        mod_consts.const_str_plain___new__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6f6db7c50c8b15db9973e878b7529d30,
#endif
        code_objects_81769aa09c5fbc4f8fbf4f1dec104207,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__4___array_finalize__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__4___array_finalize__,
        mod_consts.const_str_plain___array_finalize__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_630a89ec4fafc9a66a6f395871ed4024,
#endif
        code_objects_3b120a39ec67a9e6ea67b057e6c414c2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__5__data(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__5__data,
        mod_consts.const_str_plain__data,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bf08a394f716242cf0afe6780e521a36,
#endif
        code_objects_ef9b96cd439bc7f27edf00bfa38f40b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_15d8e5e4a41f57dc53ea7157d3f66838,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__6__fieldmask(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__6__fieldmask,
        mod_consts.const_str_plain__fieldmask,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7990b0bfce3a1f61b593486bfe82176b,
#endif
        code_objects_21ba47221a9abea0683e0b715f8f2190,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_720e0bf783eda8b71a6ba0d87205bdc6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__7___len__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__7___len__,
        mod_consts.const_str_plain___len__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0475c39e9c4541ab8c1e3742bcbf1a5f,
#endif
        code_objects_342a5b977809501f299cce0193d39874,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_ee36ec451788824d4239bba76c611339,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__8___getattribute__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__8___getattribute__,
        mod_consts.const_str_plain___getattribute__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cbc573c6ec8865810bb592957a20bfe4,
#endif
        code_objects_c7984d2a893214810f026820e8758edd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ma$mrecords$$$function__9___setattr__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ma$mrecords$$$function__9___setattr__,
        mod_consts.const_str_plain___setattr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dc6813c82cc389e614f1a8541f051131,
#endif
        code_objects_73740bb4d286722d4bc9230a6d1da129,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$ma$mrecords,
        mod_consts.const_str_digest_86a9aaf93c28d548d79ef4ac839a6917,
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

static function_impl_code const function_table_numpy$ma$mrecords[] = {
impl_numpy$ma$mrecords$$$function__1__checknames,
impl_numpy$ma$mrecords$$$function__2__get_fieldmask,
impl_numpy$ma$mrecords$$$function__3___new__,
impl_numpy$ma$mrecords$$$function__4___array_finalize__,
impl_numpy$ma$mrecords$$$function__5__data,
impl_numpy$ma$mrecords$$$function__6__fieldmask,
impl_numpy$ma$mrecords$$$function__7___len__,
impl_numpy$ma$mrecords$$$function__8___getattribute__,
impl_numpy$ma$mrecords$$$function__9___setattr__,
impl_numpy$ma$mrecords$$$function__10___getitem__,
impl_numpy$ma$mrecords$$$function__11___setitem__,
impl_numpy$ma$mrecords$$$function__12___str__,
impl_numpy$ma$mrecords$$$function__13___repr__,
impl_numpy$ma$mrecords$$$function__14_view,
impl_numpy$ma$mrecords$$$function__15_harden_mask,
impl_numpy$ma$mrecords$$$function__16_soften_mask,
impl_numpy$ma$mrecords$$$function__17_copy,
impl_numpy$ma$mrecords$$$function__18_tolist,
impl_numpy$ma$mrecords$$$function__19___getstate__,
impl_numpy$ma$mrecords$$$function__20___setstate__,
impl_numpy$ma$mrecords$$$function__21___reduce__,
impl_numpy$ma$mrecords$$$function__22__mrreconstruct,
impl_numpy$ma$mrecords$$$function__23_fromarrays,
impl_numpy$ma$mrecords$$$function__24_fromrecords,
impl_numpy$ma$mrecords$$$function__25__guessvartypes,
impl_numpy$ma$mrecords$$$function__26_openfile,
impl_numpy$ma$mrecords$$$function__27_fromtextfile,
impl_numpy$ma$mrecords$$$function__28_addfield,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$ma$mrecords);
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
        module_numpy$ma$mrecords,
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
        function_table_numpy$ma$mrecords,
        sizeof(function_table_numpy$ma$mrecords) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.ma.mrecords";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$ma$mrecords(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$ma$mrecords");

    // Store the module for future use.
    module_numpy$ma$mrecords = module;

    moduledict_numpy$ma$mrecords = MODULE_DICT(module_numpy$ma$mrecords);

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
        PRINT_STRING("numpy$ma$mrecords: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$ma$mrecords: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$ma$mrecords: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.ma.mrecords" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$ma$mrecords\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$ma$mrecords,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$ma$mrecords,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$ma$mrecords,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$ma$mrecords,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$ma$mrecords,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$ma$mrecords);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$ma$mrecords);
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

        UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_numpy$ma$mrecords$$$class__1_MaskedRecords_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_35bb1f376a7cb45bc47774411b14f4b2;
UPDATE_STRING_DICT0(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$ma$mrecords = MAKE_MODULE_FRAME(code_objects_e2a479160c6815a52e5d72265fa83485, module_numpy$ma$mrecords);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$ma$mrecords$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$ma$mrecords$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$ma$mrecords;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$ma$mrecords->m_frame.f_lineno = 16;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$ma$mrecords;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$ma$mrecords->m_frame.f_lineno = 18;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_np, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_e2b728902bc5ac4ffc49ba9390615520;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$ma$mrecords;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$ma$mrecords->m_frame.f_lineno = 19;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$ma$mrecords,
        mod_consts.const_str_plain_ma,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ma);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_ma, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_3 = module_var_accessor_numpy$ma$mrecords$np(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__core);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_records);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__byteorderconv);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain__byteorderconv, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
tmp_expression_value_5 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_core);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__check_fill_value);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain__check_fill_value, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_LIST6(tstate, mod_consts.const_list_87d4bfa4becd56e764327f5ff006e878_list);
UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_LIST4(tstate, mod_consts.const_list_55d12180a4b6835c3cbad6dccc630874_list);
UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_reserved_fields, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_11 = MAKE_FUNCTION_numpy$ma$mrecords$$$function__1__checknames(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain__checknames, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;

tmp_assign_source_12 = MAKE_FUNCTION_numpy$ma$mrecords$$$function__2__get_fieldmask(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain__get_fieldmask, tmp_assign_source_12);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_MaskedArray);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
tmp_assign_source_13 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_13, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_14 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

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
tmp_expression_value_7 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_16 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_16;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

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
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_MaskedRecords;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$ma$mrecords->m_frame.f_lineno = 76;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_17;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

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
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

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


exception_lineno = 76;

    goto try_except_handler_1;
}
frame_frame_numpy$ma$mrecords->m_frame.f_lineno = 76;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 76;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_18;
}
branch_end_1:;
{
PyObject *tmp_assign_source_19;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ff5e7b936a151aeb01e9c959d123a9cd;
tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_80e2b685742e6e709d531a9b1d6f078f;
tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_MaskedRecords;
tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_76;
tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_3;
}
frame_frame_numpy$ma$mrecords$$$class__1_MaskedRecords_2 = MAKE_CLASS_FRAME(tstate, code_objects_a2e590461e51026e84b1057a88c9e4f9, module_numpy$ma$mrecords, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$ma$mrecords$$$class__1_MaskedRecords_2);
assert(Py_REFCNT(frame_frame_numpy$ma$mrecords$$$class__1_MaskedRecords_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = Py_None;
tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 14);
{
PyObject *tmp_expression_value_13;
PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = const_int_0;
PyTuple_SET_ITEM0(tmp_defaults_2, 2, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 3, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 4, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 5, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 6, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 7, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_2, 8, tmp_tuple_element_4);
tmp_expression_value_13 = PyObject_GetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain_ma);

if (tmp_expression_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_13 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
        Py_INCREF(tmp_expression_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_2;
    }
}

tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_nomask);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_defaults_2, 9, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_2, 10, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 11, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_True;
PyTuple_SET_ITEM0(tmp_defaults_2, 12, tmp_tuple_element_4);
tmp_tuple_element_4 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_2, 13, tmp_tuple_element_4);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_defaults_2);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__3___new__(tstate, tmp_defaults_2);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___new__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__4___array_finalize__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___array_finalize__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = PyObject_GetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_1 = MAKE_FUNCTION_numpy$ma$mrecords$$$function__5__data(tstate);

frame_frame_numpy$ma$mrecords$$$class__1_MaskedRecords_2->m_frame.f_lineno = 153;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain__data, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = PyObject_GetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_numpy$ma$mrecords$$$function__6__fieldmask(tstate);

frame_frame_numpy$ma$mrecords$$$class__1_MaskedRecords_2->m_frame.f_lineno = 161;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain__fieldmask, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__7___len__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___len__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__8___getattribute__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___getattribute__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__9___setattr__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___setattr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__10___getitem__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__11___setitem__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___setitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__12___str__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__13___repr__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__14_view(tstate, tmp_defaults_3);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain_view, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__15_harden_mask(tstate);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain_harden_mask, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__16_soften_mask(tstate);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain_soften_mask, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__17_copy(tstate);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain_copy, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__18_tolist(tstate, tmp_defaults_4);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain_tolist, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__19___getstate__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___getstate__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__20___setstate__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___setstate__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$ma$mrecords$$$function__21___reduce__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___reduce__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords$$$class__1_MaskedRecords_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords$$$class__1_MaskedRecords_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords$$$class__1_MaskedRecords_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$ma$mrecords$$$class__1_MaskedRecords_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_numpy$ma$mrecords$$$class__1_MaskedRecords_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_684554007431e177a44bcb5dd8bea4f4_tuple;
tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

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


exception_lineno = 76;

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
tmp_res = PyObject_SetItem(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain_MaskedRecords;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$ma$mrecords->m_frame.f_lineno = 76;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_20;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_19 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_19);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76);
locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76);
locals_numpy$ma$mrecords$$$class__1_MaskedRecords_76 = NULL;
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
exception_lineno = 76;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_MaskedRecords, tmp_assign_source_19);
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
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_numpy$ma$mrecords$$$function__22__mrreconstruct(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain__mrreconstruct, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = module_var_accessor_numpy$ma$mrecords$MaskedRecords(tstate);
if (unlikely(tmp_assign_source_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MaskedRecords);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 486;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_mrecarray, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_none_none_none_none_none_false_none_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_assign_source_23 = MAKE_FUNCTION_numpy$ma$mrecords$$$function__23_fromarrays(tstate, tmp_defaults_5);

UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_fromarrays, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_defaults_6;
PyObject *tmp_tuple_element_6;
tmp_tuple_element_6 = Py_None;
tmp_defaults_6 = MAKE_TUPLE_EMPTY(tstate, 9);
{
PyObject *tmp_expression_value_14;
PyTuple_SET_ITEM0(tmp_defaults_6, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 2, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 3, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 4, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_6, 5, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 6, tmp_tuple_element_6);
tmp_tuple_element_6 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 7, tmp_tuple_element_6);
tmp_expression_value_14 = module_var_accessor_numpy$ma$mrecords$ma(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 539;

    goto tuple_build_exception_3;
}
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_nomask);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_defaults_6, 8, tmp_tuple_element_6);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_defaults_6);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;

tmp_assign_source_24 = MAKE_FUNCTION_numpy$ma$mrecords$$$function__24_fromrecords(tstate, tmp_defaults_6);

UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_fromrecords, tmp_assign_source_24);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$ma$mrecords, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$ma$mrecords->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$ma$mrecords, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$ma$mrecords);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_25;

tmp_assign_source_25 = MAKE_FUNCTION_numpy$ma$mrecords$$$function__25__guessvartypes(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain__guessvartypes, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;

tmp_assign_source_26 = MAKE_FUNCTION_numpy$ma$mrecords$$$function__26_openfile(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_openfile, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_defaults_7;
tmp_defaults_7 = mod_consts.const_tuple_none_str_chr_35_str_empty_none_none_tuple;
Py_INCREF(tmp_defaults_7);

tmp_assign_source_27 = MAKE_FUNCTION_numpy$ma$mrecords$$$function__27_fromtextfile(tstate, tmp_defaults_7);

UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_fromtextfile, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_defaults_8;
tmp_defaults_8 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_8);

tmp_assign_source_28 = MAKE_FUNCTION_numpy$ma$mrecords$$$function__28_addfield(tstate, tmp_defaults_8);

UPDATE_STRING_DICT1(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)mod_consts.const_str_plain_addfield, tmp_assign_source_28);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$ma$mrecords", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.ma.mrecords" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$ma$mrecords);
    return module_numpy$ma$mrecords;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$ma$mrecords, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$ma$mrecords", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

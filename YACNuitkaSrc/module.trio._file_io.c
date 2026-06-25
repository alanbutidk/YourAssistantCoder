/* Generated code for Python module 'trio$_file_io'
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



/* The "module_trio$_file_io" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_trio$_file_io;
PyDictObject *moduledict_trio$_file_io;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__wrapped;
PyObject *const_str_digest_b5a64743bce685bfb6c5bdfa8c8a477d;
PyObject *const_str_plain__FILE_SYNC_ATTRS;
PyObject *const_str_plain__FILE_ASYNC_METHODS;
PyObject *const_str_plain_async_wraps;
PyObject *const_dict_41ccbd4ab0f2f1d56a4f00e7ce37134f;
PyObject *const_str_plain_wrapper;
PyObject *const_str_digest_acecbd6749eae3e70f7cd0b51273c895;
PyObject *const_str_plain_partial;
PyObject *const_str_plain_meth;
PyObject *const_str_plain_kwargs;
PyObject *const_str_plain_trio;
PyObject *const_str_plain_to_thread;
PyObject *const_str_plain_run_sync;
PyObject *const_str_plain___dir__;
PyObject *const_str_plain_update;
PyObject *const_str_plain_self;
PyObject *const_str_plain_wrapped;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_1711cc69a51f9cdd4bbe8f2061e4fd89;
PyObject *const_str_plain_readline;
PyObject *const_str_plain___anext__;
PyObject *const_str_digest_a8d1b7c32197c1b7aad76e902c88b606;
PyObject *const_str_digest_87b9851b57667c36086447c6d0a29083;
PyObject *const_str_plain_detach;
PyObject *const_str_plain_wrap_file;
PyObject *const_str_digest_aa796caef342408dff507c7a5309df4a;
PyObject *const_str_digest_583ec0b55e18db5fad9e8f20751a51a8;
PyObject *const_str_plain_CancelScope;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_shield_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_lowlevel;
PyObject *const_str_plain_checkpoint_if_cancelled;
PyObject *const_str_plain_aclose;
PyObject *const_str_digest_dac780b732c6603212fa4ea6fd17ac02;
PyObject *const_str_plain_flush;
PyObject *const_str_digest_256b7bf49ed010158a247ded028e3990;
PyObject *const_str_digest_2ade1c87e11dc74e0f9713e26051f94f;
PyObject *const_str_plain_read1;
PyObject *const_str_digest_9a91a7ed5daa8096038dbd2ad9c6d98d;
PyObject *const_str_plain_readall;
PyObject *const_str_digest_ee0a51d8fdbe1213df30e903acd864ee;
PyObject *const_str_plain_readinto;
PyObject *const_str_digest_656e85ef5a9fa532cdfbf08bdad23ac6;
PyObject *const_str_digest_7cb81f697b424ecb0e612cc126f126e7;
PyObject *const_str_plain_readlines;
PyObject *const_str_digest_f38e9601ad753dd6bb4e92bd280a78c2;
PyObject *const_str_plain_seek;
PyObject *const_str_digest_2ba62c5aa5e6da7dc440d72dd24e8f55;
PyObject *const_str_plain_tell;
PyObject *const_str_digest_d24182a052313b97a6e0857719da4567;
PyObject *const_str_plain_truncate;
PyObject *const_str_digest_d58727140b62f32f5db984ce9dcc897e;
PyObject *const_str_plain_write;
PyObject *const_str_digest_20870afdb00b790821c70c399c420a0f;
PyObject *const_str_plain_writelines;
PyObject *const_str_digest_0f1657ebd311bd5c745e968cf05b8793;
PyObject *const_str_plain_readinto1;
PyObject *const_str_digest_d47c9f75ff7e479af65bcddf435fce51;
PyObject *const_str_plain_peek;
PyObject *const_str_digest_9a76ca79a33dd4b090db22b34f197e86;
PyObject *const_str_plain_open_file;
PyObject *const_str_digest_b771d2677360f365f1fa0ac32dd6bccb;
PyObject *const_str_plain_mode;
PyObject *const_str_plain_buffering;
PyObject *const_str_plain_errors;
PyObject *const_str_plain_newline;
PyObject *const_str_plain_closefd;
PyObject *const_str_plain_opener;
PyObject *const_dict_ff9d3f2720e28bc9e8141513a2d68bde;
PyObject *const_str_plain_has;
PyObject *const_str_digest_2d178295d984964b4303ec9f79539907;
PyObject *const_tuple_str_plain_close_tuple;
PyObject *const_tuple_str_plain_read_tuple;
PyObject *const_tuple_str_plain_write_tuple;
PyObject *const_str_digest_62a51b1078e45f7856a1b8280cc51195;
PyObject *const_str_plain_AsyncIOWrapper;
PyObject *const_str_digest_3ae73da5bd9d2f0edf1ac2084a801a06;
PyObject *const_str_plain_callable;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_io;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Callable_str_plain_Iterable_tuple;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_IO;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_AnyStr;
PyObject *const_str_plain_BinaryIO;
PyObject *const_str_plain_Generic;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_overload;
PyObject *const_str_plain__util;
PyObject *const_tuple_str_plain_async_wraps_tuple;
PyObject *const_str_plain_abc;
PyObject *const_tuple_str_plain_AsyncResource_tuple;
PyObject *const_str_plain_AsyncResource;
PyObject *const_set_501cf42bd626b7bdecfa73d8415a6654;
PyObject *const_str_digest_6cce459256b974cf0cc7e3025d9ab414;
PyObject *const_set_20bbd2fd34dd9341d2d775db2c3d2545;
PyObject *const_tuple_str_plain_FileT_tuple;
PyObject *const_str_plain_FileT;
PyObject *const_tuple_str_plain_FileT_co_true_tuple;
PyObject *const_tuple_str_plain_covariant_tuple;
PyObject *const_str_plain_FileT_co;
PyObject *const_tuple_str_plain_T_tuple;
PyObject *const_str_plain_T;
PyObject *const_tuple_str_plain_T_co_true_tuple;
PyObject *const_str_plain_T_co;
PyObject *const_tuple_str_plain_T_contra_true_tuple;
PyObject *const_tuple_str_plain_contravariant_tuple;
PyObject *const_str_plain_T_contra;
PyObject *const_tuple_str_plain_AnyStr_co_type_str_type_bytes_true_tuple;
PyObject *const_str_plain_AnyStr_co;
PyObject *const_tuple_str_plain_AnyStr_contra_type_str_type_bytes_true_tuple;
PyObject *const_str_plain_AnyStr_contra;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_1ac8c021b7eaf2899e00c0ff9e88067c;
PyObject *const_str_digest_eefc33378c0e1a762ccd6e47e76e2736;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_219;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_1b9cbeaccc1807184eb55949c8e3c079;
PyObject *const_str_digest_6adb7eab6b3c248c19c835b8ea840ae1;
PyObject *const_str_plain_property;
PyObject *const_dict_73f8f37169c66d0745b40cba9484ecb9;
PyObject *const_str_digest_f351d736f9c64e969027c0e1aa9487cd;
PyObject *const_dict_8271e73c4a6040cc972a26685a9da683;
PyObject *const_str_plain___getattr__;
PyObject *const_str_digest_82fb4e32af4a352130dd21e57726b5b0;
PyObject *const_dict_7b0b14f07dd9e3f589f8cbb0250d5df5;
PyObject *const_str_digest_3d44eb2ded1a910ef4319d629888d986;
PyObject *const_dict_7f33c8e4848a631bf7775d60bd3650c0;
PyObject *const_str_plain___aiter__;
PyObject *const_str_digest_32bf94976ed3e8571296d5d5720cafd9;
PyObject *const_dict_5b86967d9487fdd831b29e3d28e8d30f;
PyObject *const_dict_691106ab922b890305b2d15ed0bae3e1;
PyObject *const_dict_86ee4a3b0c61d17877adc7fa84618dd6;
PyObject *const_dict_c4b755eb9f234cec22d0b626e471fee8;
PyObject *const_str_plain_closed;
PyObject *const_str_digest_14eb410e67faad1a30028e193b91a22c;
PyObject *const_dict_f7d52618c96c3285ca1aa760695850f8;
PyObject *const_str_digest_8e7df4a909e0775476eb467e6ede5978;
PyObject *const_dict_e81715103b859089b01f4e5df256fe92;
PyObject *const_str_digest_edcff437845208d8e2f58c8fff31df4d;
PyObject *const_dict_19cf776d530b7748819d37679f98926f;
PyObject *const_str_plain_newlines;
PyObject *const_str_digest_8235527a55aa1117f1a0aed8d381f7ba;
PyObject *const_dict_1a8bba9ec752a2e0dde38b88caafc549;
PyObject *const_str_plain_buffer;
PyObject *const_str_digest_a9c9f78f463cdafd4f7d4239c6bc57d4;
PyObject *const_dict_f77b48065b142eb518118b32c3f8edff;
PyObject *const_str_plain_raw;
PyObject *const_str_digest_c81a3d9505959ee9036d3031e995b26a;
PyObject *const_dict_a4b2e279d8c80ebecf2fe2baeb50a6a3;
PyObject *const_str_digest_93393a88891e27a2a11e2d8ef3f6d2d2;
PyObject *const_dict_bda3edaf67c60fa70b1dd7bee6b15eb2;
PyObject *const_str_digest_3a277e2b1858ef49f262440b22e16a54;
PyObject *const_dict_bbe15016395fe3b3161d8096a20a3624;
PyObject *const_str_digest_73c72bff4a04b526fedf86725dc66c28;
PyObject *const_dict_42750a4787e83b7f12dfe1d7cd1b6b23;
PyObject *const_str_digest_5a695c2f34adfa6e51f394d32df1a867;
PyObject *const_dict_90d8e25d05a8a9343c152931318852c7;
PyObject *const_str_digest_842b2c1787e09ab0cf492037e94e3fef;
PyObject *const_dict_6ca56870f679dc1bcee004aa7f032e00;
PyObject *const_str_plain_isatty;
PyObject *const_str_digest_3673d3aa38756300daa01b0954368287;
PyObject *const_dict_f93d461a715a3123143fb1ae7f110c80;
PyObject *const_str_plain_readable;
PyObject *const_str_digest_ac5f8927b81feb4c186036233276cc9c;
PyObject *const_dict_4e8c9efe9ab54321fa769a384f7cf76c;
PyObject *const_str_plain_seekable;
PyObject *const_str_digest_aaecd4575784843ef1aec363ebd1632a;
PyObject *const_dict_6545510939c0a83c353f3de9e8244834;
PyObject *const_str_plain_writable;
PyObject *const_str_digest_86c0ea1a38b0ee67c2ab1f17ae330b0b;
PyObject *const_dict_49dac535b595b8820441046390221544;
PyObject *const_str_plain_getvalue;
PyObject *const_str_digest_0d34e4797098c9817e843a289e8a70f7;
PyObject *const_dict_870997f1fb6997c740b8c301852ce1ba;
PyObject *const_str_plain_getbuffer;
PyObject *const_str_digest_e0865121b18b06fb26bac615893ddcb5;
PyObject *const_dict_fb531533de0fce63940b54fe064354f3;
PyObject *const_tuple_int_neg_1_tuple;
PyObject *const_dict_9620570548dc7c3c7e8415861a73adae;
PyObject *const_dict_6b6d36e8fcaa94dd7d816f4560e0cdb7;
PyObject *const_dict_ef750f18945f4ab1e7c50fd310d4f011;
PyObject *const_dict_d520b50a479c201de89bea6863095324;
PyObject *const_dict_2d58bc60be887ff4a73c16529ceebb43;
PyObject *const_dict_2b3f94a3ca1d2e0604170c865b3dae3e;
PyObject *const_tuple_int_0_tuple;
PyObject *const_dict_d3098f85ea6949c89914d7ce6113b088;
PyObject *const_dict_e4c9953f7e20da911bee2ebf23a617a1;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_c7900c25d085926921884c07e03b12a9;
PyObject *const_dict_22c4c9a623826361bbdc728c69d7d0af;
PyObject *const_dict_aadfd158d7441ca884b6f9fd5c701740;
PyObject *const_dict_dda10a52883d6345b20ec8d2b83e5a5f;
PyObject *const_dict_f0d76ccfec79dc386132678d800e03ba;
PyObject *const_tuple_str_plain__wrapped_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_tuple_str_plain_StrOrBytesPath_type_int_tuple;
PyObject *const_str_plain__OpenFile;
PyObject *const_tuple_list_type_str_type_int_list_type_int_tuple;
PyObject *const_str_plain__Opener;
PyObject *const_tuple_str_plain_r_int_neg_1_none_none_none_true_none_tuple;
PyObject *const_dict_5251a2962e905878e35b94b04de1f7af;
PyObject *const_tuple_none_none_none_true_none_tuple;
PyObject *const_dict_f47b5549ec314074ea9f7e9498ca6805;
PyObject *const_tuple_int_neg_1_none_none_none_true_none_tuple;
PyObject *const_dict_90d05243d2fe59f62330e3464b538f09;
PyObject *const_dict_4c7b3d5842b60be773f51592a53c7f8c;
PyObject *const_dict_b97e3bd9c2169bb2a6199043bfb80ca5;
PyObject *const_dict_faed8fa31469e7968315bcc60c2854e5;
PyObject *const_dict_e0a782ab234668c3e06b52c8c98bee99;
PyObject *const_dict_4f702a2184832e6dea60ff2706cce871;
PyObject *const_dict_3a7ba29cbb219ecd5eb282c0831e4d12;
PyObject *const_str_digest_180b76c5ddab65e889a93d79e1d5bfd2;
PyObject *const_tuple_6558a139df20fe307dd3d75ab6c6d50c_tuple;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_str_digest_ee585aa984846ceb5786ae89c4a29230;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_line_tuple;
PyObject *const_tuple_str_plain_self_str_plain_attrs_str_plain___class___tuple;
PyObject *const_tuple_f14cb08e673c1a8a53bb18276e1cab53_tuple;
PyObject *const_tuple_str_plain_self_str_plain_file_tuple;
PyObject *const_tuple_str_plain_self_str_plain_raw_tuple;
PyObject *const_tuple_str_plain_attr_str_plain_file_tuple;
PyObject *const_tuple_str_plain_file_tuple;
PyObject *const_tuple_28428f5c63c9cdd88fab2811004e1c65_tuple;
PyObject *const_tuple_651f0c1fe497a11860b527c5311019e6_tuple;
PyObject *const_tuple_str_plain_self_str_plain_size_tuple;
PyObject *const_tuple_str_plain_self_str_plain_buf_tuple;
PyObject *const_tuple_str_plain_self_str_plain_buffer_tuple;
PyObject *const_tuple_str_plain_self_str_plain_target_str_plain_whence_tuple;
PyObject *const_tuple_str_plain_file_str_plain_has_tuple;
PyObject *const_tuple_98a317a900ae7b960de0df0600e895db_tuple;
PyObject *const_tuple_str_plain_meth_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
PyObject *const_tuple_str_plain_self_str_plain_lines_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[250];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("trio._file_io"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__wrapped);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_b5a64743bce685bfb6c5bdfa8c8a477d);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__FILE_SYNC_ATTRS);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__FILE_ASYNC_METHODS);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_wraps);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_dict_41ccbd4ab0f2f1d56a4f00e7ce37134f);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrapper);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_acecbd6749eae3e70f7cd0b51273c895);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_partial);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_meth);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_trio);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_thread);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_sync);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain___dir__);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrapped);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_1711cc69a51f9cdd4bbe8f2061e4fd89);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_readline);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain___anext__);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_a8d1b7c32197c1b7aad76e902c88b606);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_87b9851b57667c36086447c6d0a29083);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_detach);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_file);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa796caef342408dff507c7a5309df4a);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_583ec0b55e18db5fad9e8f20751a51a8);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_CancelScope);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shield_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_lowlevel);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint_if_cancelled);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_aclose);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_dac780b732c6603212fa4ea6fd17ac02);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_flush);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_256b7bf49ed010158a247ded028e3990);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ade1c87e11dc74e0f9713e26051f94f);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_read1);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a91a7ed5daa8096038dbd2ad9c6d98d);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_readall);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee0a51d8fdbe1213df30e903acd864ee);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_readinto);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_656e85ef5a9fa532cdfbf08bdad23ac6);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_7cb81f697b424ecb0e612cc126f126e7);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_readlines);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_f38e9601ad753dd6bb4e92bd280a78c2);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_seek);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ba62c5aa5e6da7dc440d72dd24e8f55);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_tell);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_d24182a052313b97a6e0857719da4567);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_truncate);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_d58727140b62f32f5db984ce9dcc897e);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_20870afdb00b790821c70c399c420a0f);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_writelines);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_0f1657ebd311bd5c745e968cf05b8793);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_readinto1);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_d47c9f75ff7e479af65bcddf435fce51);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_peek);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a76ca79a33dd4b090db22b34f197e86);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_file);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_b771d2677360f365f1fa0ac32dd6bccb);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_buffering);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_errors);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_newline);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_closefd);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_opener);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_dict_ff9d3f2720e28bc9e8141513a2d68bde);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_has);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d178295d984964b4303ec9f79539907);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_close_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_read_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_write_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_62a51b1078e45f7856a1b8280cc51195);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIOWrapper);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ae73da5bd9d2f0edf1ac2084a801a06);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_callable);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Callable_str_plain_Iterable_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_IO);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyStr);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_BinaryIO);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generic);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain__util);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_async_wraps_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncResource_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncResource);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_set_501cf42bd626b7bdecfa73d8415a6654);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_set_20bbd2fd34dd9341d2d775db2c3d2545);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileT_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileT);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileT_co_true_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_covariant_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileT_co);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_co_true_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_T_co);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_contra_true_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contravariant_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_T_contra);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyStr_co_type_str_type_bytes_true_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyStr_co);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyStr_contra_type_str_type_bytes_true_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyStr_contra);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ac8c021b7eaf2899e00c0ff9e88067c);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_eefc33378c0e1a762ccd6e47e76e2736);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_int_pos_219);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_dict_1b9cbeaccc1807184eb55949c8e3c079);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_6adb7eab6b3c248c19c835b8ea840ae1);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_dict_73f8f37169c66d0745b40cba9484ecb9);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_f351d736f9c64e969027c0e1aa9487cd);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_dict_8271e73c4a6040cc972a26685a9da683);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_82fb4e32af4a352130dd21e57726b5b0);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_dict_7b0b14f07dd9e3f589f8cbb0250d5df5);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d44eb2ded1a910ef4319d629888d986);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_7f33c8e4848a631bf7775d60bd3650c0);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain___aiter__);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_32bf94976ed3e8571296d5d5720cafd9);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_5b86967d9487fdd831b29e3d28e8d30f);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_dict_691106ab922b890305b2d15ed0bae3e1);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_dict_86ee4a3b0c61d17877adc7fa84618dd6);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_dict_c4b755eb9f234cec22d0b626e471fee8);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_closed);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_14eb410e67faad1a30028e193b91a22c);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_dict_f7d52618c96c3285ca1aa760695850f8);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e7df4a909e0775476eb467e6ede5978);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_dict_e81715103b859089b01f4e5df256fe92);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_edcff437845208d8e2f58c8fff31df4d);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_19cf776d530b7748819d37679f98926f);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_newlines);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_8235527a55aa1117f1a0aed8d381f7ba);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_dict_1a8bba9ec752a2e0dde38b88caafc549);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_buffer);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9c9f78f463cdafd4f7d4239c6bc57d4);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_dict_f77b48065b142eb518118b32c3f8edff);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_c81a3d9505959ee9036d3031e995b26a);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_dict_a4b2e279d8c80ebecf2fe2baeb50a6a3);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_93393a88891e27a2a11e2d8ef3f6d2d2);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_dict_bda3edaf67c60fa70b1dd7bee6b15eb2);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a277e2b1858ef49f262440b22e16a54);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_bbe15016395fe3b3161d8096a20a3624);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_73c72bff4a04b526fedf86725dc66c28);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_dict_42750a4787e83b7f12dfe1d7cd1b6b23);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a695c2f34adfa6e51f394d32df1a867);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_dict_90d8e25d05a8a9343c152931318852c7);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_842b2c1787e09ab0cf492037e94e3fef);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_6ca56870f679dc1bcee004aa7f032e00);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_isatty);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_3673d3aa38756300daa01b0954368287);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_dict_f93d461a715a3123143fb1ae7f110c80);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_readable);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac5f8927b81feb4c186036233276cc9c);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_4e8c9efe9ab54321fa769a384f7cf76c);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_seekable);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_aaecd4575784843ef1aec363ebd1632a);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_dict_6545510939c0a83c353f3de9e8244834);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_writable);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_86c0ea1a38b0ee67c2ab1f17ae330b0b);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_dict_49dac535b595b8820441046390221544);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_getvalue);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d34e4797098c9817e843a289e8a70f7);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_870997f1fb6997c740b8c301852ce1ba);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_getbuffer);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_e0865121b18b06fb26bac615893ddcb5);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_dict_fb531533de0fce63940b54fe064354f3);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_dict_9620570548dc7c3c7e8415861a73adae);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_dict_6b6d36e8fcaa94dd7d816f4560e0cdb7);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_dict_ef750f18945f4ab1e7c50fd310d4f011);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_dict_d520b50a479c201de89bea6863095324);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_dict_2d58bc60be887ff4a73c16529ceebb43);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_dict_2b3f94a3ca1d2e0604170c865b3dae3e);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_dict_d3098f85ea6949c89914d7ce6113b088);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_dict_e4c9953f7e20da911bee2ebf23a617a1);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_dict_c7900c25d085926921884c07e03b12a9);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_dict_22c4c9a623826361bbdc728c69d7d0af);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_dict_aadfd158d7441ca884b6f9fd5c701740);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_dict_dda10a52883d6345b20ec8d2b83e5a5f);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_dict_f0d76ccfec79dc386132678d800e03ba);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__wrapped_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StrOrBytesPath_type_int_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain__OpenFile);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_list_type_str_type_int_list_type_int_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain__Opener);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_r_int_neg_1_none_none_none_true_none_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_dict_5251a2962e905878e35b94b04de1f7af);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_true_none_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_dict_f47b5549ec314074ea9f7e9498ca6805);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_none_none_none_true_none_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_dict_90d05243d2fe59f62330e3464b538f09);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_dict_4c7b3d5842b60be773f51592a53c7f8c);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_dict_b97e3bd9c2169bb2a6199043bfb80ca5);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_dict_faed8fa31469e7968315bcc60c2854e5);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_dict_e0a782ab234668c3e06b52c8c98bee99);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_dict_4f702a2184832e6dea60ff2706cce871);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_dict_3a7ba29cbb219ecd5eb282c0831e4d12);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_digest_180b76c5ddab65e889a93d79e1d5bfd2);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_6558a139df20fe307dd3d75ab6c6d50c_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee585aa984846ceb5786ae89c4a29230);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_line_tuple);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_attrs_str_plain___class___tuple);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_f14cb08e673c1a8a53bb18276e1cab53_tuple);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_file_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_raw_tuple);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_attr_str_plain_file_tuple);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_tuple);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_tuple_28428f5c63c9cdd88fab2811004e1c65_tuple);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_tuple_651f0c1fe497a11860b527c5311019e6_tuple);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_size_tuple);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_buf_tuple);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_buffer_tuple);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_target_str_plain_whence_tuple);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_str_plain_has_tuple);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_tuple_98a317a900ae7b960de0df0600e895db_tuple);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_meth_tuple);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_lines_tuple);
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
void checkModuleConstants_trio$_file_io(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__wrapped));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__wrapped);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_b5a64743bce685bfb6c5bdfa8c8a477d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b5a64743bce685bfb6c5bdfa8c8a477d);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__FILE_SYNC_ATTRS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FILE_SYNC_ATTRS);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__FILE_ASYNC_METHODS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FILE_ASYNC_METHODS);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_wraps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_wraps);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_dict_41ccbd4ab0f2f1d56a4f00e7ce37134f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_41ccbd4ab0f2f1d56a4f00e7ce37134f);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrapper);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_acecbd6749eae3e70f7cd0b51273c895));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_acecbd6749eae3e70f7cd0b51273c895);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_partial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partial);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_meth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_meth);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kwargs);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_trio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trio);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_thread);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_sync));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_sync);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain___dir__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___dir__);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrapped));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrapped);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_1711cc69a51f9cdd4bbe8f2061e4fd89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1711cc69a51f9cdd4bbe8f2061e4fd89);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_readline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readline);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain___anext__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___anext__);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_a8d1b7c32197c1b7aad76e902c88b606));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a8d1b7c32197c1b7aad76e902c88b606);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_87b9851b57667c36086447c6d0a29083));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87b9851b57667c36086447c6d0a29083);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_detach));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_detach);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_file);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa796caef342408dff507c7a5309df4a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aa796caef342408dff507c7a5309df4a);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_583ec0b55e18db5fad9e8f20751a51a8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_583ec0b55e18db5fad9e8f20751a51a8);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_CancelScope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CancelScope);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shield_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_shield_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_lowlevel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lowlevel);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint_if_cancelled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_checkpoint_if_cancelled);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_aclose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aclose);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_dac780b732c6603212fa4ea6fd17ac02));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dac780b732c6603212fa4ea6fd17ac02);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_flush));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flush);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_256b7bf49ed010158a247ded028e3990));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_256b7bf49ed010158a247ded028e3990);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ade1c87e11dc74e0f9713e26051f94f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ade1c87e11dc74e0f9713e26051f94f);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_read1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read1);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a91a7ed5daa8096038dbd2ad9c6d98d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9a91a7ed5daa8096038dbd2ad9c6d98d);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_readall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readall);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee0a51d8fdbe1213df30e903acd864ee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee0a51d8fdbe1213df30e903acd864ee);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_readinto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readinto);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_656e85ef5a9fa532cdfbf08bdad23ac6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_656e85ef5a9fa532cdfbf08bdad23ac6);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_7cb81f697b424ecb0e612cc126f126e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7cb81f697b424ecb0e612cc126f126e7);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_readlines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readlines);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_f38e9601ad753dd6bb4e92bd280a78c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f38e9601ad753dd6bb4e92bd280a78c2);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_seek));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seek);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ba62c5aa5e6da7dc440d72dd24e8f55));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ba62c5aa5e6da7dc440d72dd24e8f55);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_tell));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tell);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_d24182a052313b97a6e0857719da4567));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d24182a052313b97a6e0857719da4567);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_truncate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_truncate);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_d58727140b62f32f5db984ce9dcc897e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d58727140b62f32f5db984ce9dcc897e);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_20870afdb00b790821c70c399c420a0f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20870afdb00b790821c70c399c420a0f);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_writelines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_writelines);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_0f1657ebd311bd5c745e968cf05b8793));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0f1657ebd311bd5c745e968cf05b8793);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_readinto1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readinto1);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_d47c9f75ff7e479af65bcddf435fce51));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d47c9f75ff7e479af65bcddf435fce51);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_peek));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_peek);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a76ca79a33dd4b090db22b34f197e86));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9a76ca79a33dd4b090db22b34f197e86);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_file);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_b771d2677360f365f1fa0ac32dd6bccb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b771d2677360f365f1fa0ac32dd6bccb);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mode);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_buffering));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_buffering);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_errors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errors);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_newline);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_closefd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_closefd);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_opener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_opener);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_dict_ff9d3f2720e28bc9e8141513a2d68bde));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ff9d3f2720e28bc9e8141513a2d68bde);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_has));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d178295d984964b4303ec9f79539907));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d178295d984964b4303ec9f79539907);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_close_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_close_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_read_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_read_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_write_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_write_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_62a51b1078e45f7856a1b8280cc51195));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62a51b1078e45f7856a1b8280cc51195);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIOWrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIOWrapper);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ae73da5bd9d2f0edf1ac2084a801a06));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3ae73da5bd9d2f0edf1ac2084a801a06);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callable);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_io));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_io);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Callable_str_plain_Iterable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Callable_str_plain_Iterable_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_IO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IO);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyStr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyStr);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_BinaryIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BinaryIO);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generic);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain__util));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__util);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_async_wraps_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_async_wraps_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncResource_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncResource);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_set_501cf42bd626b7bdecfa73d8415a6654));
CHECK_OBJECT_DEEP(mod_consts.const_set_501cf42bd626b7bdecfa73d8415a6654);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_set_20bbd2fd34dd9341d2d775db2c3d2545));
CHECK_OBJECT_DEEP(mod_consts.const_set_20bbd2fd34dd9341d2d775db2c3d2545);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileT_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileT);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FileT_co_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FileT_co_true_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_covariant_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_covariant_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileT_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileT_co);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_T_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_co_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_T_co_true_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_T_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T_co);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_contra_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_T_contra_true_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contravariant_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_contravariant_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_T_contra));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T_contra);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyStr_co_type_str_type_bytes_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnyStr_co_type_str_type_bytes_true_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyStr_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyStr_co);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyStr_contra_type_str_type_bytes_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnyStr_contra_type_str_type_bytes_true_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyStr_contra));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyStr_contra);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ac8c021b7eaf2899e00c0ff9e88067c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ac8c021b7eaf2899e00c0ff9e88067c);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_eefc33378c0e1a762ccd6e47e76e2736));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eefc33378c0e1a762ccd6e47e76e2736);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_int_pos_219));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_219);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_dict_1b9cbeaccc1807184eb55949c8e3c079));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1b9cbeaccc1807184eb55949c8e3c079);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_6adb7eab6b3c248c19c835b8ea840ae1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6adb7eab6b3c248c19c835b8ea840ae1);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_dict_73f8f37169c66d0745b40cba9484ecb9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_73f8f37169c66d0745b40cba9484ecb9);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_f351d736f9c64e969027c0e1aa9487cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f351d736f9c64e969027c0e1aa9487cd);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_dict_8271e73c4a6040cc972a26685a9da683));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8271e73c4a6040cc972a26685a9da683);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getattr__);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_82fb4e32af4a352130dd21e57726b5b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_82fb4e32af4a352130dd21e57726b5b0);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_dict_7b0b14f07dd9e3f589f8cbb0250d5df5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7b0b14f07dd9e3f589f8cbb0250d5df5);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d44eb2ded1a910ef4319d629888d986));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d44eb2ded1a910ef4319d629888d986);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_7f33c8e4848a631bf7775d60bd3650c0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7f33c8e4848a631bf7775d60bd3650c0);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain___aiter__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___aiter__);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_32bf94976ed3e8571296d5d5720cafd9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_32bf94976ed3e8571296d5d5720cafd9);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_5b86967d9487fdd831b29e3d28e8d30f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5b86967d9487fdd831b29e3d28e8d30f);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_dict_691106ab922b890305b2d15ed0bae3e1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_691106ab922b890305b2d15ed0bae3e1);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_dict_86ee4a3b0c61d17877adc7fa84618dd6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_86ee4a3b0c61d17877adc7fa84618dd6);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_dict_c4b755eb9f234cec22d0b626e471fee8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c4b755eb9f234cec22d0b626e471fee8);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_closed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_closed);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_14eb410e67faad1a30028e193b91a22c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_14eb410e67faad1a30028e193b91a22c);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_dict_f7d52618c96c3285ca1aa760695850f8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f7d52618c96c3285ca1aa760695850f8);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e7df4a909e0775476eb467e6ede5978));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e7df4a909e0775476eb467e6ede5978);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_dict_e81715103b859089b01f4e5df256fe92));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e81715103b859089b01f4e5df256fe92);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_edcff437845208d8e2f58c8fff31df4d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edcff437845208d8e2f58c8fff31df4d);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_19cf776d530b7748819d37679f98926f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_19cf776d530b7748819d37679f98926f);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_newlines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_newlines);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_8235527a55aa1117f1a0aed8d381f7ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8235527a55aa1117f1a0aed8d381f7ba);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_dict_1a8bba9ec752a2e0dde38b88caafc549));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1a8bba9ec752a2e0dde38b88caafc549);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_buffer);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9c9f78f463cdafd4f7d4239c6bc57d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9c9f78f463cdafd4f7d4239c6bc57d4);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_dict_f77b48065b142eb518118b32c3f8edff));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f77b48065b142eb518118b32c3f8edff);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_c81a3d9505959ee9036d3031e995b26a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c81a3d9505959ee9036d3031e995b26a);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_dict_a4b2e279d8c80ebecf2fe2baeb50a6a3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a4b2e279d8c80ebecf2fe2baeb50a6a3);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_93393a88891e27a2a11e2d8ef3f6d2d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93393a88891e27a2a11e2d8ef3f6d2d2);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_dict_bda3edaf67c60fa70b1dd7bee6b15eb2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bda3edaf67c60fa70b1dd7bee6b15eb2);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a277e2b1858ef49f262440b22e16a54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a277e2b1858ef49f262440b22e16a54);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_bbe15016395fe3b3161d8096a20a3624));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bbe15016395fe3b3161d8096a20a3624);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_73c72bff4a04b526fedf86725dc66c28));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_73c72bff4a04b526fedf86725dc66c28);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_dict_42750a4787e83b7f12dfe1d7cd1b6b23));
CHECK_OBJECT_DEEP(mod_consts.const_dict_42750a4787e83b7f12dfe1d7cd1b6b23);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a695c2f34adfa6e51f394d32df1a867));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a695c2f34adfa6e51f394d32df1a867);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_dict_90d8e25d05a8a9343c152931318852c7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_90d8e25d05a8a9343c152931318852c7);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_842b2c1787e09ab0cf492037e94e3fef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_842b2c1787e09ab0cf492037e94e3fef);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_6ca56870f679dc1bcee004aa7f032e00));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6ca56870f679dc1bcee004aa7f032e00);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_isatty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isatty);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_3673d3aa38756300daa01b0954368287));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3673d3aa38756300daa01b0954368287);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_dict_f93d461a715a3123143fb1ae7f110c80));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f93d461a715a3123143fb1ae7f110c80);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_readable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readable);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac5f8927b81feb4c186036233276cc9c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac5f8927b81feb4c186036233276cc9c);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_4e8c9efe9ab54321fa769a384f7cf76c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4e8c9efe9ab54321fa769a384f7cf76c);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_seekable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seekable);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_aaecd4575784843ef1aec363ebd1632a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aaecd4575784843ef1aec363ebd1632a);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_dict_6545510939c0a83c353f3de9e8244834));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6545510939c0a83c353f3de9e8244834);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_writable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_writable);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_86c0ea1a38b0ee67c2ab1f17ae330b0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86c0ea1a38b0ee67c2ab1f17ae330b0b);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_dict_49dac535b595b8820441046390221544));
CHECK_OBJECT_DEEP(mod_consts.const_dict_49dac535b595b8820441046390221544);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_getvalue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getvalue);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d34e4797098c9817e843a289e8a70f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d34e4797098c9817e843a289e8a70f7);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_870997f1fb6997c740b8c301852ce1ba));
CHECK_OBJECT_DEEP(mod_consts.const_dict_870997f1fb6997c740b8c301852ce1ba);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_getbuffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getbuffer);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_e0865121b18b06fb26bac615893ddcb5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e0865121b18b06fb26bac615893ddcb5);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_dict_fb531533de0fce63940b54fe064354f3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fb531533de0fce63940b54fe064354f3);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_1_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_dict_9620570548dc7c3c7e8415861a73adae));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9620570548dc7c3c7e8415861a73adae);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_dict_6b6d36e8fcaa94dd7d816f4560e0cdb7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6b6d36e8fcaa94dd7d816f4560e0cdb7);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_dict_ef750f18945f4ab1e7c50fd310d4f011));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ef750f18945f4ab1e7c50fd310d4f011);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_dict_d520b50a479c201de89bea6863095324));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d520b50a479c201de89bea6863095324);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_dict_2d58bc60be887ff4a73c16529ceebb43));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2d58bc60be887ff4a73c16529ceebb43);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_dict_2b3f94a3ca1d2e0604170c865b3dae3e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2b3f94a3ca1d2e0604170c865b3dae3e);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_dict_d3098f85ea6949c89914d7ce6113b088));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d3098f85ea6949c89914d7ce6113b088);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_dict_e4c9953f7e20da911bee2ebf23a617a1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e4c9953f7e20da911bee2ebf23a617a1);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_dict_c7900c25d085926921884c07e03b12a9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c7900c25d085926921884c07e03b12a9);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_dict_22c4c9a623826361bbdc728c69d7d0af));
CHECK_OBJECT_DEEP(mod_consts.const_dict_22c4c9a623826361bbdc728c69d7d0af);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_dict_aadfd158d7441ca884b6f9fd5c701740));
CHECK_OBJECT_DEEP(mod_consts.const_dict_aadfd158d7441ca884b6f9fd5c701740);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_dict_dda10a52883d6345b20ec8d2b83e5a5f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dda10a52883d6345b20ec8d2b83e5a5f);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_dict_f0d76ccfec79dc386132678d800e03ba));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f0d76ccfec79dc386132678d800e03ba);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__wrapped_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__wrapped_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StrOrBytesPath_type_int_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StrOrBytesPath_type_int_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain__OpenFile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__OpenFile);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_list_type_str_type_int_list_type_int_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_list_type_str_type_int_list_type_int_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain__Opener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Opener);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_r_int_neg_1_none_none_none_true_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_r_int_neg_1_none_none_none_true_none_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_dict_5251a2962e905878e35b94b04de1f7af));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5251a2962e905878e35b94b04de1f7af);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_true_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_true_none_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_dict_f47b5549ec314074ea9f7e9498ca6805));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f47b5549ec314074ea9f7e9498ca6805);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_none_none_none_true_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_1_none_none_none_true_none_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_dict_90d05243d2fe59f62330e3464b538f09));
CHECK_OBJECT_DEEP(mod_consts.const_dict_90d05243d2fe59f62330e3464b538f09);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_dict_4c7b3d5842b60be773f51592a53c7f8c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4c7b3d5842b60be773f51592a53c7f8c);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_dict_b97e3bd9c2169bb2a6199043bfb80ca5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b97e3bd9c2169bb2a6199043bfb80ca5);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_dict_faed8fa31469e7968315bcc60c2854e5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_faed8fa31469e7968315bcc60c2854e5);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_dict_e0a782ab234668c3e06b52c8c98bee99));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e0a782ab234668c3e06b52c8c98bee99);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_dict_4f702a2184832e6dea60ff2706cce871));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4f702a2184832e6dea60ff2706cce871);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_dict_3a7ba29cbb219ecd5eb282c0831e4d12));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3a7ba29cbb219ecd5eb282c0831e4d12);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_digest_180b76c5ddab65e889a93d79e1d5bfd2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_180b76c5ddab65e889a93d79e1d5bfd2);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_6558a139df20fe307dd3d75ab6c6d50c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6558a139df20fe307dd3d75ab6c6d50c_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee585aa984846ceb5786ae89c4a29230));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee585aa984846ceb5786ae89c4a29230);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_line_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_line_tuple);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_attrs_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_attrs_str_plain___class___tuple);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_f14cb08e673c1a8a53bb18276e1cab53_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f14cb08e673c1a8a53bb18276e1cab53_tuple);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_file_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_file_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_raw_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_raw_tuple);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_attr_str_plain_file_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_attr_str_plain_file_tuple);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_file_tuple);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_tuple_28428f5c63c9cdd88fab2811004e1c65_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_28428f5c63c9cdd88fab2811004e1c65_tuple);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_tuple_651f0c1fe497a11860b527c5311019e6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_651f0c1fe497a11860b527c5311019e6_tuple);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_size_tuple);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_buf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_buf_tuple);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_buffer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_buffer_tuple);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_target_str_plain_whence_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_target_str_plain_whence_tuple);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_str_plain_has_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_file_str_plain_has_tuple);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_tuple_98a317a900ae7b960de0df0600e895db_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_98a317a900ae7b960de0df0600e895db_tuple);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_meth_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_meth_tuple);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_lines_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_lines_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 15
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
static PyObject *module_var_accessor_trio$_file_io$AsyncIOWrapper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIOWrapper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncIOWrapper);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncIOWrapper, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncIOWrapper);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncIOWrapper, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIOWrapper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIOWrapper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIOWrapper);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_file_io$AsyncResource(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncResource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncResource);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncResource, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncResource);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncResource, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncResource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncResource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncResource);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_file_io$Callable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_file_io$FileT_co(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_FileT_co);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileT_co);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileT_co, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileT_co);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileT_co, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_FileT_co);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_FileT_co);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FileT_co);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_file_io$Generic(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Generic);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Generic, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Generic);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Generic, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_file_io$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_file_io$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_file_io$_FILE_ASYNC_METHODS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain__FILE_ASYNC_METHODS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FILE_ASYNC_METHODS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FILE_ASYNC_METHODS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FILE_ASYNC_METHODS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FILE_ASYNC_METHODS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain__FILE_ASYNC_METHODS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain__FILE_ASYNC_METHODS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__FILE_ASYNC_METHODS);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_file_io$_FILE_SYNC_ATTRS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain__FILE_SYNC_ATTRS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FILE_SYNC_ATTRS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FILE_SYNC_ATTRS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FILE_SYNC_ATTRS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FILE_SYNC_ATTRS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain__FILE_SYNC_ATTRS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain__FILE_SYNC_ATTRS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__FILE_SYNC_ATTRS);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_file_io$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_file_io$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_file_io$async_wraps(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_async_wraps);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_async_wraps);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_async_wraps, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_async_wraps);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_async_wraps, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_async_wraps);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_async_wraps);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_async_wraps);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_file_io$overload(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_file_io$trio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_trio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_trio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_trio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_trio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_file_io$wrap_file(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_file_io->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_file_io->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_wrap_file);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_file_io->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wrap_file);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wrap_file, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wrap_file);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wrap_file, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_wrap_file);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_wrap_file);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_wrap_file);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f34c8a16e40c43a1f29fe92e78b943fa;
static PyCodeObject *code_objects_1af4c3f2419cbe987971125e72b6c52d;
static PyCodeObject *code_objects_dcca848465dad99537a3ee8a6f749c49;
static PyCodeObject *code_objects_5ab1fab56b48234c4f6fad267613edb3;
static PyCodeObject *code_objects_93a2d77f774abddcd965dd5740c561a0;
static PyCodeObject *code_objects_2e6781ab6a0a5155f8d45e02ef4fe954;
static PyCodeObject *code_objects_f523b872a36530d091eb512d6abe663a;
static PyCodeObject *code_objects_b7b49e466948c1589217d4616c1d8375;
static PyCodeObject *code_objects_eed391bf248ba3d391f4a615a30cb6d4;
static PyCodeObject *code_objects_428eb3536064a5a6af81301682dd059c;
static PyCodeObject *code_objects_921d5d229fada75bc72a43eff2eaaefb;
static PyCodeObject *code_objects_2984b604d6d42ac393f3576b10818eb3;
static PyCodeObject *code_objects_4a1eb07ac48e149963bcf23cd169e0b4;
static PyCodeObject *code_objects_f23702d5906c4340c8ccb97e78d74429;
static PyCodeObject *code_objects_6e7bb0c8ba015d56b5434ddedcac4d74;
static PyCodeObject *code_objects_8c00f251c59b7aebfe79459e88a445aa;
static PyCodeObject *code_objects_9223f619f4c4970ae18e2fc8e162f75e;
static PyCodeObject *code_objects_2771e7df8cc45a3a725a70758340d086;
static PyCodeObject *code_objects_220477268404a9118598433561beba78;
static PyCodeObject *code_objects_a794442a54f99fbbb89b044164fb58b9;
static PyCodeObject *code_objects_39d3696c00b2e31dec4f2d2953faecab;
static PyCodeObject *code_objects_12a09be4fe80d0e96a37b00a592972ad;
static PyCodeObject *code_objects_9d6896ace06698180afae5f14b70d901;
static PyCodeObject *code_objects_82f8300e4bce260dfffe237490ba6b6d;
static PyCodeObject *code_objects_f99b25b08ea9417c744117f0ac5d8e70;
static PyCodeObject *code_objects_bdbb9b9c1d675a201096499b5d05d46e;
static PyCodeObject *code_objects_dbabef6a2e30b332aecacb65ed792aed;
static PyCodeObject *code_objects_aa5a88015bff4b24ebd69bd999c68199;
static PyCodeObject *code_objects_dc982956b3151f32c241d3a7fec8a1db;
static PyCodeObject *code_objects_bcbe6d245e043de04cd9383c3256afae;
static PyCodeObject *code_objects_72241ad0b2ab603db8d7f0eb62c7c592;
static PyCodeObject *code_objects_5c3b3421061335a2845e47bbc602bd79;
static PyCodeObject *code_objects_6cf1c06234175b4fb813a85331fb3a88;
static PyCodeObject *code_objects_f392a0a860d91c9131368a0fd21d5637;
static PyCodeObject *code_objects_d77c08cb43cc0bd6a56e8d4dcc72ca4c;
static PyCodeObject *code_objects_84b1bf79992d7a1f16c9c0c78daedf4f;
static PyCodeObject *code_objects_4af29fb277560adef12f2625da91a06a;
static PyCodeObject *code_objects_0caf7c90b36b79869756e89522e5a2a9;
static PyCodeObject *code_objects_d703848bacb94cdb11620f7b1962abfe;
static PyCodeObject *code_objects_de3b1d92ce94ab9f3fe52fafbda5915f;
static PyCodeObject *code_objects_6eca403d3f132805929f28afc24830ee;
static PyCodeObject *code_objects_b0518a827a1b5a1b9c705cc57d6b8437;
static PyCodeObject *code_objects_7391764a5e8acde9600b48027772c0fc;
static PyCodeObject *code_objects_b9d815adb5fb33745894f6546706acbc;
static PyCodeObject *code_objects_2f8d78475c2ab8de59fc94a55d25cad1;
static PyCodeObject *code_objects_362fc71186490d5dd1fad8d618162a63;
static PyCodeObject *code_objects_e8d26db340e3ca4d583306d57174a131;
static PyCodeObject *code_objects_88d6284db1b45aaebee721766652202b;
static PyCodeObject *code_objects_5534711cab94baf120341c8c9e852af9;
static PyCodeObject *code_objects_aa7351870b02e49f0a7b189e8f51bf27;
static PyCodeObject *code_objects_6b69c2998a514030b2127f598ecab435;
static PyCodeObject *code_objects_853a657ed0b7f123eda9d5597bbc5918;
static PyCodeObject *code_objects_fe4277caa6c7d2028fe57c5a137980c0;
static PyCodeObject *code_objects_4e46cff2d47223095f482878301a6c7b;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_180b76c5ddab65e889a93d79e1d5bfd2); CHECK_OBJECT(module_filename_obj);
code_objects_f34c8a16e40c43a1f29fe92e78b943fa = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_1711cc69a51f9cdd4bbe8f2061e4fd89, mod_consts.const_tuple_6558a139df20fe307dd3d75ab6c6d50c_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_1af4c3f2419cbe987971125e72b6c52d = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_1711cc69a51f9cdd4bbe8f2061e4fd89, mod_consts.const_tuple_6558a139df20fe307dd3d75ab6c6d50c_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_dcca848465dad99537a3ee8a6f749c49 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_ee585aa984846ceb5786ae89c4a29230, mod_consts.const_str_digest_ee585aa984846ceb5786ae89c4a29230, NULL, NULL, 0, 0, 0);
code_objects_5ab1fab56b48234c4f6fad267613edb3 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncIOWrapper, mod_consts.const_str_plain_AsyncIOWrapper, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_93a2d77f774abddcd965dd5740c561a0 = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___aiter__, mod_consts.const_str_digest_32bf94976ed3e8571296d5d5720cafd9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2e6781ab6a0a5155f8d45e02ef4fe954 = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___anext__, mod_consts.const_str_digest_a8d1b7c32197c1b7aad76e902c88b606, mod_consts.const_tuple_str_plain_self_str_plain_line_tuple, NULL, 1, 0, 0);
code_objects_f523b872a36530d091eb512d6abe663a = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___dir__, mod_consts.const_str_digest_3d44eb2ded1a910ef4319d629888d986, mod_consts.const_tuple_str_plain_self_str_plain_attrs_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_b7b49e466948c1589217d4616c1d8375 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___getattr__, mod_consts.const_str_digest_82fb4e32af4a352130dd21e57726b5b0, mod_consts.const_tuple_f14cb08e673c1a8a53bb18276e1cab53_tuple, NULL, 2, 0, 0);
code_objects_eed391bf248ba3d391f4a615a30cb6d4 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_6adb7eab6b3c248c19c835b8ea840ae1, mod_consts.const_tuple_str_plain_self_str_plain_file_tuple, NULL, 2, 0, 0);
code_objects_428eb3536064a5a6af81301682dd059c = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aclose, mod_consts.const_str_digest_dac780b732c6603212fa4ea6fd17ac02, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_921d5d229fada75bc72a43eff2eaaefb = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_buffer, mod_consts.const_str_digest_a9c9f78f463cdafd4f7d4239c6bc57d4, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2984b604d6d42ac393f3576b10818eb3 = MAKE_CODE_OBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_closed, mod_consts.const_str_digest_14eb410e67faad1a30028e193b91a22c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4a1eb07ac48e149963bcf23cd169e0b4 = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_closefd, mod_consts.const_str_digest_3a277e2b1858ef49f262440b22e16a54, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f23702d5906c4340c8ccb97e78d74429 = MAKE_CODE_OBJECT(module_filename_obj, 275, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_detach, mod_consts.const_str_digest_aa796caef342408dff507c7a5309df4a, mod_consts.const_tuple_str_plain_self_str_plain_raw_tuple, NULL, 1, 0, 0);
code_objects_6e7bb0c8ba015d56b5434ddedcac4d74 = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_encoding, mod_consts.const_str_digest_8e7df4a909e0775476eb467e6ede5978, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8c00f251c59b7aebfe79459e88a445aa = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_errors, mod_consts.const_str_digest_edcff437845208d8e2f58c8fff31df4d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9223f619f4c4970ae18e2fc8e162f75e = MAKE_CODE_OBJECT(module_filename_obj, 324, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_fileno, mod_consts.const_str_digest_842b2c1787e09ab0cf492037e94e3fef, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2771e7df8cc45a3a725a70758340d086 = MAKE_CODE_OBJECT(module_filename_obj, 331, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_flush, mod_consts.const_str_digest_256b7bf49ed010158a247ded028e3990, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_220477268404a9118598433561beba78 = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getbuffer, mod_consts.const_str_digest_e0865121b18b06fb26bac615893ddcb5, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a794442a54f99fbbb89b044164fb58b9 = MAKE_CODE_OBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getvalue, mod_consts.const_str_digest_0d34e4797098c9817e843a289e8a70f7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_39d3696c00b2e31dec4f2d2953faecab = MAKE_CODE_OBJECT(module_filename_obj, 504, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_has, mod_consts.const_str_digest_2d178295d984964b4303ec9f79539907, mod_consts.const_tuple_str_plain_attr_str_plain_file_tuple, mod_consts.const_tuple_str_plain_file_tuple, 1, 0, 0);
code_objects_12a09be4fe80d0e96a37b00a592972ad = MAKE_CODE_OBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_isatty, mod_consts.const_str_digest_3673d3aa38756300daa01b0954368287, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9d6896ace06698180afae5f14b70d901 = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_line_buffering, mod_consts.const_str_digest_93393a88891e27a2a11e2d8ef3f6d2d2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_82f8300e4bce260dfffe237490ba6b6d = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_mode, mod_consts.const_str_digest_5a695c2f34adfa6e51f394d32df1a867, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f99b25b08ea9417c744117f0ac5d8e70 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_name, mod_consts.const_str_digest_73c72bff4a04b526fedf86725dc66c28, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bdbb9b9c1d675a201096499b5d05d46e = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_newlines, mod_consts.const_str_digest_8235527a55aa1117f1a0aed8d381f7ba, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_dbabef6a2e30b332aecacb65ed792aed = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_file, mod_consts.const_str_plain_open_file, mod_consts.const_tuple_28428f5c63c9cdd88fab2811004e1c65_tuple, NULL, 8, 0, 0);
code_objects_aa5a88015bff4b24ebd69bd999c68199 = MAKE_CODE_OBJECT(module_filename_obj, 366, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_file, mod_consts.const_str_plain_open_file, mod_consts.const_tuple_28428f5c63c9cdd88fab2811004e1c65_tuple, NULL, 8, 0, 0);
code_objects_dc982956b3151f32c241d3a7fec8a1db = MAKE_CODE_OBJECT(module_filename_obj, 379, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_file, mod_consts.const_str_plain_open_file, mod_consts.const_tuple_28428f5c63c9cdd88fab2811004e1c65_tuple, NULL, 8, 0, 0);
code_objects_bcbe6d245e043de04cd9383c3256afae = MAKE_CODE_OBJECT(module_filename_obj, 392, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_file, mod_consts.const_str_plain_open_file, mod_consts.const_tuple_28428f5c63c9cdd88fab2811004e1c65_tuple, NULL, 8, 0, 0);
code_objects_72241ad0b2ab603db8d7f0eb62c7c592 = MAKE_CODE_OBJECT(module_filename_obj, 405, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_file, mod_consts.const_str_plain_open_file, mod_consts.const_tuple_28428f5c63c9cdd88fab2811004e1c65_tuple, NULL, 8, 0, 0);
code_objects_5c3b3421061335a2845e47bbc602bd79 = MAKE_CODE_OBJECT(module_filename_obj, 418, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_file, mod_consts.const_str_plain_open_file, mod_consts.const_tuple_28428f5c63c9cdd88fab2811004e1c65_tuple, NULL, 8, 0, 0);
code_objects_6cf1c06234175b4fb813a85331fb3a88 = MAKE_CODE_OBJECT(module_filename_obj, 431, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_file, mod_consts.const_str_plain_open_file, mod_consts.const_tuple_28428f5c63c9cdd88fab2811004e1c65_tuple, NULL, 8, 0, 0);
code_objects_f392a0a860d91c9131368a0fd21d5637 = MAKE_CODE_OBJECT(module_filename_obj, 443, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_file, mod_consts.const_str_plain_open_file, mod_consts.const_tuple_651f0c1fe497a11860b527c5311019e6_tuple, NULL, 8, 0, 0);
code_objects_d77c08cb43cc0bd6a56e8d4dcc72ca4c = MAKE_CODE_OBJECT(module_filename_obj, 344, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_peek, mod_consts.const_str_digest_9a76ca79a33dd4b090db22b34f197e86, mod_consts.const_tuple_str_plain_self_str_plain_size_tuple, NULL, 2, 0, 2);
code_objects_84b1bf79992d7a1f16c9c0c78daedf4f = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_raw, mod_consts.const_str_digest_c81a3d9505959ee9036d3031e995b26a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4af29fb277560adef12f2625da91a06a = MAKE_CODE_OBJECT(module_filename_obj, 332, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_read, mod_consts.const_str_digest_2ade1c87e11dc74e0f9713e26051f94f, mod_consts.const_tuple_str_plain_self_str_plain_size_tuple, NULL, 2, 0, 2);
code_objects_0caf7c90b36b79869756e89522e5a2a9 = MAKE_CODE_OBJECT(module_filename_obj, 333, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_read1, mod_consts.const_str_digest_9a91a7ed5daa8096038dbd2ad9c6d98d, mod_consts.const_tuple_str_plain_self_str_plain_size_tuple, NULL, 2, 0, 2);
code_objects_d703848bacb94cdb11620f7b1962abfe = MAKE_CODE_OBJECT(module_filename_obj, 326, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_readable, mod_consts.const_str_digest_ac5f8927b81feb4c186036233276cc9c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_de3b1d92ce94ab9f3fe52fafbda5915f = MAKE_CODE_OBJECT(module_filename_obj, 334, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_readall, mod_consts.const_str_digest_ee0a51d8fdbe1213df30e903acd864ee, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6eca403d3f132805929f28afc24830ee = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_readinto, mod_consts.const_str_digest_656e85ef5a9fa532cdfbf08bdad23ac6, mod_consts.const_tuple_str_plain_self_str_plain_buf_tuple, NULL, 2, 0, 2);
code_objects_b0518a827a1b5a1b9c705cc57d6b8437 = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_readinto1, mod_consts.const_str_digest_d47c9f75ff7e479af65bcddf435fce51, mod_consts.const_tuple_str_plain_self_str_plain_buffer_tuple, NULL, 2, 0, 2);
code_objects_7391764a5e8acde9600b48027772c0fc = MAKE_CODE_OBJECT(module_filename_obj, 336, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_readline, mod_consts.const_str_digest_7cb81f697b424ecb0e612cc126f126e7, mod_consts.const_tuple_str_plain_self_str_plain_size_tuple, NULL, 2, 0, 2);
code_objects_b9d815adb5fb33745894f6546706acbc = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_readlines, mod_consts.const_str_digest_f38e9601ad753dd6bb4e92bd280a78c2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2f8d78475c2ab8de59fc94a55d25cad1 = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_seek, mod_consts.const_str_digest_2ba62c5aa5e6da7dc440d72dd24e8f55, mod_consts.const_tuple_str_plain_self_str_plain_target_str_plain_whence_tuple, NULL, 3, 0, 3);
code_objects_362fc71186490d5dd1fad8d618162a63 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_seekable, mod_consts.const_str_digest_aaecd4575784843ef1aec363ebd1632a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e8d26db340e3ca4d583306d57174a131 = MAKE_CODE_OBJECT(module_filename_obj, 339, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_tell, mod_consts.const_str_digest_d24182a052313b97a6e0857719da4567, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_88d6284db1b45aaebee721766652202b = MAKE_CODE_OBJECT(module_filename_obj, 340, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_truncate, mod_consts.const_str_digest_d58727140b62f32f5db984ce9dcc897e, mod_consts.const_tuple_str_plain_self_str_plain_size_tuple, NULL, 2, 0, 2);
code_objects_5534711cab94baf120341c8c9e852af9 = MAKE_CODE_OBJECT(module_filename_obj, 486, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wrap_file, mod_consts.const_str_plain_wrap_file, mod_consts.const_tuple_str_plain_file_str_plain_has_tuple, NULL, 1, 0, 0);
code_objects_aa7351870b02e49f0a7b189e8f51bf27 = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wrapped, mod_consts.const_str_digest_f351d736f9c64e969027c0e1aa9487cd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6b69c2998a514030b2127f598ecab435 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wrapper, mod_consts.const_str_digest_acecbd6749eae3e70f7cd0b51273c895, mod_consts.const_tuple_98a317a900ae7b960de0df0600e895db_tuple, mod_consts.const_tuple_str_plain_meth_tuple, 0, 0, 0);
code_objects_853a657ed0b7f123eda9d5597bbc5918 = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_writable, mod_consts.const_str_digest_86c0ea1a38b0ee67c2ab1f17ae330b0b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_fe4277caa6c7d2028fe57c5a137980c0 = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_write, mod_consts.const_str_digest_20870afdb00b790821c70c399c420a0f, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple, NULL, 2, 0, 2);
code_objects_4e46cff2d47223095f482878301a6c7b = MAKE_CODE_OBJECT(module_filename_obj, 342, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_writelines, mod_consts.const_str_digest_0f1657ebd311bd5c745e968cf05b8793, mod_consts.const_tuple_str_plain_self_str_plain_lines_tuple, NULL, 2, 0, 2);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__36___getattr__$$$function__1_wrapper$$$coroutine__1_wrapper(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_trio$_file_io$$$function__37___dir__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_trio$_file_io$$$function__37___dir__$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__39___anext__$$$coroutine__1___anext__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__40_detach$$$coroutine__1_detach(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__41_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__59_flush$$$coroutine__1_flush(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__60_read$$$coroutine__1_read(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__61_read1$$$coroutine__1_read1(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__62_readall$$$coroutine__1_readall(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__63_readinto$$$coroutine__1_readinto(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__64_readline$$$coroutine__1_readline(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__65_readlines$$$coroutine__1_readlines(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__66_seek$$$coroutine__1_seek(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__67_tell$$$coroutine__1_tell(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__68_truncate$$$coroutine__1_truncate(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__69_write$$$coroutine__1_write(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__70_writelines$$$coroutine__1_writelines(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__71_readinto1$$$coroutine__1_readinto1(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__72_peek$$$coroutine__1_peek(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__73_open_file$$$coroutine__1_open_file(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__74_open_file$$$coroutine__1_open_file(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__75_open_file$$$coroutine__1_open_file(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__76_open_file$$$coroutine__1_open_file(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__77_open_file$$$coroutine__1_open_file(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__78_open_file$$$coroutine__1_open_file(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__79_open_file$$$coroutine__1_open_file(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__80_open_file$$$coroutine__1_open_file(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__34___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__35_wrapped(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__36___getattr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__36___getattr__$$$function__1_wrapper(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__37___dir__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__38___aiter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__39___anext__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__40_detach(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__41_aclose(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__42_closed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__43_encoding(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__44_errors(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__45_newlines(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__46_buffer(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__47_raw(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__48_line_buffering(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__49_closefd(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__50_name(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__51_mode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__52_fileno(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__53_isatty(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__54_readable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__55_seekable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__56_writable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__57_getvalue(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__58_getbuffer(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__59_flush(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__60_read(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__61_read1(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__62_readall(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__63_readinto(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__64_readline(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__65_readlines(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__66_seek(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__67_tell(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__68_truncate(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__69_write(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__70_writelines(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__71_readinto1(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__72_peek(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__73_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__74_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__75_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__76_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__77_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__78_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__79_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__80_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__81_wrap_file(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__81_wrap_file$$$function__1_has(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_trio$_file_io$$$function__34___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_file = python_pars[1];
struct Nuitka_FrameObject *frame_frame_trio$_file_io$$$function__34___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_file_io$$$function__34___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_file_io$$$function__34___init__)) {
    Py_XDECREF(cache_frame_frame_trio$_file_io$$$function__34___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_file_io$$$function__34___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_file_io$$$function__34___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_eed391bf248ba3d391f4a615a30cb6d4, module_trio$_file_io, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_file_io$$$function__34___init__->m_type_description == NULL);
frame_frame_trio$_file_io$$$function__34___init__ = cache_frame_frame_trio$_file_io$$$function__34___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_file_io$$$function__34___init__);
assert(Py_REFCNT(frame_frame_trio$_file_io$$$function__34___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_file);
tmp_assattr_value_1 = par_file;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__wrapped, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_file_io$$$function__34___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_file_io$$$function__34___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_file_io$$$function__34___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_file_io$$$function__34___init__,
    type_description_1,
    par_self,
    par_file
);


// Release cached frame if used for exception.
if (frame_frame_trio$_file_io$$$function__34___init__ == cache_frame_frame_trio$_file_io$$$function__34___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_file_io$$$function__34___init__);
    cache_frame_frame_trio$_file_io$$$function__34___init__ = NULL;
}

assertFrameObject(frame_frame_trio$_file_io$$$function__34___init__);

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
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_file_io$$$function__35_wrapped(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_trio$_file_io$$$function__35_wrapped;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_file_io$$$function__35_wrapped = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_file_io$$$function__35_wrapped)) {
    Py_XDECREF(cache_frame_frame_trio$_file_io$$$function__35_wrapped);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_file_io$$$function__35_wrapped == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_file_io$$$function__35_wrapped = MAKE_FUNCTION_FRAME(tstate, code_objects_aa7351870b02e49f0a7b189e8f51bf27, module_trio$_file_io, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_file_io$$$function__35_wrapped->m_type_description == NULL);
frame_frame_trio$_file_io$$$function__35_wrapped = cache_frame_frame_trio$_file_io$$$function__35_wrapped;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_file_io$$$function__35_wrapped);
assert(Py_REFCNT(frame_frame_trio$_file_io$$$function__35_wrapped) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__wrapped);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_file_io$$$function__35_wrapped, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_file_io$$$function__35_wrapped->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_file_io$$$function__35_wrapped, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_file_io$$$function__35_wrapped,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_trio$_file_io$$$function__35_wrapped == cache_frame_frame_trio$_file_io$$$function__35_wrapped) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_file_io$$$function__35_wrapped);
    cache_frame_frame_trio$_file_io$$$function__35_wrapped = NULL;
}

assertFrameObject(frame_frame_trio$_file_io$$$function__35_wrapped);

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


static PyObject *impl_trio$_file_io$$$function__36___getattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_CellObject *var_meth = Nuitka_Cell_NewEmpty();
PyObject *var_wrapper = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_file_io$$$function__36___getattr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_file_io$$$function__36___getattr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_trio$_file_io$$$function__36___getattr__)) {
    Py_XDECREF(cache_frame_frame_trio$_file_io$$$function__36___getattr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_file_io$$$function__36___getattr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_file_io$$$function__36___getattr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b7b49e466948c1589217d4616c1d8375, module_trio$_file_io, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_file_io$$$function__36___getattr__->m_type_description == NULL);
frame_frame_trio$_file_io$$$function__36___getattr__ = cache_frame_frame_trio$_file_io$$$function__36___getattr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_file_io$$$function__36___getattr__);
assert(Py_REFCNT(frame_frame_trio$_file_io$$$function__36___getattr__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_1 = par_name;
tmp_cmp_expr_right_1 = module_var_accessor_trio$_file_io$_FILE_SYNC_ATTRS(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FILE_SYNC_ATTRS);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_1 = "ooco";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooco";
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__wrapped);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooco";
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


exception_lineno = 241;
type_description_1 = "ooco";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_2 = par_name;
tmp_cmp_expr_right_2 = module_var_accessor_trio$_file_io$_FILE_ASYNC_METHODS(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FILE_ASYNC_METHODS);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "ooco";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooco";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__wrapped);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_name_value_2 = par_name;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_3, tmp_name_value_2, NULL);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_meth) == NULL);
Nuitka_Cell_SET(var_meth, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_called_value_2 = module_var_accessor_trio$_file_io$async_wraps(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_async_wraps);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;
type_description_1 = "ooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_5);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__wrapped);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 245;
type_description_1 = "ooco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_6);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 245;
type_description_1 = "ooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_3 = par_name;
frame_frame_trio$_file_io$$$function__36___getattr__->m_frame.f_lineno = 245;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_called_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooco";
    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_41ccbd4ab0f2f1d56a4f00e7ce37134f);
tmp_closure_1[0] = var_meth;
Py_INCREF(tmp_closure_1[0]);
tmp_args_element_value_4 = MAKE_FUNCTION_trio$_file_io$$$function__36___getattr__$$$function__1_wrapper(tstate, tmp_annotations_1, tmp_closure_1);

frame_frame_trio$_file_io$$$function__36___getattr__->m_frame.f_lineno = 245;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooco";
    goto frame_exception_exit_1;
}
assert(var_wrapper == NULL);
var_wrapper = tmp_assign_source_2;
}
{
PyObject *tmp_expression_value_8;
PyObject *tmp_name_value_3;
PyObject *tmp_value_value_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
CHECK_OBJECT(par_name);
tmp_name_value_3 = par_name;
CHECK_OBJECT(var_wrapper);
tmp_value_value_1 = var_wrapper;
tmp_capi_result_1 = BUILTIN_SETATTR(tmp_expression_value_8, tmp_name_value_3, tmp_value_value_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooco";
    goto frame_exception_exit_1;
}
}
CHECK_OBJECT(var_wrapper);
tmp_return_value = var_wrapper;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(par_name);
tmp_make_exception_arg_1 = par_name;
frame_frame_trio$_file_io$$$function__36___getattr__->m_frame.f_lineno = 257;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooco";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 257;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooco";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_file_io$$$function__36___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_file_io$$$function__36___getattr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_file_io$$$function__36___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_file_io$$$function__36___getattr__,
    type_description_1,
    par_self,
    par_name,
    var_meth,
    var_wrapper
);


// Release cached frame if used for exception.
if (frame_frame_trio$_file_io$$$function__36___getattr__ == cache_frame_frame_trio$_file_io$$$function__36___getattr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_file_io$$$function__36___getattr__);
    cache_frame_frame_trio$_file_io$$$function__36___getattr__ = NULL;
}

assertFrameObject(frame_frame_trio$_file_io$$$function__36___getattr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_meth);
CHECK_OBJECT(var_meth);
Py_DECREF(var_meth);
var_meth = NULL;
Py_XDECREF(var_wrapper);
var_wrapper = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_meth);
CHECK_OBJECT(var_meth);
Py_DECREF(var_meth);
var_meth = NULL;
Py_XDECREF(var_wrapper);
var_wrapper = NULL;
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


static PyObject *impl_trio$_file_io$$$function__36___getattr__$$$function__1_wrapper(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_args;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_kwargs;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = self->m_closure[0];
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__36___getattr__$$$function__1_wrapper$$$coroutine__1_wrapper(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_args);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
par_args = NULL;
CHECK_OBJECT(par_kwargs);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
par_kwargs = NULL;
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
struct trio$_file_io$$$function__36___getattr__$$$function__1_wrapper$$$coroutine__1_wrapper_locals {
PyObject *var_func;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *trio$_file_io$$$function__36___getattr__$$$function__1_wrapper$$$coroutine__1_wrapper_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__36___getattr__$$$function__1_wrapper$$$coroutine__1_wrapper_locals *coroutine_heap = (struct trio$_file_io$$$function__36___getattr__$$$function__1_wrapper$$$coroutine__1_wrapper_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_func = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_6b69c2998a514030b2127f598ecab435, module_trio$_file_io, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_direct_call_arg4_1;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_direct_call_arg1_1 == NULL));
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_meth);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 250;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 250;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 250;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg4_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
Py_INCREF(tmp_direct_call_arg3_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_assign_source_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 250;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_func == NULL);
coroutine_heap->var_func = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
coroutine->m_frame->m_frame.f_lineno = 251;
tmp_expression_value_3 = module_var_accessor_trio$_file_io$trio(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 251;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_to_thread);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 251;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_func);
tmp_args_element_value_1 = coroutine_heap->var_func;
coroutine->m_frame->m_frame.f_lineno = 251;
tmp_expression_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_run_sync, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 251;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 251;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 251;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0],
    coroutine->m_closure[1],
    coroutine_heap->var_func,
    coroutine->m_closure[2]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_func);
CHECK_OBJECT(coroutine_heap->var_func);
Py_DECREF(coroutine_heap->var_func);
coroutine_heap->var_func = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_func);
coroutine_heap->var_func = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__36___getattr__$$$function__1_wrapper$$$coroutine__1_wrapper(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__36___getattr__$$$function__1_wrapper$$$coroutine__1_wrapper_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_wrapper,
        mod_consts.const_str_digest_acecbd6749eae3e70f7cd0b51273c895,
        code_objects_6b69c2998a514030b2127f598ecab435,
        closure,
        3,
#if 1
        sizeof(struct trio$_file_io$$$function__36___getattr__$$$function__1_wrapper$$$coroutine__1_wrapper_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__37___dir__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_attrs = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_genexpr_2__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_file_io$$$function__37___dir__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_file_io$$$function__37___dir__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_trio$_file_io$$$function__37___dir__)) {
    Py_XDECREF(cache_frame_frame_trio$_file_io$$$function__37___dir__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_file_io$$$function__37___dir__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_file_io$$$function__37___dir__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f523b872a36530d091eb512d6abe663a, module_trio$_file_io, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_file_io$$$function__37___dir__->m_type_description == NULL);
frame_frame_trio$_file_io$$$function__37___dir__ = cache_frame_frame_trio$_file_io$$$function__37___dir__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_file_io$$$function__37___dir__);
assert(Py_REFCNT(frame_frame_trio$_file_io$$$function__37___dir__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_set_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 260;
type_description_1 = "coc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_object_arg_value_1 = Nuitka_Cell_GET(par_self);
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_trio$_file_io, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "coc";
    goto frame_exception_exit_1;
}
frame_frame_trio$_file_io$$$function__37___dir__->m_frame.f_lineno = 260;
tmp_set_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain___dir__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_set_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "coc";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "coc";
    goto frame_exception_exit_1;
}
assert(var_attrs == NULL);
var_attrs = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_attrs);
tmp_expression_value_1 = var_attrs;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_update);
assert(!(tmp_called_value_1 == NULL));
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_trio$_file_io$_FILE_SYNC_ATTRS(tstate);
if (unlikely(tmp_iter_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FILE_SYNC_ATTRS);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;
type_description_1 = "coc";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "coc";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_2;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_args_element_value_1 = MAKE_GENERATOR_trio$_file_io$$$function__37___dir__$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
frame_frame_trio$_file_io$$$function__37___dir__->m_frame.f_lineno = 261;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "coc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_attrs);
tmp_expression_value_2 = var_attrs;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_update);
assert(!(tmp_called_value_2 == NULL));
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_2;
tmp_iter_arg_2 = module_var_accessor_trio$_file_io$_FILE_ASYNC_METHODS(tstate);
if (unlikely(tmp_iter_arg_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FILE_ASYNC_METHODS);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;
type_description_1 = "coc";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "coc";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_2__$0 == NULL);
tmp_genexpr_2__$0 = tmp_assign_source_3;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_2[2];
tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);
tmp_closure_2[1] = par_self;
Py_INCREF(tmp_closure_2[1]);
tmp_args_element_value_2 = MAKE_GENERATOR_trio$_file_io$$$function__37___dir__$$$genexpr__2_genexpr(tstate, tmp_closure_2);

goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_genexpr_2__$0);
CHECK_OBJECT(tmp_genexpr_2__$0);
Py_DECREF(tmp_genexpr_2__$0);
tmp_genexpr_2__$0 = NULL;
goto outline_result_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
frame_frame_trio$_file_io$$$function__37___dir__->m_frame.f_lineno = 262;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "coc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_file_io$$$function__37___dir__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_file_io$$$function__37___dir__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_file_io$$$function__37___dir__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_file_io$$$function__37___dir__,
    type_description_1,
    par_self,
    var_attrs,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_trio$_file_io$$$function__37___dir__ == cache_frame_frame_trio$_file_io$$$function__37___dir__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_file_io$$$function__37___dir__);
    cache_frame_frame_trio$_file_io$$$function__37___dir__ = NULL;
}

assertFrameObject(frame_frame_trio$_file_io$$$function__37___dir__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_attrs);
tmp_return_value = var_attrs;
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
CHECK_OBJECT(var_attrs);
CHECK_OBJECT(var_attrs);
Py_DECREF(var_attrs);
var_attrs = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
Py_XDECREF(var_attrs);
var_attrs = NULL;
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



#if 1
struct trio$_file_io$$$function__37___dir__$$$genexpr__1_genexpr_locals {
PyObject *var_a;
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

static PyObject *trio$_file_io$$$function__37___dir__$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__37___dir__$$$genexpr__1_genexpr_locals *generator_heap = (struct trio$_file_io$$$function__37___dir__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_a = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f34c8a16e40c43a1f29fe92e78b943fa, module_trio$_file_io, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 261;
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
    PyObject *old = generator_heap->var_a;
    generator_heap->var_a = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_a);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 261;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_wrapped);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 261;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_a);
tmp_name_value_1 = generator_heap->var_a;
generator_heap->tmp_res = BUILTIN_HASATTR_BOOL(tstate, tmp_expression_value_1, tmp_name_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 261;
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
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_a);
tmp_expression_value_3 = generator_heap->var_a;
Py_INCREF(tmp_expression_value_3);
generator->m_yield_return_index = 1;
return tmp_expression_value_3;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 261;
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


generator_heap->exception_lineno = 261;
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
    generator_heap->var_a,
    generator->m_closure[1]
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

Py_XDECREF(generator_heap->var_a);
generator_heap->var_a = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_a);
generator_heap->var_a = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_trio$_file_io$$$function__37___dir__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        trio$_file_io$$$function__37___dir__$$$genexpr__1_genexpr_context,
        module_trio$_file_io,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_1711cc69a51f9cdd4bbe8f2061e4fd89,
#endif
        code_objects_f34c8a16e40c43a1f29fe92e78b943fa,
        closure,
        2,
#if 1
        sizeof(struct trio$_file_io$$$function__37___dir__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct trio$_file_io$$$function__37___dir__$$$genexpr__2_genexpr_locals {
PyObject *var_a;
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

static PyObject *trio$_file_io$$$function__37___dir__$$$genexpr__2_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__37___dir__$$$genexpr__2_genexpr_locals *generator_heap = (struct trio$_file_io$$$function__37___dir__$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_a = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_1af4c3f2419cbe987971125e72b6c52d, module_trio$_file_io, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 262;
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
    PyObject *old = generator_heap->var_a;
    generator_heap->var_a = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_a);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 262;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_wrapped);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 262;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_a);
tmp_name_value_1 = generator_heap->var_a;
generator_heap->tmp_res = BUILTIN_HASATTR_BOOL(tstate, tmp_expression_value_1, tmp_name_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 262;
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
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_a);
tmp_expression_value_3 = generator_heap->var_a;
Py_INCREF(tmp_expression_value_3);
generator->m_yield_return_index = 1;
return tmp_expression_value_3;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 262;
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


generator_heap->exception_lineno = 262;
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
    generator_heap->var_a,
    generator->m_closure[1]
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

Py_XDECREF(generator_heap->var_a);
generator_heap->var_a = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_a);
generator_heap->var_a = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_trio$_file_io$$$function__37___dir__$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        trio$_file_io$$$function__37___dir__$$$genexpr__2_genexpr_context,
        module_trio$_file_io,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_1711cc69a51f9cdd4bbe8f2061e4fd89,
#endif
        code_objects_1af4c3f2419cbe987971125e72b6c52d,
        closure,
        2,
#if 1
        sizeof(struct trio$_file_io$$$function__37___dir__$$$genexpr__2_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__38___aiter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_trio$_file_io$$$function__39___anext__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__39___anext__$$$coroutine__1___anext__(tstate, tmp_closure_1);

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
struct trio$_file_io$$$function__39___anext__$$$coroutine__1___anext___locals {
PyObject *var_line;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *trio$_file_io$$$function__39___anext__$$$coroutine__1___anext___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__39___anext__$$$coroutine__1___anext___locals *coroutine_heap = (struct trio$_file_io$$$function__39___anext__$$$coroutine__1___anext___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_line = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2e6781ab6a0a5155f8d45e02ef4fe954, module_trio$_file_io, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
coroutine->m_frame->m_frame.f_lineno = 269;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 269;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_readline);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 269;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(coroutine_heap->var_line == NULL);
coroutine_heap->var_line = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(coroutine_heap->var_line);
tmp_truth_name_1 = CHECK_IF_TRUE(coroutine_heap->var_line);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 270;
coroutine_heap->type_description_1 = "co";
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
CHECK_OBJECT(coroutine_heap->var_line);
coroutine_heap->tmp_return_value = coroutine_heap->var_line;
Py_INCREF(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_StopAsyncIteration);
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 273;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "co";
goto frame_exception_exit_1;
}
branch_end_1:;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0],
    coroutine_heap->var_line
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_line);
CHECK_OBJECT(coroutine_heap->var_line);
Py_DECREF(coroutine_heap->var_line);
coroutine_heap->var_line = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_line);
coroutine_heap->var_line = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__39___anext__$$$coroutine__1___anext__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__39___anext__$$$coroutine__1___anext___context,
        module_trio$_file_io,
        mod_consts.const_str_plain___anext__,
        mod_consts.const_str_digest_a8d1b7c32197c1b7aad76e902c88b606,
        code_objects_2e6781ab6a0a5155f8d45e02ef4fe954,
        closure,
        1,
#if 1
        sizeof(struct trio$_file_io$$$function__39___anext__$$$coroutine__1___anext___locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__40_detach(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__40_detach$$$coroutine__1_detach(tstate, tmp_closure_1);

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
struct trio$_file_io$$$function__40_detach$$$coroutine__1_detach_locals {
PyObject *var_raw;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *trio$_file_io$$$function__40_detach$$$coroutine__1_detach_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__40_detach$$$coroutine__1_detach_locals *coroutine_heap = (struct trio$_file_io$$$function__40_detach$$$coroutine__1_detach_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_raw = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f23702d5906c4340c8ccb97e78d74429, module_trio$_file_io, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
coroutine->m_frame->m_frame.f_lineno = 283;
tmp_expression_value_4 = module_var_accessor_trio$_file_io$trio(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_to_thread);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_run_sync);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__wrapped);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_detach);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 283;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 283;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(coroutine_heap->var_raw == NULL);
coroutine_heap->var_raw = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_trio$_file_io$wrap_file(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_wrap_file);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 284;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_raw);
tmp_args_element_value_2 = coroutine_heap->var_raw;
coroutine->m_frame->m_frame.f_lineno = 284;
coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 284;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0],
    coroutine_heap->var_raw
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_raw);
CHECK_OBJECT(coroutine_heap->var_raw);
Py_DECREF(coroutine_heap->var_raw);
coroutine_heap->var_raw = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_raw);
coroutine_heap->var_raw = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__40_detach$$$coroutine__1_detach(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__40_detach$$$coroutine__1_detach_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_detach,
        mod_consts.const_str_digest_aa796caef342408dff507c7a5309df4a,
        code_objects_f23702d5906c4340c8ccb97e78d74429,
        closure,
        1,
#if 1
        sizeof(struct trio$_file_io$$$function__40_detach$$$coroutine__1_detach_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__41_aclose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__41_aclose$$$coroutine__1_aclose(tstate, tmp_closure_1);

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
struct trio$_file_io$$$function__41_aclose$$$coroutine__1_aclose_locals {
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__41_aclose$$$coroutine__1_aclose_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__41_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct trio$_file_io$$$function__41_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_428eb3536064a5a6af81301682dd059c, module_trio$_file_io, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_trio$_file_io$trio(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CancelScope);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 295;
tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_shield_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 295;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_3 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 296;
tmp_expression_value_7 = module_var_accessor_trio$_file_io$trio(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_to_thread);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_run_sync);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}

tmp_expression_value_9 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__wrapped);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_3);

coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_close);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_3);

coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
coroutine->m_frame->m_frame.f_lineno = 296;
tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
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
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 295;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 295;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_4;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 295;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_4;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = coroutine_heap->tmp_with_1__indicator;
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
PyObject *tmp_call_result_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 295;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 295;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
Py_DECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
Py_DECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
Py_DECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
{
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 298;
tmp_expression_value_12 = module_var_accessor_trio$_file_io$trio(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 298;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_lowlevel);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 298;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 298;
tmp_expression_value_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_checkpoint_if_cancelled);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 298;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_10 = ASYNC_AWAIT(tstate, tmp_expression_value_11, await_normal);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 298;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_10;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 298;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__41_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__41_aclose$$$coroutine__1_aclose_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_aclose,
        mod_consts.const_str_digest_dac780b732c6603212fa4ea6fd17ac02,
        code_objects_428eb3536064a5a6af81301682dd059c,
        closure,
        1,
#if 1
        sizeof(struct trio$_file_io$$$function__41_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__59_flush(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__59_flush$$$coroutine__1_flush(tstate);

goto try_return_handler_1;
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
struct trio$_file_io$$$function__59_flush$$$coroutine__1_flush_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__59_flush$$$coroutine__1_flush_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__59_flush$$$coroutine__1_flush_locals *coroutine_heap = (struct trio$_file_io$$$function__59_flush$$$coroutine__1_flush_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__59_flush$$$coroutine__1_flush(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__59_flush$$$coroutine__1_flush_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_flush,
        mod_consts.const_str_digest_256b7bf49ed010158a247ded028e3990,
        code_objects_2771e7df8cc45a3a725a70758340d086,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__59_flush$$$coroutine__1_flush_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__60_read(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_size = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__60_read$$$coroutine__1_read(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_size);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
par_size = NULL;
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
struct trio$_file_io$$$function__60_read$$$coroutine__1_read_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__60_read$$$coroutine__1_read_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__60_read$$$coroutine__1_read_locals *coroutine_heap = (struct trio$_file_io$$$function__60_read$$$coroutine__1_read_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__60_read$$$coroutine__1_read(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__60_read$$$coroutine__1_read_context,
        module_trio$_file_io,
        const_str_plain_read,
        mod_consts.const_str_digest_2ade1c87e11dc74e0f9713e26051f94f,
        code_objects_4af29fb277560adef12f2625da91a06a,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__60_read$$$coroutine__1_read_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__61_read1(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_size = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__61_read1$$$coroutine__1_read1(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_size);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
par_size = NULL;
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
struct trio$_file_io$$$function__61_read1$$$coroutine__1_read1_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__61_read1$$$coroutine__1_read1_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__61_read1$$$coroutine__1_read1_locals *coroutine_heap = (struct trio$_file_io$$$function__61_read1$$$coroutine__1_read1_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__61_read1$$$coroutine__1_read1(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__61_read1$$$coroutine__1_read1_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_read1,
        mod_consts.const_str_digest_9a91a7ed5daa8096038dbd2ad9c6d98d,
        code_objects_0caf7c90b36b79869756e89522e5a2a9,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__61_read1$$$coroutine__1_read1_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__62_readall(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__62_readall$$$coroutine__1_readall(tstate);

goto try_return_handler_1;
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
struct trio$_file_io$$$function__62_readall$$$coroutine__1_readall_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__62_readall$$$coroutine__1_readall_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__62_readall$$$coroutine__1_readall_locals *coroutine_heap = (struct trio$_file_io$$$function__62_readall$$$coroutine__1_readall_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__62_readall$$$coroutine__1_readall(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__62_readall$$$coroutine__1_readall_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_readall,
        mod_consts.const_str_digest_ee0a51d8fdbe1213df30e903acd864ee,
        code_objects_de3b1d92ce94ab9f3fe52fafbda5915f,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__62_readall$$$coroutine__1_readall_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__63_readinto(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_buf = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__63_readinto$$$coroutine__1_readinto(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_buf);
CHECK_OBJECT(par_buf);
Py_DECREF(par_buf);
par_buf = NULL;
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
struct trio$_file_io$$$function__63_readinto$$$coroutine__1_readinto_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__63_readinto$$$coroutine__1_readinto_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__63_readinto$$$coroutine__1_readinto_locals *coroutine_heap = (struct trio$_file_io$$$function__63_readinto$$$coroutine__1_readinto_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__63_readinto$$$coroutine__1_readinto(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__63_readinto$$$coroutine__1_readinto_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_readinto,
        mod_consts.const_str_digest_656e85ef5a9fa532cdfbf08bdad23ac6,
        code_objects_6eca403d3f132805929f28afc24830ee,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__63_readinto$$$coroutine__1_readinto_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__64_readline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_size = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__64_readline$$$coroutine__1_readline(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_size);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
par_size = NULL;
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
struct trio$_file_io$$$function__64_readline$$$coroutine__1_readline_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__64_readline$$$coroutine__1_readline_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__64_readline$$$coroutine__1_readline_locals *coroutine_heap = (struct trio$_file_io$$$function__64_readline$$$coroutine__1_readline_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__64_readline$$$coroutine__1_readline(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__64_readline$$$coroutine__1_readline_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_readline,
        mod_consts.const_str_digest_7cb81f697b424ecb0e612cc126f126e7,
        code_objects_7391764a5e8acde9600b48027772c0fc,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__64_readline$$$coroutine__1_readline_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__65_readlines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__65_readlines$$$coroutine__1_readlines(tstate);

goto try_return_handler_1;
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
struct trio$_file_io$$$function__65_readlines$$$coroutine__1_readlines_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__65_readlines$$$coroutine__1_readlines_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__65_readlines$$$coroutine__1_readlines_locals *coroutine_heap = (struct trio$_file_io$$$function__65_readlines$$$coroutine__1_readlines_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__65_readlines$$$coroutine__1_readlines(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__65_readlines$$$coroutine__1_readlines_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_readlines,
        mod_consts.const_str_digest_f38e9601ad753dd6bb4e92bd280a78c2,
        code_objects_b9d815adb5fb33745894f6546706acbc,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__65_readlines$$$coroutine__1_readlines_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__66_seek(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_target = python_pars[1];
PyObject *par_whence = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__66_seek$$$coroutine__1_seek(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_target);
CHECK_OBJECT(par_target);
Py_DECREF(par_target);
par_target = NULL;
CHECK_OBJECT(par_whence);
CHECK_OBJECT(par_whence);
Py_DECREF(par_whence);
par_whence = NULL;
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
struct trio$_file_io$$$function__66_seek$$$coroutine__1_seek_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__66_seek$$$coroutine__1_seek_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__66_seek$$$coroutine__1_seek_locals *coroutine_heap = (struct trio$_file_io$$$function__66_seek$$$coroutine__1_seek_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__66_seek$$$coroutine__1_seek(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__66_seek$$$coroutine__1_seek_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_seek,
        mod_consts.const_str_digest_2ba62c5aa5e6da7dc440d72dd24e8f55,
        code_objects_2f8d78475c2ab8de59fc94a55d25cad1,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__66_seek$$$coroutine__1_seek_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__67_tell(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__67_tell$$$coroutine__1_tell(tstate);

goto try_return_handler_1;
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
struct trio$_file_io$$$function__67_tell$$$coroutine__1_tell_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__67_tell$$$coroutine__1_tell_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__67_tell$$$coroutine__1_tell_locals *coroutine_heap = (struct trio$_file_io$$$function__67_tell$$$coroutine__1_tell_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__67_tell$$$coroutine__1_tell(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__67_tell$$$coroutine__1_tell_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_tell,
        mod_consts.const_str_digest_d24182a052313b97a6e0857719da4567,
        code_objects_e8d26db340e3ca4d583306d57174a131,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__67_tell$$$coroutine__1_tell_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__68_truncate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_size = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__68_truncate$$$coroutine__1_truncate(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_size);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
par_size = NULL;
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
struct trio$_file_io$$$function__68_truncate$$$coroutine__1_truncate_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__68_truncate$$$coroutine__1_truncate_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__68_truncate$$$coroutine__1_truncate_locals *coroutine_heap = (struct trio$_file_io$$$function__68_truncate$$$coroutine__1_truncate_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__68_truncate$$$coroutine__1_truncate(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__68_truncate$$$coroutine__1_truncate_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_truncate,
        mod_consts.const_str_digest_d58727140b62f32f5db984ce9dcc897e,
        code_objects_88d6284db1b45aaebee721766652202b,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__68_truncate$$$coroutine__1_truncate_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__69_write(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__69_write$$$coroutine__1_write(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_data);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
par_data = NULL;
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
struct trio$_file_io$$$function__69_write$$$coroutine__1_write_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__69_write$$$coroutine__1_write_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__69_write$$$coroutine__1_write_locals *coroutine_heap = (struct trio$_file_io$$$function__69_write$$$coroutine__1_write_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__69_write$$$coroutine__1_write(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__69_write$$$coroutine__1_write_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_write,
        mod_consts.const_str_digest_20870afdb00b790821c70c399c420a0f,
        code_objects_fe4277caa6c7d2028fe57c5a137980c0,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__69_write$$$coroutine__1_write_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__70_writelines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_lines = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__70_writelines$$$coroutine__1_writelines(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_lines);
CHECK_OBJECT(par_lines);
Py_DECREF(par_lines);
par_lines = NULL;
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
struct trio$_file_io$$$function__70_writelines$$$coroutine__1_writelines_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__70_writelines$$$coroutine__1_writelines_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__70_writelines$$$coroutine__1_writelines_locals *coroutine_heap = (struct trio$_file_io$$$function__70_writelines$$$coroutine__1_writelines_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__70_writelines$$$coroutine__1_writelines(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__70_writelines$$$coroutine__1_writelines_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_writelines,
        mod_consts.const_str_digest_0f1657ebd311bd5c745e968cf05b8793,
        code_objects_4e46cff2d47223095f482878301a6c7b,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__70_writelines$$$coroutine__1_writelines_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__71_readinto1(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_buffer = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__71_readinto1$$$coroutine__1_readinto1(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_buffer);
CHECK_OBJECT(par_buffer);
Py_DECREF(par_buffer);
par_buffer = NULL;
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
struct trio$_file_io$$$function__71_readinto1$$$coroutine__1_readinto1_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__71_readinto1$$$coroutine__1_readinto1_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__71_readinto1$$$coroutine__1_readinto1_locals *coroutine_heap = (struct trio$_file_io$$$function__71_readinto1$$$coroutine__1_readinto1_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__71_readinto1$$$coroutine__1_readinto1(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__71_readinto1$$$coroutine__1_readinto1_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_readinto1,
        mod_consts.const_str_digest_d47c9f75ff7e479af65bcddf435fce51,
        code_objects_b0518a827a1b5a1b9c705cc57d6b8437,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__71_readinto1$$$coroutine__1_readinto1_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__72_peek(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_size = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__72_peek$$$coroutine__1_peek(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_size);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
par_size = NULL;
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
struct trio$_file_io$$$function__72_peek$$$coroutine__1_peek_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__72_peek$$$coroutine__1_peek_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__72_peek$$$coroutine__1_peek_locals *coroutine_heap = (struct trio$_file_io$$$function__72_peek$$$coroutine__1_peek_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__72_peek$$$coroutine__1_peek(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__72_peek$$$coroutine__1_peek_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_peek,
        mod_consts.const_str_digest_9a76ca79a33dd4b090db22b34f197e86,
        code_objects_d77c08cb43cc0bd6a56e8d4dcc72ca4c,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__72_peek$$$coroutine__1_peek_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__73_open_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_file = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *par_buffering = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_errors = python_pars[4];
PyObject *par_newline = python_pars[5];
PyObject *par_closefd = python_pars[6];
PyObject *par_opener = python_pars[7];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__73_open_file$$$coroutine__1_open_file(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_mode);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
par_mode = NULL;
CHECK_OBJECT(par_buffering);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
par_buffering = NULL;
CHECK_OBJECT(par_encoding);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
par_encoding = NULL;
CHECK_OBJECT(par_errors);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
par_errors = NULL;
CHECK_OBJECT(par_newline);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
par_newline = NULL;
CHECK_OBJECT(par_closefd);
CHECK_OBJECT(par_closefd);
Py_DECREF(par_closefd);
par_closefd = NULL;
CHECK_OBJECT(par_opener);
CHECK_OBJECT(par_opener);
Py_DECREF(par_opener);
par_opener = NULL;
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
struct trio$_file_io$$$function__73_open_file$$$coroutine__1_open_file_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__73_open_file$$$coroutine__1_open_file_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__73_open_file$$$coroutine__1_open_file_locals *coroutine_heap = (struct trio$_file_io$$$function__73_open_file$$$coroutine__1_open_file_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__73_open_file$$$coroutine__1_open_file(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__73_open_file$$$coroutine__1_open_file_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_open_file,
        NULL,
        code_objects_dbabef6a2e30b332aecacb65ed792aed,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__73_open_file$$$coroutine__1_open_file_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__74_open_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_file = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *par_buffering = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_errors = python_pars[4];
PyObject *par_newline = python_pars[5];
PyObject *par_closefd = python_pars[6];
PyObject *par_opener = python_pars[7];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__74_open_file$$$coroutine__1_open_file(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_mode);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
par_mode = NULL;
CHECK_OBJECT(par_buffering);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
par_buffering = NULL;
CHECK_OBJECT(par_encoding);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
par_encoding = NULL;
CHECK_OBJECT(par_errors);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
par_errors = NULL;
CHECK_OBJECT(par_newline);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
par_newline = NULL;
CHECK_OBJECT(par_closefd);
CHECK_OBJECT(par_closefd);
Py_DECREF(par_closefd);
par_closefd = NULL;
CHECK_OBJECT(par_opener);
CHECK_OBJECT(par_opener);
Py_DECREF(par_opener);
par_opener = NULL;
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
struct trio$_file_io$$$function__74_open_file$$$coroutine__1_open_file_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__74_open_file$$$coroutine__1_open_file_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__74_open_file$$$coroutine__1_open_file_locals *coroutine_heap = (struct trio$_file_io$$$function__74_open_file$$$coroutine__1_open_file_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__74_open_file$$$coroutine__1_open_file(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__74_open_file$$$coroutine__1_open_file_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_open_file,
        NULL,
        code_objects_aa5a88015bff4b24ebd69bd999c68199,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__74_open_file$$$coroutine__1_open_file_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__75_open_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_file = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *par_buffering = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_errors = python_pars[4];
PyObject *par_newline = python_pars[5];
PyObject *par_closefd = python_pars[6];
PyObject *par_opener = python_pars[7];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__75_open_file$$$coroutine__1_open_file(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_mode);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
par_mode = NULL;
CHECK_OBJECT(par_buffering);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
par_buffering = NULL;
CHECK_OBJECT(par_encoding);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
par_encoding = NULL;
CHECK_OBJECT(par_errors);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
par_errors = NULL;
CHECK_OBJECT(par_newline);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
par_newline = NULL;
CHECK_OBJECT(par_closefd);
CHECK_OBJECT(par_closefd);
Py_DECREF(par_closefd);
par_closefd = NULL;
CHECK_OBJECT(par_opener);
CHECK_OBJECT(par_opener);
Py_DECREF(par_opener);
par_opener = NULL;
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
struct trio$_file_io$$$function__75_open_file$$$coroutine__1_open_file_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__75_open_file$$$coroutine__1_open_file_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__75_open_file$$$coroutine__1_open_file_locals *coroutine_heap = (struct trio$_file_io$$$function__75_open_file$$$coroutine__1_open_file_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__75_open_file$$$coroutine__1_open_file(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__75_open_file$$$coroutine__1_open_file_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_open_file,
        NULL,
        code_objects_dc982956b3151f32c241d3a7fec8a1db,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__75_open_file$$$coroutine__1_open_file_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__76_open_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_file = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *par_buffering = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_errors = python_pars[4];
PyObject *par_newline = python_pars[5];
PyObject *par_closefd = python_pars[6];
PyObject *par_opener = python_pars[7];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__76_open_file$$$coroutine__1_open_file(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_mode);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
par_mode = NULL;
CHECK_OBJECT(par_buffering);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
par_buffering = NULL;
CHECK_OBJECT(par_encoding);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
par_encoding = NULL;
CHECK_OBJECT(par_errors);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
par_errors = NULL;
CHECK_OBJECT(par_newline);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
par_newline = NULL;
CHECK_OBJECT(par_closefd);
CHECK_OBJECT(par_closefd);
Py_DECREF(par_closefd);
par_closefd = NULL;
CHECK_OBJECT(par_opener);
CHECK_OBJECT(par_opener);
Py_DECREF(par_opener);
par_opener = NULL;
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
struct trio$_file_io$$$function__76_open_file$$$coroutine__1_open_file_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__76_open_file$$$coroutine__1_open_file_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__76_open_file$$$coroutine__1_open_file_locals *coroutine_heap = (struct trio$_file_io$$$function__76_open_file$$$coroutine__1_open_file_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__76_open_file$$$coroutine__1_open_file(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__76_open_file$$$coroutine__1_open_file_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_open_file,
        NULL,
        code_objects_bcbe6d245e043de04cd9383c3256afae,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__76_open_file$$$coroutine__1_open_file_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__77_open_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_file = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *par_buffering = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_errors = python_pars[4];
PyObject *par_newline = python_pars[5];
PyObject *par_closefd = python_pars[6];
PyObject *par_opener = python_pars[7];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__77_open_file$$$coroutine__1_open_file(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_mode);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
par_mode = NULL;
CHECK_OBJECT(par_buffering);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
par_buffering = NULL;
CHECK_OBJECT(par_encoding);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
par_encoding = NULL;
CHECK_OBJECT(par_errors);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
par_errors = NULL;
CHECK_OBJECT(par_newline);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
par_newline = NULL;
CHECK_OBJECT(par_closefd);
CHECK_OBJECT(par_closefd);
Py_DECREF(par_closefd);
par_closefd = NULL;
CHECK_OBJECT(par_opener);
CHECK_OBJECT(par_opener);
Py_DECREF(par_opener);
par_opener = NULL;
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
struct trio$_file_io$$$function__77_open_file$$$coroutine__1_open_file_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__77_open_file$$$coroutine__1_open_file_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__77_open_file$$$coroutine__1_open_file_locals *coroutine_heap = (struct trio$_file_io$$$function__77_open_file$$$coroutine__1_open_file_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__77_open_file$$$coroutine__1_open_file(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__77_open_file$$$coroutine__1_open_file_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_open_file,
        NULL,
        code_objects_72241ad0b2ab603db8d7f0eb62c7c592,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__77_open_file$$$coroutine__1_open_file_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__78_open_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_file = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *par_buffering = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_errors = python_pars[4];
PyObject *par_newline = python_pars[5];
PyObject *par_closefd = python_pars[6];
PyObject *par_opener = python_pars[7];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__78_open_file$$$coroutine__1_open_file(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_mode);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
par_mode = NULL;
CHECK_OBJECT(par_buffering);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
par_buffering = NULL;
CHECK_OBJECT(par_encoding);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
par_encoding = NULL;
CHECK_OBJECT(par_errors);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
par_errors = NULL;
CHECK_OBJECT(par_newline);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
par_newline = NULL;
CHECK_OBJECT(par_closefd);
CHECK_OBJECT(par_closefd);
Py_DECREF(par_closefd);
par_closefd = NULL;
CHECK_OBJECT(par_opener);
CHECK_OBJECT(par_opener);
Py_DECREF(par_opener);
par_opener = NULL;
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
struct trio$_file_io$$$function__78_open_file$$$coroutine__1_open_file_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__78_open_file$$$coroutine__1_open_file_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__78_open_file$$$coroutine__1_open_file_locals *coroutine_heap = (struct trio$_file_io$$$function__78_open_file$$$coroutine__1_open_file_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__78_open_file$$$coroutine__1_open_file(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__78_open_file$$$coroutine__1_open_file_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_open_file,
        NULL,
        code_objects_5c3b3421061335a2845e47bbc602bd79,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__78_open_file$$$coroutine__1_open_file_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__79_open_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_file = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *par_buffering = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_errors = python_pars[4];
PyObject *par_newline = python_pars[5];
PyObject *par_closefd = python_pars[6];
PyObject *par_opener = python_pars[7];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__79_open_file$$$coroutine__1_open_file(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_mode);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
par_mode = NULL;
CHECK_OBJECT(par_buffering);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
par_buffering = NULL;
CHECK_OBJECT(par_encoding);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
par_encoding = NULL;
CHECK_OBJECT(par_errors);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
par_errors = NULL;
CHECK_OBJECT(par_newline);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
par_newline = NULL;
CHECK_OBJECT(par_closefd);
CHECK_OBJECT(par_closefd);
Py_DECREF(par_closefd);
par_closefd = NULL;
CHECK_OBJECT(par_opener);
CHECK_OBJECT(par_opener);
Py_DECREF(par_opener);
par_opener = NULL;
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
struct trio$_file_io$$$function__79_open_file$$$coroutine__1_open_file_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_file_io$$$function__79_open_file$$$coroutine__1_open_file_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__79_open_file$$$coroutine__1_open_file_locals *coroutine_heap = (struct trio$_file_io$$$function__79_open_file$$$coroutine__1_open_file_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__79_open_file$$$coroutine__1_open_file(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__79_open_file$$$coroutine__1_open_file_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_open_file,
        NULL,
        code_objects_6cf1c06234175b4fb813a85331fb3a88,
        NULL,
        0,
#if 1
        sizeof(struct trio$_file_io$$$function__79_open_file$$$coroutine__1_open_file_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__80_open_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_file = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_mode = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_buffering = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_encoding = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_errors = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_newline = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_closefd = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_opener = Nuitka_Cell_New1(python_pars[7]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[8];
tmp_closure_1[0] = par_buffering;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_closefd;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_encoding;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_errors;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_file;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_mode;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_newline;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_opener;
Py_INCREF(tmp_closure_1[7]);
tmp_return_value = MAKE_COROUTINE_trio$_file_io$$$function__80_open_file$$$coroutine__1_open_file(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(par_mode);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
par_mode = NULL;
CHECK_OBJECT(par_buffering);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
par_buffering = NULL;
CHECK_OBJECT(par_encoding);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
par_encoding = NULL;
CHECK_OBJECT(par_errors);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
par_errors = NULL;
CHECK_OBJECT(par_newline);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
par_newline = NULL;
CHECK_OBJECT(par_closefd);
CHECK_OBJECT(par_closefd);
Py_DECREF(par_closefd);
par_closefd = NULL;
CHECK_OBJECT(par_opener);
CHECK_OBJECT(par_opener);
Py_DECREF(par_opener);
par_opener = NULL;
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
struct trio$_file_io$$$function__80_open_file$$$coroutine__1_open_file_locals {
PyObject *var_file_;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *trio$_file_io$$$function__80_open_file$$$coroutine__1_open_file_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_file_io$$$function__80_open_file$$$coroutine__1_open_file_locals *coroutine_heap = (struct trio$_file_io$$$function__80_open_file$$$coroutine__1_open_file_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_file_ = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f392a0a860d91c9131368a0fd21d5637, module_trio$_file_io, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_1 = module_var_accessor_trio$_file_io$wrap_file(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_wrap_file);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 470;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 471;
tmp_expression_value_4 = module_var_accessor_trio$_file_io$trio(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_to_thread);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_run_sync);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = IMPORT_HARD_IO();
assert(!(tmp_expression_value_5 == NULL));
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_open);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 472;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_file);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 473;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[4]);
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_mode);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 474;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[5]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_buffering);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 475;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_encoding);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 476;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_errors);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 477;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = Nuitka_Cell_GET(coroutine->m_closure[3]);
if (Nuitka_Cell_GET(coroutine->m_closure[6]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_newline);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 478;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_8 = Nuitka_Cell_GET(coroutine->m_closure[6]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_closefd);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 479;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_9 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[7]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_opener);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 480;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_10 = Nuitka_Cell_GET(coroutine->m_closure[7]);
coroutine->m_frame->m_frame.f_lineno = 471;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS9(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = yield_return_value;
coroutine->m_frame->m_frame.f_lineno = 470;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 470;
coroutine_heap->type_description_1 = "cccccccco";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_file_ == NULL);
coroutine_heap->var_file_ = tmp_assign_source_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[4],
    coroutine->m_closure[5],
    coroutine->m_closure[0],
    coroutine->m_closure[2],
    coroutine->m_closure[3],
    coroutine->m_closure[6],
    coroutine->m_closure[1],
    coroutine->m_closure[7],
    coroutine_heap->var_file_
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(coroutine_heap->var_file_);
coroutine_heap->tmp_return_value = coroutine_heap->var_file_;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_file_);
CHECK_OBJECT(coroutine_heap->var_file_);
Py_DECREF(coroutine_heap->var_file_);
coroutine_heap->var_file_ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_file_io$$$function__80_open_file$$$coroutine__1_open_file(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_file_io$$$function__80_open_file$$$coroutine__1_open_file_context,
        module_trio$_file_io,
        mod_consts.const_str_plain_open_file,
        NULL,
        code_objects_f392a0a860d91c9131368a0fd21d5637,
        closure,
        8,
#if 1
        sizeof(struct trio$_file_io$$$function__80_open_file$$$coroutine__1_open_file_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_file_io$$$function__81_wrap_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_file = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_has = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_file_io$$$function__81_wrap_file;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_file_io$$$function__81_wrap_file = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_ff9d3f2720e28bc9e8141513a2d68bde);
tmp_closure_1[0] = par_file;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_trio$_file_io$$$function__81_wrap_file$$$function__1_has(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_has == NULL);
var_has = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_trio$_file_io$$$function__81_wrap_file)) {
    Py_XDECREF(cache_frame_frame_trio$_file_io$$$function__81_wrap_file);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_file_io$$$function__81_wrap_file == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_file_io$$$function__81_wrap_file = MAKE_FUNCTION_FRAME(tstate, code_objects_5534711cab94baf120341c8c9e852af9, module_trio$_file_io, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_file_io$$$function__81_wrap_file->m_type_description == NULL);
frame_frame_trio$_file_io$$$function__81_wrap_file = cache_frame_frame_trio$_file_io$$$function__81_wrap_file;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_file_io$$$function__81_wrap_file);
assert(Py_REFCNT(frame_frame_trio$_file_io$$$function__81_wrap_file) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_called_value_3;
CHECK_OBJECT(var_has);
tmp_called_value_1 = var_has;
frame_frame_trio$_file_io$$$function__81_wrap_file->m_frame.f_lineno = 507;
tmp_and_left_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_close_tuple);

if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 507;
type_description_1 = "co";
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
CHECK_OBJECT(var_has);
tmp_called_value_2 = var_has;
frame_frame_trio$_file_io$$$function__81_wrap_file->m_frame.f_lineno = 507;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_read_tuple);

if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 507;
type_description_1 = "co";
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
CHECK_OBJECT(var_has);
tmp_called_value_3 = var_has;
frame_frame_trio$_file_io$$$function__81_wrap_file->m_frame.f_lineno = 507;
tmp_or_right_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_write_tuple);

if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_right_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_operand_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_operand_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "co";
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
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_file));
tmp_format_value_1 = Nuitka_Cell_GET(par_file);
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_62a51b1078e45f7856a1b8280cc51195;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_trio$_file_io$$$function__81_wrap_file->m_frame.f_lineno = 508;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 508;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "co";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
tmp_called_value_4 = module_var_accessor_trio$_file_io$AsyncIOWrapper(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncIOWrapper);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 513;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_file));
tmp_args_element_value_1 = Nuitka_Cell_GET(par_file);
frame_frame_trio$_file_io$$$function__81_wrap_file->m_frame.f_lineno = 513;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "co";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_file_io$$$function__81_wrap_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_file_io$$$function__81_wrap_file->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_file_io$$$function__81_wrap_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_file_io$$$function__81_wrap_file,
    type_description_1,
    par_file,
    var_has
);


// Release cached frame if used for exception.
if (frame_frame_trio$_file_io$$$function__81_wrap_file == cache_frame_frame_trio$_file_io$$$function__81_wrap_file) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_file_io$$$function__81_wrap_file);
    cache_frame_frame_trio$_file_io$$$function__81_wrap_file = NULL;
}

assertFrameObject(frame_frame_trio$_file_io$$$function__81_wrap_file);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(var_has);
CHECK_OBJECT(var_has);
Py_DECREF(var_has);
var_has = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
CHECK_OBJECT(var_has);
CHECK_OBJECT(var_has);
Py_DECREF(var_has);
var_has = NULL;
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


static PyObject *impl_trio$_file_io$$$function__81_wrap_file$$$function__1_has(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_attr = python_pars[0];
struct Nuitka_FrameObject *frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has)) {
    Py_XDECREF(cache_frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has = MAKE_FUNCTION_FRAME(tstate, code_objects_39d3696c00b2e31dec4f2d2953faecab, module_trio$_file_io, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has->m_type_description == NULL);
frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has = cache_frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has);
assert(Py_REFCNT(frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain_file);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 505;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_attr);
tmp_name_value_1 = par_attr;
tmp_res = BUILTIN_HASATTR_BOOL(tstate, tmp_expression_value_1, tmp_name_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 505;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 505;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_callable);
assert(tmp_called_value_1 != NULL);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain_file);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 505;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_attr);
tmp_name_value_2 = par_attr;
tmp_args_element_value_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_2, NULL);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 505;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has->m_frame.f_lineno = 505;
tmp_and_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 505;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has,
    type_description_1,
    par_attr,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has == cache_frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has);
    cache_frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has = NULL;
}

assertFrameObject(frame_frame_trio$_file_io$$$function__81_wrap_file$$$function__1_has);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__34___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__34___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6adb7eab6b3c248c19c835b8ea840ae1,
#endif
        code_objects_eed391bf248ba3d391f4a615a30cb6d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__35_wrapped(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__35_wrapped,
        mod_consts.const_str_plain_wrapped,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f351d736f9c64e969027c0e1aa9487cd,
#endif
        code_objects_aa7351870b02e49f0a7b189e8f51bf27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        mod_consts.const_str_digest_b5a64743bce685bfb6c5bdfa8c8a477d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__36___getattr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__36___getattr__,
        mod_consts.const_str_plain___getattr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_82fb4e32af4a352130dd21e57726b5b0,
#endif
        code_objects_b7b49e466948c1589217d4616c1d8375,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__36___getattr__$$$function__1_wrapper(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__36___getattr__$$$function__1_wrapper,
        mod_consts.const_str_plain_wrapper,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_acecbd6749eae3e70f7cd0b51273c895,
#endif
        code_objects_6b69c2998a514030b2127f598ecab435,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__37___dir__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__37___dir__,
        mod_consts.const_str_plain___dir__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3d44eb2ded1a910ef4319d629888d986,
#endif
        code_objects_f523b872a36530d091eb512d6abe663a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__38___aiter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__38___aiter__,
        mod_consts.const_str_plain___aiter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_32bf94976ed3e8571296d5d5720cafd9,
#endif
        code_objects_93a2d77f774abddcd965dd5740c561a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__39___anext__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__39___anext__,
        mod_consts.const_str_plain___anext__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a8d1b7c32197c1b7aad76e902c88b606,
#endif
        code_objects_2e6781ab6a0a5155f8d45e02ef4fe954,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__40_detach(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__40_detach,
        mod_consts.const_str_plain_detach,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aa796caef342408dff507c7a5309df4a,
#endif
        code_objects_f23702d5906c4340c8ccb97e78d74429,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        mod_consts.const_str_digest_87b9851b57667c36086447c6d0a29083,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__41_aclose(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__41_aclose,
        mod_consts.const_str_plain_aclose,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dac780b732c6603212fa4ea6fd17ac02,
#endif
        code_objects_428eb3536064a5a6af81301682dd059c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        mod_consts.const_str_digest_583ec0b55e18db5fad9e8f20751a51a8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__42_closed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_closed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_14eb410e67faad1a30028e193b91a22c,
#endif
        code_objects_2984b604d6d42ac393f3576b10818eb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__43_encoding(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_encoding,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8e7df4a909e0775476eb467e6ede5978,
#endif
        code_objects_6e7bb0c8ba015d56b5434ddedcac4d74,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__44_errors(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_errors,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_edcff437845208d8e2f58c8fff31df4d,
#endif
        code_objects_8c00f251c59b7aebfe79459e88a445aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__45_newlines(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_newlines,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8235527a55aa1117f1a0aed8d381f7ba,
#endif
        code_objects_bdbb9b9c1d675a201096499b5d05d46e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__46_buffer(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_buffer,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a9c9f78f463cdafd4f7d4239c6bc57d4,
#endif
        code_objects_921d5d229fada75bc72a43eff2eaaefb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__47_raw(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_raw,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c81a3d9505959ee9036d3031e995b26a,
#endif
        code_objects_84b1bf79992d7a1f16c9c0c78daedf4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__48_line_buffering(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_line_buffering,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_93393a88891e27a2a11e2d8ef3f6d2d2,
#endif
        code_objects_9d6896ace06698180afae5f14b70d901,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__49_closefd(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_closefd,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3a277e2b1858ef49f262440b22e16a54,
#endif
        code_objects_4a1eb07ac48e149963bcf23cd169e0b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__50_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_73c72bff4a04b526fedf86725dc66c28,
#endif
        code_objects_f99b25b08ea9417c744117f0ac5d8e70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__51_mode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_mode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5a695c2f34adfa6e51f394d32df1a867,
#endif
        code_objects_82f8300e4bce260dfffe237490ba6b6d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__52_fileno(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_fileno,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_842b2c1787e09ab0cf492037e94e3fef,
#endif
        code_objects_9223f619f4c4970ae18e2fc8e162f75e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__53_isatty(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_isatty,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3673d3aa38756300daa01b0954368287,
#endif
        code_objects_12a09be4fe80d0e96a37b00a592972ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__54_readable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_readable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ac5f8927b81feb4c186036233276cc9c,
#endif
        code_objects_d703848bacb94cdb11620f7b1962abfe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__55_seekable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_seekable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aaecd4575784843ef1aec363ebd1632a,
#endif
        code_objects_362fc71186490d5dd1fad8d618162a63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__56_writable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_writable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_86c0ea1a38b0ee67c2ab1f17ae330b0b,
#endif
        code_objects_853a657ed0b7f123eda9d5597bbc5918,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__57_getvalue(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_getvalue,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0d34e4797098c9817e843a289e8a70f7,
#endif
        code_objects_a794442a54f99fbbb89b044164fb58b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__58_getbuffer(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_getbuffer,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e0865121b18b06fb26bac615893ddcb5,
#endif
        code_objects_220477268404a9118598433561beba78,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__59_flush(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__59_flush,
        mod_consts.const_str_plain_flush,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_256b7bf49ed010158a247ded028e3990,
#endif
        code_objects_2771e7df8cc45a3a725a70758340d086,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__60_read(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__60_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2ade1c87e11dc74e0f9713e26051f94f,
#endif
        code_objects_4af29fb277560adef12f2625da91a06a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__61_read1(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__61_read1,
        mod_consts.const_str_plain_read1,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9a91a7ed5daa8096038dbd2ad9c6d98d,
#endif
        code_objects_0caf7c90b36b79869756e89522e5a2a9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__62_readall(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__62_readall,
        mod_consts.const_str_plain_readall,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ee0a51d8fdbe1213df30e903acd864ee,
#endif
        code_objects_de3b1d92ce94ab9f3fe52fafbda5915f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__63_readinto(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__63_readinto,
        mod_consts.const_str_plain_readinto,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_656e85ef5a9fa532cdfbf08bdad23ac6,
#endif
        code_objects_6eca403d3f132805929f28afc24830ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__64_readline(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__64_readline,
        mod_consts.const_str_plain_readline,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7cb81f697b424ecb0e612cc126f126e7,
#endif
        code_objects_7391764a5e8acde9600b48027772c0fc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__65_readlines(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__65_readlines,
        mod_consts.const_str_plain_readlines,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f38e9601ad753dd6bb4e92bd280a78c2,
#endif
        code_objects_b9d815adb5fb33745894f6546706acbc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__66_seek(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__66_seek,
        mod_consts.const_str_plain_seek,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2ba62c5aa5e6da7dc440d72dd24e8f55,
#endif
        code_objects_2f8d78475c2ab8de59fc94a55d25cad1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__67_tell(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__67_tell,
        mod_consts.const_str_plain_tell,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d24182a052313b97a6e0857719da4567,
#endif
        code_objects_e8d26db340e3ca4d583306d57174a131,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__68_truncate(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__68_truncate,
        mod_consts.const_str_plain_truncate,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d58727140b62f32f5db984ce9dcc897e,
#endif
        code_objects_88d6284db1b45aaebee721766652202b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__69_write(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__69_write,
        mod_consts.const_str_plain_write,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_20870afdb00b790821c70c399c420a0f,
#endif
        code_objects_fe4277caa6c7d2028fe57c5a137980c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__70_writelines(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__70_writelines,
        mod_consts.const_str_plain_writelines,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0f1657ebd311bd5c745e968cf05b8793,
#endif
        code_objects_4e46cff2d47223095f482878301a6c7b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__71_readinto1(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__71_readinto1,
        mod_consts.const_str_plain_readinto1,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d47c9f75ff7e479af65bcddf435fce51,
#endif
        code_objects_b0518a827a1b5a1b9c705cc57d6b8437,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__72_peek(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__72_peek,
        mod_consts.const_str_plain_peek,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9a76ca79a33dd4b090db22b34f197e86,
#endif
        code_objects_d77c08cb43cc0bd6a56e8d4dcc72ca4c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__73_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__73_open_file,
        mod_consts.const_str_plain_open_file,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dbabef6a2e30b332aecacb65ed792aed,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__74_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__74_open_file,
        mod_consts.const_str_plain_open_file,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aa5a88015bff4b24ebd69bd999c68199,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__75_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__75_open_file,
        mod_consts.const_str_plain_open_file,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dc982956b3151f32c241d3a7fec8a1db,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__76_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__76_open_file,
        mod_consts.const_str_plain_open_file,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bcbe6d245e043de04cd9383c3256afae,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__77_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__77_open_file,
        mod_consts.const_str_plain_open_file,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_72241ad0b2ab603db8d7f0eb62c7c592,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__78_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__78_open_file,
        mod_consts.const_str_plain_open_file,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5c3b3421061335a2845e47bbc602bd79,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__79_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__79_open_file,
        mod_consts.const_str_plain_open_file,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6cf1c06234175b4fb813a85331fb3a88,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__80_open_file(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__80_open_file,
        mod_consts.const_str_plain_open_file,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f392a0a860d91c9131368a0fd21d5637,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        mod_consts.const_str_digest_b771d2677360f365f1fa0ac32dd6bccb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__81_wrap_file(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__81_wrap_file,
        mod_consts.const_str_plain_wrap_file,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5534711cab94baf120341c8c9e852af9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
        mod_consts.const_str_digest_3ae73da5bd9d2f0edf1ac2084a801a06,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_file_io$$$function__81_wrap_file$$$function__1_has(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_file_io$$$function__81_wrap_file$$$function__1_has,
        mod_consts.const_str_plain_has,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2d178295d984964b4303ec9f79539907,
#endif
        code_objects_39d3696c00b2e31dec4f2d2953faecab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_file_io,
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

static function_impl_code const function_table_trio$_file_io[] = {
impl_trio$_file_io$$$function__36___getattr__$$$function__1_wrapper,
impl_trio$_file_io$$$function__81_wrap_file$$$function__1_has,
impl_trio$_file_io$$$function__34___init__,
impl_trio$_file_io$$$function__35_wrapped,
impl_trio$_file_io$$$function__36___getattr__,
impl_trio$_file_io$$$function__37___dir__,
impl_trio$_file_io$$$function__38___aiter__,
impl_trio$_file_io$$$function__39___anext__,
impl_trio$_file_io$$$function__40_detach,
impl_trio$_file_io$$$function__41_aclose,
impl_trio$_file_io$$$function__59_flush,
impl_trio$_file_io$$$function__60_read,
impl_trio$_file_io$$$function__61_read1,
impl_trio$_file_io$$$function__62_readall,
impl_trio$_file_io$$$function__63_readinto,
impl_trio$_file_io$$$function__64_readline,
impl_trio$_file_io$$$function__65_readlines,
impl_trio$_file_io$$$function__66_seek,
impl_trio$_file_io$$$function__67_tell,
impl_trio$_file_io$$$function__68_truncate,
impl_trio$_file_io$$$function__69_write,
impl_trio$_file_io$$$function__70_writelines,
impl_trio$_file_io$$$function__71_readinto1,
impl_trio$_file_io$$$function__72_peek,
impl_trio$_file_io$$$function__73_open_file,
impl_trio$_file_io$$$function__74_open_file,
impl_trio$_file_io$$$function__75_open_file,
impl_trio$_file_io$$$function__76_open_file,
impl_trio$_file_io$$$function__77_open_file,
impl_trio$_file_io$$$function__78_open_file,
impl_trio$_file_io$$$function__79_open_file,
impl_trio$_file_io$$$function__80_open_file,
impl_trio$_file_io$$$function__81_wrap_file,
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

    return Nuitka_Function_GetFunctionState(function, function_table_trio$_file_io);
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
        module_trio$_file_io,
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
        function_table_trio$_file_io,
        sizeof(function_table_trio$_file_io) / sizeof(function_impl_code)
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
static char const *module_full_name = "trio._file_io";
#endif

// Internal entry point for module code.
PyObject *module_code_trio$_file_io(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("trio$_file_io");

    // Store the module for future use.
    module_trio$_file_io = module;

    moduledict_trio$_file_io = MODULE_DICT(module_trio$_file_io);

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
        PRINT_STRING("trio$_file_io: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("trio$_file_io: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("trio$_file_io: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._file_io" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittrio$_file_io\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_trio$_file_io,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_trio$_file_io,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_trio$_file_io,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_file_io,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_file_io,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_trio$_file_io);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_trio$_file_io);
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

        UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_34__bases = NULL;
PyObject *tmp_class_container$class_creation_34__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_34__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_34__metaclass = NULL;
PyObject *tmp_class_container$class_creation_34__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_file_io;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_trio$_file_io$$$class__34_AsyncIOWrapper_219 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_trio$_file_io = MAKE_MODULE_FRAME(code_objects_dcca848465dad99537a3ee8a6f749c49, module_trio$_file_io);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_file_io);
assert(Py_REFCNT(frame_frame_trio$_file_io) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_trio$_file_io$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_trio$_file_io$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_trio$_file_io;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Callable_str_plain_Iterable_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_trio$_file_io->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

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
        (PyObject *)moduledict_trio$_file_io,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_8);
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
        (PyObject *)moduledict_trio$_file_io,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_9);
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
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_partial, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_11 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_11);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_trio$_file_io,
        mod_consts.const_str_plain_IO,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_IO);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_IO, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = Py_False;
UPDATE_STRING_DICT0(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_trio$_file_io,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_trio$_file_io,
        mod_consts.const_str_plain_AnyStr,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_AnyStr);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyStr, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_trio$_file_io,
        mod_consts.const_str_plain_BinaryIO,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_BinaryIO);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_BinaryIO, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_trio$_file_io,
        mod_consts.const_str_plain_Generic,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Generic);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_trio$_file_io,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_trio$_file_io,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_trio$_file_io,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_trio$_file_io,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_21);
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
PyObject *tmp_assign_source_22;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_trio;
tmp_globals_arg_value_2 = (PyObject *)moduledict_trio$_file_io;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_trio$_file_io->m_frame.f_lineno = 19;
tmp_assign_source_22 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_trio, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__util;
tmp_globals_arg_value_3 = (PyObject *)moduledict_trio$_file_io;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_async_wraps_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_trio$_file_io->m_frame.f_lineno = 21;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_trio$_file_io,
        mod_consts.const_str_plain_async_wraps,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_async_wraps);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_async_wraps, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_4 = (PyObject *)moduledict_trio$_file_io;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_AsyncResource_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_trio$_file_io->m_frame.f_lineno = 22;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_trio$_file_io,
        mod_consts.const_str_plain_AsyncResource,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_AsyncResource);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncResource, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = PySet_New(mod_consts.const_set_501cf42bd626b7bdecfa73d8415a6654);
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain__FILE_SYNC_ATTRS, tmp_assign_source_25);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414;
tmp_ass_subscribed_1 = module_var_accessor_trio$_file_io$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__FILE_SYNC_ATTRS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = PySet_New(mod_consts.const_set_20bbd2fd34dd9341d2d775db2c3d2545);
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain__FILE_ASYNC_METHODS, tmp_assign_source_26);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_6cce459256b974cf0cc7e3025d9ab414;
tmp_ass_subscribed_2 = module_var_accessor_trio$_file_io$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain__FILE_ASYNC_METHODS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_trio$_file_io$TypeVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;

    goto frame_exception_exit_1;
}
frame_frame_trio$_file_io->m_frame.f_lineno = 78;
tmp_assign_source_27 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_FileT_tuple);

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_FileT, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_trio$_file_io$TypeVar(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;

    goto frame_exception_exit_1;
}
frame_frame_trio$_file_io->m_frame.f_lineno = 79;
tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_FileT_co_true_tuple, 0), mod_consts.const_tuple_str_plain_covariant_tuple);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_FileT_co, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_trio$_file_io$TypeVar(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;

    goto frame_exception_exit_1;
}
frame_frame_trio$_file_io->m_frame.f_lineno = 80;
tmp_assign_source_29 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_T_tuple);

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_T, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_trio$_file_io$TypeVar(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto frame_exception_exit_1;
}
frame_frame_trio$_file_io->m_frame.f_lineno = 81;
tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_T_co_true_tuple, 0), mod_consts.const_tuple_str_plain_covariant_tuple);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_T_co, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_trio$_file_io$TypeVar(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto frame_exception_exit_1;
}
frame_frame_trio$_file_io->m_frame.f_lineno = 82;
tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_T_contra_true_tuple, 0), mod_consts.const_tuple_str_plain_contravariant_tuple);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_T_contra, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_6;
tmp_called_value_6 = module_var_accessor_trio$_file_io$TypeVar(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto frame_exception_exit_1;
}
frame_frame_trio$_file_io->m_frame.f_lineno = 83;
tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS3_VECTORCALL(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_AnyStr_co_type_str_type_bytes_true_tuple, 0), mod_consts.const_tuple_str_plain_covariant_tuple);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyStr_co, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_trio$_file_io$TypeVar(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;

    goto frame_exception_exit_1;
}
frame_frame_trio$_file_io->m_frame.f_lineno = 84;
tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3_VECTORCALL(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_AnyStr_contra_type_str_type_bytes_true_tuple, 0), mod_consts.const_tuple_str_plain_contravariant_tuple);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyStr_contra, tmp_assign_source_33);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_trio$_file_io$AsyncResource(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncResource);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;

    goto try_except_handler_3;
}
tmp_assign_source_34 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyTuple_SET_ITEM0(tmp_assign_source_34, 0, tmp_tuple_element_1);
tmp_expression_value_1 = module_var_accessor_trio$_file_io$Generic(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;

    goto tuple_build_exception_1;
}
tmp_subscript_value_1 = module_var_accessor_trio$_file_io$FileT_co(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileT_co);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_34, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_34);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
assert(tmp_class_container$class_creation_34__bases_orig == NULL);
tmp_class_container$class_creation_34__bases_orig = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_34__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_34__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_35 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_34__bases == NULL);
tmp_class_container$class_creation_34__bases = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_34__class_decl_dict == NULL);
tmp_class_container$class_creation_34__class_decl_dict = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_34__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_34__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_3;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_34__bases);
tmp_expression_value_2 = tmp_class_container$class_creation_34__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_34__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_34__bases;
tmp_assign_source_37 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_34__metaclass == NULL);
tmp_class_container$class_creation_34__metaclass = tmp_assign_source_37;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_34__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_34__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_3;
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
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_34__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_34__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_AsyncIOWrapper;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_34__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_34__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_34__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_34__class_decl_dict;
frame_frame_trio$_file_io->m_frame.f_lineno = 219;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_34__prepared == NULL);
tmp_class_container$class_creation_34__prepared = tmp_assign_source_38;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_34__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_34__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_3;
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
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_34__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_34__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_3;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_34__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_34__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_3;
}
frame_frame_trio$_file_io->m_frame.f_lineno = 219;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 219;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_34__prepared == NULL);
tmp_class_container$class_creation_34__prepared = tmp_assign_source_39;
}
branch_end_1:;
{
PyObject *tmp_assign_source_40;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_34__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_34__prepared;
locals_trio$_file_io$$$class__34_AsyncIOWrapper_219 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1ac8c021b7eaf2899e00c0ff9e88067c;
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_eefc33378c0e1a762ccd6e47e76e2736;
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncIOWrapper;
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_219;
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_5;
}
frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2 = MAKE_CLASS_FRAME(tstate, code_objects_5ab1fab56b48234c4f6fad267613edb3, module_trio$_file_io, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2);
assert(Py_REFCNT(frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_1b9cbeaccc1807184eb55949c8e3c079);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__34___init__(tstate, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_2;
tmp_called_value_9 = PyObject_GetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_73f8f37169c66d0745b40cba9484ecb9);

tmp_args_element_value_1 = MAKE_FUNCTION_trio$_file_io$$$function__35_wrapped(tstate, tmp_annotations_2);

frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2->m_frame.f_lineno = 231;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_wrapped, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
tmp_operand_value_2 = PyObject_GetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_TYPE_CHECKING);

if (tmp_operand_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_operand_value_2 = Py_False;
        Py_INCREF(tmp_operand_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_8271e73c4a6040cc972a26685a9da683);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__36___getattr__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain___getattr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
branch_no_3:;
{
PyObject *tmp_annotations_4;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_7b0b14f07dd9e3f589f8cbb0250d5df5);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__37___dir__(tstate, tmp_annotations_4, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain___dir__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_7f33c8e4848a631bf7775d60bd3650c0);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__38___aiter__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain___aiter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_5b86967d9487fdd831b29e3d28e8d30f);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__39___anext__(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain___anext__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_691106ab922b890305b2d15ed0bae3e1);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__40_detach(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_detach, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_86ee4a3b0c61d17877adc7fa84618dd6);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__41_aclose(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_aclose, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_locals_lookup_value_1;
int tmp_truth_name_2;
tmp_locals_lookup_value_1 = PyObject_GetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_TYPE_CHECKING);

if (tmp_locals_lookup_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_locals_lookup_value_1 = Py_False;
        Py_INCREF(tmp_locals_lookup_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_truth_name_2 = CHECK_IF_TRUE(tmp_locals_lookup_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_locals_lookup_value_1);

exception_lineno = 6;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_locals_lookup_value_1);
Py_DECREF(tmp_locals_lookup_value_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_9;
tmp_called_value_10 = PyObject_GetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_property);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_c4b755eb9f234cec22d0b626e471fee8);

tmp_args_element_value_2 = MAKE_FUNCTION_trio$_file_io$$$function__42_closed(tstate, tmp_annotations_9);

frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2->m_frame.f_lineno = 303;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_closed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_10;
tmp_called_value_11 = PyObject_GetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_property);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_f7d52618c96c3285ca1aa760695850f8);

tmp_args_element_value_3 = MAKE_FUNCTION_trio$_file_io$$$function__43_encoding(tstate, tmp_annotations_10);

frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2->m_frame.f_lineno = 305;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, const_str_plain_encoding, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_11;
tmp_called_value_12 = PyObject_GetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_property);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_e81715103b859089b01f4e5df256fe92);

tmp_args_element_value_4 = MAKE_FUNCTION_trio$_file_io$$$function__44_errors(tstate, tmp_annotations_11);

frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2->m_frame.f_lineno = 307;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_errors, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_12;
tmp_called_value_13 = PyObject_GetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_property);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_19cf776d530b7748819d37679f98926f);

tmp_args_element_value_5 = MAKE_FUNCTION_trio$_file_io$$$function__45_newlines(tstate, tmp_annotations_12);

frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2->m_frame.f_lineno = 309;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_newlines, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_13;
tmp_called_value_14 = PyObject_GetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_property);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_1a8bba9ec752a2e0dde38b88caafc549);

tmp_args_element_value_6 = MAKE_FUNCTION_trio$_file_io$$$function__46_buffer(tstate, tmp_annotations_13);

frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2->m_frame.f_lineno = 311;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_buffer, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_14;
tmp_called_value_15 = PyObject_GetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_property);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_f77b48065b142eb518118b32c3f8edff);

tmp_args_element_value_7 = MAKE_FUNCTION_trio$_file_io$$$function__47_raw(tstate, tmp_annotations_14);

frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2->m_frame.f_lineno = 313;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_raw, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_15;
tmp_called_value_16 = PyObject_GetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_property);

if (tmp_called_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_16 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_a4b2e279d8c80ebecf2fe2baeb50a6a3);

tmp_args_element_value_8 = MAKE_FUNCTION_trio$_file_io$$$function__48_line_buffering(tstate, tmp_annotations_15);

frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2->m_frame.f_lineno = 315;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, const_str_plain_line_buffering, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_16;
tmp_called_value_17 = PyObject_GetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_property);

if (tmp_called_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_17 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_bda3edaf67c60fa70b1dd7bee6b15eb2);

tmp_args_element_value_9 = MAKE_FUNCTION_trio$_file_io$$$function__49_closefd(tstate, tmp_annotations_16);

frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2->m_frame.f_lineno = 317;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_closefd, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_17;
tmp_called_value_18 = PyObject_GetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_property);

if (tmp_called_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_18 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_bbe15016395fe3b3161d8096a20a3624);

tmp_args_element_value_10 = MAKE_FUNCTION_trio$_file_io$$$function__50_name(tstate, tmp_annotations_17);

frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2->m_frame.f_lineno = 319;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, const_str_plain_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_11;
PyObject *tmp_annotations_18;
tmp_called_value_19 = PyObject_GetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_property);

if (tmp_called_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_19 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_42750a4787e83b7f12dfe1d7cd1b6b23);

tmp_args_element_value_11 = MAKE_FUNCTION_trio$_file_io$$$function__51_mode(tstate, tmp_annotations_18);

frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2->m_frame.f_lineno = 321;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_mode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_90d8e25d05a8a9343c152931318852c7);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__52_fileno(tstate, tmp_annotations_19);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, const_str_plain_fileno, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_6ca56870f679dc1bcee004aa7f032e00);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__53_isatty(tstate, tmp_annotations_20);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_isatty, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_f93d461a715a3123143fb1ae7f110c80);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__54_readable(tstate, tmp_annotations_21);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_readable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_4e8c9efe9ab54321fa769a384f7cf76c);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__55_seekable(tstate, tmp_annotations_22);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_seekable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_6545510939c0a83c353f3de9e8244834);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__56_writable(tstate, tmp_annotations_23);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_writable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_49dac535b595b8820441046390221544);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__57_getvalue(tstate, tmp_annotations_24);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_getvalue, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_870997f1fb6997c740b8c301852ce1ba);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__58_getbuffer(tstate, tmp_annotations_25);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_getbuffer, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_26;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_fb531533de0fce63940b54fe064354f3);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__59_flush(tstate, tmp_annotations_26);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_flush, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_27;
tmp_defaults_1 = mod_consts.const_tuple_int_neg_1_tuple;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_9620570548dc7c3c7e8415861a73adae);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__60_read(tstate, tmp_defaults_1, tmp_annotations_27);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, const_str_plain_read, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_28;
tmp_defaults_2 = mod_consts.const_tuple_int_neg_1_tuple;
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_6b6d36e8fcaa94dd7d816f4560e0cdb7);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__61_read1(tstate, tmp_defaults_2, tmp_annotations_28);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_read1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_29;
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_ef750f18945f4ab1e7c50fd310d4f011);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__62_readall(tstate, tmp_annotations_29);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_readall, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_30;
tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_d520b50a479c201de89bea6863095324);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__63_readinto(tstate, tmp_annotations_30);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_readinto, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_31;
tmp_defaults_3 = mod_consts.const_tuple_int_neg_1_tuple;
tmp_annotations_31 = DICT_COPY(tstate, mod_consts.const_dict_2d58bc60be887ff4a73c16529ceebb43);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__64_readline(tstate, tmp_defaults_3, tmp_annotations_31);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_readline, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_32;
tmp_annotations_32 = DICT_COPY(tstate, mod_consts.const_dict_2b3f94a3ca1d2e0604170c865b3dae3e);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__65_readlines(tstate, tmp_annotations_32);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_readlines, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_33;
tmp_defaults_4 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_33 = DICT_COPY(tstate, mod_consts.const_dict_d3098f85ea6949c89914d7ce6113b088);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__66_seek(tstate, tmp_defaults_4, tmp_annotations_33);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_seek, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_34;
tmp_annotations_34 = DICT_COPY(tstate, mod_consts.const_dict_e4c9953f7e20da911bee2ebf23a617a1);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__67_tell(tstate, tmp_annotations_34);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_tell, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_35;
tmp_defaults_5 = mod_consts.const_tuple_none_tuple;
tmp_annotations_35 = DICT_COPY(tstate, mod_consts.const_dict_c7900c25d085926921884c07e03b12a9);
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__68_truncate(tstate, tmp_defaults_5, tmp_annotations_35);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_truncate, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_36;
tmp_annotations_36 = DICT_COPY(tstate, mod_consts.const_dict_22c4c9a623826361bbdc728c69d7d0af);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__69_write(tstate, tmp_annotations_36);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_write, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_37;
tmp_annotations_37 = DICT_COPY(tstate, mod_consts.const_dict_aadfd158d7441ca884b6f9fd5c701740);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__70_writelines(tstate, tmp_annotations_37);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_writelines, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_38;
tmp_annotations_38 = DICT_COPY(tstate, mod_consts.const_dict_dda10a52883d6345b20ec8d2b83e5a5f);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__71_readinto1(tstate, tmp_annotations_38);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_readinto1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_6;
PyObject *tmp_annotations_39;
tmp_defaults_6 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_39 = DICT_COPY(tstate, mod_consts.const_dict_f0d76ccfec79dc386132678d800e03ba);
Py_INCREF(tmp_defaults_6);

tmp_dictset_value = MAKE_FUNCTION_trio$_file_io$$$function__72_peek(tstate, tmp_defaults_6, tmp_annotations_39);

tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain_peek, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
branch_no_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_trio$_file_io$$$class__34_AsyncIOWrapper_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__wrapped_tuple;
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_5;
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_34__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_34__bases;
CHECK_OBJECT(tmp_class_container$class_creation_34__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_34__bases_orig;
tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_5;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(tmp_class_container$class_creation_34__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_34__bases_orig;
tmp_res = PyObject_SetItem(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_5;
}
branch_no_5:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_20;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_34__metaclass);
tmp_called_value_20 = tmp_class_container$class_creation_34__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_AsyncIOWrapper;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_34__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_34__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_trio$_file_io$$$class__34_AsyncIOWrapper_219;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_34__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_34__class_decl_dict;
frame_frame_trio$_file_io->m_frame.f_lineno = 219;
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;

    goto try_except_handler_5;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_41);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_40 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_40);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219);
locals_trio$_file_io$$$class__34_AsyncIOWrapper_219 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_file_io$$$class__34_AsyncIOWrapper_219);
locals_trio$_file_io$$$class__34_AsyncIOWrapper_219 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 219;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIOWrapper, tmp_assign_source_40);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_34__bases_orig);
tmp_class_container$class_creation_34__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_34__bases);
tmp_class_container$class_creation_34__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_34__class_decl_dict);
tmp_class_container$class_creation_34__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_34__metaclass);
tmp_class_container$class_creation_34__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_34__prepared);
tmp_class_container$class_creation_34__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_34__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_34__bases_orig);
Py_DECREF(tmp_class_container$class_creation_34__bases_orig);
tmp_class_container$class_creation_34__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_34__bases);
CHECK_OBJECT(tmp_class_container$class_creation_34__bases);
Py_DECREF(tmp_class_container$class_creation_34__bases);
tmp_class_container$class_creation_34__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_34__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_34__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_34__class_decl_dict);
tmp_class_container$class_creation_34__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_34__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_34__metaclass);
Py_DECREF(tmp_class_container$class_creation_34__metaclass);
tmp_class_container$class_creation_34__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_34__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_34__prepared);
Py_DECREF(tmp_class_container$class_creation_34__prepared);
tmp_class_container$class_creation_34__prepared = NULL;
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
PyObject *tmp_assign_source_42;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
tmp_expression_value_8 = module_var_accessor_trio$_file_io$Union(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 348;

    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_tuple_str_plain_StrOrBytesPath_type_int_tuple;
tmp_assign_source_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain__OpenFile, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
tmp_expression_value_9 = module_var_accessor_trio$_file_io$Callable(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 349;

    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_type_str_type_int_list_type_int_tuple, "li");
tmp_assign_source_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain__Opener, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_12;
PyObject *tmp_defaults_7;
PyObject *tmp_annotations_40;
tmp_called_value_21 = module_var_accessor_trio$_file_io$overload(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;

    goto frame_exception_exit_1;
}
tmp_defaults_7 = mod_consts.const_tuple_str_plain_r_int_neg_1_none_none_none_true_none_tuple;
tmp_annotations_40 = DICT_COPY(tstate, mod_consts.const_dict_5251a2962e905878e35b94b04de1f7af);
Py_INCREF(tmp_defaults_7);

tmp_args_element_value_12 = MAKE_FUNCTION_trio$_file_io$$$function__73_open_file(tstate, tmp_defaults_7, tmp_annotations_40);

frame_frame_trio$_file_io->m_frame.f_lineno = 352;
tmp_assign_source_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_open_file, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_13;
PyObject *tmp_defaults_8;
PyObject *tmp_annotations_41;
tmp_called_value_22 = module_var_accessor_trio$_file_io$overload(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 365;

    goto frame_exception_exit_1;
}
tmp_defaults_8 = mod_consts.const_tuple_none_none_none_true_none_tuple;
tmp_annotations_41 = DICT_COPY(tstate, mod_consts.const_dict_f47b5549ec314074ea9f7e9498ca6805);
Py_INCREF(tmp_defaults_8);

tmp_args_element_value_13 = MAKE_FUNCTION_trio$_file_io$$$function__74_open_file(tstate, tmp_defaults_8, tmp_annotations_41);

frame_frame_trio$_file_io->m_frame.f_lineno = 365;
tmp_assign_source_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_open_file, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_14;
PyObject *tmp_defaults_9;
PyObject *tmp_annotations_42;
tmp_called_value_23 = module_var_accessor_trio$_file_io$overload(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;

    goto frame_exception_exit_1;
}
tmp_defaults_9 = mod_consts.const_tuple_int_neg_1_none_none_none_true_none_tuple;
tmp_annotations_42 = DICT_COPY(tstate, mod_consts.const_dict_90d05243d2fe59f62330e3464b538f09);
Py_INCREF(tmp_defaults_9);

tmp_args_element_value_14 = MAKE_FUNCTION_trio$_file_io$$$function__75_open_file(tstate, tmp_defaults_9, tmp_annotations_42);

frame_frame_trio$_file_io->m_frame.f_lineno = 378;
tmp_assign_source_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_14);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_open_file, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_15;
PyObject *tmp_defaults_10;
PyObject *tmp_annotations_43;
tmp_called_value_24 = module_var_accessor_trio$_file_io$overload(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 391;

    goto frame_exception_exit_1;
}
tmp_defaults_10 = mod_consts.const_tuple_int_neg_1_none_none_none_true_none_tuple;
tmp_annotations_43 = DICT_COPY(tstate, mod_consts.const_dict_4c7b3d5842b60be773f51592a53c7f8c);
Py_INCREF(tmp_defaults_10);

tmp_args_element_value_15 = MAKE_FUNCTION_trio$_file_io$$$function__76_open_file(tstate, tmp_defaults_10, tmp_annotations_43);

frame_frame_trio$_file_io->m_frame.f_lineno = 391;
tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_15);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_open_file, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_16;
PyObject *tmp_defaults_11;
PyObject *tmp_annotations_44;
tmp_called_value_25 = module_var_accessor_trio$_file_io$overload(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 404;

    goto frame_exception_exit_1;
}
tmp_defaults_11 = mod_consts.const_tuple_int_neg_1_none_none_none_true_none_tuple;
tmp_annotations_44 = DICT_COPY(tstate, mod_consts.const_dict_b97e3bd9c2169bb2a6199043bfb80ca5);
Py_INCREF(tmp_defaults_11);

tmp_args_element_value_16 = MAKE_FUNCTION_trio$_file_io$$$function__77_open_file(tstate, tmp_defaults_11, tmp_annotations_44);

frame_frame_trio$_file_io->m_frame.f_lineno = 404;
tmp_assign_source_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_16);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_open_file, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_17;
PyObject *tmp_defaults_12;
PyObject *tmp_annotations_45;
tmp_called_value_26 = module_var_accessor_trio$_file_io$overload(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 417;

    goto frame_exception_exit_1;
}
tmp_defaults_12 = mod_consts.const_tuple_none_none_none_true_none_tuple;
tmp_annotations_45 = DICT_COPY(tstate, mod_consts.const_dict_faed8fa31469e7968315bcc60c2854e5);
Py_INCREF(tmp_defaults_12);

tmp_args_element_value_17 = MAKE_FUNCTION_trio$_file_io$$$function__78_open_file(tstate, tmp_defaults_12, tmp_annotations_45);

frame_frame_trio$_file_io->m_frame.f_lineno = 417;
tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_17);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_open_file, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_18;
PyObject *tmp_defaults_13;
PyObject *tmp_annotations_46;
tmp_called_value_27 = module_var_accessor_trio$_file_io$overload(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 430;

    goto frame_exception_exit_1;
}
tmp_defaults_13 = mod_consts.const_tuple_int_neg_1_none_none_none_true_none_tuple;
tmp_annotations_46 = DICT_COPY(tstate, mod_consts.const_dict_e0a782ab234668c3e06b52c8c98bee99);
Py_INCREF(tmp_defaults_13);

tmp_args_element_value_18 = MAKE_FUNCTION_trio$_file_io$$$function__79_open_file(tstate, tmp_defaults_13, tmp_annotations_46);

frame_frame_trio$_file_io->m_frame.f_lineno = 430;
tmp_assign_source_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_open_file, tmp_assign_source_50);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_file_io, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_file_io->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_file_io, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_trio$_file_io);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_defaults_14;
PyObject *tmp_annotations_47;
tmp_defaults_14 = mod_consts.const_tuple_str_plain_r_int_neg_1_none_none_none_true_none_tuple;
tmp_annotations_47 = DICT_COPY(tstate, mod_consts.const_dict_4f702a2184832e6dea60ff2706cce871);
Py_INCREF(tmp_defaults_14);

tmp_assign_source_51 = MAKE_FUNCTION_trio$_file_io$$$function__80_open_file(tstate, tmp_defaults_14, tmp_annotations_47);

UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_open_file, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_annotations_48;
tmp_annotations_48 = DICT_COPY(tstate, mod_consts.const_dict_3a7ba29cbb219ecd5eb282c0831e4d12);

tmp_assign_source_52 = MAKE_FUNCTION_trio$_file_io$$$function__81_wrap_file(tstate, tmp_annotations_48);

UPDATE_STRING_DICT1(moduledict_trio$_file_io, (Nuitka_StringObject *)mod_consts.const_str_plain_wrap_file, tmp_assign_source_52);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("trio$_file_io", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._file_io" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_trio$_file_io);
    return module_trio$_file_io;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_file_io, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("trio$_file_io", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

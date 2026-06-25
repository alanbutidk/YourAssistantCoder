/* Generated code for Python module 'trio$_util'
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



/* The "module_trio$_util" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_trio$_util;
PyDictObject *moduledict_trio$_util;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_signal;
PyObject *const_str_plain_SIGINT;
PyObject *const_str_plain_getsignal;
PyObject *const_tuple_type_TypeError_type_ValueError_tuple;
PyObject *const_str_digest_ec29ced88b0e2b3c724ef2268704fd36;
PyObject *const_dict_f768e04b357eb72619791362b463eb31;
PyObject *const_str_plain__return_value_looks_like_wrong_library;
PyObject *const_str_digest_e5c77b3065222a3433e12368998d1ac2;
PyObject *const_str_plain_sniffio_loop;
PyObject *const_str_plain_trio;
PyObject *const_str_plain_collections;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_Coroutine;
PyObject *const_str_digest_5866c63025e855a4ee40995ee6d94620;
PyObject *const_str_digest_591a7c78c4298146bd47013382250e31;
PyObject *const_str_digest_07f588e935eff2012e4af40e65385cdd;
PyObject *const_str_digest_480657eaa0027d51f380a144c4ea5ee9;
PyObject *const_str_digest_815fd9a57351b35bbc91f04d63cc08ea;
PyObject *const_str_digest_8198da0957f728c9425acfd7729d8721;
PyObject *const_str_digest_57a1a3cebf7739348da4a27b1754b6e2;
PyObject *const_str_digest_fcc568de88f9d0f701b47fad394b29d2;
PyObject *const_str_digest_4a66ca05e2da69c5314f781d9a6c8076;
PyObject *const_str_plain_isasyncgen;
PyObject *const_str_digest_bfd2b549ea23d7e7ff878426c98b1e20;
PyObject *const_str_digest_9b829752be50ce0472fa6cf68e373a04;
PyObject *const_str_plain___qualname__;
PyObject *const_str_plain_Generator;
PyObject *const_str_plain__asyncio_future_blocking;
PyObject *const_tuple_str_plain_Future_str_plain_Deferred_tuple;
PyObject *const_str_plain__msg;
PyObject *const_str_plain__held;
PyObject *const_str_plain_BusyResourceError;
PyObject *const_dict_945e9ca62b3392dd3a2536f5a564d566;
PyObject *const_str_plain_decorator;
PyObject *const_str_digest_7b945505522e27e10a1e94e5c6d4270c;
PyObject *const_str_digest_01ade0fb416704e17c997d176d986c04;
PyObject *const_str_plain_attr_name;
PyObject *const_str_plain_cls;
PyObject *const_str_digest_ca592484a01baca8aa63e5047ccbc358;
PyObject *const_str_plain_wrapped_cls;
PyObject *const_str_digest_80d2e709b58160fe26db43448162c9d3;
PyObject *const_dict_7a6d2147ee5867c1cb821e0f1574de2a;
PyObject *const_str_plain_fix_one;
PyObject *const_str_digest_e5738f625dfb5e9dadbf68e2f412c8de;
PyObject *const_str_plain_items;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_underscore_tuple;
PyObject *const_str_plain_seen_ids;
PyObject *const_str_plain_add;
PyObject *const_tuple_str_digest_ff178d8f6f5736e788347f0add0e2e87_tuple;
PyObject *const_str_plain_module_name;
PyObject *const_str_plain_objname;
PyObject *const_str_digest_3c68dddf951e43439765f1df5ad362f1;
PyObject *const_str_digest_2555ea9765a1494807c86869eeaf41a1;
PyObject *const_str_plain__init_final_cls;
PyObject *const_str_plain___init_subclass__;
PyObject *const_str_plain_std_final;
PyObject *const_str_digest_464060e3b29a97018baa806bccb35f7f;
PyObject *const_str_digest_5872a6850b56bdc44bc8c6acbf75208c;
PyObject *const_str_plain___call__;
PyObject *const_str_plain_ag_code;
PyObject *const_str_plain_ag_frame;
PyObject *const_str_plain_f_globals;
PyObject *const_tuple_type_AttributeError_type_KeyError_tuple;
PyObject *const_str_chr_60;
PyObject *const_str_plain_co_filename;
PyObject *const_str_chr_62;
PyObject *const_str_plain_co_name;
PyObject *const_str_digest_60432f965effd11ed1dbd37594b24a87;
PyObject *const_str_plain___context__;
PyObject *const_str_digest_4a48b7c58d7d76c614232b93546deab0;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_type_KeyboardInterrupt_type_SystemExit_tuple;
PyObject *const_str_plain_Cancelled;
PyObject *const_str_plain_cancelled_exception;
PyObject *const_str_plain_noncancelled_exception;
PyObject *const_str_plain_MultipleExceptionError;
PyObject *const_tuple_str_digest_be74853d348ac0fea3f097798e39f007_tuple;
PyObject *const_str_plain_raise_saving_context;
PyObject *const_str_digest_f3d9a87da6c271f1fd8784aa3b4ce333;
PyObject *const_str_digest_a493d99f494756df2f735fe86b7fd6fa;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_ABCMeta_tuple;
PyObject *const_str_plain_ABCMeta;
PyObject *const_tuple_str_plain_Awaitable_str_plain_Callable_str_plain_Sequence_tuple;
PyObject *const_str_plain_Awaitable;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_NoReturn;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_final;
PyObject *const_str_plain_sniffio;
PyObject *const_tuple_str_plain_thread_local_tuple;
PyObject *const_str_plain_thread_local;
PyObject *const_tuple_str_plain_CallT_tuple;
PyObject *const_tuple_str_plain_bound_tuple;
PyObject *const_str_plain_CallT;
PyObject *const_tuple_str_plain_T_tuple;
PyObject *const_str_plain_T;
PyObject *const_tuple_str_plain_RetT_tuple;
PyObject *const_str_plain_RetT;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_plain_is_main_thread;
PyObject *const_dict_9f940051428728f232b4fd2b5b3767e0;
PyObject *const_str_plain_coroutine_or_error;
PyObject *const_str_digest_be1a163f204243de52303d4f3810208b;
PyObject *const_str_digest_8ec1d50d2afd3a615d3028e502cc91d9;
PyObject *const_str_plain_ConflictDetector;
PyObject *const_int_pos_148;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_60ba6036b612bbdfbcc954e4cab691f2;
PyObject *const_str_digest_e7963d5c54b81bf6e04b095dfa729b21;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_8ec74d13036fb4d15b8b19bca49521d0;
PyObject *const_dict_fe1ed8e2cb510605785a9bb17cc90b19;
PyObject *const_str_digest_7b7d2e132de99c746c92d4c2ebda833b;
PyObject *const_tuple_str_plain__msg_str_plain__held_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_dict_73f5617bc625fbdc6052dec0fb4ec09d;
PyObject *const_str_plain_async_wraps;
PyObject *const_dict_61a2f55f39dad0599daaab45957b6c25;
PyObject *const_str_plain_fixup_module_metadata;
PyObject *const_dict_c881d4a2faef2f4b232713b62454afe1;
PyObject *const_dict_3b80c2542a8cdf76453bbd3c10e25f15;
PyObject *const_str_plain__final_impl;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_NoPublicConstructor;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_af976452c0e212c8c6c50ec8953473e8;
PyObject *const_int_pos_265;
PyObject *const_dict_cad367eb468d8450c68e263ec2a7a8eb;
PyObject *const_str_digest_03ca47b4761e42958ad2847158a72470;
PyObject *const_dict_412dca0b2673176d63ae9231ff7fdb04;
PyObject *const_str_plain__create;
PyObject *const_str_digest_dc70cc921d48d9af4b3be41824b9cbe8;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_306a24b12f8a44cffce6be53c8476f26;
PyObject *const_str_plain_name_asyncgen;
PyObject *const_str_plain_wraps;
PyObject *const_dict_5a8929cd1ac122904afcd834fdb2d9f8;
PyObject *const_tuple_type_Exception_tuple;
PyObject *const_str_digest_f2f6c193ed8d65152ba1a2c0d635f9c8;
PyObject *const_int_pos_338;
PyObject *const_dict_334ba49270989215c9fb93eea6fe72ce;
PyObject *const_str_plain_raise_single_exception_from_group;
PyObject *const_str_digest_72db9eaa8e5bb4fc2527175beec0c5eb;
PyObject *const_str_digest_b2eedcd95a74154aa56c3ad77020ee9f;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_cls_str_plain_args_str_plain_kwargs_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple;
PyObject *const_tuple_str_plain_self_str_plain_msg_tuple;
PyObject *const_tuple_642c6e046837b34bd42add7d36af734f_tuple;
PyObject *const_tuple_str_plain_decorated_tuple;
PyObject *const_tuple_str_plain_cls_tuple;
PyObject *const_tuple_str_plain_value_tuple;
PyObject *const_tuple_e101e8120d2453a58e65b95168562500_tuple;
PyObject *const_tuple_ba4d35413b91cb231d15ae76035c6112_tuple;
PyObject *const_tuple_75c993c8779577ed5fdf276e1c9358f0_tuple;
PyObject *const_tuple_str_plain_attr_name_str_plain_cls_str_plain_wrapped_cls_tuple;
PyObject *const_tuple_f7f5e27581cc688266e21d053ea3f64b_tuple;
PyObject *const_tuple_e6b1ded95463153924b89c33af1e8ea6_tuple;
PyObject *const_tuple_a1ecfbe80be7431446230046cec037b6_tuple;
PyObject *const_tuple_str_plain_agen_str_plain_module_str_plain_qualname_tuple;
PyObject *const_tuple_str_plain_exc_str_plain___tracebackhide___str_plain_context_tuple;
PyObject *const_tuple_62f946a9d11178f55669c726bdb7f9d3_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[173];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("trio._util"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_signal);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_SIGINT);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_getsignal);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_type_ValueError_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_ec29ced88b0e2b3c724ef2268704fd36);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_dict_f768e04b357eb72619791362b463eb31);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__return_value_looks_like_wrong_library);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5c77b3065222a3433e12368998d1ac2);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_sniffio_loop);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_trio);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_collections);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_Coroutine);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_5866c63025e855a4ee40995ee6d94620);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_591a7c78c4298146bd47013382250e31);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_07f588e935eff2012e4af40e65385cdd);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_480657eaa0027d51f380a144c4ea5ee9);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_815fd9a57351b35bbc91f04d63cc08ea);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_8198da0957f728c9425acfd7729d8721);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_57a1a3cebf7739348da4a27b1754b6e2);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_fcc568de88f9d0f701b47fad394b29d2);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a66ca05e2da69c5314f781d9a6c8076);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_isasyncgen);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfd2b549ea23d7e7ff878426c98b1e20);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b829752be50ce0472fa6cf68e373a04);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generator);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__asyncio_future_blocking);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Future_str_plain_Deferred_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__msg);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__held);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_BusyResourceError);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_dict_945e9ca62b3392dd3a2536f5a564d566);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_decorator);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b945505522e27e10a1e94e5c6d4270c);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_01ade0fb416704e17c997d176d986c04);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_attr_name);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_cls);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca592484a01baca8aa63e5047ccbc358);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrapped_cls);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_80d2e709b58160fe26db43448162c9d3);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_dict_7a6d2147ee5867c1cb821e0f1574de2a);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_fix_one);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5738f625dfb5e9dadbf68e2f412c8de);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_seen_ids);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ff178d8f6f5736e788347f0add0e2e87_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_module_name);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_objname);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c68dddf951e43439765f1df5ad362f1);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_2555ea9765a1494807c86869eeaf41a1);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__init_final_cls);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain___init_subclass__);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_std_final);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_464060e3b29a97018baa806bccb35f7f);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_5872a6850b56bdc44bc8c6acbf75208c);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_ag_code);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_ag_frame);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_f_globals);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_type_AttributeError_type_KeyError_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_chr_60);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_co_filename);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_chr_62);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_co_name);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_60432f965effd11ed1dbd37594b24a87);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain___context__);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a48b7c58d7d76c614232b93546deab0);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_type_KeyboardInterrupt_type_SystemExit_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cancelled);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancelled_exception);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_noncancelled_exception);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_MultipleExceptionError);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_be74853d348ac0fea3f097798e39f007_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_raise_saving_context);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3d9a87da6c271f1fd8784aa3b4ce333);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_a493d99f494756df2f735fe86b7fd6fa);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABCMeta_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Awaitable_str_plain_Callable_str_plain_Sequence_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoReturn);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_final);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_sniffio);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_thread_local_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_thread_local);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CallT_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_CallT);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RetT_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_RetT);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_main_thread);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_dict_9f940051428728f232b4fd2b5b3767e0);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_coroutine_or_error);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_be1a163f204243de52303d4f3810208b);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ec1d50d2afd3a615d3028e502cc91d9);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConflictDetector);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_int_pos_148);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_dict_60ba6036b612bbdfbcc954e4cab691f2);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_e7963d5c54b81bf6e04b095dfa729b21);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ec74d13036fb4d15b8b19bca49521d0);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b7d2e132de99c746c92d4c2ebda833b);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__msg_str_plain__held_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_dict_73f5617bc625fbdc6052dec0fb4ec09d);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_wraps);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_dict_61a2f55f39dad0599daaab45957b6c25);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_fixup_module_metadata);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_dict_c881d4a2faef2f4b232713b62454afe1);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_dict_3b80c2542a8cdf76453bbd3c10e25f15);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain__final_impl);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoPublicConstructor);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_af976452c0e212c8c6c50ec8953473e8);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_int_pos_265);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_dict_cad367eb468d8450c68e263ec2a7a8eb);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_03ca47b4761e42958ad2847158a72470);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_dict_412dca0b2673176d63ae9231ff7fdb04);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain__create);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc70cc921d48d9af4b3be41824b9cbe8);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_306a24b12f8a44cffce6be53c8476f26);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_name_asyncgen);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_wraps);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_dict_5a8929cd1ac122904afcd834fdb2d9f8);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2f6c193ed8d65152ba1a2c0d635f9c8);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_int_pos_338);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_dict_334ba49270989215c9fb93eea6fe72ce);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_raise_single_exception_from_group);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_72db9eaa8e5bb4fc2527175beec0c5eb);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_b2eedcd95a74154aa56c3ad77020ee9f);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_args_str_plain_kwargs_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_642c6e046837b34bd42add7d36af734f_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_decorated_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_e101e8120d2453a58e65b95168562500_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_ba4d35413b91cb231d15ae76035c6112_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_75c993c8779577ed5fdf276e1c9358f0_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_attr_name_str_plain_cls_str_plain_wrapped_cls_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_f7f5e27581cc688266e21d053ea3f64b_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_e6b1ded95463153924b89c33af1e8ea6_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_a1ecfbe80be7431446230046cec037b6_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_agen_str_plain_module_str_plain_qualname_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exc_str_plain___tracebackhide___str_plain_context_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_62f946a9d11178f55669c726bdb7f9d3_tuple);
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
void checkModuleConstants_trio$_util(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_signal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signal);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_SIGINT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SIGINT);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_getsignal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getsignal);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_type_ValueError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_TypeError_type_ValueError_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_ec29ced88b0e2b3c724ef2268704fd36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ec29ced88b0e2b3c724ef2268704fd36);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_dict_f768e04b357eb72619791362b463eb31));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f768e04b357eb72619791362b463eb31);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__return_value_looks_like_wrong_library));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__return_value_looks_like_wrong_library);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5c77b3065222a3433e12368998d1ac2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e5c77b3065222a3433e12368998d1ac2);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_sniffio_loop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sniffio_loop);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_trio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trio);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_collections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_collections);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_Coroutine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Coroutine);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_5866c63025e855a4ee40995ee6d94620));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5866c63025e855a4ee40995ee6d94620);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_591a7c78c4298146bd47013382250e31));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_591a7c78c4298146bd47013382250e31);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_07f588e935eff2012e4af40e65385cdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_07f588e935eff2012e4af40e65385cdd);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_480657eaa0027d51f380a144c4ea5ee9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_480657eaa0027d51f380a144c4ea5ee9);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_815fd9a57351b35bbc91f04d63cc08ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_815fd9a57351b35bbc91f04d63cc08ea);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_8198da0957f728c9425acfd7729d8721));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8198da0957f728c9425acfd7729d8721);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_57a1a3cebf7739348da4a27b1754b6e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_57a1a3cebf7739348da4a27b1754b6e2);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_fcc568de88f9d0f701b47fad394b29d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fcc568de88f9d0f701b47fad394b29d2);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a66ca05e2da69c5314f781d9a6c8076));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a66ca05e2da69c5314f781d9a6c8076);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_isasyncgen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isasyncgen);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfd2b549ea23d7e7ff878426c98b1e20));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfd2b549ea23d7e7ff878426c98b1e20);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b829752be50ce0472fa6cf68e373a04));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b829752be50ce0472fa6cf68e373a04);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generator);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__asyncio_future_blocking));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__asyncio_future_blocking);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Future_str_plain_Deferred_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Future_str_plain_Deferred_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__msg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__msg);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__held));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__held);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_BusyResourceError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BusyResourceError);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_dict_945e9ca62b3392dd3a2536f5a564d566));
CHECK_OBJECT_DEEP(mod_consts.const_dict_945e9ca62b3392dd3a2536f5a564d566);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_decorator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decorator);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b945505522e27e10a1e94e5c6d4270c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b945505522e27e10a1e94e5c6d4270c);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_01ade0fb416704e17c997d176d986c04));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_01ade0fb416704e17c997d176d986c04);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_attr_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attr_name);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cls);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca592484a01baca8aa63e5047ccbc358));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca592484a01baca8aa63e5047ccbc358);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrapped_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrapped_cls);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_80d2e709b58160fe26db43448162c9d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80d2e709b58160fe26db43448162c9d3);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_dict_7a6d2147ee5867c1cb821e0f1574de2a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7a6d2147ee5867c1cb821e0f1574de2a);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_fix_one));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fix_one);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5738f625dfb5e9dadbf68e2f412c8de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e5738f625dfb5e9dadbf68e2f412c8de);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_underscore_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_seen_ids));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seen_ids);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ff178d8f6f5736e788347f0add0e2e87_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ff178d8f6f5736e788347f0add0e2e87_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_module_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_module_name);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_objname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_objname);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c68dddf951e43439765f1df5ad362f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c68dddf951e43439765f1df5ad362f1);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_2555ea9765a1494807c86869eeaf41a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2555ea9765a1494807c86869eeaf41a1);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__init_final_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__init_final_cls);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain___init_subclass__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___init_subclass__);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_std_final));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_std_final);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_464060e3b29a97018baa806bccb35f7f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_464060e3b29a97018baa806bccb35f7f);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_5872a6850b56bdc44bc8c6acbf75208c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5872a6850b56bdc44bc8c6acbf75208c);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_ag_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ag_code);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_ag_frame));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ag_frame);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_f_globals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f_globals);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_type_AttributeError_type_KeyError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_AttributeError_type_KeyError_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_chr_60));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_60);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_co_filename));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_co_filename);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_chr_62));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_62);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_co_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_co_name);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_60432f965effd11ed1dbd37594b24a87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60432f965effd11ed1dbd37594b24a87);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain___context__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___context__);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a48b7c58d7d76c614232b93546deab0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a48b7c58d7d76c614232b93546deab0);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_type_KeyboardInterrupt_type_SystemExit_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_KeyboardInterrupt_type_SystemExit_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cancelled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Cancelled);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancelled_exception));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancelled_exception);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_noncancelled_exception));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_noncancelled_exception);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_MultipleExceptionError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MultipleExceptionError);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_be74853d348ac0fea3f097798e39f007_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_be74853d348ac0fea3f097798e39f007_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_raise_saving_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raise_saving_context);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3d9a87da6c271f1fd8784aa3b4ce333));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3d9a87da6c271f1fd8784aa3b4ce333);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_a493d99f494756df2f735fe86b7fd6fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a493d99f494756df2f735fe86b7fd6fa);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABCMeta_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ABCMeta_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABCMeta);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Awaitable_str_plain_Callable_str_plain_Sequence_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Awaitable_str_plain_Callable_str_plain_Sequence_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Awaitable);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoReturn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoReturn);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_final));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_final);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_sniffio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sniffio);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_thread_local_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_thread_local_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_thread_local));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thread_local);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CallT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CallT_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bound_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_CallT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CallT);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_T_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RetT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RetT_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_RetT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RetT);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_main_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_main_thread);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_dict_9f940051428728f232b4fd2b5b3767e0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9f940051428728f232b4fd2b5b3767e0);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_coroutine_or_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_coroutine_or_error);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_be1a163f204243de52303d4f3810208b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be1a163f204243de52303d4f3810208b);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ec1d50d2afd3a615d3028e502cc91d9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ec1d50d2afd3a615d3028e502cc91d9);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConflictDetector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConflictDetector);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_int_pos_148));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_148);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_dict_60ba6036b612bbdfbcc954e4cab691f2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_60ba6036b612bbdfbcc954e4cab691f2);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_e7963d5c54b81bf6e04b095dfa729b21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e7963d5c54b81bf6e04b095dfa729b21);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ec74d13036fb4d15b8b19bca49521d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ec74d13036fb4d15b8b19bca49521d0);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b7d2e132de99c746c92d4c2ebda833b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b7d2e132de99c746c92d4c2ebda833b);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__msg_str_plain__held_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__msg_str_plain__held_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_dict_73f5617bc625fbdc6052dec0fb4ec09d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_73f5617bc625fbdc6052dec0fb4ec09d);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_wraps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_wraps);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_dict_61a2f55f39dad0599daaab45957b6c25));
CHECK_OBJECT_DEEP(mod_consts.const_dict_61a2f55f39dad0599daaab45957b6c25);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_fixup_module_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fixup_module_metadata);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_dict_c881d4a2faef2f4b232713b62454afe1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c881d4a2faef2f4b232713b62454afe1);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_dict_3b80c2542a8cdf76453bbd3c10e25f15));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3b80c2542a8cdf76453bbd3c10e25f15);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain__final_impl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__final_impl);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoPublicConstructor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoPublicConstructor);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_af976452c0e212c8c6c50ec8953473e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af976452c0e212c8c6c50ec8953473e8);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_int_pos_265));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_265);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_dict_cad367eb468d8450c68e263ec2a7a8eb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cad367eb468d8450c68e263ec2a7a8eb);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_03ca47b4761e42958ad2847158a72470));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03ca47b4761e42958ad2847158a72470);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_dict_412dca0b2673176d63ae9231ff7fdb04));
CHECK_OBJECT_DEEP(mod_consts.const_dict_412dca0b2673176d63ae9231ff7fdb04);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain__create));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__create);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc70cc921d48d9af4b3be41824b9cbe8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc70cc921d48d9af4b3be41824b9cbe8);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_306a24b12f8a44cffce6be53c8476f26));
CHECK_OBJECT_DEEP(mod_consts.const_dict_306a24b12f8a44cffce6be53c8476f26);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_name_asyncgen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_name_asyncgen);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_wraps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wraps);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_dict_5a8929cd1ac122904afcd834fdb2d9f8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5a8929cd1ac122904afcd834fdb2d9f8);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_Exception_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2f6c193ed8d65152ba1a2c0d635f9c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f2f6c193ed8d65152ba1a2c0d635f9c8);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_int_pos_338));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_338);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_dict_334ba49270989215c9fb93eea6fe72ce));
CHECK_OBJECT_DEEP(mod_consts.const_dict_334ba49270989215c9fb93eea6fe72ce);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_raise_single_exception_from_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raise_single_exception_from_group);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_72db9eaa8e5bb4fc2527175beec0c5eb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72db9eaa8e5bb4fc2527175beec0c5eb);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_b2eedcd95a74154aa56c3ad77020ee9f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b2eedcd95a74154aa56c3ad77020ee9f);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_args_str_plain_kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_args_str_plain_kwargs_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_642c6e046837b34bd42add7d36af734f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_642c6e046837b34bd42add7d36af734f_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_decorated_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_decorated_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_value_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_e101e8120d2453a58e65b95168562500_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e101e8120d2453a58e65b95168562500_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_ba4d35413b91cb231d15ae76035c6112_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ba4d35413b91cb231d15ae76035c6112_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_75c993c8779577ed5fdf276e1c9358f0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_75c993c8779577ed5fdf276e1c9358f0_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_attr_name_str_plain_cls_str_plain_wrapped_cls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_attr_name_str_plain_cls_str_plain_wrapped_cls_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_f7f5e27581cc688266e21d053ea3f64b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f7f5e27581cc688266e21d053ea3f64b_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_e6b1ded95463153924b89c33af1e8ea6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e6b1ded95463153924b89c33af1e8ea6_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_a1ecfbe80be7431446230046cec037b6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a1ecfbe80be7431446230046cec037b6_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_agen_str_plain_module_str_plain_qualname_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_agen_str_plain_module_str_plain_qualname_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exc_str_plain___tracebackhide___str_plain_context_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exc_str_plain___tracebackhide___str_plain_context_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_62f946a9d11178f55669c726bdb7f9d3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_62f946a9d11178f55669c726bdb7f9d3_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 16
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
static PyObject *module_var_accessor_trio$_util$ABCMeta(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ABCMeta);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ABCMeta, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ABCMeta);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ABCMeta, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$Any(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$Callable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$MultipleExceptionError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipleExceptionError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MultipleExceptionError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MultipleExceptionError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MultipleExceptionError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MultipleExceptionError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipleExceptionError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipleExceptionError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipleExceptionError);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$_final_impl(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain__final_impl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__final_impl);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__final_impl, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__final_impl);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__final_impl, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain__final_impl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain__final_impl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__final_impl);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$_init_final_cls(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain__init_final_cls);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__init_final_cls);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__init_final_cls, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__init_final_cls);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__init_final_cls, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain__init_final_cls);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain__init_final_cls);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__init_final_cls);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$collections(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_collections);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_collections);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_collections);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_collections);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$final(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_final);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_final);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_final, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_final);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_final, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_final);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_final);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_final);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_inspect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_inspect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_inspect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_inspect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$raise_saving_context(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_raise_saving_context);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_raise_saving_context);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_raise_saving_context, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_raise_saving_context);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_raise_saving_context, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_raise_saving_context);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_raise_saving_context);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_raise_saving_context);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$signal(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_signal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_signal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_signal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_signal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_signal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_signal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_signal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_signal);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$sniffio_loop(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_sniffio_loop);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sniffio_loop);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sniffio_loop, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sniffio_loop);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sniffio_loop, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_sniffio_loop);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_sniffio_loop);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_sniffio_loop);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$std_final(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_std_final);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_std_final);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_std_final, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_std_final);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_std_final, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_std_final);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_std_final);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_std_final);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_util$trio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_util->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_4ba5b33a5a2fe6b4326816bed89233b7;
static PyCodeObject *code_objects_082398921f52323999b9f07b70bfac12;
static PyCodeObject *code_objects_fe53e1ca6af86f02c11f901c64f058e9;
static PyCodeObject *code_objects_069b376d5f0cb696f7a0ec730541f50f;
static PyCodeObject *code_objects_59d04b9d0654d112e45c81b267113c4f;
static PyCodeObject *code_objects_7404e184dee19cb9a70f66b500fe8de1;
static PyCodeObject *code_objects_df830c15b3fe39d3b6144e17928d0fc8;
static PyCodeObject *code_objects_18e4baf30119fec19ef6757c4f1cdb0f;
static PyCodeObject *code_objects_2ae5fa21ae644d8f508c5ff27a2370bc;
static PyCodeObject *code_objects_de8cd35c6402fc0219b483c354797bf7;
static PyCodeObject *code_objects_c092760162d74022e4c634a204fe4d06;
static PyCodeObject *code_objects_97765c99aa7deb9df5be113dced373ff;
static PyCodeObject *code_objects_7487de84440ea1541c3bdb7051ddc7d7;
static PyCodeObject *code_objects_764b7334eaf302b98f20bfcb285d443b;
static PyCodeObject *code_objects_82a018483a0c2293cfb1a4a939c92db5;
static PyCodeObject *code_objects_1e04f88855a78207be35da5e4d017382;
static PyCodeObject *code_objects_69e605f23c76de42c9d42bb0b6f8dad6;
static PyCodeObject *code_objects_2fa5770b8c82220b2baac49ce270c659;
static PyCodeObject *code_objects_f92baa77423a905982a1ddb07eb5bbfb;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_72db9eaa8e5bb4fc2527175beec0c5eb); CHECK_OBJECT(module_filename_obj);
code_objects_4ba5b33a5a2fe6b4326816bed89233b7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_b2eedcd95a74154aa56c3ad77020ee9f, mod_consts.const_str_digest_b2eedcd95a74154aa56c3ad77020ee9f, NULL, NULL, 0, 0, 0);
code_objects_082398921f52323999b9f07b70bfac12 = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_NoPublicConstructor, mod_consts.const_str_plain_NoPublicConstructor, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_fe53e1ca6af86f02c11f901c64f058e9 = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_03ca47b4761e42958ad2847158a72470, mod_consts.const_tuple_str_plain_cls_str_plain_args_str_plain_kwargs_tuple, NULL, 1, 0, 0);
code_objects_069b376d5f0cb696f7a0ec730541f50f = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___enter__, mod_consts.const_str_digest_8ec74d13036fb4d15b8b19bca49521d0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_59d04b9d0654d112e45c81b267113c4f = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___exit__, mod_consts.const_str_digest_7b7d2e132de99c746c92d4c2ebda833b, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple, NULL, 4, 0, 0);
code_objects_7404e184dee19cb9a70f66b500fe8de1 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_e7963d5c54b81bf6e04b095dfa729b21, mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple, NULL, 2, 0, 0);
code_objects_df830c15b3fe39d3b6144e17928d0fc8 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__create, mod_consts.const_str_digest_dc70cc921d48d9af4b3be41824b9cbe8, mod_consts.const_tuple_642c6e046837b34bd42add7d36af734f_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_18e4baf30119fec19ef6757c4f1cdb0f = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__final_impl, mod_consts.const_str_plain__final_impl, mod_consts.const_tuple_str_plain_decorated_tuple, NULL, 1, 0, 0);
code_objects_2ae5fa21ae644d8f508c5ff27a2370bc = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__init_final_cls, mod_consts.const_str_plain__init_final_cls, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_de8cd35c6402fc0219b483c354797bf7 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__return_value_looks_like_wrong_library, mod_consts.const_str_digest_e5c77b3065222a3433e12368998d1ac2, mod_consts.const_tuple_str_plain_value_tuple, NULL, 1, 0, 0);
code_objects_c092760162d74022e4c634a204fe4d06 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_async_wraps, mod_consts.const_str_plain_async_wraps, mod_consts.const_tuple_e101e8120d2453a58e65b95168562500_tuple, NULL, 3, 0, 0);
code_objects_97765c99aa7deb9df5be113dced373ff = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_coroutine_or_error, mod_consts.const_str_plain_coroutine_or_error, mod_consts.const_tuple_ba4d35413b91cb231d15ae76035c6112_tuple, NULL, 1, 0, 0);
code_objects_7487de84440ea1541c3bdb7051ddc7d7 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decorator, mod_consts.const_str_digest_7b945505522e27e10a1e94e5c6d4270c, mod_consts.const_tuple_75c993c8779577ed5fdf276e1c9358f0_tuple, mod_consts.const_tuple_str_plain_attr_name_str_plain_cls_str_plain_wrapped_cls_tuple, 1, 0, 0);
code_objects_764b7334eaf302b98f20bfcb285d443b = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_fix_one, mod_consts.const_str_digest_e5738f625dfb5e9dadbf68e2f412c8de, mod_consts.const_tuple_f7f5e27581cc688266e21d053ea3f64b_tuple, mod_consts.const_tuple_e6b1ded95463153924b89c33af1e8ea6_tuple, 3, 0, 0);
code_objects_82a018483a0c2293cfb1a4a939c92db5 = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_fixup_module_metadata, mod_consts.const_str_plain_fixup_module_metadata, mod_consts.const_tuple_a1ecfbe80be7431446230046cec037b6_tuple, NULL, 2, 0, 0);
code_objects_1e04f88855a78207be35da5e4d017382 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_main_thread, mod_consts.const_str_plain_is_main_thread, NULL, NULL, 0, 0, 0);
code_objects_69e605f23c76de42c9d42bb0b6f8dad6 = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_name_asyncgen, mod_consts.const_str_plain_name_asyncgen, mod_consts.const_tuple_str_plain_agen_str_plain_module_str_plain_qualname_tuple, NULL, 1, 0, 0);
code_objects_2fa5770b8c82220b2baac49ce270c659 = MAKE_CODE_OBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_raise_saving_context, mod_consts.const_str_plain_raise_saving_context, mod_consts.const_tuple_str_plain_exc_str_plain___tracebackhide___str_plain_context_tuple, NULL, 1, 0, 0);
code_objects_f92baa77423a905982a1ddb07eb5bbfb = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_raise_single_exception_from_group, mod_consts.const_str_plain_raise_single_exception_from_group, mod_consts.const_tuple_62f946a9d11178f55669c726bdb7f9d3_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__10___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__11__create(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__12_name_asyncgen(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__14_raise_saving_context(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__15_raise_single_exception_from_group(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__1_is_main_thread(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__2_coroutine_or_error(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__3___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__4___enter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__5___exit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__6_async_wraps(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__6_async_wraps$$$function__1_decorator(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__7_fixup_module_metadata(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__8__init_final_cls(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_util$$$function__9__final_impl(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_trio$_util$$$function__1_is_main_thread(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__1_is_main_thread;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__1_is_main_thread = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__1_is_main_thread)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__1_is_main_thread);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__1_is_main_thread == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__1_is_main_thread = MAKE_FUNCTION_FRAME(tstate, code_objects_1e04f88855a78207be35da5e4d017382, module_trio$_util, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__1_is_main_thread->m_type_description == NULL);
frame_frame_trio$_util$$$function__1_is_main_thread = cache_frame_frame_trio$_util$$$function__1_is_main_thread;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__1_is_main_thread);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__1_is_main_thread) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_1 = module_var_accessor_trio$_util$signal(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_signal);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto try_except_handler_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_signal);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_1;
}
tmp_expression_value_2 = module_var_accessor_trio$_util$signal(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_signal);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 49;

    goto try_except_handler_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_SIGINT);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 49;

    goto try_except_handler_1;
}
tmp_expression_value_3 = module_var_accessor_trio$_util$signal(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_signal);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 49;

    goto try_except_handler_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_getsignal);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 49;

    goto try_except_handler_1;
}
tmp_expression_value_4 = module_var_accessor_trio$_util$signal(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_signal);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 49;

    goto try_except_handler_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_SIGINT);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 49;

    goto try_except_handler_1;
}
frame_frame_trio$_util$$$function__1_is_main_thread->m_frame.f_lineno = 49;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 49;

    goto try_except_handler_1;
}
frame_frame_trio$_util$$$function__1_is_main_thread->m_frame.f_lineno = 49;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__1_is_main_thread, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__1_is_main_thread, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_TypeError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 48;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_util$$$function__1_is_main_thread->m_frame)) {
        frame_frame_trio$_util$$$function__1_is_main_thread->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__1_is_main_thread, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__1_is_main_thread->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__1_is_main_thread, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__1_is_main_thread,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__1_is_main_thread == cache_frame_frame_trio$_util$$$function__1_is_main_thread) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__1_is_main_thread);
    cache_frame_frame_trio$_util$$$function__1_is_main_thread = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__1_is_main_thread);

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


static PyObject *impl_trio$_util$$$function__2_coroutine_or_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_async_fn = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *var__return_value_looks_like_wrong_library = NULL;
PyObject *var_prev_loop = NULL;
PyObject *var_coro = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__2_coroutine_or_error;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__2_coroutine_or_error = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_f768e04b357eb72619791362b463eb31);

tmp_assign_source_1 = MAKE_FUNCTION_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library(tstate, tmp_annotations_1);

assert(var__return_value_looks_like_wrong_library == NULL);
var__return_value_looks_like_wrong_library = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__2_coroutine_or_error)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__2_coroutine_or_error);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__2_coroutine_or_error == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__2_coroutine_or_error = MAKE_FUNCTION_FRAME(tstate, code_objects_97765c99aa7deb9df5be113dced373ff, module_trio$_util, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__2_coroutine_or_error->m_type_description == NULL);
frame_frame_trio$_util$$$function__2_coroutine_or_error = cache_frame_frame_trio$_util$$$function__2_coroutine_or_error;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__2_coroutine_or_error);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__2_coroutine_or_error) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_trio$_util$sniffio_loop(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sniffio_loop);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain_trio;
PyTuple_SET_ITEM0(tmp_iter_arg_1, 1, tmp_tuple_element_1);
tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_2 == NULL));
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
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
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
assert(var_prev_loop == NULL);
Py_INCREF(tmp_assign_source_5);
var_prev_loop = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assattr_value_1 = tmp_tuple_unpack_1__element_2;
tmp_assattr_target_1 = module_var_accessor_trio$_util$sniffio_loop(tstate);
if (unlikely(tmp_assattr_target_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sniffio_loop);
}

if (tmp_assattr_target_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain_name, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
}
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
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
CHECK_OBJECT(par_async_fn);
tmp_direct_call_arg1_1 = par_async_fn;
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_6 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
assert(var_coro == NULL);
var_coro = tmp_assign_source_6;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__2_coroutine_or_error, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__2_coroutine_or_error, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_async_fn);
tmp_isinstance_inst_1 = par_async_fn;
tmp_expression_value_3 = module_var_accessor_trio$_util$collections(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_abc);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Coroutine);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooo";
    goto try_except_handler_6;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_async_fn);
tmp_called_instance_1 = par_async_fn;
frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame.f_lineno = 87;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_raise_cause_1;
tmp_tuple_element_2 = mod_consts.const_str_digest_5866c63025e855a4ee40995ee6d94620;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 11);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_format_spec_4;
PyObject *tmp_format_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_async_fn);
tmp_operand_value_1 = par_async_fn;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_591a7c78c4298146bd47013382250e31;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
CHECK_OBJECT(par_async_fn);
tmp_expression_value_4 = par_async_fn;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain___name__);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_07f588e935eff2012e4af40e65385cdd;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_2);
CHECK_OBJECT(par_async_fn);
tmp_expression_value_5 = par_async_fn;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___name__);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_480657eaa0027d51f380a144c4ea5ee9;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_2);
CHECK_OBJECT(par_async_fn);
tmp_expression_value_6 = par_async_fn;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_815fd9a57351b35bbc91f04d63cc08ea;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_2);
CHECK_OBJECT(par_async_fn);
tmp_expression_value_7 = par_async_fn;
tmp_format_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
if (tmp_format_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
CHECK_OBJECT(tmp_format_value_5);
Py_DECREF(tmp_format_value_5);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 9, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_8198da0957f728c9425acfd7729d8721;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 10, tmp_tuple_element_2);
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
frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame.f_lineno = 89;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 102;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooo";
goto try_except_handler_6;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var__return_value_looks_like_wrong_library);
tmp_called_value_1 = var__return_value_looks_like_wrong_library;
CHECK_OBJECT(par_async_fn);
tmp_args_element_value_1 = par_async_fn;
frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame.f_lineno = 105;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 105;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_raise_cause_2;
tmp_tuple_element_3 = mod_consts.const_str_digest_57a1a3cebf7739348da4a27b1754b6e2;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_6;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_6;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_async_fn);
tmp_operand_value_2 = par_async_fn;
tmp_format_value_6 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
CHECK_OBJECT(tmp_format_value_6);
Py_DECREF(tmp_format_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_fcc568de88f9d0f701b47fad394b29d2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame.f_lineno = 106;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
tmp_raise_cause_2 = Py_None;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_2);
exception_lineno = 111;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_2);
type_description_1 = "ooooo";
goto try_except_handler_6;
}
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 113;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame)) {
        frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_6;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 80;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame)) {
        frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_6;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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

goto try_except_handler_4;
// End of try:
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__2_coroutine_or_error, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__2_coroutine_or_error, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_prev_loop);
tmp_assattr_value_2 = var_prev_loop;
tmp_assattr_target_2 = module_var_accessor_trio$_util$sniffio_loop(tstate);
if (unlikely(tmp_assattr_target_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sniffio_loop);
}

if (tmp_assattr_target_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, const_str_plain_name, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 80;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame)) {
        frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_4:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_prev_loop);
tmp_assattr_value_3 = var_prev_loop;
tmp_assattr_target_3 = module_var_accessor_trio$_util$sniffio_loop(tstate);
if (unlikely(tmp_assattr_target_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sniffio_loop);
}

if (tmp_assattr_target_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, const_str_plain_name, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_coro);
tmp_isinstance_inst_2 = var_coro;
tmp_expression_value_9 = module_var_accessor_trio$_util$collections(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_abc);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_Coroutine);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
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
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(var__return_value_looks_like_wrong_library);
tmp_called_value_2 = var__return_value_looks_like_wrong_library;
CHECK_OBJECT(var_coro);
tmp_args_element_value_2 = var_coro;
frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame.f_lineno = 126;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 126;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_digest_4a66ca05e2da69c5314f781d9a6c8076;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_7;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_7;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_coro);
tmp_operand_value_4 = var_coro;
tmp_format_value_7 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooo";
    goto tuple_build_exception_3;
}
tmp_format_spec_7 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
CHECK_OBJECT(tmp_format_value_7);
Py_DECREF(tmp_format_value_7);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_fcc568de88f9d0f701b47fad394b29d2;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_make_exception_arg_3 == NULL));
frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame.f_lineno = 127;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 127;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_3;
tmp_called_instance_2 = module_var_accessor_trio$_util$inspect(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_coro);
tmp_args_element_value_3 = var_coro;
frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame.f_lineno = 133;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_isasyncgen, tmp_args_element_value_3);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 133;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = mod_consts.const_str_digest_bfd2b549ea23d7e7ff878426c98b1e20;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_8;
PyObject *tmp_operand_value_5;
PyObject *tmp_format_spec_8;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_coro);
tmp_operand_value_5 = var_coro;
tmp_format_value_8 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_5);
if (tmp_format_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooo";
    goto tuple_build_exception_4;
}
tmp_format_spec_8 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
CHECK_OBJECT(tmp_format_value_8);
Py_DECREF(tmp_format_value_8);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_make_exception_arg_4 == NULL));
frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame.f_lineno = 134;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 134;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_9b829752be50ce0472fa6cf68e373a04;
CHECK_OBJECT(par_async_fn);
tmp_expression_value_10 = par_async_fn;
tmp_name_value_1 = mod_consts.const_str_plain___qualname__;
CHECK_OBJECT(par_async_fn);
tmp_default_value_1 = par_async_fn;
tmp_kw_call_arg_value_1_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_10, tmp_name_value_1, tmp_default_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame.f_lineno = 141;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_make_exception_arg_5 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame.f_lineno = 140;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 140;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__2_coroutine_or_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__2_coroutine_or_error->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__2_coroutine_or_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__2_coroutine_or_error,
    type_description_1,
    par_async_fn,
    par_args,
    var__return_value_looks_like_wrong_library,
    var_prev_loop,
    var_coro
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__2_coroutine_or_error == cache_frame_frame_trio$_util$$$function__2_coroutine_or_error) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__2_coroutine_or_error);
    cache_frame_frame_trio$_util$$$function__2_coroutine_or_error = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__2_coroutine_or_error);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_coro);
tmp_return_value = var_coro;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__return_value_looks_like_wrong_library);
CHECK_OBJECT(var__return_value_looks_like_wrong_library);
Py_DECREF(var__return_value_looks_like_wrong_library);
var__return_value_looks_like_wrong_library = NULL;
CHECK_OBJECT(var_prev_loop);
CHECK_OBJECT(var_prev_loop);
Py_DECREF(var_prev_loop);
var_prev_loop = NULL;
CHECK_OBJECT(var_coro);
CHECK_OBJECT(var_coro);
Py_DECREF(var_coro);
var_coro = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var__return_value_looks_like_wrong_library);
CHECK_OBJECT(var__return_value_looks_like_wrong_library);
Py_DECREF(var__return_value_looks_like_wrong_library);
var__return_value_looks_like_wrong_library = NULL;
Py_XDECREF(var_prev_loop);
var_prev_loop = NULL;
Py_XDECREF(var_coro);
var_coro = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_async_fn);
Py_DECREF(par_async_fn);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_async_fn);
Py_DECREF(par_async_fn);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_value = python_pars[0];
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library = MAKE_FUNCTION_FRAME(tstate, code_objects_de8cd35c6402fc0219b483c354797bf7, module_trio$_util, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library->m_type_description == NULL);
frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library = cache_frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_value);
tmp_isinstance_inst_1 = par_value;
tmp_expression_value_2 = module_var_accessor_trio$_util$collections(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collections);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_abc);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Generator);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_value);
tmp_expression_value_3 = par_value;
tmp_name_value_1 = mod_consts.const_str_plain__asyncio_future_blocking;
tmp_default_value_1 = Py_None;
tmp_cmp_expr_left_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_3, tmp_name_value_1, tmp_default_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_value);
tmp_expression_value_5 = par_value;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_tuple_str_plain_Future_str_plain_Deferred_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library,
    type_description_1,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library == cache_frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library);
    cache_frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library);

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


static PyObject *impl_trio$_util$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_msg = python_pars[1];
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7404e184dee19cb9a70f66b500fe8de1, module_trio$_util, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__3___init__->m_type_description == NULL);
frame_frame_trio$_util$$$function__3___init__ = cache_frame_frame_trio$_util$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__3___init__);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_msg);
tmp_assattr_value_1 = par_msg;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__msg, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__held, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__3___init__,
    type_description_1,
    par_self,
    par_msg
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__3___init__ == cache_frame_frame_trio$_util$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__3___init__);
    cache_frame_frame_trio$_util$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__3___init__);

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
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_util$$$function__4___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__4___enter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__4___enter__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__4___enter__)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__4___enter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__4___enter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__4___enter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_069b376d5f0cb696f7a0ec730541f50f, module_trio$_util, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__4___enter__->m_type_description == NULL);
frame_frame_trio$_util$$$function__4___enter__ = cache_frame_frame_trio$_util$$$function__4___enter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__4___enter__);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__4___enter__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__held);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 167;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_trio$_util$trio(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_BusyResourceError);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__msg);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 168;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_trio$_util$$$function__4___enter__->m_frame.f_lineno = 168;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 168;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__held, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__4___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__4___enter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__4___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__4___enter__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__4___enter__ == cache_frame_frame_trio$_util$$$function__4___enter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__4___enter__);
    cache_frame_frame_trio$_util$$$function__4___enter__ = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__4___enter__);

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


static PyObject *impl_trio$_util$$$function__5___exit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_exc_type = python_pars[1];
PyObject *par_exc_value = python_pars[2];
PyObject *par_traceback = python_pars[3];
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__5___exit__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__5___exit__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__5___exit__)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__5___exit__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__5___exit__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__5___exit__ = MAKE_FUNCTION_FRAME(tstate, code_objects_59d04b9d0654d112e45c81b267113c4f, module_trio$_util, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__5___exit__->m_type_description == NULL);
frame_frame_trio$_util$$$function__5___exit__ = cache_frame_frame_trio$_util$$$function__5___exit__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__5___exit__);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__5___exit__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__held, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__5___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__5___exit__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__5___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__5___exit__,
    type_description_1,
    par_self,
    par_exc_type,
    par_exc_value,
    par_traceback
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__5___exit__ == cache_frame_frame_trio$_util$$$function__5___exit__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__5___exit__);
    cache_frame_frame_trio$_util$$$function__5___exit__ = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__5___exit__);

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
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
CHECK_OBJECT(par_exc_value);
Py_DECREF(par_exc_value);
CHECK_OBJECT(par_traceback);
Py_DECREF(par_traceback);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
CHECK_OBJECT(par_exc_value);
Py_DECREF(par_exc_value);
CHECK_OBJECT(par_traceback);
Py_DECREF(par_traceback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_util$$$function__6_async_wraps(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_wrapped_cls = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_attr_name = Nuitka_Cell_New1(python_pars[2]);
PyObject *var_decorator = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_945e9ca62b3392dd3a2536f5a564d566);
tmp_closure_1[0] = par_attr_name;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_cls;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_wrapped_cls;
Py_INCREF(tmp_closure_1[2]);
tmp_assign_source_1 = MAKE_FUNCTION_trio$_util$$$function__6_async_wraps$$$function__1_decorator(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_decorator == NULL);
var_decorator = tmp_assign_source_1;
}
// Tried code:
CHECK_OBJECT(var_decorator);
tmp_return_value = var_decorator;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_wrapped_cls);
CHECK_OBJECT(par_wrapped_cls);
Py_DECREF(par_wrapped_cls);
par_wrapped_cls = NULL;
CHECK_OBJECT(par_attr_name);
CHECK_OBJECT(par_attr_name);
Py_DECREF(par_attr_name);
par_attr_name = NULL;
CHECK_OBJECT(var_decorator);
CHECK_OBJECT(var_decorator);
Py_DECREF(var_decorator);
var_decorator = NULL;
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


static PyObject *impl_trio$_util$$$function__6_async_wraps$$$function__1_decorator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_func = python_pars[0];
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator = MAKE_FUNCTION_FRAME(tstate, code_objects_7487de84440ea1541c3bdb7051ddc7d7, module_trio$_util, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator->m_type_description == NULL);
frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator = cache_frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_attr_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 189;
type_description_1 = "occc";
    goto frame_exception_exit_1;
}

tmp_assattr_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_func);
tmp_assattr_target_1 = par_func;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain___name__, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "occc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_assattr_target_2;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
type_description_1 = "occc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___qualname__);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "occc";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "occc";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_attr_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
type_description_1 = "occc";
    goto tuple_build_exception_1;
}

tmp_format_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "occc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assattr_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assattr_value_2 == NULL));
CHECK_OBJECT(par_func);
tmp_assattr_target_2 = par_func;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain___qualname__, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "occc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_assattr_target_3;
tmp_tuple_element_2 = mod_consts.const_str_digest_ca592484a01baca8aa63e5047ccbc358;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_4;
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wrapped_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "occc";
    goto tuple_build_exception_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___module__);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "occc";
    goto tuple_build_exception_2;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "occc";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wrapped_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "occc";
    goto tuple_build_exception_2;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___qualname__);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "occc";
    goto tuple_build_exception_2;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "occc";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_attr_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "occc";
    goto tuple_build_exception_2;
}

tmp_format_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "occc";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 5, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_80d2e709b58160fe26db43448162c9d3;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 6, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assattr_value_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assattr_value_3 == NULL));
CHECK_OBJECT(par_func);
tmp_assattr_target_3 = par_func;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, const_str_plain___doc__, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "occc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator,
    type_description_1,
    par_func,
    self->m_closure[0],
    self->m_closure[1],
    self->m_closure[2]
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator == cache_frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator);
    cache_frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__6_async_wraps$$$function__1_decorator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_func);
tmp_return_value = par_func;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_func);
Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_util$$$function__7_fixup_module_metadata(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_module_name = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_namespace = python_pars[1];
struct Nuitka_CellObject *var_seen_ids = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_fix_one = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_objname = Nuitka_Cell_NewEmpty();
PyObject *var_obj = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__7_fixup_module_metadata;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = PySet_New(NULL);
assert(Nuitka_Cell_GET(var_seen_ids) == NULL);
Nuitka_Cell_SET(var_seen_ids, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_7a6d2147ee5867c1cb821e0f1574de2a);
tmp_closure_1[0] = var_fix_one;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_module_name;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = var_objname;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = var_seen_ids;
Py_INCREF(tmp_closure_1[3]);
tmp_assign_source_2 = MAKE_FUNCTION_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one(tstate, tmp_annotations_1, tmp_closure_1);

assert(Nuitka_Cell_GET(var_fix_one) == NULL);
Nuitka_Cell_SET(var_fix_one, tmp_assign_source_2);

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata = MAKE_FUNCTION_FRAME(tstate, code_objects_82a018483a0c2293cfb1a4a939c92db5, module_trio$_util, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata->m_type_description == NULL);
frame_frame_trio$_util$$$function__7_fixup_module_metadata = cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__7_fixup_module_metadata);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__7_fixup_module_metadata) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_namespace);
tmp_expression_value_1 = par_namespace;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "coccco";
    goto frame_exception_exit_1;
}
frame_frame_trio$_util$$$function__7_fixup_module_metadata->m_frame.f_lineno = 226;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "coccco";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "coccco";
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
type_description_1 = "coccco";
exception_lineno = 226;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "coccco";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "coccco";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "coccco";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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



exception_lineno = 226;
type_description_1 = "coccco";
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
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = Nuitka_Cell_GET(var_objname);
    Nuitka_Cell_SET(var_objname, tmp_assign_source_8);
    Py_INCREF(tmp_assign_source_8);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_obj;
    var_obj = tmp_assign_source_9;
    Py_INCREF(var_obj);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(Nuitka_Cell_GET(var_objname));
tmp_expression_value_2 = Nuitka_Cell_GET(var_objname);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_startswith);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "coccco";
    goto try_except_handler_2;
}
frame_frame_trio$_util$$$function__7_fixup_module_metadata->m_frame.f_lineno = 227;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_underscore_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "coccco";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "coccco";
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
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (Nuitka_Cell_GET(var_fix_one) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fix_one);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "coccco";
    goto try_except_handler_2;
}

tmp_called_value_3 = Nuitka_Cell_GET(var_fix_one);
CHECK_OBJECT(Nuitka_Cell_GET(var_objname));
tmp_args_element_value_1 = Nuitka_Cell_GET(var_objname);
CHECK_OBJECT(Nuitka_Cell_GET(var_objname));
tmp_args_element_value_2 = Nuitka_Cell_GET(var_objname);
CHECK_OBJECT(var_obj);
tmp_args_element_value_3 = var_obj;
frame_frame_trio$_util$$$function__7_fixup_module_metadata->m_frame.f_lineno = 228;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "coccco";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "coccco";
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__7_fixup_module_metadata, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__7_fixup_module_metadata->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__7_fixup_module_metadata, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__7_fixup_module_metadata,
    type_description_1,
    par_module_name,
    par_namespace,
    var_seen_ids,
    var_fix_one,
    var_objname,
    var_obj
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__7_fixup_module_metadata == cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata);
    cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__7_fixup_module_metadata);

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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_module_name);
CHECK_OBJECT(par_module_name);
Py_DECREF(par_module_name);
par_module_name = NULL;
CHECK_OBJECT(var_seen_ids);
CHECK_OBJECT(var_seen_ids);
Py_DECREF(var_seen_ids);
var_seen_ids = NULL;
CHECK_OBJECT(var_fix_one);
CHECK_OBJECT(var_fix_one);
Py_DECREF(var_fix_one);
var_fix_one = NULL;
CHECK_OBJECT(var_objname);
CHECK_OBJECT(var_objname);
Py_DECREF(var_objname);
var_objname = NULL;
Py_XDECREF(var_obj);
var_obj = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_module_name);
CHECK_OBJECT(par_module_name);
Py_DECREF(par_module_name);
par_module_name = NULL;
CHECK_OBJECT(var_seen_ids);
CHECK_OBJECT(var_seen_ids);
Py_DECREF(var_seen_ids);
var_seen_ids = NULL;
CHECK_OBJECT(var_fix_one);
CHECK_OBJECT(var_fix_one);
Py_DECREF(var_fix_one);
var_fix_one = NULL;
CHECK_OBJECT(var_objname);
CHECK_OBJECT(var_objname);
Py_DECREF(var_objname);
var_objname = NULL;
Py_XDECREF(var_obj);
var_obj = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_namespace);
Py_DECREF(par_namespace);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_namespace);
Py_DECREF(par_namespace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_qualname = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_obj = python_pars[2];
PyObject *var_mod = NULL;
PyObject *var_attr_name = NULL;
PyObject *var_attr_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one = MAKE_FUNCTION_FRAME(tstate, code_objects_764b7334eaf302b98f20bfcb285d443b, module_trio$_util, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one->m_type_description == NULL);
frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one = cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_id_arg_1;
CHECK_OBJECT(par_obj);
tmp_id_arg_1 = par_obj;
tmp_cmp_expr_left_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_seen_ids);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 208;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[3]);
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooooocccc";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_id_arg_2;
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_seen_ids);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 210;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[3]);
CHECK_OBJECT(par_obj);
tmp_id_arg_2 = par_obj;
tmp_args_element_value_1 = PyLong_FromVoidPtr(tmp_id_arg_2);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one->m_frame.f_lineno = 210;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_add, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_obj);
tmp_expression_value_1 = par_obj;
tmp_name_value_1 = const_str_plain___module__;
tmp_default_value_1 = Py_None;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
assert(var_mod == NULL);
var_mod = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_mod);
tmp_cmp_expr_left_2 = var_mod;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_mod);
tmp_expression_value_2 = var_mod;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one->m_frame.f_lineno = 213;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_ff178d8f6f5736e788347f0add0e2e87_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 213;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_module_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 214;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}

tmp_assattr_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
CHECK_OBJECT(par_obj);
tmp_assattr_target_1 = par_obj;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain___module__, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_3;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_obj);
tmp_expression_value_3 = par_obj;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, const_str_plain___name__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res != 0) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
tmp_cmp_expr_left_3 = const_str_dot;
CHECK_OBJECT(par_obj);
tmp_expression_value_4 = par_obj;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain___name__);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
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
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_name);
tmp_assattr_value_2 = par_name;
CHECK_OBJECT(par_obj);
tmp_assattr_target_2 = par_obj;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, const_str_plain___name__, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_obj);
tmp_expression_value_5 = par_obj;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___qualname__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_qualname);
tmp_assattr_value_3 = par_qualname;
CHECK_OBJECT(par_obj);
tmp_assattr_target_3 = par_obj;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain___qualname__, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
}
branch_no_4:;
branch_no_3:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_obj);
tmp_isinstance_inst_1 = par_obj;
tmp_isinstance_cls_1 = (PyObject *)&PyType_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooocccc";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_obj);
tmp_expression_value_7 = par_obj;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one->m_frame.f_lineno = 223;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooocccc";
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
type_description_1 = "oooooocccc";
exception_lineno = 223;
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


exception_lineno = 223;
type_description_1 = "oooooocccc";
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



exception_lineno = 223;
type_description_1 = "oooooocccc";
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



exception_lineno = 223;
type_description_1 = "oooooocccc";
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



exception_lineno = 223;
type_description_1 = "oooooocccc";
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
    PyObject *old = var_attr_name;
    var_attr_name = tmp_assign_source_7;
    Py_INCREF(var_attr_name);
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
    PyObject *old = var_attr_value;
    var_attr_value = tmp_assign_source_8;
    Py_INCREF(var_attr_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fix_one);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 224;
type_description_1 = "oooooocccc";
    goto try_except_handler_2;
}

tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_objname);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 224;
type_description_1 = "oooooocccc";
    goto try_except_handler_2;
}

tmp_add_expr_left_2 = Nuitka_Cell_GET(self->m_closure[2]);
tmp_add_expr_right_2 = const_str_dot;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooooocccc";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_attr_name);
tmp_add_expr_right_1 = var_attr_name;
tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooooocccc";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_attr_name);
tmp_args_element_value_3 = var_attr_name;
CHECK_OBJECT(var_attr_value);
tmp_args_element_value_4 = var_attr_value;
frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one->m_frame.f_lineno = 224;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooooocccc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooocccc";
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
branch_no_5:;
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one,
    type_description_1,
    par_qualname,
    par_name,
    par_obj,
    var_mod,
    var_attr_name,
    var_attr_value,
    self->m_closure[3],
    self->m_closure[1],
    self->m_closure[0],
    self->m_closure[2]
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one == cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one);
    cache_frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one);

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
Py_XDECREF(var_mod);
var_mod = NULL;
Py_XDECREF(var_attr_name);
var_attr_name = NULL;
Py_XDECREF(var_attr_value);
var_attr_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_mod);
var_mod = NULL;
Py_XDECREF(var_attr_name);
var_attr_name = NULL;
Py_XDECREF(var_attr_value);
var_attr_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_qualname);
Py_DECREF(par_qualname);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_qualname);
Py_DECREF(par_qualname);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_util$$$function__8__init_final_cls(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__8__init_final_cls;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__8__init_final_cls = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__8__init_final_cls)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__8__init_final_cls);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__8__init_final_cls == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__8__init_final_cls = MAKE_FUNCTION_FRAME(tstate, code_objects_2ae5fa21ae644d8f508c5ff27a2370bc, module_trio$_util, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__8__init_final_cls->m_type_description == NULL);
frame_frame_trio$_util$$$function__8__init_final_cls = cache_frame_frame_trio$_util$$$function__8__init_final_cls;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__8__init_final_cls);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__8__init_final_cls) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_1 = par_cls;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___module__);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___qualname__);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_3c68dddf951e43439765f1df5ad362f1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
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
frame_frame_trio$_util$$$function__8__init_final_cls->m_frame.f_lineno = 233;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 233;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__8__init_final_cls, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__8__init_final_cls->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__8__init_final_cls, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__8__init_final_cls,
    type_description_1,
    par_cls
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__8__init_final_cls == cache_frame_frame_trio$_util$$$function__8__init_final_cls) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__8__init_final_cls);
    cache_frame_frame_trio$_util$$$function__8__init_final_cls = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__8__init_final_cls);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_trio$_util$$$function__9__final_impl(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_decorated = python_pars[0];
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__9__final_impl;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__9__final_impl = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__9__final_impl)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__9__final_impl);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__9__final_impl == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__9__final_impl = MAKE_FUNCTION_FRAME(tstate, code_objects_18e4baf30119fec19ef6757c4f1cdb0f, module_trio$_util, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__9__final_impl->m_type_description == NULL);
frame_frame_trio$_util$$$function__9__final_impl = cache_frame_frame_trio$_util$$$function__9__final_impl;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__9__final_impl);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__9__final_impl) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_classmethod_arg_1;
PyObject *tmp_assattr_target_1;
tmp_classmethod_arg_1 = module_var_accessor_trio$_util$_init_final_cls(tstate);
if (unlikely(tmp_classmethod_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__init_final_cls);
}

if (tmp_classmethod_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_decorated);
tmp_assattr_target_1 = par_decorated;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain___init_subclass__, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_trio$_util$std_final(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_std_final);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_decorated);
tmp_args_element_value_1 = par_decorated;
frame_frame_trio$_util$$$function__9__final_impl->m_frame.f_lineno = 255;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__9__final_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__9__final_impl->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__9__final_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__9__final_impl,
    type_description_1,
    par_decorated
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__9__final_impl == cache_frame_frame_trio$_util$$$function__9__final_impl) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__9__final_impl);
    cache_frame_frame_trio$_util$$$function__9__final_impl = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__9__final_impl);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_decorated);
Py_DECREF(par_decorated);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_decorated);
Py_DECREF(par_decorated);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_util$$$function__10___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__10___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__10___call__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__10___call__)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__10___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__10___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__10___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_fe53e1ca6af86f02c11f901c64f058e9, module_trio$_util, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__10___call__->m_type_description == NULL);
frame_frame_trio$_util$$$function__10___call__ = cache_frame_frame_trio$_util$$$function__10___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__10___call__);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__10___call__) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_1 = par_cls;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___module__);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___qualname__);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_5872a6850b56bdc44bc8c6acbf75208c;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
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
frame_frame_trio$_util$$$function__10___call__->m_frame.f_lineno = 286;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 286;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__10___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__10___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__10___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__10___call__,
    type_description_1,
    par_cls,
    par_args,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__10___call__ == cache_frame_frame_trio$_util$$$function__10___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__10___call__);
    cache_frame_frame_trio$_util$$$function__10___call__ = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__10___call__);

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
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_trio$_util$$$function__11__create(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__11__create;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__11__create = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__11__create)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__11__create);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__11__create == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__11__create = MAKE_FUNCTION_FRAME(tstate, code_objects_df830c15b3fe39d3b6144e17928d0fc8, module_trio$_util, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__11__create->m_type_description == NULL);
frame_frame_trio$_util$$$function__11__create = cache_frame_frame_trio$_util$$$function__11__create;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__11__create);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__11__create) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 291;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_cls);
tmp_object_arg_value_1 = par_cls;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_trio$_util, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___call__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
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
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__11__create, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__11__create->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__11__create, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__11__create,
    type_description_1,
    par_cls,
    par_args,
    par_kwargs,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__11__create == cache_frame_frame_trio$_util$$$function__11__create) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__11__create);
    cache_frame_frame_trio$_util$$$function__11__create = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__11__create);

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


static PyObject *impl_trio$_util$$$function__12_name_asyncgen(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_agen = python_pars[0];
PyObject *var_module = NULL;
PyObject *var_qualname = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__12_name_asyncgen;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__12_name_asyncgen = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__12_name_asyncgen)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__12_name_asyncgen);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__12_name_asyncgen == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__12_name_asyncgen = MAKE_FUNCTION_FRAME(tstate, code_objects_69e605f23c76de42c9d42bb0b6f8dad6, module_trio$_util, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__12_name_asyncgen->m_type_description == NULL);
frame_frame_trio$_util$$$function__12_name_asyncgen = cache_frame_frame_trio$_util$$$function__12_name_asyncgen;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__12_name_asyncgen);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__12_name_asyncgen) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_agen);
tmp_expression_value_1 = par_agen;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ag_code);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
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
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_agen);
tmp_operand_value_2 = par_agen;
tmp_return_value = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_agen);
tmp_expression_value_4 = par_agen;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ag_frame);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_f_globals);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = const_str_plain___name__;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(var_module == NULL);
var_module = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__12_name_asyncgen, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__12_name_asyncgen, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_AttributeError_type_KeyError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_chr_60;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_agen);
tmp_expression_value_6 = par_agen;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ag_code);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_co_filename);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_2 == NULL));
assert(var_module == NULL);
var_module = tmp_assign_source_2;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 300;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_util$$$function__12_name_asyncgen->m_frame)) {
        frame_frame_trio$_util$$$function__12_name_asyncgen->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
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
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_agen);
tmp_expression_value_7 = par_agen;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain___qualname__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
assert(var_qualname == NULL);
var_qualname = tmp_assign_source_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__12_name_asyncgen, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__12_name_asyncgen, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_AttributeError;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_agen);
tmp_expression_value_9 = par_agen;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ag_code);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_co_name);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
assert(var_qualname == NULL);
var_qualname = tmp_assign_source_4;
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 304;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_util$$$function__12_name_asyncgen->m_frame)) {
        frame_frame_trio$_util$$$function__12_name_asyncgen->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_5;
branch_end_3:;
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
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
CHECK_OBJECT(var_module);
tmp_format_value_2 = var_module;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_qualname);
tmp_format_value_3 = var_qualname;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__12_name_asyncgen, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__12_name_asyncgen->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__12_name_asyncgen, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__12_name_asyncgen,
    type_description_1,
    par_agen,
    var_module,
    var_qualname
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__12_name_asyncgen == cache_frame_frame_trio$_util$$$function__12_name_asyncgen) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__12_name_asyncgen);
    cache_frame_frame_trio$_util$$$function__12_name_asyncgen = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__12_name_asyncgen);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_module);
var_module = NULL;
Py_XDECREF(var_qualname);
var_qualname = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_module);
var_module = NULL;
Py_XDECREF(var_qualname);
var_qualname = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_agen);
Py_DECREF(par_agen);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_agen);
Py_DECREF(par_agen);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_util$$$function__14_raise_saving_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_exc = python_pars[0];
PyObject *var_context = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__14_raise_saving_context;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__14_raise_saving_context = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__14_raise_saving_context)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__14_raise_saving_context);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__14_raise_saving_context == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__14_raise_saving_context = MAKE_FUNCTION_FRAME(tstate, code_objects_2fa5770b8c82220b2baac49ce270c659, module_trio$_util, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__14_raise_saving_context->m_type_description == NULL);
frame_frame_trio$_util$$$function__14_raise_saving_context = cache_frame_frame_trio$_util$$$function__14_raise_saving_context;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__14_raise_saving_context);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__14_raise_saving_context) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_exc);
tmp_expression_value_1 = par_exc;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___context__);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oNo";
    goto frame_exception_exit_1;
}
assert(var_context == NULL);
var_context = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
CHECK_OBJECT(par_exc);
tmp_raise_type_input_1 = par_exc;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oNo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 332;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oNo";
goto try_except_handler_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__14_raise_saving_context, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__14_raise_saving_context, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_context);
tmp_assattr_value_1 = var_context;
CHECK_OBJECT(par_exc);
tmp_assattr_target_1 = par_exc;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain___context__, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oNo";
    goto try_except_handler_3;
}
}
CHECK_OBJECT(par_exc);
Py_DECREF(par_exc);
par_exc = NULL;

CHECK_OBJECT(var_context);
Py_DECREF(var_context);
var_context = NULL;

tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 331;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_util$$$function__14_raise_saving_context->m_frame)) {
        frame_frame_trio$_util$$$function__14_raise_saving_context->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oNo";
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__14_raise_saving_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__14_raise_saving_context->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__14_raise_saving_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__14_raise_saving_context,
    type_description_1,
    par_exc,
    NULL,
    var_context
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__14_raise_saving_context == cache_frame_frame_trio$_util$$$function__14_raise_saving_context) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__14_raise_saving_context);
    cache_frame_frame_trio$_util$$$function__14_raise_saving_context = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__14_raise_saving_context);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_exc);
par_exc = NULL;
Py_XDECREF(var_context);
var_context = NULL;
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

}


static PyObject *impl_trio$_util$$$function__15_raise_single_exception_from_group(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_eg = python_pars[0];
PyObject *var_cancelled_exception = NULL;
PyObject *var_noncancelled_exception = NULL;
PyObject *var_e = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_util$$$function__15_raise_single_exception_from_group;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_util$$$function__15_raise_single_exception_from_group = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_trio$_util$$$function__15_raise_single_exception_from_group)) {
    Py_XDECREF(cache_frame_frame_trio$_util$$$function__15_raise_single_exception_from_group);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_util$$$function__15_raise_single_exception_from_group == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_util$$$function__15_raise_single_exception_from_group = MAKE_FUNCTION_FRAME(tstate, code_objects_f92baa77423a905982a1ddb07eb5bbfb, module_trio$_util, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_util$$$function__15_raise_single_exception_from_group->m_type_description == NULL);
frame_frame_trio$_util$$$function__15_raise_single_exception_from_group = cache_frame_frame_trio$_util$$$function__15_raise_single_exception_from_group;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$function__15_raise_single_exception_from_group);
assert(Py_REFCNT(frame_frame_trio$_util$$$function__15_raise_single_exception_from_group) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_eg);
tmp_expression_value_1 = par_eg;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_exceptions);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooo";
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
type_description_1 = "oooo";
exception_lineno = 363;
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
    PyObject *old = var_e;
    var_e = tmp_assign_source_3;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_e);
tmp_isinstance_inst_1 = var_e;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_KeyboardInterrupt_type_SystemExit_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooo";
    goto try_except_handler_2;
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_e);
tmp_type_arg_1 = var_e;
tmp_direct_call_arg1_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_direct_call_arg1_1 == NULL));
CHECK_OBJECT(var_e);
tmp_expression_value_2 = var_e;
tmp_direct_call_arg2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_args);
if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 365;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_raise_type_input_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_eg);
tmp_raise_cause_1 = par_eg;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 365;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooo";
goto try_except_handler_2;
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
assert(var_cancelled_exception == NULL);
Py_INCREF(tmp_assign_source_4);
var_cancelled_exception = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Py_None;
assert(var_noncancelled_exception == NULL);
Py_INCREF(tmp_assign_source_5);
var_noncancelled_exception = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_eg);
tmp_expression_value_3 = par_eg;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_exceptions);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_6;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 370;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_8 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_8;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_e);
tmp_isinstance_inst_2 = var_e;
tmp_expression_value_4 = module_var_accessor_trio$_util$trio(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Cancelled);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooo";
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
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (var_cancelled_exception == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cancelled_exception);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 372;
type_description_1 = "oooo";
    goto try_except_handler_3;
}

tmp_cmp_expr_left_1 = var_cancelled_exception;
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
PyObject *tmp_assign_source_9;
CHECK_OBJECT(var_e);
tmp_assign_source_9 = var_e;
{
    PyObject *old = var_cancelled_exception;
    var_cancelled_exception = tmp_assign_source_9;
    Py_INCREF(var_cancelled_exception);
    Py_XDECREF(old);
}

}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (var_noncancelled_exception == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_noncancelled_exception);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 374;
type_description_1 = "oooo";
    goto try_except_handler_3;
}

tmp_cmp_expr_left_2 = var_noncancelled_exception;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(var_e);
tmp_assign_source_10 = var_e;
{
    PyObject *old = var_noncancelled_exception;
    var_noncancelled_exception = tmp_assign_source_10;
    Py_INCREF(var_noncancelled_exception);
    Py_XDECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_1;
PyObject *tmp_raise_cause_2;
tmp_called_value_1 = module_var_accessor_trio$_util$MultipleExceptionError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MultipleExceptionError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 377;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
frame_frame_trio$_util$$$function__15_raise_single_exception_from_group->m_frame.f_lineno = 377;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_be74853d348ac0fea3f097798e39f007_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_eg);
tmp_raise_cause_2 = par_eg;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_2);
exception_lineno = 379;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_2);
type_description_1 = "oooo";
goto try_except_handler_3;
}
branch_end_4:;
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
if (var_noncancelled_exception == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_noncancelled_exception);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 381;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_3 = var_noncancelled_exception;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_trio$_util$raise_saving_context(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_raise_saving_context);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 382;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (var_noncancelled_exception == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_noncancelled_exception);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 382;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = var_noncancelled_exception;
frame_frame_trio$_util$$$function__15_raise_single_exception_from_group->m_frame.f_lineno = 382;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (var_cancelled_exception == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cancelled_exception);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 384;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_4 = var_cancelled_exception;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_f3d9a87da6c271f1fd8784aa3b4ce333;
frame_frame_trio$_util$$$function__15_raise_single_exception_from_group->m_frame.f_lineno = 384;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 384;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_trio$_util$raise_saving_context(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_raise_saving_context);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (var_cancelled_exception == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cancelled_exception);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 385;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = var_cancelled_exception;
frame_frame_trio$_util$$$function__15_raise_single_exception_from_group->m_frame.f_lineno = 385;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$function__15_raise_single_exception_from_group, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$function__15_raise_single_exception_from_group->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$function__15_raise_single_exception_from_group, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$function__15_raise_single_exception_from_group,
    type_description_1,
    par_eg,
    var_cancelled_exception,
    var_noncancelled_exception,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_trio$_util$$$function__15_raise_single_exception_from_group == cache_frame_frame_trio$_util$$$function__15_raise_single_exception_from_group) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_util$$$function__15_raise_single_exception_from_group);
    cache_frame_frame_trio$_util$$$function__15_raise_single_exception_from_group = NULL;
}

assertFrameObject(frame_frame_trio$_util$$$function__15_raise_single_exception_from_group);

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
Py_XDECREF(var_cancelled_exception);
var_cancelled_exception = NULL;
Py_XDECREF(var_noncancelled_exception);
var_noncancelled_exception = NULL;
Py_XDECREF(var_e);
var_e = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cancelled_exception);
var_cancelled_exception = NULL;
Py_XDECREF(var_noncancelled_exception);
var_noncancelled_exception = NULL;
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
CHECK_OBJECT(par_eg);
Py_DECREF(par_eg);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_eg);
Py_DECREF(par_eg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__10___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__10___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_03ca47b4761e42958ad2847158a72470,
#endif
        code_objects_fe53e1ca6af86f02c11f901c64f058e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__11__create(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__11__create,
        mod_consts.const_str_plain__create,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dc70cc921d48d9af4b3be41824b9cbe8,
#endif
        code_objects_df830c15b3fe39d3b6144e17928d0fc8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__12_name_asyncgen(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__12_name_asyncgen,
        mod_consts.const_str_plain_name_asyncgen,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_69e605f23c76de42c9d42bb0b6f8dad6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        mod_consts.const_str_digest_60432f965effd11ed1dbd37594b24a87,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__14_raise_saving_context(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__14_raise_saving_context,
        mod_consts.const_str_plain_raise_saving_context,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2fa5770b8c82220b2baac49ce270c659,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        mod_consts.const_str_digest_4a48b7c58d7d76c614232b93546deab0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__15_raise_single_exception_from_group(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__15_raise_single_exception_from_group,
        mod_consts.const_str_plain_raise_single_exception_from_group,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f92baa77423a905982a1ddb07eb5bbfb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        mod_consts.const_str_digest_a493d99f494756df2f735fe86b7fd6fa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__1_is_main_thread(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__1_is_main_thread,
        mod_consts.const_str_plain_is_main_thread,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1e04f88855a78207be35da5e4d017382,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        mod_consts.const_str_digest_ec29ced88b0e2b3c724ef2268704fd36,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__2_coroutine_or_error(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__2_coroutine_or_error,
        mod_consts.const_str_plain_coroutine_or_error,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_97765c99aa7deb9df5be113dced373ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library,
        mod_consts.const_str_plain__return_value_looks_like_wrong_library,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e5c77b3065222a3433e12368998d1ac2,
#endif
        code_objects_de8cd35c6402fc0219b483c354797bf7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__3___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e7963d5c54b81bf6e04b095dfa729b21,
#endif
        code_objects_7404e184dee19cb9a70f66b500fe8de1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__4___enter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__4___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8ec74d13036fb4d15b8b19bca49521d0,
#endif
        code_objects_069b376d5f0cb696f7a0ec730541f50f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__5___exit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__5___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7b7d2e132de99c746c92d4c2ebda833b,
#endif
        code_objects_59d04b9d0654d112e45c81b267113c4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__6_async_wraps(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__6_async_wraps,
        mod_consts.const_str_plain_async_wraps,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c092760162d74022e4c634a204fe4d06,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        mod_consts.const_str_digest_01ade0fb416704e17c997d176d986c04,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__6_async_wraps$$$function__1_decorator(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__6_async_wraps$$$function__1_decorator,
        mod_consts.const_str_plain_decorator,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7b945505522e27e10a1e94e5c6d4270c,
#endif
        code_objects_7487de84440ea1541c3bdb7051ddc7d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__7_fixup_module_metadata(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__7_fixup_module_metadata,
        mod_consts.const_str_plain_fixup_module_metadata,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_82a018483a0c2293cfb1a4a939c92db5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one,
        mod_consts.const_str_plain_fix_one,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e5738f625dfb5e9dadbf68e2f412c8de,
#endif
        code_objects_764b7334eaf302b98f20bfcb285d443b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__8__init_final_cls(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__8__init_final_cls,
        mod_consts.const_str_plain__init_final_cls,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2ae5fa21ae644d8f508c5ff27a2370bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        mod_consts.const_str_digest_2555ea9765a1494807c86869eeaf41a1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_util$$$function__9__final_impl(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_util$$$function__9__final_impl,
        mod_consts.const_str_plain__final_impl,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_18e4baf30119fec19ef6757c4f1cdb0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_util,
        mod_consts.const_str_digest_464060e3b29a97018baa806bccb35f7f,
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

static function_impl_code const function_table_trio$_util[] = {
impl_trio$_util$$$function__2_coroutine_or_error$$$function__1__return_value_looks_like_wrong_library,
impl_trio$_util$$$function__6_async_wraps$$$function__1_decorator,
impl_trio$_util$$$function__7_fixup_module_metadata$$$function__1_fix_one,
impl_trio$_util$$$function__1_is_main_thread,
impl_trio$_util$$$function__2_coroutine_or_error,
impl_trio$_util$$$function__3___init__,
impl_trio$_util$$$function__4___enter__,
impl_trio$_util$$$function__5___exit__,
impl_trio$_util$$$function__6_async_wraps,
impl_trio$_util$$$function__7_fixup_module_metadata,
impl_trio$_util$$$function__8__init_final_cls,
impl_trio$_util$$$function__9__final_impl,
impl_trio$_util$$$function__10___call__,
impl_trio$_util$$$function__11__create,
impl_trio$_util$$$function__12_name_asyncgen,
impl_trio$_util$$$function__14_raise_saving_context,
impl_trio$_util$$$function__15_raise_single_exception_from_group,
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

    return Nuitka_Function_GetFunctionState(function, function_table_trio$_util);
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
        module_trio$_util,
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
        function_table_trio$_util,
        sizeof(function_table_trio$_util) / sizeof(function_impl_code)
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
static char const *module_full_name = "trio._util";
#endif

// Internal entry point for module code.
PyObject *module_code_trio$_util(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("trio$_util");

    // Store the module for future use.
    module_trio$_util = module;

    moduledict_trio$_util = MODULE_DICT(module_trio$_util);

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
        PRINT_STRING("trio$_util: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("trio$_util: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("trio$_util: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._util" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittrio$_util\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_trio$_util,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_trio$_util,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_trio$_util,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_util,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_util,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_trio$_util);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_trio$_util);
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

        UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_util;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_trio$_util$$$class__1_ConflictDetector_148 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
int tmp_res;
PyObject *locals_trio$_util$$$class__2_NoPublicConstructor_265 = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_util$$$class__2_NoPublicConstructor_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_trio$_util$$$class__3_MultipleExceptionError_338 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_trio$_util = MAKE_MODULE_FRAME(code_objects_4ba5b33a5a2fe6b4326816bed89233b7, module_trio$_util);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util);
assert(Py_REFCNT(frame_frame_trio$_util) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_trio$_util$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_trio$_util$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_trio$_util;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_trio$_util->m_frame.f_lineno = 4;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_collections, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_plain_inspect;
tmp_globals_arg_value_2 = (PyObject *)moduledict_trio$_util;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_trio$_util->m_frame.f_lineno = 5;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_signal;
tmp_globals_arg_value_3 = (PyObject *)moduledict_trio$_util;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_trio$_util->m_frame.f_lineno = 6;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_signal, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_4 = (PyObject *)moduledict_trio$_util;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ABCMeta_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_trio$_util->m_frame.f_lineno = 7;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
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
        (PyObject *)moduledict_trio$_util,
        mod_consts.const_str_plain_ABCMeta,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ABCMeta);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_ABCMeta, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_5 = (PyObject *)moduledict_trio$_util;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Awaitable_str_plain_Callable_str_plain_Sequence_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_trio$_util->m_frame.f_lineno = 8;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
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
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_trio$_util,
        mod_consts.const_str_plain_Awaitable,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Awaitable);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_trio$_util,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_11);
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
        (PyObject *)moduledict_trio$_util,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Sequence);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_12);
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
tmp_assign_source_13 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_13 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_13);
tmp_import_from_2__module = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = Py_False;
UPDATE_STRING_DICT0(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_14);
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_trio$_util,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_15);
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
        (PyObject *)moduledict_trio$_util,
        mod_consts.const_str_plain_NoReturn,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_NoReturn);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_NoReturn, tmp_assign_source_16);
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
        (PyObject *)moduledict_trio$_util,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_17);
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
        (PyObject *)moduledict_trio$_util,
        mod_consts.const_str_plain_final,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_final);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_std_final, tmp_assign_source_18);
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
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_sniffio;
tmp_globals_arg_value_6 = (PyObject *)moduledict_trio$_util;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_thread_local_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_trio$_util->m_frame.f_lineno = 17;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_trio$_util,
        mod_consts.const_str_plain_thread_local,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_thread_local);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_sniffio_loop, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_trio;
tmp_globals_arg_value_7 = (PyObject *)moduledict_trio$_util;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = Py_None;
tmp_level_value_7 = const_int_0;
frame_frame_trio$_util->m_frame.f_lineno = 19;
tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_trio, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_trio$_util$TypeVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_trio$_util$Callable(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = Py_Ellipsis;
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_trio$_util$Any(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

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
tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
frame_frame_trio$_util->m_frame.f_lineno = 22;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
    tmp_assign_source_21 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_CallT_tuple, kw_values, mod_consts.const_tuple_str_plain_bound_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_CallT, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_trio$_util$TypeVar(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto frame_exception_exit_1;
}
frame_frame_trio$_util->m_frame.f_lineno = 23;
tmp_assign_source_22 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_T_tuple);

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_T, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_trio$_util$TypeVar(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto frame_exception_exit_1;
}
frame_frame_trio$_util->m_frame.f_lineno = 24;
tmp_assign_source_23 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_RetT_tuple);

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_RetT, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_assign_source_24 = MAKE_FUNCTION_trio$_util$$$function__1_is_main_thread(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_is_main_thread, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_9f940051428728f232b4fd2b5b3767e0);

tmp_assign_source_25 = MAKE_FUNCTION_trio$_util$$$function__2_coroutine_or_error(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_coroutine_or_error, tmp_assign_source_25);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_27;
}
// Tried code:
{
PyObject *tmp_assign_source_28;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_trio$_util$$$class__1_ConflictDetector_148 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_be1a163f204243de52303d4f3810208b;
tmp_result = DICT_SET_ITEM(locals_trio$_util$$$class__1_ConflictDetector_148, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_8ec1d50d2afd3a615d3028e502cc91d9;
tmp_result = DICT_SET_ITEM(locals_trio$_util$$$class__1_ConflictDetector_148, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ConflictDetector;
tmp_result = DICT_SET_ITEM(locals_trio$_util$$$class__1_ConflictDetector_148, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_148;
tmp_result = DICT_SET_ITEM(locals_trio$_util$$$class__1_ConflictDetector_148, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_60ba6036b612bbdfbcc954e4cab691f2);

tmp_dictset_value = MAKE_FUNCTION_trio$_util$$$function__3___init__(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_trio$_util$$$class__1_ConflictDetector_148, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_trio$_util$$$function__4___enter__(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_trio$_util$$$class__1_ConflictDetector_148, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19);

tmp_dictset_value = MAKE_FUNCTION_trio$_util$$$function__5___exit__(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_trio$_util$$$class__1_ConflictDetector_148, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain__msg_str_plain__held_tuple;
tmp_result = DICT_SET_ITEM(locals_trio$_util$$$class__1_ConflictDetector_148, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_called_value_4 = (PyObject *)&PyType_Type;
tmp_tuple_element_2 = mod_consts.const_str_plain_ConflictDetector;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_trio$_util$$$class__1_ConflictDetector_148;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_trio$_util->m_frame.f_lineno = 148;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_29;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_28 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_28);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_trio$_util$$$class__1_ConflictDetector_148);
locals_trio$_util$$$class__1_ConflictDetector_148 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_util$$$class__1_ConflictDetector_148);
locals_trio$_util$$$class__1_ConflictDetector_148 = NULL;
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
exception_lineno = 148;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_ConflictDetector, tmp_assign_source_28);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_30;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_73f5617bc625fbdc6052dec0fb4ec09d);

tmp_assign_source_30 = MAKE_FUNCTION_trio$_util$$$function__6_async_wraps(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_async_wraps, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_61a2f55f39dad0599daaab45957b6c25);

tmp_assign_source_31 = MAKE_FUNCTION_trio$_util$$$function__7_fixup_module_metadata(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_fixup_module_metadata, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_c881d4a2faef2f4b232713b62454afe1);

tmp_assign_source_32 = MAKE_FUNCTION_trio$_util$$$function__8__init_final_cls(tstate, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain__init_final_cls, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_3b80c2542a8cdf76453bbd3c10e25f15);

tmp_assign_source_33 = MAKE_FUNCTION_trio$_util$$$function__9__final_impl(tstate, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain__final_impl, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = module_var_accessor_trio$_util$_final_impl(tstate);
assert(!(tmp_assign_source_34 == NULL));
UPDATE_STRING_DICT0(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_final, tmp_assign_source_34);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_trio$_util$ABCMeta(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ABCMeta);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 265;

    goto try_except_handler_6;
}
tmp_assign_source_35 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_3);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_36 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_6;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_2 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_6;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_6;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_38 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_38;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_6;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_NoPublicConstructor;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_trio$_util->m_frame.f_lineno = 265;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_39;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_6;
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
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_6;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_6;
}
frame_frame_trio$_util->m_frame.f_lineno = 265;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 265;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_40;
}
branch_end_1:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_1;
tmp_called_value_6 = module_var_accessor_trio$_util$final(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_final);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;

    goto try_except_handler_6;
}
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_trio$_util$$$class__2_NoPublicConstructor_265 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_be1a163f204243de52303d4f3810208b;
tmp_res = PyObject_SetItem(locals_trio$_util$$$class__2_NoPublicConstructor_265, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_af976452c0e212c8c6c50ec8953473e8;
tmp_res = PyObject_SetItem(locals_trio$_util$$$class__2_NoPublicConstructor_265, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_NoPublicConstructor;
tmp_res = PyObject_SetItem(locals_trio$_util$$$class__2_NoPublicConstructor_265, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_265;
tmp_res = PyObject_SetItem(locals_trio$_util$$$class__2_NoPublicConstructor_265, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_8;
}
frame_frame_trio$_util$$$class__2_NoPublicConstructor_2 = MAKE_CLASS_FRAME(tstate, code_objects_082398921f52323999b9f07b70bfac12, module_trio$_util, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_util$$$class__2_NoPublicConstructor_2);
assert(Py_REFCNT(frame_frame_trio$_util$$$class__2_NoPublicConstructor_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_cad367eb468d8450c68e263ec2a7a8eb);

tmp_dictset_value = MAKE_FUNCTION_trio$_util$$$function__10___call__(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_trio$_util$$$class__2_NoPublicConstructor_265, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_11;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_412dca0b2673176d63ae9231ff7fdb04);
tmp_closure_1[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_trio$_util$$$function__11__create(tstate, tmp_annotations_11, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_trio$_util$$$class__2_NoPublicConstructor_265, mod_consts.const_str_plain__create, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util$$$class__2_NoPublicConstructor_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util$$$class__2_NoPublicConstructor_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util$$$class__2_NoPublicConstructor_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_util$$$class__2_NoPublicConstructor_2,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_trio$_util$$$class__2_NoPublicConstructor_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_8;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_trio$_util$$$class__2_NoPublicConstructor_265, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_8;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_8;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_trio$_util$$$class__2_NoPublicConstructor_265, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_8;
}
branch_no_3:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_NoPublicConstructor;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_trio$_util$$$class__2_NoPublicConstructor_265;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_trio$_util->m_frame.f_lineno = 265;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;

    goto try_except_handler_8;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_42);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_args_element_value_1 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_trio$_util$$$class__2_NoPublicConstructor_265);
locals_trio$_util$$$class__2_NoPublicConstructor_265 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_util$$$class__2_NoPublicConstructor_265);
locals_trio$_util$$$class__2_NoPublicConstructor_265 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 265;
goto try_except_handler_6;
outline_result_4:;
frame_frame_trio$_util->m_frame.f_lineno = 264;
tmp_assign_source_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_NoPublicConstructor, tmp_assign_source_41);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_43;
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_306a24b12f8a44cffce6be53c8476f26);

tmp_assign_source_43 = MAKE_FUNCTION_trio$_util$$$function__12_name_asyncgen(tstate, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_name_asyncgen, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_10;
tmp_import_name_from_10 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_10 == NULL));
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_trio$_util,
        mod_consts.const_str_plain_wraps,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_wraps);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_wraps, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_5a8929cd1ac122904afcd834fdb2d9f8);

tmp_assign_source_45 = MAKE_FUNCTION_trio$_util$$$function__14_raise_saving_context(tstate, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_raise_saving_context, tmp_assign_source_45);
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_46;
PyObject *tmp_direct_call_arg1_2;
tmp_direct_call_arg1_2 = mod_consts.const_tuple_type_Exception_tuple;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_46 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_9;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_8 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_3, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_9;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_9;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_48 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_48;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_9;
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
PyObject *tmp_assign_source_49;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_9;
}
tmp_tuple_element_7 = mod_consts.const_str_plain_MultipleExceptionError;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_trio$_util->m_frame.f_lineno = 338;
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_49;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_9;
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
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_9, tmp_default_value_2);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_9;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_9;
}
frame_frame_trio$_util->m_frame.f_lineno = 338;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 338;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_50;
}
branch_end_4:;
{
PyObject *tmp_assign_source_51;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_trio$_util$$$class__3_MultipleExceptionError_338 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_be1a163f204243de52303d4f3810208b;
tmp_res = PyObject_SetItem(locals_trio$_util$$$class__3_MultipleExceptionError_338, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_digest_f2f6c193ed8d65152ba1a2c0d635f9c8;
tmp_res = PyObject_SetItem(locals_trio$_util$$$class__3_MultipleExceptionError_338, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_MultipleExceptionError;
tmp_res = PyObject_SetItem(locals_trio$_util$$$class__3_MultipleExceptionError_338, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_338;
tmp_res = PyObject_SetItem(locals_trio$_util$$$class__3_MultipleExceptionError_338, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_11;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_trio$_util$$$class__3_MultipleExceptionError_338, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_3__bases;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_Exception_tuple;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_11;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_dictset_value = mod_consts.const_tuple_type_Exception_tuple;
tmp_res = PyObject_SetItem(locals_trio$_util$$$class__3_MultipleExceptionError_338, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_11;
}
branch_no_6:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_9 = mod_consts.const_str_plain_MultipleExceptionError;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_trio$_util$$$class__3_MultipleExceptionError_338;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_trio$_util->m_frame.f_lineno = 338;
tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto try_except_handler_11;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_52;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_51 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_51);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_trio$_util$$$class__3_MultipleExceptionError_338);
locals_trio$_util$$$class__3_MultipleExceptionError_338 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_util$$$class__3_MultipleExceptionError_338);
locals_trio$_util$$$class__3_MultipleExceptionError_338 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 338;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipleExceptionError, tmp_assign_source_51);
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
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
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_util, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_util->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_util, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_trio$_util);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_53;
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_334ba49270989215c9fb93eea6fe72ce);

tmp_assign_source_53 = MAKE_FUNCTION_trio$_util$$$function__15_raise_single_exception_from_group(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_trio$_util, (Nuitka_StringObject *)mod_consts.const_str_plain_raise_single_exception_from_group, tmp_assign_source_53);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("trio$_util", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._util" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_trio$_util);
    return module_trio$_util;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_util, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("trio$_util", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

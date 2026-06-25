/* Generated code for Python module 'anyio$_core$_tasks'
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



/* The "module_anyio$_core$_tasks" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$_core$_tasks;
PyDictObject *moduledict_anyio$_core$_tasks;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_get_async_backend;
PyObject *const_str_plain_create_cancel_scope;
PyObject *const_tuple_str_plain_shield_str_plain_deadline_tuple;
PyObject *const_str_digest_55d3af380f9078c924a24fbc6c9ebea7;
PyObject *const_str_digest_e6a79dfc73a52caf7b640502514acd92;
PyObject *const_str_digest_1cf4a71cba8620d036000da377880811;
PyObject *const_str_digest_574ae727c2a07c7fd04ce152095b1f95;
PyObject *const_str_digest_5f32b1db7b7d8b72c44cb0d893a02593;
PyObject *const_str_digest_c2d6bcfbef1db31477d4cda6b5105205;
PyObject *const_str_plain_current_time;
PyObject *const_str_plain_delay;
PyObject *const_str_plain_math;
PyObject *const_str_plain_inf;
PyObject *const_str_plain_shield;
PyObject *const_tuple_str_plain_deadline_str_plain_shield_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_cancelled_caught;
PyObject *const_str_plain_deadline;
PyObject *const_str_plain_fail_after;
PyObject *const_str_digest_da6e2a8e6845dc83c4151bb47331bc95;
PyObject *const_str_plain_current_effective_deadline;
PyObject *const_str_digest_cf0b4382a903b28aabfd6145144788d6;
PyObject *const_str_plain_create_task_group;
PyObject *const_str_digest_8afdd976874e7781ebfb50aee497cffc;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Generator_tuple;
PyObject *const_str_plain_Generator;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_contextmanager_tuple;
PyObject *const_str_plain_contextmanager;
PyObject *const_str_plain_TracebackType;
PyObject *const_str_digest_2a3fe97633bc36d52e3a717a4d5b75af;
PyObject *const_tuple_str_plain_TaskGroup_str_plain_TaskStatus_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_TaskGroup;
PyObject *const_str_plain_TaskStatus;
PyObject *const_str_plain__eventloop;
PyObject *const_tuple_str_plain_get_async_backend_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain__IgnoredTaskStatus;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_ca078cea0f8d0602e4f45edb55751e3a;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_12;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_d47f7db01a7e0e6cf069238b74a3da59;
PyObject *const_str_plain_started;
PyObject *const_str_digest_0191804d008f8fe4aed68d8d848b244b;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_TASK_STATUS_IGNORED;
PyObject *const_str_digest_61506e2d601e1480dc89470610136607;
PyObject *const_str_plain_CancelScope;
PyObject *const_int_pos_20;
PyObject *const_dict_5ee376269e2d8d72b4bcdba9abb452a8;
PyObject *const_str_plain___new__;
PyObject *const_str_digest_0a627d5f93756769ff1d845a801ac3fe;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain_cancel;
PyObject *const_str_digest_a294c20ceb9e83eaa2c2764e6ae2ed01;
PyObject *const_dict_19141050eff162b9ef06122f75e4a0a6;
PyObject *const_str_digest_122a65dfdeeff80078eb493b5d5b6100;
PyObject *const_str_plain_setter;
PyObject *const_dict_0aab55b35c695f1ba05a9b63c67ecfc5;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_plain_cancel_called;
PyObject *const_str_digest_80027fd4ed0e9519b17d4b70a656bfc1;
PyObject *const_str_digest_edcd61b194289ae45215552b7b3ddac7;
PyObject *const_str_digest_68de33e11495d5c95b18913b0fd58613;
PyObject *const_dict_8771a1d319c3c5e2d6374dfce405513e;
PyObject *const_dict_8f73b9cde33a8318ca61871af14d41c1;
PyObject *const_str_digest_823e4422998c7453d8d2c9692c379a5b;
PyObject *const_dict_80d326bc63fbaa67e542a76b8ba7ca14;
PyObject *const_str_digest_ce5f37e572732acd927f0957feb10680;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_51226861fb8ea992f196d1f3a511acd3;
PyObject *const_dict_774e480e5177592c93a81b6f1522254b;
PyObject *const_str_plain_move_on_after;
PyObject *const_dict_a389fab803381b5660cb3d11330c1d51;
PyObject *const_str_digest_ed7ef3f0a687629c3257332b56e79378;
PyObject *const_str_digest_a80285b2c064a59309f5569f8bf7ba9c;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_deadline_str_plain_shield_tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
PyObject *const_tuple_1a1bdf367f402a9d8429ae697d6d3fed_tuple;
PyObject *const_tuple_str_plain_delay_str_plain_shield_str_plain_deadline_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[94];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anyio._core._tasks"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_async_backend);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_cancel_scope);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shield_str_plain_deadline_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_55d3af380f9078c924a24fbc6c9ebea7);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6a79dfc73a52caf7b640502514acd92);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cf4a71cba8620d036000da377880811);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_574ae727c2a07c7fd04ce152095b1f95);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f32b1db7b7d8b72c44cb0d893a02593);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_c2d6bcfbef1db31477d4cda6b5105205);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_time);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_delay);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_math);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_inf);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_shield);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deadline_str_plain_shield_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancelled_caught);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_deadline);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_fail_after);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_da6e2a8e6845dc83c4151bb47331bc95);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_effective_deadline);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf0b4382a903b28aabfd6145144788d6);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_task_group);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_8afdd976874e7781ebfb50aee497cffc);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Generator_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generator);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contextmanager_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a3fe97633bc36d52e3a717a4d5b75af);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TaskGroup_str_plain_TaskStatus_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_TaskGroup);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_TaskStatus);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain__eventloop);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_async_backend_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__IgnoredTaskStatus);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca078cea0f8d0602e4f45edb55751e3a);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_int_pos_12);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_dict_d47f7db01a7e0e6cf069238b74a3da59);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_started);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_0191804d008f8fe4aed68d8d848b244b);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_TASK_STATUS_IGNORED);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_61506e2d601e1480dc89470610136607);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_CancelScope);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_int_pos_20);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_dict_5ee376269e2d8d72b4bcdba9abb452a8);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain___new__);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a627d5f93756769ff1d845a801ac3fe);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancel);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_a294c20ceb9e83eaa2c2764e6ae2ed01);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_122a65dfdeeff80078eb493b5d5b6100);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_setter);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_dict_0aab55b35c695f1ba05a9b63c67ecfc5);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancel_called);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_80027fd4ed0e9519b17d4b70a656bfc1);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_edcd61b194289ae45215552b7b3ddac7);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_68de33e11495d5c95b18913b0fd58613);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_dict_8771a1d319c3c5e2d6374dfce405513e);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_dict_8f73b9cde33a8318ca61871af14d41c1);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_823e4422998c7453d8d2c9692c379a5b);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_dict_80d326bc63fbaa67e542a76b8ba7ca14);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce5f37e572732acd927f0957feb10680);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_dict_51226861fb8ea992f196d1f3a511acd3);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_dict_774e480e5177592c93a81b6f1522254b);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_move_on_after);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_dict_a389fab803381b5660cb3d11330c1d51);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed7ef3f0a687629c3257332b56e79378);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_a80285b2c064a59309f5569f8bf7ba9c);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_deadline_str_plain_shield_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_1a1bdf367f402a9d8429ae697d6d3fed_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_delay_str_plain_shield_str_plain_deadline_tuple);
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
void checkModuleConstants_anyio$_core$_tasks(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_async_backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_async_backend);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_cancel_scope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_cancel_scope);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shield_str_plain_deadline_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_shield_str_plain_deadline_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_55d3af380f9078c924a24fbc6c9ebea7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_55d3af380f9078c924a24fbc6c9ebea7);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6a79dfc73a52caf7b640502514acd92));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e6a79dfc73a52caf7b640502514acd92);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cf4a71cba8620d036000da377880811));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cf4a71cba8620d036000da377880811);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_574ae727c2a07c7fd04ce152095b1f95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_574ae727c2a07c7fd04ce152095b1f95);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f32b1db7b7d8b72c44cb0d893a02593));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f32b1db7b7d8b72c44cb0d893a02593);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_c2d6bcfbef1db31477d4cda6b5105205));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c2d6bcfbef1db31477d4cda6b5105205);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_time);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_delay));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delay);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_math));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_math);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_inf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inf);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_shield));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shield);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deadline_str_plain_shield_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_deadline_str_plain_shield_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancelled_caught));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancelled_caught);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_deadline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deadline);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_fail_after));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fail_after);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_da6e2a8e6845dc83c4151bb47331bc95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da6e2a8e6845dc83c4151bb47331bc95);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_effective_deadline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_effective_deadline);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf0b4382a903b28aabfd6145144788d6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf0b4382a903b28aabfd6145144788d6);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_task_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_task_group);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_8afdd976874e7781ebfb50aee497cffc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8afdd976874e7781ebfb50aee497cffc);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Generator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Generator_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generator);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contextmanager_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_contextmanager_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TracebackType);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a3fe97633bc36d52e3a717a4d5b75af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a3fe97633bc36d52e3a717a4d5b75af);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TaskGroup_str_plain_TaskStatus_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TaskGroup_str_plain_TaskStatus_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_TaskGroup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TaskGroup);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_TaskStatus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TaskStatus);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain__eventloop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__eventloop);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_async_backend_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_async_backend_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__IgnoredTaskStatus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__IgnoredTaskStatus);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca078cea0f8d0602e4f45edb55751e3a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca078cea0f8d0602e4f45edb55751e3a);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_int_pos_12));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_12);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_dict_d47f7db01a7e0e6cf069238b74a3da59));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d47f7db01a7e0e6cf069238b74a3da59);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_started));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_started);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_0191804d008f8fe4aed68d8d848b244b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0191804d008f8fe4aed68d8d848b244b);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_TASK_STATUS_IGNORED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TASK_STATUS_IGNORED);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_61506e2d601e1480dc89470610136607));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61506e2d601e1480dc89470610136607);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_CancelScope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CancelScope);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_int_pos_20));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_20);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_dict_5ee376269e2d8d72b4bcdba9abb452a8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5ee376269e2d8d72b4bcdba9abb452a8);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain___new__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___new__);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a627d5f93756769ff1d845a801ac3fe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0a627d5f93756769ff1d845a801ac3fe);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancel);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_a294c20ceb9e83eaa2c2764e6ae2ed01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a294c20ceb9e83eaa2c2764e6ae2ed01);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_122a65dfdeeff80078eb493b5d5b6100));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_122a65dfdeeff80078eb493b5d5b6100);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_setter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setter);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_dict_0aab55b35c695f1ba05a9b63c67ecfc5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0aab55b35c695f1ba05a9b63c67ecfc5);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancel_called));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancel_called);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_80027fd4ed0e9519b17d4b70a656bfc1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80027fd4ed0e9519b17d4b70a656bfc1);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_edcd61b194289ae45215552b7b3ddac7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edcd61b194289ae45215552b7b3ddac7);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_68de33e11495d5c95b18913b0fd58613));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_68de33e11495d5c95b18913b0fd58613);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_dict_8771a1d319c3c5e2d6374dfce405513e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8771a1d319c3c5e2d6374dfce405513e);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_dict_8f73b9cde33a8318ca61871af14d41c1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8f73b9cde33a8318ca61871af14d41c1);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_823e4422998c7453d8d2c9692c379a5b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_823e4422998c7453d8d2c9692c379a5b);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_dict_80d326bc63fbaa67e542a76b8ba7ca14));
CHECK_OBJECT_DEEP(mod_consts.const_dict_80d326bc63fbaa67e542a76b8ba7ca14);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce5f37e572732acd927f0957feb10680));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce5f37e572732acd927f0957feb10680);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_dict_51226861fb8ea992f196d1f3a511acd3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_51226861fb8ea992f196d1f3a511acd3);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_dict_774e480e5177592c93a81b6f1522254b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_774e480e5177592c93a81b6f1522254b);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_move_on_after));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_move_on_after);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_dict_a389fab803381b5660cb3d11330c1d51));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a389fab803381b5660cb3d11330c1d51);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed7ef3f0a687629c3257332b56e79378));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed7ef3f0a687629c3257332b56e79378);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_a80285b2c064a59309f5569f8bf7ba9c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a80285b2c064a59309f5569f8bf7ba9c);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_deadline_str_plain_shield_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_deadline_str_plain_shield_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_1a1bdf367f402a9d8429ae697d6d3fed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1a1bdf367f402a9d8429ae697d6d3fed_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_delay_str_plain_shield_str_plain_deadline_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_delay_str_plain_shield_str_plain_deadline_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 6
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
static PyObject *module_var_accessor_anyio$_core$_tasks$TaskStatus(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tasks->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tasks->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_TaskStatus);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tasks->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TaskStatus);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TaskStatus, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TaskStatus);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TaskStatus, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_TaskStatus);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_TaskStatus);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TaskStatus);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_tasks$_IgnoredTaskStatus(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tasks->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tasks->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain__IgnoredTaskStatus);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tasks->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__IgnoredTaskStatus);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__IgnoredTaskStatus, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__IgnoredTaskStatus);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__IgnoredTaskStatus, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain__IgnoredTaskStatus);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain__IgnoredTaskStatus);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__IgnoredTaskStatus);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_tasks$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tasks->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tasks->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tasks->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_tasks$contextmanager(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tasks->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tasks->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tasks->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_tasks$get_async_backend(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tasks->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tasks->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tasks->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_async_backend);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_async_backend, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_async_backend);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_async_backend, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_tasks$math(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tasks->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tasks->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tasks->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_bedf7d5df683ab304ba77dbe8aba5780;
static PyCodeObject *code_objects_6cee20a205c503ff9909314f94d3f790;
static PyCodeObject *code_objects_5e0771128d47f01a33a599210885909a;
static PyCodeObject *code_objects_22037c745d96cc31f98f7738db8307b1;
static PyCodeObject *code_objects_1e861f87aa64e6f7204c828563ff09e2;
static PyCodeObject *code_objects_de6913d212c30b1005054c7103a9cf09;
static PyCodeObject *code_objects_afff3eb5eaaa7c8b28f595a45c18d252;
static PyCodeObject *code_objects_b9206b209c64afeeba2b97266a28a47b;
static PyCodeObject *code_objects_87b04c1dd3b12a8ff54de25e0e20e42c;
static PyCodeObject *code_objects_31119a8b7a9d3f27a8e5a6b3a2001d25;
static PyCodeObject *code_objects_c21674c20cd7678ab4216195c0590b86;
static PyCodeObject *code_objects_8832b41926b4bfb39330519698dbe3fb;
static PyCodeObject *code_objects_804abd23509d00e4f3ab612dddd6f833;
static PyCodeObject *code_objects_9dec1982f4fff2aa046b18d7187c9e3e;
static PyCodeObject *code_objects_0090e2dd38f60c3ced73c15f5a315793;
static PyCodeObject *code_objects_058d59fd184257f77bd4edabae24a99c;
static PyCodeObject *code_objects_3f9e615654d124d3984f193de19b7e76;
static PyCodeObject *code_objects_ab93e2ad2641ea5d691aeb38ee966c40;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ed7ef3f0a687629c3257332b56e79378); CHECK_OBJECT(module_filename_obj);
code_objects_bedf7d5df683ab304ba77dbe8aba5780 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a80285b2c064a59309f5569f8bf7ba9c, mod_consts.const_str_digest_a80285b2c064a59309f5569f8bf7ba9c, NULL, NULL, 0, 0, 0);
code_objects_6cee20a205c503ff9909314f94d3f790 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_CancelScope, mod_consts.const_str_plain_CancelScope, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5e0771128d47f01a33a599210885909a = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__IgnoredTaskStatus, mod_consts.const_str_plain__IgnoredTaskStatus, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_22037c745d96cc31f98f7738db8307b1 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___enter__, mod_consts.const_str_digest_823e4422998c7453d8d2c9692c379a5b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1e861f87aa64e6f7204c828563ff09e2 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___exit__, mod_consts.const_str_digest_ce5f37e572732acd927f0957feb10680, mod_consts.const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple, NULL, 4, 0, 0);
code_objects_de6913d212c30b1005054c7103a9cf09 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___new__, mod_consts.const_str_digest_0a627d5f93756769ff1d845a801ac3fe, mod_consts.const_tuple_str_plain_cls_str_plain_deadline_str_plain_shield_tuple, NULL, 1, 2, 0);
code_objects_afff3eb5eaaa7c8b28f595a45c18d252 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cancel, mod_consts.const_str_digest_a294c20ceb9e83eaa2c2764e6ae2ed01, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b9206b209c64afeeba2b97266a28a47b = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cancel_called, mod_consts.const_str_digest_80027fd4ed0e9519b17d4b70a656bfc1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_87b04c1dd3b12a8ff54de25e0e20e42c = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cancelled_caught, mod_consts.const_str_digest_edcd61b194289ae45215552b7b3ddac7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_31119a8b7a9d3f27a8e5a6b3a2001d25 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_create_task_group, mod_consts.const_str_plain_create_task_group, NULL, NULL, 0, 0, 0);
code_objects_c21674c20cd7678ab4216195c0590b86 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_current_effective_deadline, mod_consts.const_str_plain_current_effective_deadline, NULL, NULL, 0, 0, 0);
code_objects_8832b41926b4bfb39330519698dbe3fb = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_deadline, mod_consts.const_str_digest_122a65dfdeeff80078eb493b5d5b6100, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_804abd23509d00e4f3ab612dddd6f833 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_deadline, mod_consts.const_str_digest_122a65dfdeeff80078eb493b5d5b6100, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_9dec1982f4fff2aa046b18d7187c9e3e = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_fail_after, mod_consts.const_str_plain_fail_after, mod_consts.const_tuple_1a1bdf367f402a9d8429ae697d6d3fed_tuple, NULL, 2, 0, 0);
code_objects_0090e2dd38f60c3ced73c15f5a315793 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_move_on_after, mod_consts.const_str_plain_move_on_after, mod_consts.const_tuple_str_plain_delay_str_plain_shield_str_plain_deadline_tuple, NULL, 2, 0, 0);
code_objects_058d59fd184257f77bd4edabae24a99c = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_shield, mod_consts.const_str_digest_68de33e11495d5c95b18913b0fd58613, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3f9e615654d124d3984f193de19b7e76 = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_shield, mod_consts.const_str_digest_68de33e11495d5c95b18913b0fd58613, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_ab93e2ad2641ea5d691aeb38ee966c40 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_started, mod_consts.const_str_digest_0191804d008f8fe4aed68d8d848b244b, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_anyio$_core$_tasks$$$function__12_fail_after$$$genobj__1_fail_after(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__10___enter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__11___exit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__12_fail_after(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__13_move_on_after(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__14_current_effective_deadline(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__15_create_task_group(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__1_started(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__2___new__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__3_cancel(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__4_deadline(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__5_deadline(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__6_cancel_called(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__7_cancelled_caught(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__8_shield(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__9_shield(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anyio$_core$_tasks$$$function__2___new__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_deadline = python_pars[1];
PyObject *par_shield = python_pars[2];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$function__2___new__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tasks$$$function__2___new__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tasks$$$function__2___new__)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tasks$$$function__2___new__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tasks$$$function__2___new__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tasks$$$function__2___new__ = MAKE_FUNCTION_FRAME(tstate, code_objects_de6913d212c30b1005054c7103a9cf09, module_anyio$_core$_tasks, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tasks$$$function__2___new__->m_type_description == NULL);
frame_frame_anyio$_core$_tasks$$$function__2___new__ = cache_frame_frame_anyio$_core$_tasks$$$function__2___new__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$function__2___new__);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$function__2___new__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_called_value_2 = module_var_accessor_anyio$_core$_tasks$get_async_backend(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_anyio$_core$_tasks$$$function__2___new__->m_frame.f_lineno = 31;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create_cancel_scope);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_shield);
tmp_kw_call_value_0_1 = par_shield;
CHECK_OBJECT(par_deadline);
tmp_kw_call_value_1_1 = par_deadline;
frame_frame_anyio$_core$_tasks$$$function__2___new__->m_frame.f_lineno = 31;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_shield_str_plain_deadline_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$function__2___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$function__2___new__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$function__2___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$function__2___new__,
    type_description_1,
    par_cls,
    par_deadline,
    par_shield
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tasks$$$function__2___new__ == cache_frame_frame_anyio$_core$_tasks$$$function__2___new__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tasks$$$function__2___new__);
    cache_frame_frame_anyio$_core$_tasks$$$function__2___new__ = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tasks$$$function__2___new__);

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
CHECK_OBJECT(par_deadline);
Py_DECREF(par_deadline);
CHECK_OBJECT(par_shield);
Py_DECREF(par_shield);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_deadline);
Py_DECREF(par_deadline);
CHECK_OBJECT(par_shield);
Py_DECREF(par_shield);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_tasks$$$function__3_cancel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$function__3_cancel;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tasks$$$function__3_cancel = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tasks$$$function__3_cancel)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tasks$$$function__3_cancel);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tasks$$$function__3_cancel == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tasks$$$function__3_cancel = MAKE_FUNCTION_FRAME(tstate, code_objects_afff3eb5eaaa7c8b28f595a45c18d252, module_anyio$_core$_tasks, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tasks$$$function__3_cancel->m_type_description == NULL);
frame_frame_anyio$_core$_tasks$$$function__3_cancel = cache_frame_frame_anyio$_core$_tasks$$$function__3_cancel;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$function__3_cancel);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$function__3_cancel) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 35;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$function__3_cancel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$function__3_cancel->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$function__3_cancel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$function__3_cancel,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tasks$$$function__3_cancel == cache_frame_frame_anyio$_core$_tasks$$$function__3_cancel) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tasks$$$function__3_cancel);
    cache_frame_frame_anyio$_core$_tasks$$$function__3_cancel = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tasks$$$function__3_cancel);

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


static PyObject *impl_anyio$_core$_tasks$$$function__4_deadline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$function__4_deadline;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tasks$$$function__4_deadline = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tasks$$$function__4_deadline)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tasks$$$function__4_deadline);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tasks$$$function__4_deadline == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tasks$$$function__4_deadline = MAKE_FUNCTION_FRAME(tstate, code_objects_8832b41926b4bfb39330519698dbe3fb, module_anyio$_core$_tasks, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tasks$$$function__4_deadline->m_type_description == NULL);
frame_frame_anyio$_core$_tasks$$$function__4_deadline = cache_frame_frame_anyio$_core$_tasks$$$function__4_deadline;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$function__4_deadline);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$function__4_deadline) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 45;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$function__4_deadline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$function__4_deadline->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$function__4_deadline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$function__4_deadline,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tasks$$$function__4_deadline == cache_frame_frame_anyio$_core$_tasks$$$function__4_deadline) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tasks$$$function__4_deadline);
    cache_frame_frame_anyio$_core$_tasks$$$function__4_deadline = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tasks$$$function__4_deadline);

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


static PyObject *impl_anyio$_core$_tasks$$$function__5_deadline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$function__5_deadline;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tasks$$$function__5_deadline = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tasks$$$function__5_deadline)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tasks$$$function__5_deadline);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tasks$$$function__5_deadline == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tasks$$$function__5_deadline = MAKE_FUNCTION_FRAME(tstate, code_objects_804abd23509d00e4f3ab612dddd6f833, module_anyio$_core$_tasks, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tasks$$$function__5_deadline->m_type_description == NULL);
frame_frame_anyio$_core$_tasks$$$function__5_deadline = cache_frame_frame_anyio$_core$_tasks$$$function__5_deadline;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$function__5_deadline);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$function__5_deadline) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 49;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$function__5_deadline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$function__5_deadline->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$function__5_deadline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$function__5_deadline,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tasks$$$function__5_deadline == cache_frame_frame_anyio$_core$_tasks$$$function__5_deadline) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tasks$$$function__5_deadline);
    cache_frame_frame_anyio$_core$_tasks$$$function__5_deadline = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tasks$$$function__5_deadline);

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

}


static PyObject *impl_anyio$_core$_tasks$$$function__6_cancel_called(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$function__6_cancel_called;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tasks$$$function__6_cancel_called = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tasks$$$function__6_cancel_called)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tasks$$$function__6_cancel_called);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tasks$$$function__6_cancel_called == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tasks$$$function__6_cancel_called = MAKE_FUNCTION_FRAME(tstate, code_objects_b9206b209c64afeeba2b97266a28a47b, module_anyio$_core$_tasks, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tasks$$$function__6_cancel_called->m_type_description == NULL);
frame_frame_anyio$_core$_tasks$$$function__6_cancel_called = cache_frame_frame_anyio$_core$_tasks$$$function__6_cancel_called;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$function__6_cancel_called);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$function__6_cancel_called) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 54;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$function__6_cancel_called, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$function__6_cancel_called->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$function__6_cancel_called, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$function__6_cancel_called,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tasks$$$function__6_cancel_called == cache_frame_frame_anyio$_core$_tasks$$$function__6_cancel_called) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tasks$$$function__6_cancel_called);
    cache_frame_frame_anyio$_core$_tasks$$$function__6_cancel_called = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tasks$$$function__6_cancel_called);

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


static PyObject *impl_anyio$_core$_tasks$$$function__7_cancelled_caught(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught = MAKE_FUNCTION_FRAME(tstate, code_objects_87b04c1dd3b12a8ff54de25e0e20e42c, module_anyio$_core$_tasks, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught->m_type_description == NULL);
frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught = cache_frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 67;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught == cache_frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught);
    cache_frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tasks$$$function__7_cancelled_caught);

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


static PyObject *impl_anyio$_core$_tasks$$$function__8_shield(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$function__8_shield;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tasks$$$function__8_shield = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tasks$$$function__8_shield)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tasks$$$function__8_shield);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tasks$$$function__8_shield == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tasks$$$function__8_shield = MAKE_FUNCTION_FRAME(tstate, code_objects_058d59fd184257f77bd4edabae24a99c, module_anyio$_core$_tasks, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tasks$$$function__8_shield->m_type_description == NULL);
frame_frame_anyio$_core$_tasks$$$function__8_shield = cache_frame_frame_anyio$_core$_tasks$$$function__8_shield;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$function__8_shield);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$function__8_shield) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 77;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$function__8_shield, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$function__8_shield->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$function__8_shield, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$function__8_shield,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tasks$$$function__8_shield == cache_frame_frame_anyio$_core$_tasks$$$function__8_shield) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tasks$$$function__8_shield);
    cache_frame_frame_anyio$_core$_tasks$$$function__8_shield = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tasks$$$function__8_shield);

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


static PyObject *impl_anyio$_core$_tasks$$$function__9_shield(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$function__9_shield;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tasks$$$function__9_shield = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tasks$$$function__9_shield)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tasks$$$function__9_shield);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tasks$$$function__9_shield == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tasks$$$function__9_shield = MAKE_FUNCTION_FRAME(tstate, code_objects_3f9e615654d124d3984f193de19b7e76, module_anyio$_core$_tasks, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tasks$$$function__9_shield->m_type_description == NULL);
frame_frame_anyio$_core$_tasks$$$function__9_shield = cache_frame_frame_anyio$_core$_tasks$$$function__9_shield;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$function__9_shield);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$function__9_shield) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 81;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$function__9_shield, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$function__9_shield->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$function__9_shield, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$function__9_shield,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tasks$$$function__9_shield == cache_frame_frame_anyio$_core$_tasks$$$function__9_shield) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tasks$$$function__9_shield);
    cache_frame_frame_anyio$_core$_tasks$$$function__9_shield = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tasks$$$function__9_shield);

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

}


static PyObject *impl_anyio$_core$_tasks$$$function__10___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$function__10___enter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tasks$$$function__10___enter__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tasks$$$function__10___enter__)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tasks$$$function__10___enter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tasks$$$function__10___enter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tasks$$$function__10___enter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_22037c745d96cc31f98f7738db8307b1, module_anyio$_core$_tasks, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tasks$$$function__10___enter__->m_type_description == NULL);
frame_frame_anyio$_core$_tasks$$$function__10___enter__ = cache_frame_frame_anyio$_core$_tasks$$$function__10___enter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$function__10___enter__);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$function__10___enter__) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 84;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$function__10___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$function__10___enter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$function__10___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$function__10___enter__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tasks$$$function__10___enter__ == cache_frame_frame_anyio$_core$_tasks$$$function__10___enter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tasks$$$function__10___enter__);
    cache_frame_frame_anyio$_core$_tasks$$$function__10___enter__ = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tasks$$$function__10___enter__);

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


static PyObject *impl_anyio$_core$_tasks$$$function__11___exit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_exc_type = python_pars[1];
PyObject *par_exc_val = python_pars[2];
PyObject *par_exc_tb = python_pars[3];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$function__11___exit__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tasks$$$function__11___exit__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tasks$$$function__11___exit__)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tasks$$$function__11___exit__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tasks$$$function__11___exit__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tasks$$$function__11___exit__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1e861f87aa64e6f7204c828563ff09e2, module_anyio$_core$_tasks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tasks$$$function__11___exit__->m_type_description == NULL);
frame_frame_anyio$_core$_tasks$$$function__11___exit__ = cache_frame_frame_anyio$_core$_tasks$$$function__11___exit__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$function__11___exit__);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$function__11___exit__) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$function__11___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$function__11___exit__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$function__11___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$function__11___exit__,
    type_description_1,
    par_self,
    par_exc_type,
    par_exc_val,
    par_exc_tb
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tasks$$$function__11___exit__ == cache_frame_frame_anyio$_core$_tasks$$$function__11___exit__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tasks$$$function__11___exit__);
    cache_frame_frame_anyio$_core$_tasks$$$function__11___exit__ = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tasks$$$function__11___exit__);

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
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
CHECK_OBJECT(par_exc_val);
Py_DECREF(par_exc_val);
CHECK_OBJECT(par_exc_tb);
Py_DECREF(par_exc_tb);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_anyio$_core$_tasks$$$function__12_fail_after(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_delay = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_shield = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_delay;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_shield;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_anyio$_core$_tasks$$$function__12_fail_after$$$genobj__1_fail_after(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_delay);
CHECK_OBJECT(par_delay);
Py_DECREF(par_delay);
par_delay = NULL;
CHECK_OBJECT(par_shield);
CHECK_OBJECT(par_shield);
Py_DECREF(par_shield);
par_shield = NULL;
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
struct anyio$_core$_tasks$$$function__12_fail_after$$$genobj__1_fail_after_locals {
PyObject *var_current_time;
PyObject *var_deadline;
PyObject *var_cancel_scope;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
};
#endif

static PyObject *anyio$_core$_tasks$$$function__12_fail_after$$$genobj__1_fail_after_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tasks$$$function__12_fail_after$$$genobj__1_fail_after_locals *generator_heap = (struct anyio$_core$_tasks$$$function__12_fail_after$$$genobj__1_fail_after_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_current_time = NULL;
generator_heap->var_deadline = NULL;
generator_heap->var_cancel_scope = NULL;
generator_heap->tmp_with_1__enter = NULL;
generator_heap->tmp_with_1__exit = NULL;
generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_1__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_9dec1982f4fff2aa046b18d7187c9e3e, module_anyio$_core$_tasks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tasks$get_async_backend(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 110;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_current_time);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_current_time == NULL);
generator_heap->var_current_time = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_delay);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(generator_heap->var_current_time);
tmp_called_value_2 = generator_heap->var_current_time;
generator->m_frame->m_frame.f_lineno = 111;
tmp_add_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_add_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_delay);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_expression_value_2 = module_var_accessor_anyio$_core$_tasks$math(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_inf);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 111;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(generator_heap->var_deadline == NULL);
generator_heap->var_deadline = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_called_value_4 = module_var_accessor_anyio$_core$_tasks$get_async_backend(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 112;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_create_cancel_scope);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_deadline);
tmp_kw_call_value_0_1 = generator_heap->var_deadline;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_shield);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 113;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}

tmp_kw_call_value_1_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 112;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_deadline_str_plain_shield_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__source == NULL);
generator_heap->tmp_with_1__source = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_4 = generator_heap->tmp_with_1__source;
tmp_called_value_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 112;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__enter == NULL);
generator_heap->tmp_with_1__enter = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_5 = generator_heap->tmp_with_1__source;
tmp_assign_source_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___exit__);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__exit == NULL);
generator_heap->tmp_with_1__exit = tmp_assign_source_5;
}
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
tmp_assign_source_7 = generator_heap->tmp_with_1__enter;
assert(generator_heap->var_cancel_scope == NULL);
Py_INCREF(tmp_assign_source_7);
generator_heap->var_cancel_scope = tmp_assign_source_7;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_6;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_cancel_scope);
tmp_expression_value_6 = generator_heap->var_cancel_scope;
Py_INCREF(tmp_expression_value_6);
generator->m_yield_return_index = 1;
return tmp_expression_value_6;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 115;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_2 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_8;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_6 = generator_heap->tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 112;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 112;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 112;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccooo";
goto try_except_handler_5;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_1;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_7 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 112;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_3);

generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_2;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_8 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 112;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 112;
generator_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
Py_XDECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
CHECK_OBJECT(generator_heap->tmp_with_1__source);
Py_DECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
Py_DECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
Py_DECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(generator_heap->var_cancel_scope);
tmp_expression_value_7 = generator_heap->var_cancel_scope;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_cancelled_caught);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 117;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

generator_heap->exception_lineno = 117;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 117;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(generator_heap->var_current_time);
tmp_called_value_9 = generator_heap->var_current_time;
generator->m_frame->m_frame.f_lineno = 117;
tmp_cmp_expr_left_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 117;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_cancel_scope);
tmp_expression_value_8 = generator_heap->var_cancel_scope;
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_deadline);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

generator_heap->exception_lineno = 117;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 117;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_6 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
tmp_raise_type_input_1 = PyExc_TimeoutError;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 118;
generator_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 118;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccooo";
goto frame_exception_exit_1;
}
branch_no_5:;

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
    generator_heap->var_current_time,
    generator_heap->var_deadline,
    generator_heap->var_cancel_scope
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
goto try_end_5;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_current_time);
generator_heap->var_current_time = NULL;
Py_XDECREF(generator_heap->var_deadline);
generator_heap->var_deadline = NULL;
Py_XDECREF(generator_heap->var_cancel_scope);
generator_heap->var_cancel_scope = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:
try_end_5:;
CHECK_OBJECT(generator_heap->var_current_time);
CHECK_OBJECT(generator_heap->var_current_time);
Py_DECREF(generator_heap->var_current_time);
generator_heap->var_current_time = NULL;
CHECK_OBJECT(generator_heap->var_deadline);
CHECK_OBJECT(generator_heap->var_deadline);
Py_DECREF(generator_heap->var_deadline);
generator_heap->var_deadline = NULL;
CHECK_OBJECT(generator_heap->var_cancel_scope);
CHECK_OBJECT(generator_heap->var_cancel_scope);
Py_DECREF(generator_heap->var_cancel_scope);
generator_heap->var_cancel_scope = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_anyio$_core$_tasks$$$function__12_fail_after$$$genobj__1_fail_after(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anyio$_core$_tasks$$$function__12_fail_after$$$genobj__1_fail_after_context,
        module_anyio$_core$_tasks,
        mod_consts.const_str_plain_fail_after,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_9dec1982f4fff2aa046b18d7187c9e3e,
        closure,
        2,
#if 1
        sizeof(struct anyio$_core$_tasks$$$function__12_fail_after$$$genobj__1_fail_after_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tasks$$$function__13_move_on_after(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_delay = python_pars[0];
PyObject *par_shield = python_pars[1];
PyObject *var_deadline = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$function__13_move_on_after;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tasks$$$function__13_move_on_after = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tasks$$$function__13_move_on_after)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tasks$$$function__13_move_on_after);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tasks$$$function__13_move_on_after == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tasks$$$function__13_move_on_after = MAKE_FUNCTION_FRAME(tstate, code_objects_0090e2dd38f60c3ced73c15f5a315793, module_anyio$_core$_tasks, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tasks$$$function__13_move_on_after->m_type_description == NULL);
frame_frame_anyio$_core$_tasks$$$function__13_move_on_after = cache_frame_frame_anyio$_core$_tasks$$$function__13_move_on_after;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$function__13_move_on_after);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$function__13_move_on_after) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_delay);
tmp_cmp_expr_left_1 = par_delay;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tasks$get_async_backend(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_anyio$_core$_tasks$$$function__13_move_on_after->m_frame.f_lineno = 132;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_anyio$_core$_tasks$$$function__13_move_on_after->m_frame.f_lineno = 132;
tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_time);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_delay);
tmp_add_expr_right_1 = par_delay;
tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_expression_value_1 = module_var_accessor_anyio$_core$_tasks$math(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_inf);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_deadline == NULL);
var_deadline = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_called_value_3 = module_var_accessor_anyio$_core$_tasks$get_async_backend(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_anyio$_core$_tasks$$$function__13_move_on_after->m_frame.f_lineno = 134;
tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_create_cancel_scope);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_deadline);
tmp_kw_call_value_0_1 = var_deadline;
CHECK_OBJECT(par_shield);
tmp_kw_call_value_1_1 = par_shield;
frame_frame_anyio$_core$_tasks$$$function__13_move_on_after->m_frame.f_lineno = 134;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_deadline_str_plain_shield_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$function__13_move_on_after, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$function__13_move_on_after->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$function__13_move_on_after, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$function__13_move_on_after,
    type_description_1,
    par_delay,
    par_shield,
    var_deadline
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tasks$$$function__13_move_on_after == cache_frame_frame_anyio$_core$_tasks$$$function__13_move_on_after) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tasks$$$function__13_move_on_after);
    cache_frame_frame_anyio$_core$_tasks$$$function__13_move_on_after = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tasks$$$function__13_move_on_after);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_deadline);
CHECK_OBJECT(var_deadline);
Py_DECREF(var_deadline);
var_deadline = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_deadline);
var_deadline = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_delay);
Py_DECREF(par_delay);
CHECK_OBJECT(par_shield);
Py_DECREF(par_shield);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_delay);
Py_DECREF(par_delay);
CHECK_OBJECT(par_shield);
Py_DECREF(par_shield);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_tasks$$$function__14_current_effective_deadline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline = MAKE_FUNCTION_FRAME(tstate, code_objects_c21674c20cd7678ab4216195c0590b86, module_anyio$_core$_tasks, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline->m_type_description == NULL);
frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline = cache_frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tasks$get_async_backend(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;

    goto frame_exception_exit_1;
}
frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline->m_frame.f_lineno = 148;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto frame_exception_exit_1;
}
frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline->m_frame.f_lineno = 148;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_effective_deadline);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline == cache_frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline);
    cache_frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tasks$$$function__14_current_effective_deadline);

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


static PyObject *impl_anyio$_core$_tasks$$$function__15_create_task_group(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$function__15_create_task_group;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tasks$$$function__15_create_task_group = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tasks$$$function__15_create_task_group)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tasks$$$function__15_create_task_group);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tasks$$$function__15_create_task_group == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tasks$$$function__15_create_task_group = MAKE_FUNCTION_FRAME(tstate, code_objects_31119a8b7a9d3f27a8e5a6b3a2001d25, module_anyio$_core$_tasks, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tasks$$$function__15_create_task_group->m_type_description == NULL);
frame_frame_anyio$_core$_tasks$$$function__15_create_task_group = cache_frame_frame_anyio$_core$_tasks$$$function__15_create_task_group;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$function__15_create_task_group);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$function__15_create_task_group) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tasks$get_async_backend(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;

    goto frame_exception_exit_1;
}
frame_frame_anyio$_core$_tasks$$$function__15_create_task_group->m_frame.f_lineno = 158;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto frame_exception_exit_1;
}
frame_frame_anyio$_core$_tasks$$$function__15_create_task_group->m_frame.f_lineno = 158;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_create_task_group);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$function__15_create_task_group, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$function__15_create_task_group->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$function__15_create_task_group, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$function__15_create_task_group,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tasks$$$function__15_create_task_group == cache_frame_frame_anyio$_core$_tasks$$$function__15_create_task_group) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tasks$$$function__15_create_task_group);
    cache_frame_frame_anyio$_core$_tasks$$$function__15_create_task_group = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tasks$$$function__15_create_task_group);

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



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__10___enter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__10___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_823e4422998c7453d8d2c9692c379a5b,
#endif
        code_objects_22037c745d96cc31f98f7738db8307b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__11___exit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__11___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ce5f37e572732acd927f0957feb10680,
#endif
        code_objects_1e861f87aa64e6f7204c828563ff09e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__12_fail_after(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__12_fail_after,
        mod_consts.const_str_plain_fail_after,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9dec1982f4fff2aa046b18d7187c9e3e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts.const_str_digest_c2d6bcfbef1db31477d4cda6b5105205,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__13_move_on_after(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__13_move_on_after,
        mod_consts.const_str_plain_move_on_after,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0090e2dd38f60c3ced73c15f5a315793,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts.const_str_digest_da6e2a8e6845dc83c4151bb47331bc95,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__14_current_effective_deadline(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__14_current_effective_deadline,
        mod_consts.const_str_plain_current_effective_deadline,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c21674c20cd7678ab4216195c0590b86,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts.const_str_digest_cf0b4382a903b28aabfd6145144788d6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__15_create_task_group(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__15_create_task_group,
        mod_consts.const_str_plain_create_task_group,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_31119a8b7a9d3f27a8e5a6b3a2001d25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts.const_str_digest_8afdd976874e7781ebfb50aee497cffc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__1_started(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_started,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0191804d008f8fe4aed68d8d848b244b,
#endif
        code_objects_ab93e2ad2641ea5d691aeb38ee966c40,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__2___new__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__2___new__,
        mod_consts.const_str_plain___new__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0a627d5f93756769ff1d845a801ac3fe,
#endif
        code_objects_de6913d212c30b1005054c7103a9cf09,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_tasks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__3_cancel(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__3_cancel,
        mod_consts.const_str_plain_cancel,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a294c20ceb9e83eaa2c2764e6ae2ed01,
#endif
        code_objects_afff3eb5eaaa7c8b28f595a45c18d252,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts.const_str_digest_55d3af380f9078c924a24fbc6c9ebea7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__4_deadline(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__4_deadline,
        mod_consts.const_str_plain_deadline,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_122a65dfdeeff80078eb493b5d5b6100,
#endif
        code_objects_8832b41926b4bfb39330519698dbe3fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts.const_str_digest_e6a79dfc73a52caf7b640502514acd92,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__5_deadline(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__5_deadline,
        mod_consts.const_str_plain_deadline,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_122a65dfdeeff80078eb493b5d5b6100,
#endif
        code_objects_804abd23509d00e4f3ab612dddd6f833,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__6_cancel_called(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__6_cancel_called,
        mod_consts.const_str_plain_cancel_called,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_80027fd4ed0e9519b17d4b70a656bfc1,
#endif
        code_objects_b9206b209c64afeeba2b97266a28a47b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts.const_str_digest_1cf4a71cba8620d036000da377880811,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__7_cancelled_caught(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__7_cancelled_caught,
        mod_consts.const_str_plain_cancelled_caught,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_edcd61b194289ae45215552b7b3ddac7,
#endif
        code_objects_87b04c1dd3b12a8ff54de25e0e20e42c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts.const_str_digest_574ae727c2a07c7fd04ce152095b1f95,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__8_shield(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__8_shield,
        mod_consts.const_str_plain_shield,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_68de33e11495d5c95b18913b0fd58613,
#endif
        code_objects_058d59fd184257f77bd4edabae24a99c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
        mod_consts.const_str_digest_5f32b1db7b7d8b72c44cb0d893a02593,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tasks$$$function__9_shield(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tasks$$$function__9_shield,
        mod_consts.const_str_plain_shield,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_68de33e11495d5c95b18913b0fd58613,
#endif
        code_objects_3f9e615654d124d3984f193de19b7e76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tasks,
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

static function_impl_code const function_table_anyio$_core$_tasks[] = {
impl_anyio$_core$_tasks$$$function__2___new__,
impl_anyio$_core$_tasks$$$function__3_cancel,
impl_anyio$_core$_tasks$$$function__4_deadline,
impl_anyio$_core$_tasks$$$function__5_deadline,
impl_anyio$_core$_tasks$$$function__6_cancel_called,
impl_anyio$_core$_tasks$$$function__7_cancelled_caught,
impl_anyio$_core$_tasks$$$function__8_shield,
impl_anyio$_core$_tasks$$$function__9_shield,
impl_anyio$_core$_tasks$$$function__10___enter__,
impl_anyio$_core$_tasks$$$function__11___exit__,
impl_anyio$_core$_tasks$$$function__12_fail_after,
impl_anyio$_core$_tasks$$$function__13_move_on_after,
impl_anyio$_core$_tasks$$$function__14_current_effective_deadline,
impl_anyio$_core$_tasks$$$function__15_create_task_group,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anyio$_core$_tasks);
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
        module_anyio$_core$_tasks,
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
        function_table_anyio$_core$_tasks,
        sizeof(function_table_anyio$_core$_tasks) / sizeof(function_impl_code)
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
static char const *module_full_name = "anyio._core._tasks";
#endif

// Internal entry point for module code.
PyObject *module_code_anyio$_core$_tasks(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio$_core$_tasks");

    // Store the module for future use.
    module_anyio$_core$_tasks = module;

    moduledict_anyio$_core$_tasks = MODULE_DICT(module_anyio$_core$_tasks);

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
        PRINT_STRING("anyio$_core$_tasks: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio$_core$_tasks: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anyio$_core$_tasks: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio._core._tasks" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanyio$_core$_tasks\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$_core$_tasks,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$_core$_tasks,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$_core$_tasks,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$_core$_tasks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$_core$_tasks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$_core$_tasks);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anyio$_core$_tasks);
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

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_12 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_anyio$_core$_tasks$$$class__2_CancelScope_20 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3;
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
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anyio$_core$_tasks = MAKE_MODULE_FRAME(code_objects_bedf7d5df683ab304ba77dbe8aba5780, module_anyio$_core$_tasks);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anyio$_core$_tasks$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anyio$_core$_tasks$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_math;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$_core$_tasks;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_anyio$_core$_tasks->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_math, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$_core$_tasks;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Generator_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_anyio$_core$_tasks->m_frame.f_lineno = 4;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anyio$_core$_tasks,
        mod_consts.const_str_plain_Generator,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Generator);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_Generator, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio$_core$_tasks;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_contextmanager_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_anyio$_core$_tasks->m_frame.f_lineno = 5;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anyio$_core$_tasks,
        mod_consts.const_str_plain_contextmanager,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_contextmanager);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
tmp_import_name_from_3 = IMPORT_HARD_TYPES();
assert(!(tmp_import_name_from_3 == NULL));
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anyio$_core$_tasks,
        mod_consts.const_str_plain_TracebackType,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_TracebackType);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_TracebackType, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_2a3fe97633bc36d52e3a717a4d5b75af;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anyio$_core$_tasks;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_TaskGroup_str_plain_TaskStatus_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_anyio$_core$_tasks->m_frame.f_lineno = 8;
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
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anyio$_core$_tasks,
        mod_consts.const_str_plain_TaskGroup,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_TaskGroup);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_TaskGroup, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anyio$_core$_tasks,
        mod_consts.const_str_plain_TaskStatus,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_TaskStatus);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_TaskStatus, tmp_assign_source_11);
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
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__eventloop;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anyio$_core$_tasks;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_get_async_backend_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_anyio$_core$_tasks->m_frame.f_lineno = 9;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anyio$_core$_tasks,
        mod_consts.const_str_plain_get_async_backend,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_get_async_backend);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend, tmp_assign_source_12);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_anyio$_core$_tasks$TaskStatus(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TaskStatus);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto try_except_handler_2;
}
tmp_subscript_value_1 = (PyObject *)&PyBaseObject_Type;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
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


exception_lineno = 12;

    goto try_except_handler_2;
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
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

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
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
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


exception_lineno = 12;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_16;
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


exception_lineno = 12;

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
PyObject *tmp_assign_source_17;
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


exception_lineno = 12;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain__IgnoredTaskStatus;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anyio$_core$_tasks->m_frame.f_lineno = 12;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_17;
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


exception_lineno = 12;

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


exception_lineno = 12;

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


exception_lineno = 12;

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


exception_lineno = 12;

    goto try_except_handler_2;
}
frame_frame_anyio$_core$_tasks->m_frame.f_lineno = 12;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 12;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
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
locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_12 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ca078cea0f8d0602e4f45edb55751e3a;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_12, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain__IgnoredTaskStatus;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_12, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_12;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_12, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
frame_frame_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_2 = MAKE_CLASS_FRAME(tstate, code_objects_5e0771128d47f01a33a599210885909a, module_anyio$_core$_tasks, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_2);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_d47f7db01a7e0e6cf069238b74a3da59);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tasks$$$function__1_started(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_12, mod_consts.const_str_plain_started, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_12, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

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


exception_lineno = 12;

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
tmp_res = PyObject_SetItem(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_12, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain__IgnoredTaskStatus;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_12;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anyio$_core$_tasks->m_frame.f_lineno = 12;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_20;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_19 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_19);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_12);
locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_12 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_12);
locals_anyio$_core$_tasks$$$class__1__IgnoredTaskStatus_12 = NULL;
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
exception_lineno = 12;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain__IgnoredTaskStatus, tmp_assign_source_19);
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
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_anyio$_core$_tasks$_IgnoredTaskStatus(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__IgnoredTaskStatus);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;

    goto frame_exception_exit_1;
}
frame_frame_anyio$_core$_tasks->m_frame.f_lineno = 17;
tmp_assign_source_21 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_TASK_STATUS_IGNORED, tmp_assign_source_21);
}
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_anyio$_core$_tasks$$$class__2_CancelScope_20 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_ca078cea0f8d0602e4f45edb55751e3a;
tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_61506e2d601e1480dc89470610136607;
tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_CancelScope;
tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_20;
tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3 = MAKE_CLASS_FRAME(tstate, code_objects_6cee20a205c503ff9909314f94d3f790, module_anyio$_core$_tasks, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3);
assert(Py_REFCNT(frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3) == 2);

// Framed code:
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_annotations_2;
tmp_dict_key_1 = mod_consts.const_str_plain_deadline;
tmp_expression_value_8 = module_var_accessor_anyio$_core$_tasks$math(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_inf);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_kw_defaults_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_shield;
tmp_dict_value_1 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_5ee376269e2d8d72b4bcdba9abb452a8);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tasks$$$function__2___new__(tstate, tmp_kw_defaults_1, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, mod_consts.const_str_plain___new__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tasks$$$function__3_cancel(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, mod_consts.const_str_plain_cancel, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_4;
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);

tmp_args_element_value_1 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__4_deadline(tstate, tmp_annotations_4);

frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3->m_frame.f_lineno = 37;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, mod_consts.const_str_plain_deadline, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_5;
tmp_called_instance_1 = DICT_GET_ITEM0(tstate, locals_anyio$_core$_tasks$$$class__2_CancelScope_20, mod_consts.const_str_plain_deadline);

if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deadline);

exception_lineno = 47;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_0aab55b35c695f1ba05a9b63c67ecfc5);

tmp_args_element_value_2 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__5_deadline(tstate, tmp_annotations_5);

frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3->m_frame.f_lineno = 47;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_setter, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, mod_consts.const_str_plain_deadline, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_6;
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_3 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__6_cancel_called(tstate, tmp_annotations_6);

frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3->m_frame.f_lineno = 51;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, mod_consts.const_str_plain_cancel_called, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_7;
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_4 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__7_cancelled_caught(tstate, tmp_annotations_7);

frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3->m_frame.f_lineno = 56;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, mod_consts.const_str_plain_cancelled_caught, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_8;
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_5 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__8_shield(tstate, tmp_annotations_8);

frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3->m_frame.f_lineno = 69;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, mod_consts.const_str_plain_shield, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_9;
tmp_called_instance_2 = DICT_GET_ITEM0(tstate, locals_anyio$_core$_tasks$$$class__2_CancelScope_20, mod_consts.const_str_plain_shield);

if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shield);

exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_8771a1d319c3c5e2d6374dfce405513e);

tmp_args_element_value_6 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__9_shield(tstate, tmp_annotations_9);

frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3->m_frame.f_lineno = 79;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_setter, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, mod_consts.const_str_plain_shield, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_anyio$_core$_tasks$$$class__2_CancelScope_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_8f73b9cde33a8318ca61871af14d41c1);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tasks$$$function__10___enter__(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_80d326bc63fbaa67e542a76b8ba7ca14);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tasks$$$function__11___exit__(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_anyio$_core$_tasks$$$class__2_CancelScope_20, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
tmp_called_value_8 = (PyObject *)&PyType_Type;
tmp_tuple_element_5 = mod_consts.const_str_plain_CancelScope;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_anyio$_core$_tasks$$$class__2_CancelScope_20;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_anyio$_core$_tasks->m_frame.f_lineno = 20;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_25;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_24 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_24);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_anyio$_core$_tasks$$$class__2_CancelScope_20);
locals_anyio$_core$_tasks$$$class__2_CancelScope_20 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$_core$_tasks$$$class__2_CancelScope_20);
locals_anyio$_core$_tasks$$$class__2_CancelScope_20 = NULL;
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
exception_lineno = 20;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_CancelScope, tmp_assign_source_24);
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
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_7;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_12;
tmp_called_value_9 = module_var_accessor_anyio$_core$_tasks$contextmanager(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextmanager);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;

    goto frame_exception_exit_1;
}
tmp_defaults_2 = mod_consts.const_tuple_false_tuple;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_51226861fb8ea992f196d1f3a511acd3);
Py_INCREF(tmp_defaults_2);

tmp_args_element_value_7 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__12_fail_after(tstate, tmp_defaults_2, tmp_annotations_12);

frame_frame_anyio$_core$_tasks->m_frame.f_lineno = 95;
tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_fail_after, tmp_assign_source_26);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tasks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tasks->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tasks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anyio$_core$_tasks);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_13;
tmp_defaults_3 = mod_consts.const_tuple_false_tuple;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_774e480e5177592c93a81b6f1522254b);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_27 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__13_move_on_after(tstate, tmp_defaults_3, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_move_on_after, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);

tmp_assign_source_28 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__14_current_effective_deadline(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_current_effective_deadline, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_a389fab803381b5660cb3d11330c1d51);

tmp_assign_source_29 = MAKE_FUNCTION_anyio$_core$_tasks$$$function__15_create_task_group(tstate, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)mod_consts.const_str_plain_create_task_group, tmp_assign_source_29);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio$_core$_tasks", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio._core._tasks" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anyio$_core$_tasks);
    return module_anyio$_core$_tasks;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tasks, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$_core$_tasks", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

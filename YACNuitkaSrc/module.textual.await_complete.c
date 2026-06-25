/* Generated code for Python module 'textual$await_complete'
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



/* The "module_textual$await_complete" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$await_complete;
PyDictObject *moduledict_textual$await_complete;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__awaitables;
PyObject *const_str_plain_gather;
PyObject *const_str_plain__future;
PyObject *const_str_plain__pre_await;
PyObject *const_str_plain_get_caller_file_and_line;
PyObject *const_str_plain__caller;
PyObject *const_str_digest_7e328bd818cc051c0cd4064f9bfc49c2;
PyObject *const_str_plain_self;
PyObject *const_str_plain_pre_await;
PyObject *const_str_plain_caller;
PyObject *const_str_plain___rich_repr__;
PyObject *const_str_digest_f069c92cddac1544f47f04819c7069e7;
PyObject *const_str_digest_db93a185ea6571e40ccb48649d9abf3b;
PyObject *const_str_plain_call_next;
PyObject *const_str_digest_e1fc0f01d9b4872b067b43158d3a7045;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_53715c638bdf7e6edf2e2ce33a6f1d7c;
PyObject *const_str_plain___await__;
PyObject *const_str_plain_done;
PyObject *const_str_digest_c8d6f07f83e4033d521513a3f997431d;
PyObject *const_str_plain_exception;
PyObject *const_str_digest_466e3321937ac7a0216226594f782af0;
PyObject *const_str_plain_Future;
PyObject *const_str_plain_set_result;
PyObject *const_tuple_none_tuple;
PyObject *const_str_digest_aa0404cd1c4a51a4bc737a540039d1e9;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_asyncio;
PyObject *const_tuple_str_plain_Future_str_plain_gather_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Awaitable;
PyObject *const_str_plain_Generator;
PyObject *const_str_digest_0266ac3c468cbbaf99b230132943e04e;
PyObject *const_str_plain_rich;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Self_tuple;
PyObject *const_str_plain_Self;
PyObject *const_str_digest_9658aca140a7362a8aa36516dedacf67;
PyObject *const_tuple_str_plain_get_caller_file_and_line_tuple;
PyObject *const_str_digest_daf538768b16b8e3ad7fea25e6475ea0;
PyObject *const_tuple_str_plain_MessagePump_tuple;
PyObject *const_str_plain_MessagePump;
PyObject *const_str_plain_auto;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_angular_tuple;
PyObject *const_str_digest_98fe3b25fcf38bcd11c97b050a10704c;
PyObject *const_str_digest_72e1bdad9d68f60884f07274ed95a663;
PyObject *const_str_plain_AwaitComplete;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_17;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_a86e9dcdc4d21513b9c4e44e7ce9a2e1;
PyObject *const_dict_d3d2549b597685bd29a009955f1feb8d;
PyObject *const_str_digest_d1d95ba92c1b59ac3c1d2805d5c3307f;
PyObject *const_dict_a367242e045973b662a9e05f7c4b4498;
PyObject *const_dict_e46054303ce48bd08c48e3037fb38fd9;
PyObject *const_str_plain_set_pre_await_callback;
PyObject *const_str_digest_f139c9f8ae406f13fb7f68bcfc735fa7;
PyObject *const_dict_2a64e0e49207145eeed3803d8034dc7f;
PyObject *const_str_digest_c4bac17e1bebbc0494f15e840ecfc81e;
PyObject *const_dict_649327bbc9f137cd11fab40cb48175a1;
PyObject *const_dict_c7beb8949e70d1e9d550d21f59128f8c;
PyObject *const_str_digest_0e53526c0f4f0e934fdb9a3ed71af39d;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_plain_is_done;
PyObject *const_str_digest_8945a10359002234f44cf23366938db0;
PyObject *const_dict_9886bc989bd4ef336593ffab967f448c;
PyObject *const_str_digest_faed249f153c454a637d2e0344b2c4f7;
PyObject *const_str_plain_nothing;
PyObject *const_str_digest_cfc88b017de7ffcaaa5bb82c8f2131d8;
PyObject *const_tuple_ac140d38ae126fbe1e255f40e6e62c57_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_17bbe5f8a8235b8f4afde3c50590285f;
PyObject *const_str_digest_3850e9cd3284c58ffe4708fd64dc8e27;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain__rich_traceback_omit_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_pre_await_str_plain_awaitables_tuple;
PyObject *const_tuple_str_plain_self_str_plain_node_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_instance_tuple;
PyObject *const_tuple_str_plain_self_str_plain_pre_await_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[84];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.await_complete"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__awaitables);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_gather);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__future);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__pre_await);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_caller_file_and_line);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__caller);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e328bd818cc051c0cd4064f9bfc49c2);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_pre_await);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_caller);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain___rich_repr__);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_f069c92cddac1544f47f04819c7069e7);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_db93a185ea6571e40ccb48649d9abf3b);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_call_next);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1fc0f01d9b4872b067b43158d3a7045);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_53715c638bdf7e6edf2e2ce33a6f1d7c);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain___await__);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_done);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8d6f07f83e4033d521513a3f997431d);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_exception);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_466e3321937ac7a0216226594f782af0);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_Future);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_result);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa0404cd1c4a51a4bc737a540039d1e9);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Future_str_plain_gather_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generator);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Self_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_Self);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_9658aca140a7362a8aa36516dedacf67);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_caller_file_and_line_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_daf538768b16b8e3ad7fea25e6475ea0);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessagePump_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessagePump);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_auto);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_angular_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_98fe3b25fcf38bcd11c97b050a10704c);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_72e1bdad9d68f60884f07274ed95a663);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_AwaitComplete);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_int_pos_17);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_dict_a86e9dcdc4d21513b9c4e44e7ce9a2e1);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_dict_d3d2549b597685bd29a009955f1feb8d);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1d95ba92c1b59ac3c1d2805d5c3307f);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_dict_e46054303ce48bd08c48e3037fb38fd9);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_pre_await_callback);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_f139c9f8ae406f13fb7f68bcfc735fa7);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_dict_2a64e0e49207145eeed3803d8034dc7f);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4bac17e1bebbc0494f15e840ecfc81e);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_dict_c7beb8949e70d1e9d550d21f59128f8c);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e53526c0f4f0e934fdb9a3ed71af39d);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_done);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_8945a10359002234f44cf23366938db0);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_dict_9886bc989bd4ef336593ffab967f448c);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_faed249f153c454a637d2e0344b2c4f7);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_nothing);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_cfc88b017de7ffcaaa5bb82c8f2131d8);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_ac140d38ae126fbe1e255f40e6e62c57_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_17bbe5f8a8235b8f4afde3c50590285f);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_3850e9cd3284c58ffe4708fd64dc8e27);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__rich_traceback_omit_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_pre_await_str_plain_awaitables_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_node_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_instance_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_pre_await_tuple);
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
void checkModuleConstants_textual$await_complete(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__awaitables));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__awaitables);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_gather));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gather);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__future));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__future);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__pre_await));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pre_await);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_caller_file_and_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_caller_file_and_line);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__caller));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__caller);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e328bd818cc051c0cd4064f9bfc49c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e328bd818cc051c0cd4064f9bfc49c2);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_pre_await));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pre_await);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_caller));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_caller);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain___rich_repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rich_repr__);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_f069c92cddac1544f47f04819c7069e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f069c92cddac1544f47f04819c7069e7);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_db93a185ea6571e40ccb48649d9abf3b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db93a185ea6571e40ccb48649d9abf3b);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_call_next));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_call_next);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1fc0f01d9b4872b067b43158d3a7045));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e1fc0f01d9b4872b067b43158d3a7045);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_53715c638bdf7e6edf2e2ce33a6f1d7c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53715c638bdf7e6edf2e2ce33a6f1d7c);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain___await__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___await__);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_done));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_done);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8d6f07f83e4033d521513a3f997431d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8d6f07f83e4033d521513a3f997431d);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_exception));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exception);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_466e3321937ac7a0216226594f782af0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_466e3321937ac7a0216226594f782af0);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_Future));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Future);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_result);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa0404cd1c4a51a4bc737a540039d1e9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aa0404cd1c4a51a4bc737a540039d1e9);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asyncio);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Future_str_plain_gather_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Future_str_plain_gather_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Awaitable);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generator);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Self_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_Self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Self);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_9658aca140a7362a8aa36516dedacf67));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9658aca140a7362a8aa36516dedacf67);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_caller_file_and_line_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_caller_file_and_line_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_daf538768b16b8e3ad7fea25e6475ea0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_daf538768b16b8e3ad7fea25e6475ea0);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessagePump_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessagePump_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessagePump));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessagePump);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_auto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auto);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_angular_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_angular_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_98fe3b25fcf38bcd11c97b050a10704c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98fe3b25fcf38bcd11c97b050a10704c);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_72e1bdad9d68f60884f07274ed95a663));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72e1bdad9d68f60884f07274ed95a663);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_AwaitComplete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AwaitComplete);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_int_pos_17));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_17);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_dict_a86e9dcdc4d21513b9c4e44e7ce9a2e1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a86e9dcdc4d21513b9c4e44e7ce9a2e1);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_dict_d3d2549b597685bd29a009955f1feb8d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d3d2549b597685bd29a009955f1feb8d);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1d95ba92c1b59ac3c1d2805d5c3307f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1d95ba92c1b59ac3c1d2805d5c3307f);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_dict_e46054303ce48bd08c48e3037fb38fd9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e46054303ce48bd08c48e3037fb38fd9);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_pre_await_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_pre_await_callback);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_f139c9f8ae406f13fb7f68bcfc735fa7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f139c9f8ae406f13fb7f68bcfc735fa7);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_dict_2a64e0e49207145eeed3803d8034dc7f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2a64e0e49207145eeed3803d8034dc7f);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4bac17e1bebbc0494f15e840ecfc81e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4bac17e1bebbc0494f15e840ecfc81e);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_dict_c7beb8949e70d1e9d550d21f59128f8c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c7beb8949e70d1e9d550d21f59128f8c);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e53526c0f4f0e934fdb9a3ed71af39d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e53526c0f4f0e934fdb9a3ed71af39d);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_done));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_done);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_8945a10359002234f44cf23366938db0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8945a10359002234f44cf23366938db0);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_dict_9886bc989bd4ef336593ffab967f448c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9886bc989bd4ef336593ffab967f448c);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_faed249f153c454a637d2e0344b2c4f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_faed249f153c454a637d2e0344b2c4f7);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_nothing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nothing);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_cfc88b017de7ffcaaa5bb82c8f2131d8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cfc88b017de7ffcaaa5bb82c8f2131d8);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_ac140d38ae126fbe1e255f40e6e62c57_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ac140d38ae126fbe1e255f40e6e62c57_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_17bbe5f8a8235b8f4afde3c50590285f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_17bbe5f8a8235b8f4afde3c50590285f);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_3850e9cd3284c58ffe4708fd64dc8e27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3850e9cd3284c58ffe4708fd64dc8e27);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__rich_traceback_omit_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain__rich_traceback_omit_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_pre_await_str_plain_awaitables_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_pre_await_str_plain_awaitables_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_node_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_node_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_instance_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cls_str_plain_instance_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_pre_await_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_pre_await_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_textual$await_complete$Future(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$await_complete->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$await_complete->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_Future);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$await_complete->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Future);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Future, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Future);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Future, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_Future);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_Future);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Future);
    }

    return result;
}

static PyObject *module_var_accessor_textual$await_complete$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$await_complete->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$await_complete->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$await_complete->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$await_complete$gather(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$await_complete->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$await_complete->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_gather);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$await_complete->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_gather);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_gather, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_gather);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_gather, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_gather);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_gather);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_gather);
    }

    return result;
}

static PyObject *module_var_accessor_textual$await_complete$get_caller_file_and_line(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$await_complete->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$await_complete->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_get_caller_file_and_line);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$await_complete->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_caller_file_and_line);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_caller_file_and_line, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_caller_file_and_line);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_caller_file_and_line, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_get_caller_file_and_line);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_get_caller_file_and_line);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_caller_file_and_line);
    }

    return result;
}

static PyObject *module_var_accessor_textual$await_complete$rich(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$await_complete->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$await_complete->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$await_complete->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rich);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rich, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rich);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rich, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5d8c4f4d2bc4a5eb768242df4b741362;
static PyCodeObject *code_objects_40102b20ef691a6e0fdc8fbe0a99d24d;
static PyCodeObject *code_objects_31879da32dc1a2a10beac1bfa1ca556a;
static PyCodeObject *code_objects_733a911aabc59c90e0fdd5005fe2fbe6;
static PyCodeObject *code_objects_51a7e2b9c78ef33f37ff203799de27f1;
static PyCodeObject *code_objects_561e788149bd6cb9a677ad34be4d3606;
static PyCodeObject *code_objects_001c6cdfaa00aed92bb99207b53bc17c;
static PyCodeObject *code_objects_a6215b1f2b290ca14dafd38e930e4788;
static PyCodeObject *code_objects_076b3bda089854b003fb68485ee7b9ef;
static PyCodeObject *code_objects_89ed1568cdfb3be07f23bec623ab0214;
static PyCodeObject *code_objects_67eb2d97ab1c740faa32b68c3b829d27;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_17bbe5f8a8235b8f4afde3c50590285f); CHECK_OBJECT(module_filename_obj);
code_objects_5d8c4f4d2bc4a5eb768242df4b741362 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_3850e9cd3284c58ffe4708fd64dc8e27, mod_consts.const_str_digest_3850e9cd3284c58ffe4708fd64dc8e27, NULL, NULL, 0, 0, 0);
code_objects_40102b20ef691a6e0fdc8fbe0a99d24d = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AwaitComplete, mod_consts.const_str_plain_AwaitComplete, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_31879da32dc1a2a10beac1bfa1ca556a = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___await__, mod_consts.const_str_digest_0e53526c0f4f0e934fdb9a3ed71af39d, mod_consts.const_tuple_str_plain_self_str_plain__rich_traceback_omit_tuple, NULL, 1, 0, 0);
code_objects_733a911aabc59c90e0fdd5005fe2fbe6 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_53715c638bdf7e6edf2e2ce33a6f1d7c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_51a7e2b9c78ef33f37ff203799de27f1 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_d1d95ba92c1b59ac3c1d2805d5c3307f, mod_consts.const_tuple_str_plain_self_str_plain_pre_await_str_plain_awaitables_tuple, NULL, 1, 1, 0);
code_objects_561e788149bd6cb9a677ad34be4d3606 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rich_repr__, mod_consts.const_str_digest_f069c92cddac1544f47f04819c7069e7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_001c6cdfaa00aed92bb99207b53bc17c = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_call_next, mod_consts.const_str_digest_c4bac17e1bebbc0494f15e840ecfc81e, mod_consts.const_tuple_str_plain_self_str_plain_node_tuple, NULL, 2, 0, 0);
code_objects_a6215b1f2b290ca14dafd38e930e4788 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_exception, mod_consts.const_str_digest_faed249f153c454a637d2e0344b2c4f7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_076b3bda089854b003fb68485ee7b9ef = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_done, mod_consts.const_str_digest_8945a10359002234f44cf23366938db0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_89ed1568cdfb3be07f23bec623ab0214 = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_nothing, mod_consts.const_str_digest_cfc88b017de7ffcaaa5bb82c8f2131d8, mod_consts.const_tuple_str_plain_cls_str_plain_instance_tuple, NULL, 1, 0, 0);
code_objects_67eb2d97ab1c740faa32b68c3b829d27 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set_pre_await_callback, mod_consts.const_str_digest_f139c9f8ae406f13fb7f68bcfc735fa7, mod_consts.const_tuple_str_plain_self_str_plain_pre_await_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$await_complete$$$function__2___rich_repr__$$$genobj__1___rich_repr__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_textual$await_complete$$$function__5___call__$$$coroutine__1___call__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__2___rich_repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__3_set_pre_await_callback(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__4_call_next(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__5___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__6___await__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__7_is_done(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__8_exception(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__9_nothing(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_textual$await_complete$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_pre_await = python_pars[1];
PyObject *par_awaitables = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$await_complete$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$await_complete$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$await_complete$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$await_complete$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$await_complete$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$await_complete$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_51a7e2b9c78ef33f37ff203799de27f1, module_textual$await_complete, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$await_complete$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$await_complete$$$function__1___init__ = cache_frame_frame_textual$await_complete$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$await_complete$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$await_complete$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_awaitables);
tmp_assattr_value_1 = par_awaitables;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__awaitables, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_assattr_target_2;
tmp_direct_call_arg1_1 = module_var_accessor_textual$await_complete$gather(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_gather);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_awaitables);
tmp_direct_call_arg2_1 = par_awaitables;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assattr_value_2 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__future, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_pre_await);
tmp_assattr_value_3 = par_pre_await;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__pre_await, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_1;
PyObject *tmp_assattr_target_4;
tmp_called_value_1 = module_var_accessor_textual$await_complete$get_caller_file_and_line(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_caller_file_and_line);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$await_complete$$$function__1___init__->m_frame.f_lineno = 31;
tmp_assattr_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__caller, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$await_complete$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$await_complete$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$await_complete$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$await_complete$$$function__1___init__,
    type_description_1,
    par_self,
    par_pre_await,
    par_awaitables
);


// Release cached frame if used for exception.
if (frame_frame_textual$await_complete$$$function__1___init__ == cache_frame_frame_textual$await_complete$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$await_complete$$$function__1___init__);
    cache_frame_frame_textual$await_complete$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$await_complete$$$function__1___init__);

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
CHECK_OBJECT(par_pre_await);
Py_DECREF(par_pre_await);
CHECK_OBJECT(par_awaitables);
Py_DECREF(par_awaitables);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_pre_await);
Py_DECREF(par_pre_await);
CHECK_OBJECT(par_awaitables);
Py_DECREF(par_awaitables);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$await_complete$$$function__2___rich_repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_textual$await_complete$$$function__2___rich_repr__$$$genobj__1___rich_repr__(tstate, tmp_closure_1);

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
struct textual$await_complete$$$function__2___rich_repr__$$$genobj__1___rich_repr___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *textual$await_complete$$$function__2___rich_repr__$$$genobj__1___rich_repr___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$await_complete$$$function__2___rich_repr__$$$genobj__1___rich_repr___locals *generator_heap = (struct textual$await_complete$$$function__2___rich_repr__$$$genobj__1___rich_repr___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_561e788149bd6cb9a677ad34be4d3606, module_textual$await_complete, sizeof(void *));
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

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 34;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__awaitables);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 34;
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


generator_heap->exception_lineno = 34;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_expression_value_3;
PyObject *tmp_tuple_element_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
tmp_tuple_element_1 = mod_consts.const_str_plain_pre_await;
tmp_expression_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM0(tmp_expression_value_3, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 35;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__pre_await);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 35;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_expression_value_3, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_None;
PyTuple_SET_ITEM0(tmp_expression_value_3, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_3;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 35;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
{
PyObject *tmp_expression_value_5;
PyObject *tmp_tuple_element_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
tmp_tuple_element_2 = mod_consts.const_str_plain_caller;
tmp_expression_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_6;
PyTuple_SET_ITEM0(tmp_expression_value_5, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_2;
}

tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__caller);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_expression_value_5, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_expression_value_5, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 3;
return tmp_expression_value_5;
yield_return_3:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 36;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_3 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_3);
Py_DECREF(tmp_yield_result_3);
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

static PyObject *MAKE_GENERATOR_textual$await_complete$$$function__2___rich_repr__$$$genobj__1___rich_repr__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$await_complete$$$function__2___rich_repr__$$$genobj__1___rich_repr___context,
        module_textual$await_complete,
        mod_consts.const_str_plain___rich_repr__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_f069c92cddac1544f47f04819c7069e7,
#endif
        code_objects_561e788149bd6cb9a677ad34be4d3606,
        closure,
        1,
#if 1
        sizeof(struct textual$await_complete$$$function__2___rich_repr__$$$genobj__1___rich_repr___locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$await_complete$$$function__3_set_pre_await_callback(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_pre_await = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$await_complete$$$function__3_set_pre_await_callback;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$await_complete$$$function__3_set_pre_await_callback = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$await_complete$$$function__3_set_pre_await_callback)) {
    Py_XDECREF(cache_frame_frame_textual$await_complete$$$function__3_set_pre_await_callback);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$await_complete$$$function__3_set_pre_await_callback == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$await_complete$$$function__3_set_pre_await_callback = MAKE_FUNCTION_FRAME(tstate, code_objects_67eb2d97ab1c740faa32b68c3b829d27, module_textual$await_complete, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$await_complete$$$function__3_set_pre_await_callback->m_type_description == NULL);
frame_frame_textual$await_complete$$$function__3_set_pre_await_callback = cache_frame_frame_textual$await_complete$$$function__3_set_pre_await_callback;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$await_complete$$$function__3_set_pre_await_callback);
assert(Py_REFCNT(frame_frame_textual$await_complete$$$function__3_set_pre_await_callback) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_pre_await);
tmp_assattr_value_1 = par_pre_await;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__pre_await, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$await_complete$$$function__3_set_pre_await_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$await_complete$$$function__3_set_pre_await_callback->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$await_complete$$$function__3_set_pre_await_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$await_complete$$$function__3_set_pre_await_callback,
    type_description_1,
    par_self,
    par_pre_await
);


// Release cached frame if used for exception.
if (frame_frame_textual$await_complete$$$function__3_set_pre_await_callback == cache_frame_frame_textual$await_complete$$$function__3_set_pre_await_callback) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$await_complete$$$function__3_set_pre_await_callback);
    cache_frame_frame_textual$await_complete$$$function__3_set_pre_await_callback = NULL;
}

assertFrameObject(frame_frame_textual$await_complete$$$function__3_set_pre_await_callback);

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
CHECK_OBJECT(par_pre_await);
Py_DECREF(par_pre_await);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_pre_await);
Py_DECREF(par_pre_await);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$await_complete$$$function__4_call_next(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_node = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$await_complete$$$function__4_call_next;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$await_complete$$$function__4_call_next = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$await_complete$$$function__4_call_next)) {
    Py_XDECREF(cache_frame_frame_textual$await_complete$$$function__4_call_next);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$await_complete$$$function__4_call_next == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$await_complete$$$function__4_call_next = MAKE_FUNCTION_FRAME(tstate, code_objects_001c6cdfaa00aed92bb99207b53bc17c, module_textual$await_complete, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$await_complete$$$function__4_call_next->m_type_description == NULL);
frame_frame_textual$await_complete$$$function__4_call_next = cache_frame_frame_textual$await_complete$$$function__4_call_next;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$await_complete$$$function__4_call_next);
assert(Py_REFCNT(frame_frame_textual$await_complete$$$function__4_call_next) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_node);
tmp_called_instance_1 = par_node;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_textual$await_complete$$$function__4_call_next->m_frame.f_lineno = 55;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_call_next, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$await_complete$$$function__4_call_next, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$await_complete$$$function__4_call_next->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$await_complete$$$function__4_call_next, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$await_complete$$$function__4_call_next,
    type_description_1,
    par_self,
    par_node
);


// Release cached frame if used for exception.
if (frame_frame_textual$await_complete$$$function__4_call_next == cache_frame_frame_textual$await_complete$$$function__4_call_next) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$await_complete$$$function__4_call_next);
    cache_frame_frame_textual$await_complete$$$function__4_call_next = NULL;
}

assertFrameObject(frame_frame_textual$await_complete$$$function__4_call_next);

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
CHECK_OBJECT(par_node);
Py_DECREF(par_node);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_node);
Py_DECREF(par_node);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$await_complete$$$function__5___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_textual$await_complete$$$function__5___call__$$$coroutine__1___call__(tstate, tmp_closure_1);

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
struct textual$await_complete$$$function__5___call__$$$coroutine__1___call___locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *textual$await_complete$$$function__5___call__$$$coroutine__1___call___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$await_complete$$$function__5___call__$$$coroutine__1___call___locals *coroutine_heap = (struct textual$await_complete$$$function__5___call__$$$coroutine__1___call___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_733a911aabc59c90e0fdd5005fe2fbe6, module_textual$await_complete, sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
coroutine->m_frame->m_frame.f_lineno = 59;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 59;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 59;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 59;
coroutine_heap->type_description_1 = "c";
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

goto function_return_exit;

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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_textual$await_complete$$$function__5___call__$$$coroutine__1___call__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$await_complete$$$function__5___call__$$$coroutine__1___call___context,
        module_textual$await_complete,
        mod_consts.const_str_plain___call__,
        mod_consts.const_str_digest_53715c638bdf7e6edf2e2ce33a6f1d7c,
        code_objects_733a911aabc59c90e0fdd5005fe2fbe6,
        closure,
        1,
#if 1
        sizeof(struct textual$await_complete$$$function__5___call__$$$coroutine__1___call___locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$await_complete$$$function__6___await__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$await_complete$$$function__6___await__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$await_complete$$$function__6___await__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$await_complete$$$function__6___await__)) {
    Py_XDECREF(cache_frame_frame_textual$await_complete$$$function__6___await__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$await_complete$$$function__6___await__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$await_complete$$$function__6___await__ = MAKE_FUNCTION_FRAME(tstate, code_objects_31879da32dc1a2a10beac1bfa1ca556a, module_textual$await_complete, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$await_complete$$$function__6___await__->m_type_description == NULL);
frame_frame_textual$await_complete$$$function__6___await__ = cache_frame_frame_textual$await_complete$$$function__6___await__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$await_complete$$$function__6___await__);
assert(Py_REFCNT(frame_frame_textual$await_complete$$$function__6___await__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__pre_await);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oN";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$await_complete$$$function__6___await__->m_frame.f_lineno = 64;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__pre_await);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__future);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_textual$await_complete$$$function__6___await__->m_frame.f_lineno = 65;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain___await__);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$await_complete$$$function__6___await__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$await_complete$$$function__6___await__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$await_complete$$$function__6___await__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$await_complete$$$function__6___await__,
    type_description_1,
    par_self,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_textual$await_complete$$$function__6___await__ == cache_frame_frame_textual$await_complete$$$function__6___await__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$await_complete$$$function__6___await__);
    cache_frame_frame_textual$await_complete$$$function__6___await__ = NULL;
}

assertFrameObject(frame_frame_textual$await_complete$$$function__6___await__);

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


static PyObject *impl_textual$await_complete$$$function__7_is_done(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$await_complete$$$function__7_is_done;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$await_complete$$$function__7_is_done = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$await_complete$$$function__7_is_done)) {
    Py_XDECREF(cache_frame_frame_textual$await_complete$$$function__7_is_done);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$await_complete$$$function__7_is_done == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$await_complete$$$function__7_is_done = MAKE_FUNCTION_FRAME(tstate, code_objects_076b3bda089854b003fb68485ee7b9ef, module_textual$await_complete, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$await_complete$$$function__7_is_done->m_type_description == NULL);
frame_frame_textual$await_complete$$$function__7_is_done = cache_frame_frame_textual$await_complete$$$function__7_is_done;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$await_complete$$$function__7_is_done);
assert(Py_REFCNT(frame_frame_textual$await_complete$$$function__7_is_done) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__future);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$await_complete$$$function__7_is_done->m_frame.f_lineno = 70;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_done);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$await_complete$$$function__7_is_done, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$await_complete$$$function__7_is_done->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$await_complete$$$function__7_is_done, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$await_complete$$$function__7_is_done,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$await_complete$$$function__7_is_done == cache_frame_frame_textual$await_complete$$$function__7_is_done) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$await_complete$$$function__7_is_done);
    cache_frame_frame_textual$await_complete$$$function__7_is_done = NULL;
}

assertFrameObject(frame_frame_textual$await_complete$$$function__7_is_done);

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


static PyObject *impl_textual$await_complete$$$function__8_exception(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$await_complete$$$function__8_exception;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$await_complete$$$function__8_exception = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$await_complete$$$function__8_exception)) {
    Py_XDECREF(cache_frame_frame_textual$await_complete$$$function__8_exception);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$await_complete$$$function__8_exception == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$await_complete$$$function__8_exception = MAKE_FUNCTION_FRAME(tstate, code_objects_a6215b1f2b290ca14dafd38e930e4788, module_textual$await_complete, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$await_complete$$$function__8_exception->m_type_description == NULL);
frame_frame_textual$await_complete$$$function__8_exception = cache_frame_frame_textual$await_complete$$$function__8_exception;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$await_complete$$$function__8_exception);
assert(Py_REFCNT(frame_frame_textual$await_complete$$$function__8_exception) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__future);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$await_complete$$$function__8_exception->m_frame.f_lineno = 75;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_done);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 75;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__future);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$await_complete$$$function__8_exception->m_frame.f_lineno = 76;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_exception);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$await_complete$$$function__8_exception, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$await_complete$$$function__8_exception->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$await_complete$$$function__8_exception, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$await_complete$$$function__8_exception,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$await_complete$$$function__8_exception == cache_frame_frame_textual$await_complete$$$function__8_exception) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$await_complete$$$function__8_exception);
    cache_frame_frame_textual$await_complete$$$function__8_exception = NULL;
}

assertFrameObject(frame_frame_textual$await_complete$$$function__8_exception);

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


static PyObject *impl_textual$await_complete$$$function__9_nothing(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *var_instance = NULL;
struct Nuitka_FrameObject *frame_frame_textual$await_complete$$$function__9_nothing;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$await_complete$$$function__9_nothing = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$await_complete$$$function__9_nothing)) {
    Py_XDECREF(cache_frame_frame_textual$await_complete$$$function__9_nothing);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$await_complete$$$function__9_nothing == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$await_complete$$$function__9_nothing = MAKE_FUNCTION_FRAME(tstate, code_objects_89ed1568cdfb3be07f23bec623ab0214, module_textual$await_complete, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$await_complete$$$function__9_nothing->m_type_description == NULL);
frame_frame_textual$await_complete$$$function__9_nothing = cache_frame_frame_textual$await_complete$$$function__9_nothing;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$await_complete$$$function__9_nothing);
assert(Py_REFCNT(frame_frame_textual$await_complete$$$function__9_nothing) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
CHECK_OBJECT(par_cls);
tmp_called_value_1 = par_cls;
frame_frame_textual$await_complete$$$function__9_nothing->m_frame.f_lineno = 82;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_instance == NULL);
var_instance = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_assattr_target_1;
tmp_called_value_2 = module_var_accessor_textual$await_complete$Future(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Future);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$await_complete$$$function__9_nothing->m_frame.f_lineno = 83;
tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_instance);
tmp_assattr_target_1 = var_instance;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__future, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_instance);
tmp_expression_value_1 = var_instance;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__future);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$await_complete$$$function__9_nothing->m_frame.f_lineno = 84;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_set_result,
    PyTuple_GET_ITEM(mod_consts.const_tuple_none_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$await_complete$$$function__9_nothing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$await_complete$$$function__9_nothing->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$await_complete$$$function__9_nothing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$await_complete$$$function__9_nothing,
    type_description_1,
    par_cls,
    var_instance
);


// Release cached frame if used for exception.
if (frame_frame_textual$await_complete$$$function__9_nothing == cache_frame_frame_textual$await_complete$$$function__9_nothing) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$await_complete$$$function__9_nothing);
    cache_frame_frame_textual$await_complete$$$function__9_nothing = NULL;
}

assertFrameObject(frame_frame_textual$await_complete$$$function__9_nothing);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_instance);
tmp_return_value = var_instance;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_instance);
CHECK_OBJECT(var_instance);
Py_DECREF(var_instance);
var_instance = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_instance);
var_instance = NULL;
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



static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$await_complete$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d1d95ba92c1b59ac3c1d2805d5c3307f,
#endif
        code_objects_51a7e2b9c78ef33f37ff203799de27f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_textual$await_complete,
        mod_consts.const_str_digest_7e328bd818cc051c0cd4064f9bfc49c2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__2___rich_repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$await_complete$$$function__2___rich_repr__,
        mod_consts.const_str_plain___rich_repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f069c92cddac1544f47f04819c7069e7,
#endif
        code_objects_561e788149bd6cb9a677ad34be4d3606,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$await_complete,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__3_set_pre_await_callback(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$await_complete$$$function__3_set_pre_await_callback,
        mod_consts.const_str_plain_set_pre_await_callback,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f139c9f8ae406f13fb7f68bcfc735fa7,
#endif
        code_objects_67eb2d97ab1c740faa32b68c3b829d27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$await_complete,
        mod_consts.const_str_digest_db93a185ea6571e40ccb48649d9abf3b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__4_call_next(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$await_complete$$$function__4_call_next,
        mod_consts.const_str_plain_call_next,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c4bac17e1bebbc0494f15e840ecfc81e,
#endif
        code_objects_001c6cdfaa00aed92bb99207b53bc17c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$await_complete,
        mod_consts.const_str_digest_e1fc0f01d9b4872b067b43158d3a7045,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__5___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$await_complete$$$function__5___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_53715c638bdf7e6edf2e2ce33a6f1d7c,
#endif
        code_objects_733a911aabc59c90e0fdd5005fe2fbe6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$await_complete,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__6___await__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$await_complete$$$function__6___await__,
        mod_consts.const_str_plain___await__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0e53526c0f4f0e934fdb9a3ed71af39d,
#endif
        code_objects_31879da32dc1a2a10beac1bfa1ca556a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$await_complete,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__7_is_done(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$await_complete$$$function__7_is_done,
        mod_consts.const_str_plain_is_done,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8945a10359002234f44cf23366938db0,
#endif
        code_objects_076b3bda089854b003fb68485ee7b9ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$await_complete,
        mod_consts.const_str_digest_c8d6f07f83e4033d521513a3f997431d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__8_exception(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$await_complete$$$function__8_exception,
        mod_consts.const_str_plain_exception,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_faed249f153c454a637d2e0344b2c4f7,
#endif
        code_objects_a6215b1f2b290ca14dafd38e930e4788,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$await_complete,
        mod_consts.const_str_digest_466e3321937ac7a0216226594f782af0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$await_complete$$$function__9_nothing(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$await_complete$$$function__9_nothing,
        mod_consts.const_str_plain_nothing,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cfc88b017de7ffcaaa5bb82c8f2131d8,
#endif
        code_objects_89ed1568cdfb3be07f23bec623ab0214,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_textual$await_complete,
        mod_consts.const_str_digest_aa0404cd1c4a51a4bc737a540039d1e9,
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

static function_impl_code const function_table_textual$await_complete[] = {
impl_textual$await_complete$$$function__1___init__,
impl_textual$await_complete$$$function__2___rich_repr__,
impl_textual$await_complete$$$function__3_set_pre_await_callback,
impl_textual$await_complete$$$function__4_call_next,
impl_textual$await_complete$$$function__5___call__,
impl_textual$await_complete$$$function__6___await__,
impl_textual$await_complete$$$function__7_is_done,
impl_textual$await_complete$$$function__8_exception,
impl_textual$await_complete$$$function__9_nothing,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$await_complete);
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
        module_textual$await_complete,
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
        function_table_textual$await_complete,
        sizeof(function_table_textual$await_complete) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.await_complete";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$await_complete(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$await_complete");

    // Store the module for future use.
    module_textual$await_complete = module;

    moduledict_textual$await_complete = MODULE_DICT(module_textual$await_complete);

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
        PRINT_STRING("textual$await_complete: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$await_complete: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$await_complete: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.await_complete" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$await_complete\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$await_complete,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$await_complete,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$await_complete,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$await_complete,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$await_complete,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$await_complete);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$await_complete);
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

        UPDATE_STRING_DICT1(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$await_complete;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_textual$await_complete$$$class__1_AwaitComplete_17 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$await_complete$$$class__1_AwaitComplete_2;
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
UPDATE_STRING_DICT0(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$await_complete = MAKE_MODULE_FRAME(code_objects_5d8c4f4d2bc4a5eb768242df4b741362, module_textual$await_complete);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$await_complete);
assert(Py_REFCNT(frame_frame_textual$await_complete) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$await_complete$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$await_complete$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_asyncio;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$await_complete;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Future_str_plain_gather_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$await_complete->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$await_complete,
        mod_consts.const_str_plain_Future,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Future);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_Future, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$await_complete,
        mod_consts.const_str_plain_gather,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_gather);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_gather, tmp_assign_source_7);
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
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_import_from_2__module = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_9);
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$await_complete,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$await_complete,
        mod_consts.const_str_plain_Awaitable,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Awaitable);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$await_complete,
        mod_consts.const_str_plain_Generator,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Generator);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_Generator, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$await_complete;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_textual$await_complete->m_frame.f_lineno = 6;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_rich, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$await_complete;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Self_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$await_complete->m_frame.f_lineno = 7;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$await_complete,
        mod_consts.const_str_plain_Self,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Self);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_Self, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_9658aca140a7362a8aa36516dedacf67;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$await_complete;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_get_caller_file_and_line_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$await_complete->m_frame.f_lineno = 9;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$await_complete,
        mod_consts.const_str_plain_get_caller_file_and_line,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_get_caller_file_and_line);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_get_caller_file_and_line, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_daf538768b16b8e3ad7fea25e6475ea0;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$await_complete;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_MessagePump_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$await_complete->m_frame.f_lineno = 10;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$await_complete,
        mod_consts.const_str_plain_MessagePump,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_MessagePump);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_MessagePump, tmp_assign_source_16);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = module_var_accessor_textual$await_complete$rich(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rich);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;

    goto try_except_handler_3;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_repr);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_auto);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
frame_frame_textual$await_complete->m_frame.f_lineno = 16;
tmp_called_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_angular_tuple);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$await_complete$$$class__1_AwaitComplete_17 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_98fe3b25fcf38bcd11c97b050a10704c;
tmp_result = DICT_SET_ITEM(locals_textual$await_complete$$$class__1_AwaitComplete_17, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_72e1bdad9d68f60884f07274ed95a663;
tmp_result = DICT_SET_ITEM(locals_textual$await_complete$$$class__1_AwaitComplete_17, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AwaitComplete;
tmp_result = DICT_SET_ITEM(locals_textual$await_complete$$$class__1_AwaitComplete_17, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_17;
tmp_result = DICT_SET_ITEM(locals_textual$await_complete$$$class__1_AwaitComplete_17, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_a86e9dcdc4d21513b9c4e44e7ce9a2e1);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_d3d2549b597685bd29a009955f1feb8d);

tmp_dictset_value = MAKE_FUNCTION_textual$await_complete$$$function__1___init__(tstate, tmp_kw_defaults_1, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_textual$await_complete$$$class__1_AwaitComplete_17, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);

tmp_dictset_value = MAKE_FUNCTION_textual$await_complete$$$function__2___rich_repr__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_textual$await_complete$$$class__1_AwaitComplete_17, mod_consts.const_str_plain___rich_repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_e46054303ce48bd08c48e3037fb38fd9);

tmp_dictset_value = MAKE_FUNCTION_textual$await_complete$$$function__3_set_pre_await_callback(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_textual$await_complete$$$class__1_AwaitComplete_17, mod_consts.const_str_plain_set_pre_await_callback, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_2a64e0e49207145eeed3803d8034dc7f);

tmp_dictset_value = MAKE_FUNCTION_textual$await_complete$$$function__4_call_next(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_textual$await_complete$$$class__1_AwaitComplete_17, mod_consts.const_str_plain_call_next, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1);

tmp_dictset_value = MAKE_FUNCTION_textual$await_complete$$$function__5___call__(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_textual$await_complete$$$class__1_AwaitComplete_17, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_c7beb8949e70d1e9d550d21f59128f8c);

tmp_dictset_value = MAKE_FUNCTION_textual$await_complete$$$function__6___await__(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_textual$await_complete$$$class__1_AwaitComplete_17, mod_consts.const_str_plain___await__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_textual$await_complete$$$class__1_AwaitComplete_2 = MAKE_CLASS_FRAME(tstate, code_objects_40102b20ef691a6e0fdc8fbe0a99d24d, module_textual$await_complete, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$await_complete$$$class__1_AwaitComplete_2);
assert(Py_REFCNT(frame_frame_textual$await_complete$$$class__1_AwaitComplete_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_7;
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_2 = MAKE_FUNCTION_textual$await_complete$$$function__7_is_done(tstate, tmp_annotations_7);

frame_frame_textual$await_complete$$$class__1_AwaitComplete_2->m_frame.f_lineno = 67;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_textual$await_complete$$$class__1_AwaitComplete_17, mod_consts.const_str_plain_is_done, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_8;
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_9886bc989bd4ef336593ffab967f448c);

tmp_args_element_value_3 = MAKE_FUNCTION_textual$await_complete$$$function__8_exception(tstate, tmp_annotations_8);

frame_frame_textual$await_complete$$$class__1_AwaitComplete_2->m_frame.f_lineno = 72;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_textual$await_complete$$$class__1_AwaitComplete_17, mod_consts.const_str_plain_exception, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$await_complete$$$class__1_AwaitComplete_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$await_complete$$$class__1_AwaitComplete_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$await_complete$$$class__1_AwaitComplete_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$await_complete$$$class__1_AwaitComplete_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$await_complete$$$class__1_AwaitComplete_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
{
PyObject *tmp_classmethod_arg_1;

tmp_classmethod_arg_1 = MAKE_FUNCTION_textual$await_complete$$$function__9_nothing(tstate);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
CHECK_OBJECT(tmp_classmethod_arg_1);
Py_DECREF(tmp_classmethod_arg_1);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_textual$await_complete$$$class__1_AwaitComplete_17, mod_consts.const_str_plain_nothing, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_ac140d38ae126fbe1e255f40e6e62c57_tuple;
tmp_result = DICT_SET_ITEM(locals_textual$await_complete$$$class__1_AwaitComplete_17, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_5 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_AwaitComplete;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_textual$await_complete$$$class__1_AwaitComplete_17;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$await_complete->m_frame.f_lineno = 17;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_20;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_args_element_value_1 = outline_0_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_textual$await_complete$$$class__1_AwaitComplete_17);
locals_textual$await_complete$$$class__1_AwaitComplete_17 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$await_complete$$$class__1_AwaitComplete_17);
locals_textual$await_complete$$$class__1_AwaitComplete_17 = NULL;
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
exception_lineno = 17;
goto try_except_handler_3;
outline_result_2:;
frame_frame_textual$await_complete->m_frame.f_lineno = 16;
tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$await_complete, (Nuitka_StringObject *)mod_consts.const_str_plain_AwaitComplete, tmp_assign_source_19);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$await_complete, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$await_complete->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$await_complete, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$await_complete);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$await_complete", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.await_complete" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$await_complete);
    return module_textual$await_complete;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$await_complete, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$await_complete", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

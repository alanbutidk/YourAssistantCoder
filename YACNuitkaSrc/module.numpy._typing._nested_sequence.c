/* Generated code for Python module 'numpy$_typing$_nested_sequence'
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



/* The "module_numpy$_typing$_nested_sequence" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$_typing$_nested_sequence;
PyDictObject *moduledict_numpy$_typing$_nested_sequence;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_a21e5c969a38e796f650c9c9e2bca5cf;
PyObject *const_str_digest_4541488be15a35fe49af686411824d66;
PyObject *const_str_digest_b8f1548ab8680f00afe65c79339e90da;
PyObject *const_str_digest_5450c04b0ffdb6d00c175a84b79f9ae1;
PyObject *const_str_digest_4a038814e1dde6ed7e272e7e0fd10c06;
PyObject *const_str_digest_e99c57a24a6bcac2826bd50cc9274537;
PyObject *const_str_digest_a8192e9b3938d420c84e2f3192c91ec4;
PyObject *const_str_digest_1a4110e101bb10a46e36bc15eece5eb7;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Protocol;
PyObject *const_str_plain_runtime_checkable;
PyObject *const_str_plain_TypeVar;
PyObject *const_tuple_str_plain__T_co_true_tuple;
PyObject *const_tuple_str_plain_covariant_tuple;
PyObject *const_str_plain__T_co;
PyObject *const_str_plain__NestedSequence;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_849f7691da23f9f65e7d003b316b2205;
PyObject *const_str_digest_76ecbcdb002914f4bb18d29c2814d064;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_20;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_return;
PyObject *const_str_plain___len__;
PyObject *const_str_digest_d7d147ac122d277e9c7cfbf83db0e958;
PyObject *const_str_plain_index;
PyObject *const_str_digest_c876f9cd4b02f7343ca5280fa4428690;
PyObject *const_str_digest_ef849a5e9fdd1cf4736941ee6095d782;
PyObject *const_str_plain_x;
PyObject *const_str_plain_object;
PyObject *const_str_plain_bool;
PyObject *const_str_plain___contains__;
PyObject *const_str_digest_fd18c60a7e26e15a3391494f22df1bb6;
PyObject *const_dict_3cba03903668e2aa39a172dd80c524c1;
PyObject *const_str_digest_11261dae82588fcbec99cc211ed1afd9;
PyObject *const_str_plain___reversed__;
PyObject *const_str_digest_452f35e47065c7cc6f1cc18386a11f84;
PyObject *const_str_plain_value;
PyObject *const_str_plain_count;
PyObject *const_str_digest_e70f57fd68634be3d2c19d68add20826;
PyObject *const_str_digest_80ef2eed65a254b6c71bee4f0a2652bc;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_96801c5a48ac05ae8d97ed8e16ab97d3;
PyObject *const_str_digest_9ba75d6c95c281662f94b2a0b1fbbc7b;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_x_tuple;
PyObject *const_tuple_str_plain_self_str_plain_index_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[56];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy._typing._nested_sequence"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_a21e5c969a38e796f650c9c9e2bca5cf);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_4541488be15a35fe49af686411824d66);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8f1548ab8680f00afe65c79339e90da);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_5450c04b0ffdb6d00c175a84b79f9ae1);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a038814e1dde6ed7e272e7e0fd10c06);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_e99c57a24a6bcac2826bd50cc9274537);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_a8192e9b3938d420c84e2f3192c91ec4);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a4110e101bb10a46e36bc15eece5eb7);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_runtime_checkable);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T_co_true_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_covariant_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__T_co);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__NestedSequence);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_849f7691da23f9f65e7d003b316b2205);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_76ecbcdb002914f4bb18d29c2814d064);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_int_pos_20);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain___len__);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7d147ac122d277e9c7cfbf83db0e958);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_index);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_c876f9cd4b02f7343ca5280fa4428690);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef849a5e9fdd1cf4736941ee6095d782);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_object);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain___contains__);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd18c60a7e26e15a3391494f22df1bb6);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_dict_3cba03903668e2aa39a172dd80c524c1);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_11261dae82588fcbec99cc211ed1afd9);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___reversed__);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_452f35e47065c7cc6f1cc18386a11f84);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_count);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_e70f57fd68634be3d2c19d68add20826);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_80ef2eed65a254b6c71bee4f0a2652bc);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_96801c5a48ac05ae8d97ed8e16ab97d3);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ba75d6c95c281662f94b2a0b1fbbc7b);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_x_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_index_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
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
void checkModuleConstants_numpy$_typing$_nested_sequence(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_a21e5c969a38e796f650c9c9e2bca5cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a21e5c969a38e796f650c9c9e2bca5cf);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_4541488be15a35fe49af686411824d66));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4541488be15a35fe49af686411824d66);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8f1548ab8680f00afe65c79339e90da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8f1548ab8680f00afe65c79339e90da);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_5450c04b0ffdb6d00c175a84b79f9ae1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5450c04b0ffdb6d00c175a84b79f9ae1);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a038814e1dde6ed7e272e7e0fd10c06));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a038814e1dde6ed7e272e7e0fd10c06);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_e99c57a24a6bcac2826bd50cc9274537));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e99c57a24a6bcac2826bd50cc9274537);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_a8192e9b3938d420c84e2f3192c91ec4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a8192e9b3938d420c84e2f3192c91ec4);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a4110e101bb10a46e36bc15eece5eb7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1a4110e101bb10a46e36bc15eece5eb7);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Protocol);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_runtime_checkable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_runtime_checkable);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T_co_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__T_co_true_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_covariant_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_covariant_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__T_co));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__T_co);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__NestedSequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NestedSequence);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_849f7691da23f9f65e7d003b316b2205));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_849f7691da23f9f65e7d003b316b2205);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_76ecbcdb002914f4bb18d29c2814d064));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_76ecbcdb002914f4bb18d29c2814d064);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_int_pos_20));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_20);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain___len__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___len__);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7d147ac122d277e9c7cfbf83db0e958));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d7d147ac122d277e9c7cfbf83db0e958);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_index);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_c876f9cd4b02f7343ca5280fa4428690));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c876f9cd4b02f7343ca5280fa4428690);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef849a5e9fdd1cf4736941ee6095d782));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef849a5e9fdd1cf4736941ee6095d782);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_object);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain___contains__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___contains__);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd18c60a7e26e15a3391494f22df1bb6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd18c60a7e26e15a3391494f22df1bb6);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_dict_3cba03903668e2aa39a172dd80c524c1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3cba03903668e2aa39a172dd80c524c1);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_11261dae82588fcbec99cc211ed1afd9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_11261dae82588fcbec99cc211ed1afd9);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___reversed__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___reversed__);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_452f35e47065c7cc6f1cc18386a11f84));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_452f35e47065c7cc6f1cc18386a11f84);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_count);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_e70f57fd68634be3d2c19d68add20826));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e70f57fd68634be3d2c19d68add20826);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_80ef2eed65a254b6c71bee4f0a2652bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80ef2eed65a254b6c71bee4f0a2652bc);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_96801c5a48ac05ae8d97ed8e16ab97d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_96801c5a48ac05ae8d97ed8e16ab97d3);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ba75d6c95c281662f94b2a0b1fbbc7b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ba75d6c95c281662f94b2a0b1fbbc7b);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_x_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_x_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_index_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_index_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
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
static PyObject *module_var_accessor_numpy$_typing$_nested_sequence$Any(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_typing$_nested_sequence->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_typing$_nested_sequence->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_typing$_nested_sequence->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_typing$_nested_sequence$Protocol(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_typing$_nested_sequence->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_typing$_nested_sequence->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_typing$_nested_sequence->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_typing$_nested_sequence$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_typing$_nested_sequence->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_typing$_nested_sequence->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_typing$_nested_sequence->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_typing$_nested_sequence$_T_co(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_typing$_nested_sequence->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_typing$_nested_sequence->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain__T_co);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_typing$_nested_sequence->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__T_co);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__T_co, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__T_co);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__T_co, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain__T_co);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain__T_co);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__T_co);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_typing$_nested_sequence$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_typing$_nested_sequence->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_typing$_nested_sequence->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_typing$_nested_sequence->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_typing$_nested_sequence$runtime_checkable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_typing$_nested_sequence->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_typing$_nested_sequence->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_typing$_nested_sequence->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_1563b69e34d678539c33f3a73616574e;
static PyCodeObject *code_objects_9830c92d6dc90b697f6d7c0e278496a1;
static PyCodeObject *code_objects_f76570e62af24131badf8f3d1f592466;
static PyCodeObject *code_objects_8bd9103d2698b90b78418a84b1d51977;
static PyCodeObject *code_objects_38a6cf08f819cf9fb12e4f7498addfa0;
static PyCodeObject *code_objects_655e527a2e7496cca597f057db1d7061;
static PyCodeObject *code_objects_839a40f70f0fb5b64e6ad0b8c4c972dd;
static PyCodeObject *code_objects_be33f4062a7feebdefb0b223e77b3834;
static PyCodeObject *code_objects_81f7253947a3c07d1c39fd257ed962ef;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_96801c5a48ac05ae8d97ed8e16ab97d3); CHECK_OBJECT(module_filename_obj);
code_objects_1563b69e34d678539c33f3a73616574e = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_9ba75d6c95c281662f94b2a0b1fbbc7b, mod_consts.const_str_digest_9ba75d6c95c281662f94b2a0b1fbbc7b, NULL, NULL, 0, 0, 0);
code_objects_9830c92d6dc90b697f6d7c0e278496a1 = MAKE_CODE_OBJECT(module_filename_obj, 20, 0, mod_consts.const_str_plain__NestedSequence, mod_consts.const_str_plain__NestedSequence, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f76570e62af24131badf8f3d1f592466 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___contains__, mod_consts.const_str_digest_fd18c60a7e26e15a3391494f22df1bb6, mod_consts.const_tuple_str_plain_self_str_plain_x_tuple, NULL, 2, 0, 2);
code_objects_8bd9103d2698b90b78418a84b1d51977 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getitem__, mod_consts.const_str_digest_ef849a5e9fdd1cf4736941ee6095d782, mod_consts.const_tuple_str_plain_self_str_plain_index_tuple, NULL, 2, 0, 2);
code_objects_38a6cf08f819cf9fb12e4f7498addfa0 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___iter__, mod_consts.const_str_digest_11261dae82588fcbec99cc211ed1afd9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 1);
code_objects_655e527a2e7496cca597f057db1d7061 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___len__, mod_consts.const_str_digest_d7d147ac122d277e9c7cfbf83db0e958, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 1);
code_objects_839a40f70f0fb5b64e6ad0b8c4c972dd = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___reversed__, mod_consts.const_str_digest_452f35e47065c7cc6f1cc18386a11f84, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 1);
code_objects_be33f4062a7feebdefb0b223e77b3834 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_count, mod_consts.const_str_digest_e70f57fd68634be3d2c19d68add20826, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 2);
code_objects_81f7253947a3c07d1c39fd257ed962ef = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_index, mod_consts.const_str_digest_80ef2eed65a254b6c71bee4f0a2652bc, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 2);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__1___len__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__2___getitem__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__3___contains__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__4___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__5___reversed__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__6_count(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__7_index(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_numpy$_typing$_nested_sequence$$$function__1___len__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__)) {
    Py_XDECREF(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__ = MAKE_FUNCTION_FRAME(tstate, code_objects_655e527a2e7496cca597f057db1d7061, module_numpy$_typing$_nested_sequence, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__->m_type_description == NULL);
frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__ = cache_frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__);
assert(Py_REFCNT(frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 61;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__ == cache_frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__);
    cache_frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__ = NULL;
}

assertFrameObject(frame_frame_numpy$_typing$_nested_sequence$$$function__1___len__);

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


static PyObject *impl_numpy$_typing$_nested_sequence$$$function__2___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_index = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__)) {
    Py_XDECREF(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8bd9103d2698b90b78418a84b1d51977, module_numpy$_typing$_nested_sequence, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__->m_type_description == NULL);
frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__ = cache_frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__);
assert(Py_REFCNT(frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__,
    type_description_1,
    par_self,
    par_index
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__ == cache_frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__);
    cache_frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__ = NULL;
}

assertFrameObject(frame_frame_numpy$_typing$_nested_sequence$$$function__2___getitem__);

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
CHECK_OBJECT(par_index);
Py_DECREF(par_index);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_numpy$_typing$_nested_sequence$$$function__3___contains__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_x = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__)) {
    Py_XDECREF(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f76570e62af24131badf8f3d1f592466, module_numpy$_typing$_nested_sequence, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__->m_type_description == NULL);
frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__ = cache_frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__);
assert(Py_REFCNT(frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 69;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__,
    type_description_1,
    par_self,
    par_x
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__ == cache_frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__);
    cache_frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__ = NULL;
}

assertFrameObject(frame_frame_numpy$_typing$_nested_sequence$$$function__3___contains__);

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
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_numpy$_typing$_nested_sequence$$$function__4___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__)) {
    Py_XDECREF(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_38a6cf08f819cf9fb12e4f7498addfa0, module_numpy$_typing$_nested_sequence, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__->m_type_description == NULL);
frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__ = cache_frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__);
assert(Py_REFCNT(frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 73;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__ == cache_frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__);
    cache_frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__ = NULL;
}

assertFrameObject(frame_frame_numpy$_typing$_nested_sequence$$$function__4___iter__);

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


static PyObject *impl_numpy$_typing$_nested_sequence$$$function__5___reversed__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__)) {
    Py_XDECREF(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__ = MAKE_FUNCTION_FRAME(tstate, code_objects_839a40f70f0fb5b64e6ad0b8c4c972dd, module_numpy$_typing$_nested_sequence, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__->m_type_description == NULL);
frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__ = cache_frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__);
assert(Py_REFCNT(frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__) == 2);

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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__ == cache_frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__);
    cache_frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__ = NULL;
}

assertFrameObject(frame_frame_numpy$_typing$_nested_sequence$$$function__5___reversed__);

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


static PyObject *impl_numpy$_typing$_nested_sequence$$$function__6_count(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$_typing$_nested_sequence$$$function__6_count;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_typing$_nested_sequence$$$function__6_count = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__6_count)) {
    Py_XDECREF(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__6_count);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_typing$_nested_sequence$$$function__6_count == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_typing$_nested_sequence$$$function__6_count = MAKE_FUNCTION_FRAME(tstate, code_objects_be33f4062a7feebdefb0b223e77b3834, module_numpy$_typing$_nested_sequence, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__6_count->m_type_description == NULL);
frame_frame_numpy$_typing$_nested_sequence$$$function__6_count = cache_frame_frame_numpy$_typing$_nested_sequence$$$function__6_count;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_typing$_nested_sequence$$$function__6_count);
assert(Py_REFCNT(frame_frame_numpy$_typing$_nested_sequence$$$function__6_count) == 2);

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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_typing$_nested_sequence$$$function__6_count, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_typing$_nested_sequence$$$function__6_count->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_typing$_nested_sequence$$$function__6_count, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_typing$_nested_sequence$$$function__6_count,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_typing$_nested_sequence$$$function__6_count == cache_frame_frame_numpy$_typing$_nested_sequence$$$function__6_count) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__6_count);
    cache_frame_frame_numpy$_typing$_nested_sequence$$$function__6_count = NULL;
}

assertFrameObject(frame_frame_numpy$_typing$_nested_sequence$$$function__6_count);

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


static PyObject *impl_numpy$_typing$_nested_sequence$$$function__7_index(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$_typing$_nested_sequence$$$function__7_index;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_typing$_nested_sequence$$$function__7_index = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__7_index)) {
    Py_XDECREF(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__7_index);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_typing$_nested_sequence$$$function__7_index == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_typing$_nested_sequence$$$function__7_index = MAKE_FUNCTION_FRAME(tstate, code_objects_81f7253947a3c07d1c39fd257ed962ef, module_numpy$_typing$_nested_sequence, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__7_index->m_type_description == NULL);
frame_frame_numpy$_typing$_nested_sequence$$$function__7_index = cache_frame_frame_numpy$_typing$_nested_sequence$$$function__7_index;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_typing$_nested_sequence$$$function__7_index);
assert(Py_REFCNT(frame_frame_numpy$_typing$_nested_sequence$$$function__7_index) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_NotImplementedError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_typing$_nested_sequence$$$function__7_index, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_typing$_nested_sequence$$$function__7_index->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_typing$_nested_sequence$$$function__7_index, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_typing$_nested_sequence$$$function__7_index,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_typing$_nested_sequence$$$function__7_index == cache_frame_frame_numpy$_typing$_nested_sequence$$$function__7_index) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_typing$_nested_sequence$$$function__7_index);
    cache_frame_frame_numpy$_typing$_nested_sequence$$$function__7_index = NULL;
}

assertFrameObject(frame_frame_numpy$_typing$_nested_sequence$$$function__7_index);

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



static PyObject *MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__1___len__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_typing$_nested_sequence$$$function__1___len__,
        mod_consts.const_str_plain___len__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d7d147ac122d277e9c7cfbf83db0e958,
#endif
        code_objects_655e527a2e7496cca597f057db1d7061,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_numpy$_typing$_nested_sequence,
        mod_consts.const_str_digest_a21e5c969a38e796f650c9c9e2bca5cf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__2___getitem__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_typing$_nested_sequence$$$function__2___getitem__,
        mod_consts.const_str_plain___getitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ef849a5e9fdd1cf4736941ee6095d782,
#endif
        code_objects_8bd9103d2698b90b78418a84b1d51977,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_numpy$_typing$_nested_sequence,
        mod_consts.const_str_digest_4541488be15a35fe49af686411824d66,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__3___contains__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_typing$_nested_sequence$$$function__3___contains__,
        mod_consts.const_str_plain___contains__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fd18c60a7e26e15a3391494f22df1bb6,
#endif
        code_objects_f76570e62af24131badf8f3d1f592466,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_numpy$_typing$_nested_sequence,
        mod_consts.const_str_digest_b8f1548ab8680f00afe65c79339e90da,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__4___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_typing$_nested_sequence$$$function__4___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_11261dae82588fcbec99cc211ed1afd9,
#endif
        code_objects_38a6cf08f819cf9fb12e4f7498addfa0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_numpy$_typing$_nested_sequence,
        mod_consts.const_str_digest_5450c04b0ffdb6d00c175a84b79f9ae1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__5___reversed__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_typing$_nested_sequence$$$function__5___reversed__,
        mod_consts.const_str_plain___reversed__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_452f35e47065c7cc6f1cc18386a11f84,
#endif
        code_objects_839a40f70f0fb5b64e6ad0b8c4c972dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_numpy$_typing$_nested_sequence,
        mod_consts.const_str_digest_4a038814e1dde6ed7e272e7e0fd10c06,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__6_count(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_typing$_nested_sequence$$$function__6_count,
        mod_consts.const_str_plain_count,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e70f57fd68634be3d2c19d68add20826,
#endif
        code_objects_be33f4062a7feebdefb0b223e77b3834,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_numpy$_typing$_nested_sequence,
        mod_consts.const_str_digest_e99c57a24a6bcac2826bd50cc9274537,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__7_index(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_typing$_nested_sequence$$$function__7_index,
        mod_consts.const_str_plain_index,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_80ef2eed65a254b6c71bee4f0a2652bc,
#endif
        code_objects_81f7253947a3c07d1c39fd257ed962ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_numpy$_typing$_nested_sequence,
        mod_consts.const_str_digest_a8192e9b3938d420c84e2f3192c91ec4,
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

static function_impl_code const function_table_numpy$_typing$_nested_sequence[] = {
impl_numpy$_typing$_nested_sequence$$$function__1___len__,
impl_numpy$_typing$_nested_sequence$$$function__2___getitem__,
impl_numpy$_typing$_nested_sequence$$$function__3___contains__,
impl_numpy$_typing$_nested_sequence$$$function__4___iter__,
impl_numpy$_typing$_nested_sequence$$$function__5___reversed__,
impl_numpy$_typing$_nested_sequence$$$function__6_count,
impl_numpy$_typing$_nested_sequence$$$function__7_index,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$_typing$_nested_sequence);
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
        module_numpy$_typing$_nested_sequence,
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
        function_table_numpy$_typing$_nested_sequence,
        sizeof(function_table_numpy$_typing$_nested_sequence) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy._typing._nested_sequence";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$_typing$_nested_sequence(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$_typing$_nested_sequence");

    // Store the module for future use.
    module_numpy$_typing$_nested_sequence = module;

    moduledict_numpy$_typing$_nested_sequence = MODULE_DICT(module_numpy$_typing$_nested_sequence);

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
        PRINT_STRING("numpy$_typing$_nested_sequence: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$_typing$_nested_sequence: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$_typing$_nested_sequence: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._typing._nested_sequence" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$_typing$_nested_sequence\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$_typing$_nested_sequence,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$_typing$_nested_sequence,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$_typing$_nested_sequence,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_typing$_nested_sequence,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_typing$_nested_sequence,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$_typing$_nested_sequence);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$_typing$_nested_sequence);
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

        UPDATE_STRING_DICT1(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_numpy$_typing$_nested_sequence;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_2;
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
tmp_assign_source_1 = mod_consts.const_str_digest_1a4110e101bb10a46e36bc15eece5eb7;
UPDATE_STRING_DICT0(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$_typing$_nested_sequence = MAKE_MODULE_FRAME(code_objects_1563b69e34d678539c33f3a73616574e, module_numpy$_typing$_nested_sequence);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_typing$_nested_sequence);
assert(Py_REFCNT(frame_frame_numpy$_typing$_nested_sequence) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$_typing$_nested_sequence$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$_typing$_nested_sequence$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_4 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_4);
tmp_import_from_1__module = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Py_False;
UPDATE_STRING_DICT0(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_5);
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
        (PyObject *)moduledict_numpy$_typing$_nested_sequence,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_6);
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
        (PyObject *)moduledict_numpy$_typing$_nested_sequence,
        mod_consts.const_str_plain_Protocol,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Protocol);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$_typing$_nested_sequence,
        mod_consts.const_str_plain_runtime_checkable,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_runtime_checkable);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_runtime_checkable, tmp_assign_source_8);
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
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
tmp_import_name_from_4 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_4 == NULL));
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_numpy$_typing$_nested_sequence,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_numpy$_typing$_nested_sequence$TypeVar(tstate);
assert(!(tmp_called_value_1 == NULL));
frame_frame_numpy$_typing$_nested_sequence->m_frame.f_lineno = 13;
tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain__T_co_true_tuple, 0), mod_consts.const_tuple_str_plain_covariant_tuple);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain__T_co, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain__NestedSequence);
UPDATE_STRING_DICT1(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$_typing$_nested_sequence$Protocol(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;

    goto try_except_handler_2;
}
tmp_subscript_value_1 = module_var_accessor_numpy$_typing$_nested_sequence$_T_co(tstate);
assert(!(tmp_subscript_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
tmp_assign_source_12 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_12, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_13 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
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


exception_lineno = 20;

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


exception_lineno = 20;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_15 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_15;
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


exception_lineno = 20;

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
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain__NestedSequence;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$_typing$_nested_sequence->m_frame.f_lineno = 20;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_16;
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


exception_lineno = 20;

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
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_1 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_1, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

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


exception_lineno = 20;

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


exception_lineno = 20;

    goto try_except_handler_2;
}
frame_frame_numpy$_typing$_nested_sequence->m_frame.f_lineno = 20;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 20;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_17;
}
branch_end_1:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
tmp_called_value_3 = module_var_accessor_numpy$_typing$_nested_sequence$runtime_checkable(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_runtime_checkable);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto try_except_handler_2;
}
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_849f7691da23f9f65e7d003b316b2205;
tmp_res = PyObject_SetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_76ecbcdb002914f4bb18d29c2814d064;
tmp_res = PyObject_SetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain__NestedSequence;
tmp_res = PyObject_SetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_20;
tmp_res = PyObject_SetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
frame_frame_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_2 = MAKE_CLASS_FRAME(tstate, code_objects_9830c92d6dc90b697f6d7c0e278496a1, module_numpy$_typing$_nested_sequence, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_2);
assert(Py_REFCNT(frame_frame_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = PyObject_GetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, const_str_plain_int);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__1___len__(tstate, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, mod_consts.const_str_plain___len__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_index;
tmp_dict_value_2 = PyObject_GetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, const_str_plain_int);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = mod_consts.const_str_digest_c876f9cd4b02f7343ca5280fa4428690;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__2___getitem__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, mod_consts.const_str_plain___getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_dict_key_3 = mod_consts.const_str_plain_x;
tmp_dict_value_3 = PyObject_GetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, mod_consts.const_str_plain_object);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = (PyObject *)&PyBaseObject_Type;
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = PyObject_GetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, mod_consts.const_str_plain_bool);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__3___contains__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, mod_consts.const_str_plain___contains__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_3cba03903668e2aa39a172dd80c524c1);

tmp_dictset_value = MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__4___iter__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_3cba03903668e2aa39a172dd80c524c1);

tmp_dictset_value = MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__5___reversed__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, mod_consts.const_str_plain___reversed__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_dict_key_4 = mod_consts.const_str_plain_value;
tmp_dict_value_4 = PyObject_GetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, mod_consts.const_str_plain_Any);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_numpy$_typing$_nested_sequence$Any(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_6 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_dict_value_4 = PyObject_GetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, const_str_plain_int);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__6_count(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, mod_consts.const_str_plain_count, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
tmp_dict_key_5 = mod_consts.const_str_plain_value;
tmp_dict_value_5 = PyObject_GetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, mod_consts.const_str_plain_Any);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_numpy$_typing$_nested_sequence$Any(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_7 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = PyObject_GetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, const_str_plain_int);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_numpy$_typing$_nested_sequence$$$function__7_index(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, mod_consts.const_str_plain_index, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_2);

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
tmp_res = PyObject_SetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

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


exception_lineno = 20;

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
tmp_res = PyObject_SetItem(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain__NestedSequence;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$_typing$_nested_sequence->m_frame.f_lineno = 20;
tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_19;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_args_element_value_1 = outline_0_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20);
locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20);
locals_numpy$_typing$_nested_sequence$$$class__1__NestedSequence_20 = NULL;
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
exception_lineno = 20;
goto try_except_handler_2;
outline_result_2:;
frame_frame_numpy$_typing$_nested_sequence->m_frame.f_lineno = 19;
tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)mod_consts.const_str_plain__NestedSequence, tmp_assign_source_18);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_typing$_nested_sequence, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_typing$_nested_sequence->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_typing$_nested_sequence, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$_typing$_nested_sequence);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$_typing$_nested_sequence", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._typing._nested_sequence" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$_typing$_nested_sequence);
    return module_numpy$_typing$_nested_sequence;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_typing$_nested_sequence, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$_typing$_nested_sequence", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

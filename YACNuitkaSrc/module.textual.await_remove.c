/* Generated code for Python module 'textual$await_remove'
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



/* The "module_textual$await_remove" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$await_remove;
PyDictObject *moduledict_textual$await_remove;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__tasks;
PyObject *const_str_plain__post_remove;
PyObject *const_str_plain_get_caller_file_and_line;
PyObject *const_str_plain__caller;
PyObject *const_str_plain_tasks;
PyObject *const_str_plain_self;
PyObject *const_str_plain_post_remove;
PyObject *const_str_plain_caller;
PyObject *const_str_plain___rich_repr__;
PyObject *const_str_digest_1005f8ecbd32b9e6469a4c456aefe388;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_acc9b3bd2da9fdb3942da413d6adfcb8;
PyObject *const_str_plain_asyncio;
PyObject *const_str_plain_current_task;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_0c95c26c2f9a1d3952b2e6c390a429d5;
PyObject *const_str_plain_await_prune;
PyObject *const_str_digest_5e04e1f9988dcd1a9168e7ce1a0414a8;
PyObject *const_str_plain___await__;
PyObject *const_str_plain_gather;
PyObject *const_str_plain_invoke;
PyObject *const_str_digest_564a45f820a2802c829cd2a2827bd425;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_tuple_str_plain_Task_str_plain_gather_tuple;
PyObject *const_str_plain_Task;
PyObject *const_str_plain_Generator;
PyObject *const_str_digest_0266ac3c468cbbaf99b230132943e04e;
PyObject *const_str_plain_rich;
PyObject *const_str_digest_5c1e37fd8ccd6dfca7f8c17f951e18cf;
PyObject *const_tuple_str_plain_invoke_tuple;
PyObject *const_str_digest_9658aca140a7362a8aa36516dedacf67;
PyObject *const_tuple_str_plain_get_caller_file_and_line_tuple;
PyObject *const_str_digest_c32863e446b1799beb3ada226b376daf;
PyObject *const_tuple_str_plain_CallbackType_tuple;
PyObject *const_str_plain_CallbackType;
PyObject *const_str_plain_auto;
PyObject *const_str_digest_dd5bdfbc2c9ee6d86d06e3443b5cf8de;
PyObject *const_str_digest_7d2d1f4a10db428ec555fe34fa3d68e6;
PyObject *const_str_plain_AwaitRemove;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_19;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_d357e9652b21ef890baedaf0d4fe6974;
PyObject *const_str_digest_43b4ef9c85a38a53ab83aa8b593bf4da;
PyObject *const_dict_a367242e045973b662a9e05f7c4b4498;
PyObject *const_dict_ab1444b74cebdb2a1a00c0c274cfc803;
PyObject *const_str_digest_9191384193e665f7af815147f7af9db2;
PyObject *const_tuple_str_plain__tasks_str_plain__post_remove_str_plain__caller_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_858ac91461ef19374e53ceae32f013bb;
PyObject *const_str_digest_d1b97b8bdb8a6460c1111237c021be3a;
PyObject *const_tuple_9a77b419c7e56a978e885cec548f5cef_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_tasks_str_plain_post_remove_tuple;
PyObject *const_tuple_str_plain_tasks_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_tasks_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[59];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.await_remove"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__tasks);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__post_remove);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_caller_file_and_line);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__caller);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_tasks);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_post_remove);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_caller);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain___rich_repr__);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_1005f8ecbd32b9e6469a4c456aefe388);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_acc9b3bd2da9fdb3942da413d6adfcb8);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_task);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c95c26c2f9a1d3952b2e6c390a429d5);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_await_prune);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e04e1f9988dcd1a9168e7ce1a0414a8);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain___await__);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_gather);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_invoke);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_564a45f820a2802c829cd2a2827bd425);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Task_str_plain_gather_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_Task);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generator);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c1e37fd8ccd6dfca7f8c17f951e18cf);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_invoke_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_9658aca140a7362a8aa36516dedacf67);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_caller_file_and_line_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CallbackType_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_CallbackType);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_auto);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd5bdfbc2c9ee6d86d06e3443b5cf8de);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d2d1f4a10db428ec555fe34fa3d68e6);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_AwaitRemove);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_int_pos_19);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_dict_d357e9652b21ef890baedaf0d4fe6974);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_43b4ef9c85a38a53ab83aa8b593bf4da);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_ab1444b74cebdb2a1a00c0c274cfc803);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_9191384193e665f7af815147f7af9db2);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__tasks_str_plain__post_remove_str_plain__caller_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_858ac91461ef19374e53ceae32f013bb);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1b97b8bdb8a6460c1111237c021be3a);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_9a77b419c7e56a978e885cec548f5cef_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_tasks_str_plain_post_remove_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tasks_str_plain_self_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_tasks_tuple);
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
void checkModuleConstants_textual$await_remove(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__tasks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__tasks);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__post_remove));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__post_remove);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_caller_file_and_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_caller_file_and_line);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__caller));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__caller);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_tasks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tasks);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_post_remove));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_post_remove);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_caller));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_caller);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain___rich_repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rich_repr__);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_1005f8ecbd32b9e6469a4c456aefe388));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1005f8ecbd32b9e6469a4c456aefe388);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_acc9b3bd2da9fdb3942da413d6adfcb8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_acc9b3bd2da9fdb3942da413d6adfcb8);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asyncio);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_task);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c95c26c2f9a1d3952b2e6c390a429d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c95c26c2f9a1d3952b2e6c390a429d5);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_await_prune));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_await_prune);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e04e1f9988dcd1a9168e7ce1a0414a8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e04e1f9988dcd1a9168e7ce1a0414a8);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain___await__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___await__);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_gather));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gather);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_invoke));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invoke);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_564a45f820a2802c829cd2a2827bd425));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_564a45f820a2802c829cd2a2827bd425);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Task_str_plain_gather_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Task_str_plain_gather_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_Task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Task);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generator);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c1e37fd8ccd6dfca7f8c17f951e18cf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c1e37fd8ccd6dfca7f8c17f951e18cf);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_invoke_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_invoke_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_9658aca140a7362a8aa36516dedacf67));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9658aca140a7362a8aa36516dedacf67);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_caller_file_and_line_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_caller_file_and_line_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CallbackType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CallbackType_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_CallbackType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CallbackType);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_auto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auto);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd5bdfbc2c9ee6d86d06e3443b5cf8de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd5bdfbc2c9ee6d86d06e3443b5cf8de);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d2d1f4a10db428ec555fe34fa3d68e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d2d1f4a10db428ec555fe34fa3d68e6);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_AwaitRemove));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AwaitRemove);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_int_pos_19));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_19);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_dict_d357e9652b21ef890baedaf0d4fe6974));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d357e9652b21ef890baedaf0d4fe6974);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_43b4ef9c85a38a53ab83aa8b593bf4da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43b4ef9c85a38a53ab83aa8b593bf4da);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_ab1444b74cebdb2a1a00c0c274cfc803));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ab1444b74cebdb2a1a00c0c274cfc803);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_9191384193e665f7af815147f7af9db2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9191384193e665f7af815147f7af9db2);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__tasks_str_plain__post_remove_str_plain__caller_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__tasks_str_plain__post_remove_str_plain__caller_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_858ac91461ef19374e53ceae32f013bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_858ac91461ef19374e53ceae32f013bb);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1b97b8bdb8a6460c1111237c021be3a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1b97b8bdb8a6460c1111237c021be3a);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_9a77b419c7e56a978e885cec548f5cef_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9a77b419c7e56a978e885cec548f5cef_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_tasks_str_plain_post_remove_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_tasks_str_plain_post_remove_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tasks_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_tasks_str_plain_self_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_tasks_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_tasks_tuple);
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
static PyObject *module_var_accessor_textual$await_remove$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$await_remove->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$await_remove->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$await_remove->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$await_remove$asyncio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$await_remove->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$await_remove->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$await_remove->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asyncio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asyncio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asyncio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asyncio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }

    return result;
}

static PyObject *module_var_accessor_textual$await_remove$gather(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$await_remove->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$await_remove->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_gather);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$await_remove->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_gather);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_gather);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_gather);
    }

    return result;
}

static PyObject *module_var_accessor_textual$await_remove$get_caller_file_and_line(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$await_remove->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$await_remove->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_get_caller_file_and_line);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$await_remove->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_get_caller_file_and_line);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_get_caller_file_and_line);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_caller_file_and_line);
    }

    return result;
}

static PyObject *module_var_accessor_textual$await_remove$invoke(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$await_remove->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$await_remove->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_invoke);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$await_remove->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_invoke);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_invoke, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_invoke);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_invoke, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_invoke);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_invoke);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_invoke);
    }

    return result;
}

static PyObject *module_var_accessor_textual$await_remove$rich(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$await_remove->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$await_remove->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$await_remove->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_c335856125ce6109be4a997f1dfbe6be;
static PyCodeObject *code_objects_4418be9516717fa2138df5e9cf639341;
static PyCodeObject *code_objects_62fb6af606403bf3f1f796ca151a417e;
static PyCodeObject *code_objects_2c9768f66977abd8d4d3567608ff658f;
static PyCodeObject *code_objects_0983a0389dbb961c986bba990fe0b555;
static PyCodeObject *code_objects_89e6bc5145f02c8f15e299599cad9e51;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_858ac91461ef19374e53ceae32f013bb); CHECK_OBJECT(module_filename_obj);
code_objects_c335856125ce6109be4a997f1dfbe6be = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_d1b97b8bdb8a6460c1111237c021be3a, mod_consts.const_str_digest_d1b97b8bdb8a6460c1111237c021be3a, NULL, NULL, 0, 0, 0);
code_objects_4418be9516717fa2138df5e9cf639341 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___await__, mod_consts.const_str_digest_9191384193e665f7af815147f7af9db2, mod_consts.const_tuple_9a77b419c7e56a978e885cec548f5cef_tuple, NULL, 1, 0, 0);
code_objects_62fb6af606403bf3f1f796ca151a417e = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_acc9b3bd2da9fdb3942da413d6adfcb8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2c9768f66977abd8d4d3567608ff658f = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_43b4ef9c85a38a53ab83aa8b593bf4da, mod_consts.const_tuple_str_plain_self_str_plain_tasks_str_plain_post_remove_tuple, NULL, 3, 0, 0);
code_objects_0983a0389dbb961c986bba990fe0b555 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rich_repr__, mod_consts.const_str_digest_1005f8ecbd32b9e6469a4c456aefe388, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_89e6bc5145f02c8f15e299599cad9e51 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_await_prune, mod_consts.const_str_digest_5e04e1f9988dcd1a9168e7ce1a0414a8, mod_consts.const_tuple_str_plain_tasks_str_plain_self_tuple, mod_consts.const_tuple_str_plain_self_str_plain_tasks_tuple, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$await_remove$$$function__2___rich_repr__$$$genobj__1___rich_repr__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_textual$await_remove$$$function__3___call__$$$coroutine__1___call__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_textual$await_remove$$$function__4___await__$$$function__1_await_prune$$$coroutine__1_await_prune(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$await_remove$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$await_remove$$$function__2___rich_repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$await_remove$$$function__3___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$await_remove$$$function__4___await__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$await_remove$$$function__4___await__$$$function__1_await_prune(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_textual$await_remove$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tasks = python_pars[1];
PyObject *par_post_remove = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$await_remove$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$await_remove$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$await_remove$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$await_remove$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$await_remove$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$await_remove$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2c9768f66977abd8d4d3567608ff658f, module_textual$await_remove, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$await_remove$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$await_remove$$$function__1___init__ = cache_frame_frame_textual$await_remove$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$await_remove$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$await_remove$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_tasks);
tmp_assattr_value_1 = par_tasks;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__tasks, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_post_remove);
tmp_assattr_value_2 = par_post_remove;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__post_remove, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_assattr_target_3;
tmp_called_value_1 = module_var_accessor_textual$await_remove$get_caller_file_and_line(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_caller_file_and_line);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$await_remove$$$function__1___init__->m_frame.f_lineno = 27;
tmp_assattr_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__caller, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$await_remove$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$await_remove$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$await_remove$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$await_remove$$$function__1___init__,
    type_description_1,
    par_self,
    par_tasks,
    par_post_remove
);


// Release cached frame if used for exception.
if (frame_frame_textual$await_remove$$$function__1___init__ == cache_frame_frame_textual$await_remove$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$await_remove$$$function__1___init__);
    cache_frame_frame_textual$await_remove$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$await_remove$$$function__1___init__);

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
CHECK_OBJECT(par_tasks);
Py_DECREF(par_tasks);
CHECK_OBJECT(par_post_remove);
Py_DECREF(par_post_remove);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tasks);
Py_DECREF(par_tasks);
CHECK_OBJECT(par_post_remove);
Py_DECREF(par_post_remove);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$await_remove$$$function__2___rich_repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_textual$await_remove$$$function__2___rich_repr__$$$genobj__1___rich_repr__(tstate, tmp_closure_1);

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
struct textual$await_remove$$$function__2___rich_repr__$$$genobj__1___rich_repr___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *textual$await_remove$$$function__2___rich_repr__$$$genobj__1___rich_repr___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$await_remove$$$function__2___rich_repr__$$$genobj__1___rich_repr___locals *generator_heap = (struct textual$await_remove$$$function__2___rich_repr__$$$genobj__1___rich_repr___locals *)generator->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_0983a0389dbb961c986bba990fe0b555, module_textual$await_remove, sizeof(void *));
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
PyObject *tmp_tuple_element_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_tuple_element_1 = mod_consts.const_str_plain_tasks;
tmp_expression_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM0(tmp_expression_value_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 30;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__tasks);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 30;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_expression_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 30;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_expression_value_3;
PyObject *tmp_tuple_element_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
tmp_tuple_element_2 = mod_consts.const_str_plain_post_remove;
tmp_expression_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM0(tmp_expression_value_3, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 31;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_2;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__post_remove);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 31;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_expression_value_3, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_3;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 31;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
{
PyObject *tmp_expression_value_5;
PyObject *tmp_tuple_element_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
tmp_tuple_element_3 = mod_consts.const_str_plain_caller;
tmp_expression_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_6;
PyTuple_SET_ITEM0(tmp_expression_value_5, 0, tmp_tuple_element_3);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 32;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_3;
}

tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__caller);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 32;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_expression_value_5, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = Py_None;
PyTuple_SET_ITEM0(tmp_expression_value_5, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_expression_value_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 3;
return tmp_expression_value_5;
yield_return_3:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 32;
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

static PyObject *MAKE_GENERATOR_textual$await_remove$$$function__2___rich_repr__$$$genobj__1___rich_repr__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$await_remove$$$function__2___rich_repr__$$$genobj__1___rich_repr___context,
        module_textual$await_remove,
        mod_consts.const_str_plain___rich_repr__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_1005f8ecbd32b9e6469a4c456aefe388,
#endif
        code_objects_0983a0389dbb961c986bba990fe0b555,
        closure,
        1,
#if 1
        sizeof(struct textual$await_remove$$$function__2___rich_repr__$$$genobj__1___rich_repr___locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$await_remove$$$function__3___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_textual$await_remove$$$function__3___call__$$$coroutine__1___call__(tstate, tmp_closure_1);

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
struct textual$await_remove$$$function__3___call__$$$coroutine__1___call___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *textual$await_remove$$$function__3___call__$$$coroutine__1___call___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$await_remove$$$function__3___call__$$$coroutine__1___call___locals *coroutine_heap = (struct textual$await_remove$$$function__3___call__$$$coroutine__1___call___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_62fb6af606403bf3f1f796ca151a417e, module_textual$await_remove, sizeof(void *));
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
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 35;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 35;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 35;
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


coroutine_heap->exception_lineno = 35;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
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

static PyObject *MAKE_COROUTINE_textual$await_remove$$$function__3___call__$$$coroutine__1___call__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$await_remove$$$function__3___call__$$$coroutine__1___call___context,
        module_textual$await_remove,
        mod_consts.const_str_plain___call__,
        mod_consts.const_str_digest_acc9b3bd2da9fdb3942da413d6adfcb8,
        code_objects_62fb6af606403bf3f1f796ca151a417e,
        closure,
        1,
#if 1
        sizeof(struct textual$await_remove$$$function__3___call__$$$coroutine__1___call___locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$await_remove$$$function__4___await__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_current_task = NULL;
struct Nuitka_CellObject *var_tasks = Nuitka_Cell_NewEmpty();
PyObject *var_await_prune = NULL;
PyObject *outline_0_var_task = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$await_remove$$$function__4___await__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$await_remove$$$function__4___await__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$await_remove$$$function__4___await__)) {
    Py_XDECREF(cache_frame_frame_textual$await_remove$$$function__4___await__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$await_remove$$$function__4___await__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$await_remove$$$function__4___await__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4418be9516717fa2138df5e9cf639341, module_textual$await_remove, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$await_remove$$$function__4___await__->m_type_description == NULL);
frame_frame_textual$await_remove$$$function__4___await__ = cache_frame_frame_textual$await_remove$$$function__4___await__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$await_remove$$$function__4___await__);
assert(Py_REFCNT(frame_frame_textual$await_remove$$$function__4___await__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_textual$await_remove$asyncio(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "coco";
    goto frame_exception_exit_1;
}
frame_frame_textual$await_remove$$$function__4___await__->m_frame.f_lineno = 38;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_task);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "coco";
    goto frame_exception_exit_1;
}
assert(var_current_task == NULL);
var_current_task = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__tasks);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "coco";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "coco";
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
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "coco";
exception_lineno = 39;
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
    PyObject *old = outline_0_var_task;
    outline_0_var_task = tmp_assign_source_6;
    Py_INCREF(outline_0_var_task);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(outline_0_var_task);
tmp_cmp_expr_left_1 = outline_0_var_task;
CHECK_OBJECT(var_current_task);
tmp_cmp_expr_right_1 = var_current_task;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_task);
tmp_append_value_1 = outline_0_var_task;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "coco";
    goto try_except_handler_3;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "coco";
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
Py_XDECREF(outline_0_var_task);
outline_0_var_task = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_task);
outline_0_var_task = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 39;
goto frame_exception_exit_1;
outline_result_1:;
assert(Nuitka_Cell_GET(var_tasks) == NULL);
Nuitka_Cell_SET(var_tasks, tmp_assign_source_2);

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = var_tasks;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_7 = MAKE_FUNCTION_textual$await_remove$$$function__4___await__$$$function__1_await_prune(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_await_prune == NULL);
var_await_prune = tmp_assign_source_7;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_called_value_1;
CHECK_OBJECT(var_await_prune);
tmp_called_value_1 = var_await_prune;
frame_frame_textual$await_remove$$$function__4___await__->m_frame.f_lineno = 47;
tmp_called_instance_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "coco";
    goto frame_exception_exit_1;
}
frame_frame_textual$await_remove$$$function__4___await__->m_frame.f_lineno = 47;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain___await__);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "coco";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$await_remove$$$function__4___await__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$await_remove$$$function__4___await__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$await_remove$$$function__4___await__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$await_remove$$$function__4___await__,
    type_description_1,
    par_self,
    var_current_task,
    var_tasks,
    var_await_prune
);


// Release cached frame if used for exception.
if (frame_frame_textual$await_remove$$$function__4___await__ == cache_frame_frame_textual$await_remove$$$function__4___await__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$await_remove$$$function__4___await__);
    cache_frame_frame_textual$await_remove$$$function__4___await__ = NULL;
}

assertFrameObject(frame_frame_textual$await_remove$$$function__4___await__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(var_current_task);
CHECK_OBJECT(var_current_task);
Py_DECREF(var_current_task);
var_current_task = NULL;
CHECK_OBJECT(var_tasks);
CHECK_OBJECT(var_tasks);
Py_DECREF(var_tasks);
var_tasks = NULL;
CHECK_OBJECT(var_await_prune);
CHECK_OBJECT(var_await_prune);
Py_DECREF(var_await_prune);
var_await_prune = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
Py_XDECREF(var_current_task);
var_current_task = NULL;
CHECK_OBJECT(var_tasks);
CHECK_OBJECT(var_tasks);
Py_DECREF(var_tasks);
var_tasks = NULL;
Py_XDECREF(var_await_prune);
var_await_prune = NULL;
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

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$await_remove$$$function__4___await__$$$function__1_await_prune(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = self->m_closure[1];
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_textual$await_remove$$$function__4___await__$$$function__1_await_prune$$$coroutine__1_await_prune(tstate, tmp_closure_1);

goto function_return_exit;
}

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
struct textual$await_remove$$$function__4___await__$$$function__1_await_prune$$$coroutine__1_await_prune_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *textual$await_remove$$$function__4___await__$$$function__1_await_prune$$$coroutine__1_await_prune_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$await_remove$$$function__4___await__$$$function__1_await_prune$$$coroutine__1_await_prune_locals *coroutine_heap = (struct textual$await_remove$$$function__4___await__$$$function__1_await_prune$$$coroutine__1_await_prune_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_89e6bc5145f02c8f15e299599cad9e51, module_textual$await_remove, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 43;
tmp_direct_call_arg1_1 = module_var_accessor_textual$await_remove$gather(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_gather);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 43;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_tasks);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 43;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg2_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_expression_value_2 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 43;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 43;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 43;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__post_remove);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 44;
coroutine_heap->type_description_1 = "cc";
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
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 45;
tmp_called_value_1 = module_var_accessor_textual$await_remove$invoke(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_invoke);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 45;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 45;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__post_remove);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 45;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 45;
tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 45;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 45;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 45;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
branch_no_1:;

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
    coroutine->m_closure[1],
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

static PyObject *MAKE_COROUTINE_textual$await_remove$$$function__4___await__$$$function__1_await_prune$$$coroutine__1_await_prune(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$await_remove$$$function__4___await__$$$function__1_await_prune$$$coroutine__1_await_prune_context,
        module_textual$await_remove,
        mod_consts.const_str_plain_await_prune,
        mod_consts.const_str_digest_5e04e1f9988dcd1a9168e7ce1a0414a8,
        code_objects_89e6bc5145f02c8f15e299599cad9e51,
        closure,
        2,
#if 1
        sizeof(struct textual$await_remove$$$function__4___await__$$$function__1_await_prune$$$coroutine__1_await_prune_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_textual$await_remove$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$await_remove$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_43b4ef9c85a38a53ab83aa8b593bf4da,
#endif
        code_objects_2c9768f66977abd8d4d3567608ff658f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$await_remove,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$await_remove$$$function__2___rich_repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$await_remove$$$function__2___rich_repr__,
        mod_consts.const_str_plain___rich_repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1005f8ecbd32b9e6469a4c456aefe388,
#endif
        code_objects_0983a0389dbb961c986bba990fe0b555,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$await_remove,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$await_remove$$$function__3___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$await_remove$$$function__3___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_acc9b3bd2da9fdb3942da413d6adfcb8,
#endif
        code_objects_62fb6af606403bf3f1f796ca151a417e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$await_remove,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$await_remove$$$function__4___await__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$await_remove$$$function__4___await__,
        mod_consts.const_str_plain___await__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9191384193e665f7af815147f7af9db2,
#endif
        code_objects_4418be9516717fa2138df5e9cf639341,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$await_remove,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$await_remove$$$function__4___await__$$$function__1_await_prune(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$await_remove$$$function__4___await__$$$function__1_await_prune,
        mod_consts.const_str_plain_await_prune,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5e04e1f9988dcd1a9168e7ce1a0414a8,
#endif
        code_objects_89e6bc5145f02c8f15e299599cad9e51,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$await_remove,
        mod_consts.const_str_digest_0c95c26c2f9a1d3952b2e6c390a429d5,
        closure,
        2
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

static function_impl_code const function_table_textual$await_remove[] = {
impl_textual$await_remove$$$function__4___await__$$$function__1_await_prune,
impl_textual$await_remove$$$function__1___init__,
impl_textual$await_remove$$$function__2___rich_repr__,
impl_textual$await_remove$$$function__3___call__,
impl_textual$await_remove$$$function__4___await__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$await_remove);
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
        module_textual$await_remove,
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
        function_table_textual$await_remove,
        sizeof(function_table_textual$await_remove) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.await_remove";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$await_remove(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$await_remove");

    // Store the module for future use.
    module_textual$await_remove = module;

    moduledict_textual$await_remove = MODULE_DICT(module_textual$await_remove);

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
        PRINT_STRING("textual$await_remove: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$await_remove: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$await_remove: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.await_remove" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$await_remove\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$await_remove,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$await_remove,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$await_remove,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$await_remove,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$await_remove,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$await_remove);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$await_remove);
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

        UPDATE_STRING_DICT1(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$await_remove;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_textual$await_remove$$$class__1_AwaitRemove_19 = NULL;
PyObject *tmp_dictset_value;
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
tmp_assign_source_1 = mod_consts.const_str_digest_564a45f820a2802c829cd2a2827bd425;
UPDATE_STRING_DICT0(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$await_remove = MAKE_MODULE_FRAME(code_objects_c335856125ce6109be4a997f1dfbe6be, module_textual$await_remove);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$await_remove);
assert(Py_REFCNT(frame_frame_textual$await_remove) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$await_remove$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$await_remove$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_asyncio;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$await_remove;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$await_remove->m_frame.f_lineno = 7;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_asyncio;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$await_remove;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Task_str_plain_gather_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$await_remove->m_frame.f_lineno = 8;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$await_remove,
        mod_consts.const_str_plain_Task,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Task);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_Task, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$await_remove,
        mod_consts.const_str_plain_gather,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_gather);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_gather, tmp_assign_source_8);
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
PyObject *tmp_import_name_from_3;
tmp_import_name_from_3 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_3 == NULL));
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$await_remove,
        mod_consts.const_str_plain_Generator,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Generator);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_Generator, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$await_remove;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_textual$await_remove->m_frame.f_lineno = 11;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_rich, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_5c1e37fd8ccd6dfca7f8c17f951e18cf;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$await_remove;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_invoke_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$await_remove->m_frame.f_lineno = 13;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$await_remove,
        mod_consts.const_str_plain_invoke,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_invoke);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_invoke, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_9658aca140a7362a8aa36516dedacf67;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$await_remove;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_get_caller_file_and_line_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$await_remove->m_frame.f_lineno = 14;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$await_remove,
        mod_consts.const_str_plain_get_caller_file_and_line,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_get_caller_file_and_line);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_get_caller_file_and_line, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$await_remove;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_CallbackType_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_textual$await_remove->m_frame.f_lineno = 15;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$await_remove,
        mod_consts.const_str_plain_CallbackType,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_CallbackType);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_CallbackType, tmp_assign_source_13);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_textual$await_remove$rich(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rich);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;

    goto try_except_handler_2;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_repr);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$await_remove$$$class__1_AwaitRemove_19 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_dd5bdfbc2c9ee6d86d06e3443b5cf8de;
tmp_result = DICT_SET_ITEM(locals_textual$await_remove$$$class__1_AwaitRemove_19, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_7d2d1f4a10db428ec555fe34fa3d68e6;
tmp_result = DICT_SET_ITEM(locals_textual$await_remove$$$class__1_AwaitRemove_19, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AwaitRemove;
tmp_result = DICT_SET_ITEM(locals_textual$await_remove$$$class__1_AwaitRemove_19, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_19;
tmp_result = DICT_SET_ITEM(locals_textual$await_remove$$$class__1_AwaitRemove_19, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_d357e9652b21ef890baedaf0d4fe6974);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_textual$await_remove$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_textual$await_remove$$$class__1_AwaitRemove_19, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);

tmp_dictset_value = MAKE_FUNCTION_textual$await_remove$$$function__2___rich_repr__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_textual$await_remove$$$class__1_AwaitRemove_19, mod_consts.const_str_plain___rich_repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$await_remove$$$function__3___call__(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_textual$await_remove$$$class__1_AwaitRemove_19, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_ab1444b74cebdb2a1a00c0c274cfc803);

tmp_dictset_value = MAKE_FUNCTION_textual$await_remove$$$function__4___await__(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_textual$await_remove$$$class__1_AwaitRemove_19, mod_consts.const_str_plain___await__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain__tasks_str_plain__post_remove_str_plain__caller_tuple;
tmp_result = DICT_SET_ITEM(locals_textual$await_remove$$$class__1_AwaitRemove_19, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_AwaitRemove;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_textual$await_remove$$$class__1_AwaitRemove_19;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$await_remove->m_frame.f_lineno = 19;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_17;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_args_element_value_1 = outline_0_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_textual$await_remove$$$class__1_AwaitRemove_19);
locals_textual$await_remove$$$class__1_AwaitRemove_19 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$await_remove$$$class__1_AwaitRemove_19);
locals_textual$await_remove$$$class__1_AwaitRemove_19 = NULL;
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
exception_lineno = 19;
goto try_except_handler_2;
outline_result_2:;
frame_frame_textual$await_remove->m_frame.f_lineno = 18;
tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_auto, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$await_remove, (Nuitka_StringObject *)mod_consts.const_str_plain_AwaitRemove, tmp_assign_source_16);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$await_remove, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$await_remove->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$await_remove, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$await_remove);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$await_remove", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.await_remove" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$await_remove);
    return module_textual$await_remove;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$await_remove, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$await_remove", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

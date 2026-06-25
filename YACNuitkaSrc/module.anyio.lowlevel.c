/* Generated code for Python module 'anyio$lowlevel'
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



/* The "module_anyio$lowlevel" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$lowlevel;
PyDictObject *moduledict_anyio$lowlevel;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_34bf27162afb802cf42f15b80f986e4f;
PyObject *const_str_plain_get_async_backend;
PyObject *const_str_plain_checkpoint;
PyObject *const_str_digest_34bc39c3c13b05f0e95a5fe586443e34;
PyObject *const_str_plain_checkpoint_if_cancelled;
PyObject *const_str_digest_02418136027a3be159f82f5d129fe12f;
PyObject *const_str_plain_cancel_shielded_checkpoint;
PyObject *const_str_plain_current_token;
PyObject *const_str_digest_3955c2049f3725869bb556f67e7c999f;
PyObject *const_str_plain__var;
PyObject *const_str_plain__value;
PyObject *const_str_plain__redeemed;
PyObject *const_str_plain__name;
PyObject *const_str_plain__default;
PyObject *const_str_plain__run_vars;
PyObject *const_str_plain__current_vars;
PyObject *const_str_plain_RunVar;
PyObject *const_str_plain_NO_VALUE_SET;
PyObject *const_str_digest_2b38abbad7321d9592f9e2bce08b4b6b;
PyObject *const_str_digest_8cec1a45a67bfbafd3a886b035e2e807;
PyObject *const_str_plain_RunvarToken;
PyObject *const_str_digest_f3d6b6f57a85a7b33cd10312c81087de;
PyObject *const_str_digest_c3bf9359595d99c8bd6952038660d8da;
PyObject *const_str_plain__NoValueSet;
PyObject *const_str_digest_705c7a48148ce14a0739e92a26af6ca7;
PyObject *const_str_chr_62;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_enum;
PyObject *const_str_plain_dataclasses;
PyObject *const_tuple_str_plain_dataclass_tuple;
PyObject *const_str_plain_dataclass;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Generic;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_overload;
PyObject *const_str_plain_weakref;
PyObject *const_tuple_str_plain_WeakKeyDictionary_tuple;
PyObject *const_str_plain_WeakKeyDictionary;
PyObject *const_str_digest_cf5bddb4df1babed4c2cafa5ee4c8f84;
PyObject *const_tuple_str_plain_get_async_backend_tuple;
PyObject *const_tuple_str_plain_T_tuple;
PyObject *const_str_plain_T;
PyObject *const_tuple_str_plain_D_tuple;
PyObject *const_str_plain_D;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_dict_d8a87def7d74b8d00e0a6e345b09bc91;
PyObject *const_str_digest_083228e79ebd6fec2a472bab0867444f;
PyObject *const_str_plain__token_wrappers;
PyObject *const_str_digest_a3f9d0a65e0dd9eca4e939b8e1d5e6ec;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_frozen_tuple;
PyObject *const_str_digest_dc552dc98c880f665528182bafde84df;
PyObject *const_str_plain__TokenWrapper;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_72;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_str_plain__token_str_plain___weakref___tuple;
PyObject *const_str_plain___slots__;
PyObject *const_str_plain_object;
PyObject *const_str_plain__token;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_Enum;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_int_pos_77;
PyObject *const_str_plain_auto;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_81;
PyObject *const_tuple_str_plain__var_str_plain__value_str_plain__redeemed_tuple;
PyObject *const_dict_4ec256309942372006a3c0879e1e4765;
PyObject *const_str_digest_038a5cc21616982cf551dec5da80d6db;
PyObject *const_str_digest_39f8ebe7c74deb5637c9eb8434a4a0fe;
PyObject *const_int_pos_90;
PyObject *const_tuple_str_plain__name_str_plain__default_tuple;
PyObject *const_str_digest_69b7bdc16c5db16f1e77029c2e0c287d;
PyObject *const_str_plain_set;
PyObject *const_str_digest_b90a83246a8d017f2cfdfc7e7c7ac4f7;
PyObject *const_dict_c212d4572e4bebac71047b49ac9fc30c;
PyObject *const_str_digest_9d36412c9e9634208340b38f581aeca5;
PyObject *const_str_plain_property;
PyObject *const_dict_e7333726a313f9d19396d9053a579863;
PyObject *const_str_digest_e7341fce0a7df1c10c728d0c79470a7e;
PyObject *const_dict_6e9a4313a46be6111c2fd8a9efeade8e;
PyObject *const_str_digest_25b61b2b7057735225e1a74989b743b9;
PyObject *const_dict_bffb516e78b31ac765febcae6d212486;
PyObject *const_dict_4da1dc822957c1cf94e5abc44392c1ec;
PyObject *const_dict_f5458dd13c478fbf3c6927bf78fd574b;
PyObject *const_str_digest_706094ebfec57970cd9ceeaff2eb545f;
PyObject *const_dict_235af9a8d3e49a0a289f8e89877ca53e;
PyObject *const_str_plain_reset;
PyObject *const_str_digest_4222ff4d349ae03535b3b229d9be43f1;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_516056ef54a2280691dcd17dd0e76ce1;
PyObject *const_str_digest_679e180a769807a270332071c8fdecee;
PyObject *const_str_digest_bfa9001bfb22a34a284d238b3c2727f6;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple;
PyObject *const_tuple_str_plain_self_str_plain_var_str_plain_value_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_token_str_plain_run_vars_tuple;
PyObject *const_tuple_str_plain_self_str_plain_default_tuple;
PyObject *const_tuple_str_plain_self_str_plain_token_tuple;
PyObject *const_tuple_4d98c7377210a6ce8c57813bf01bc590_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[109];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anyio.lowlevel"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_34bf27162afb802cf42f15b80f986e4f);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_async_backend);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_34bc39c3c13b05f0e95a5fe586443e34);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint_if_cancelled);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_02418136027a3be159f82f5d129fe12f);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancel_shielded_checkpoint);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_token);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_3955c2049f3725869bb556f67e7c999f);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__var);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__value);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__redeemed);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__name);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__default);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__run_vars);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__current_vars);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunVar);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_NO_VALUE_SET);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b38abbad7321d9592f9e2bce08b4b6b);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_8cec1a45a67bfbafd3a886b035e2e807);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunvarToken);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3d6b6f57a85a7b33cd10312c81087de);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3bf9359595d99c8bd6952038660d8da);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__NoValueSet);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_705c7a48148ce14a0739e92a26af6ca7);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_chr_62);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generic);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_weakref);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WeakKeyDictionary_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_WeakKeyDictionary);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf5bddb4df1babed4c2cafa5ee4c8f84);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_async_backend_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_D_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_D);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_d8a87def7d74b8d00e0a6e345b09bc91);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_083228e79ebd6fec2a472bab0867444f);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__token_wrappers);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3f9d0a65e0dd9eca4e939b8e1d5e6ec);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_frozen_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc552dc98c880f665528182bafde84df);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__TokenWrapper);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_int_pos_72);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__token_str_plain___weakref___tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain___slots__);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_object);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__token);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_Enum);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_int_pos_77);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_auto);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_int_pos_81);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__var_str_plain__value_str_plain__redeemed_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_dict_4ec256309942372006a3c0879e1e4765);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_038a5cc21616982cf551dec5da80d6db);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_39f8ebe7c74deb5637c9eb8434a4a0fe);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_int_pos_90);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__name_str_plain__default_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_69b7bdc16c5db16f1e77029c2e0c287d);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_set);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_b90a83246a8d017f2cfdfc7e7c7ac4f7);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_dict_c212d4572e4bebac71047b49ac9fc30c);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d36412c9e9634208340b38f581aeca5);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_dict_e7333726a313f9d19396d9053a579863);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_e7341fce0a7df1c10c728d0c79470a7e);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_dict_6e9a4313a46be6111c2fd8a9efeade8e);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_25b61b2b7057735225e1a74989b743b9);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_dict_bffb516e78b31ac765febcae6d212486);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_dict_4da1dc822957c1cf94e5abc44392c1ec);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_dict_f5458dd13c478fbf3c6927bf78fd574b);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_706094ebfec57970cd9ceeaff2eb545f);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_dict_235af9a8d3e49a0a289f8e89877ca53e);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_reset);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_4222ff4d349ae03535b3b229d9be43f1);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_516056ef54a2280691dcd17dd0e76ce1);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_679e180a769807a270332071c8fdecee);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfa9001bfb22a34a284d238b3c2727f6);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_var_str_plain_value_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_token_str_plain_run_vars_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_default_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_token_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_4d98c7377210a6ce8c57813bf01bc590_tuple);
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
void checkModuleConstants_anyio$lowlevel(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_34bf27162afb802cf42f15b80f986e4f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34bf27162afb802cf42f15b80f986e4f);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_async_backend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_async_backend);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_checkpoint);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_34bc39c3c13b05f0e95a5fe586443e34));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34bc39c3c13b05f0e95a5fe586443e34);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint_if_cancelled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_checkpoint_if_cancelled);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_02418136027a3be159f82f5d129fe12f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_02418136027a3be159f82f5d129fe12f);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancel_shielded_checkpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancel_shielded_checkpoint);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_token);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_3955c2049f3725869bb556f67e7c999f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3955c2049f3725869bb556f67e7c999f);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__var));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__var);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__value);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__redeemed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__redeemed);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__name);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__default);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__run_vars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__run_vars);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__current_vars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__current_vars);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunVar);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_NO_VALUE_SET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NO_VALUE_SET);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b38abbad7321d9592f9e2bce08b4b6b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b38abbad7321d9592f9e2bce08b4b6b);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_8cec1a45a67bfbafd3a886b035e2e807));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8cec1a45a67bfbafd3a886b035e2e807);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunvarToken));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunvarToken);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3d6b6f57a85a7b33cd10312c81087de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3d6b6f57a85a7b33cd10312c81087de);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3bf9359595d99c8bd6952038660d8da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3bf9359595d99c8bd6952038660d8da);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__NoValueSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NoValueSet);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_705c7a48148ce14a0739e92a26af6ca7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_705c7a48148ce14a0739e92a26af6ca7);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_chr_62));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_62);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enum);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dataclass_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generic);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_weakref));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_weakref);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WeakKeyDictionary_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_WeakKeyDictionary_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_WeakKeyDictionary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WeakKeyDictionary);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf5bddb4df1babed4c2cafa5ee4c8f84));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf5bddb4df1babed4c2cafa5ee4c8f84);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_async_backend_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_async_backend_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_T_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_D_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_D_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_D));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_D);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_d8a87def7d74b8d00e0a6e345b09bc91));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d8a87def7d74b8d00e0a6e345b09bc91);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_083228e79ebd6fec2a472bab0867444f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_083228e79ebd6fec2a472bab0867444f);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__token_wrappers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__token_wrappers);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3f9d0a65e0dd9eca4e939b8e1d5e6ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3f9d0a65e0dd9eca4e939b8e1d5e6ec);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_frozen_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_frozen_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc552dc98c880f665528182bafde84df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc552dc98c880f665528182bafde84df);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__TokenWrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__TokenWrapper);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_int_pos_72));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_72);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__token_str_plain___weakref___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__token_str_plain___weakref___tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain___slots__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___slots__);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_object);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__token);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_Enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Enum);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_int_pos_77));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_77);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_auto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auto);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_int_pos_81));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_81);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__var_str_plain__value_str_plain__redeemed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__var_str_plain__value_str_plain__redeemed_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_dict_4ec256309942372006a3c0879e1e4765));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4ec256309942372006a3c0879e1e4765);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_038a5cc21616982cf551dec5da80d6db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_038a5cc21616982cf551dec5da80d6db);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_39f8ebe7c74deb5637c9eb8434a4a0fe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39f8ebe7c74deb5637c9eb8434a4a0fe);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_int_pos_90));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_90);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__name_str_plain__default_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__name_str_plain__default_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_69b7bdc16c5db16f1e77029c2e0c287d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69b7bdc16c5db16f1e77029c2e0c287d);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_b90a83246a8d017f2cfdfc7e7c7ac4f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b90a83246a8d017f2cfdfc7e7c7ac4f7);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_dict_c212d4572e4bebac71047b49ac9fc30c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c212d4572e4bebac71047b49ac9fc30c);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d36412c9e9634208340b38f581aeca5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d36412c9e9634208340b38f581aeca5);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_dict_e7333726a313f9d19396d9053a579863));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e7333726a313f9d19396d9053a579863);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_e7341fce0a7df1c10c728d0c79470a7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e7341fce0a7df1c10c728d0c79470a7e);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_dict_6e9a4313a46be6111c2fd8a9efeade8e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e9a4313a46be6111c2fd8a9efeade8e);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_25b61b2b7057735225e1a74989b743b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_25b61b2b7057735225e1a74989b743b9);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_dict_bffb516e78b31ac765febcae6d212486));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bffb516e78b31ac765febcae6d212486);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_dict_4da1dc822957c1cf94e5abc44392c1ec));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4da1dc822957c1cf94e5abc44392c1ec);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_dict_f5458dd13c478fbf3c6927bf78fd574b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f5458dd13c478fbf3c6927bf78fd574b);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_706094ebfec57970cd9ceeaff2eb545f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_706094ebfec57970cd9ceeaff2eb545f);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_dict_235af9a8d3e49a0a289f8e89877ca53e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_235af9a8d3e49a0a289f8e89877ca53e);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_reset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reset);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_4222ff4d349ae03535b3b229d9be43f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4222ff4d349ae03535b3b229d9be43f1);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_516056ef54a2280691dcd17dd0e76ce1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_516056ef54a2280691dcd17dd0e76ce1);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_679e180a769807a270332071c8fdecee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_679e180a769807a270332071c8fdecee);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfa9001bfb22a34a284d238b3c2727f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfa9001bfb22a34a284d238b3c2727f6);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_var_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_var_str_plain_value_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_token_str_plain_run_vars_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_token_str_plain_run_vars_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_default_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_default_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_token_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_4d98c7377210a6ce8c57813bf01bc590_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4d98c7377210a6ce8c57813bf01bc590_tuple);
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
static PyObject *module_var_accessor_anyio$lowlevel$Generic(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$lowlevel$RunVar(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_RunVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RunVar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RunVar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RunVar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RunVar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_RunVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_RunVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RunVar);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$lowlevel$RunvarToken(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_RunvarToken);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RunvarToken);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RunvarToken, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RunvarToken);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RunvarToken, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_RunvarToken);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_RunvarToken);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RunvarToken);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$lowlevel$T(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_T);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_T, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_T);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_T, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$lowlevel$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$lowlevel$WeakKeyDictionary(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_WeakKeyDictionary);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WeakKeyDictionary);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WeakKeyDictionary, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WeakKeyDictionary);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WeakKeyDictionary, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_WeakKeyDictionary);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_WeakKeyDictionary);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WeakKeyDictionary);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$lowlevel$_NoValueSet(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__NoValueSet);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NoValueSet);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NoValueSet, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NoValueSet);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NoValueSet, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__NoValueSet);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__NoValueSet);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__NoValueSet);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$lowlevel$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$lowlevel$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$lowlevel$_run_vars(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__run_vars);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_vars);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_vars, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_vars);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_vars, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__run_vars);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__run_vars);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__run_vars);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$lowlevel$current_token(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_current_token);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_current_token);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_current_token, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_current_token);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_current_token, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_current_token);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_current_token);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_current_token);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$lowlevel$dataclass(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$lowlevel$enum(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$lowlevel$get_async_backend(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$lowlevel$overload(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$lowlevel->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f67868cda62d0ee0992f0cea931f34f6;
static PyCodeObject *code_objects_29bb99b4afdf1e96bbb832c3d0833974;
static PyCodeObject *code_objects_8131a006b92bedd968e299df5a026fbe;
static PyCodeObject *code_objects_5e95fd32d164ebb9e8125f339551081e;
static PyCodeObject *code_objects_125296098b0ff6040b052b47d6bde06a;
static PyCodeObject *code_objects_8cbae051321373c77e23cff3cb165305;
static PyCodeObject *code_objects_95266bef264bca38d29d42c795da4c03;
static PyCodeObject *code_objects_836c994d483d924bd90733cc3cb2af78;
static PyCodeObject *code_objects_bf5e960d92b411d16345c9b27be6a4c0;
static PyCodeObject *code_objects_8744f049c5d948cfb04028951c43385d;
static PyCodeObject *code_objects_a2766d771df504ceff48ea4c6b529ff1;
static PyCodeObject *code_objects_6c2fb628b6995855228e1c80982936b4;
static PyCodeObject *code_objects_a5e3f15c841fbb68de2a8eb62de1a0e3;
static PyCodeObject *code_objects_51a33ec81b483a967fa2a52cb6eeda9f;
static PyCodeObject *code_objects_e2441a532c985b0b9ba1f9d11b828415;
static PyCodeObject *code_objects_f856bc8f49d9c8cf91a157087044c621;
static PyCodeObject *code_objects_2992a581bdf7ec854173cacfbc74852a;
static PyCodeObject *code_objects_afd7cc068b0f23aefd5ba0bb037f3604;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_679e180a769807a270332071c8fdecee); CHECK_OBJECT(module_filename_obj);
code_objects_f67868cda62d0ee0992f0cea931f34f6 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_bfa9001bfb22a34a284d238b3c2727f6, mod_consts.const_str_digest_bfa9001bfb22a34a284d238b3c2727f6, NULL, NULL, 0, 0, 0);
code_objects_29bb99b4afdf1e96bbb832c3d0833974 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_RunVar, mod_consts.const_str_plain_RunVar, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8131a006b92bedd968e299df5a026fbe = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_RunvarToken, mod_consts.const_str_plain_RunvarToken, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5e95fd32d164ebb9e8125f339551081e = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__NoValueSet, mod_consts.const_str_plain__NoValueSet, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_125296098b0ff6040b052b47d6bde06a = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__TokenWrapper, mod_consts.const_str_plain__TokenWrapper, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8cbae051321373c77e23cff3cb165305 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_9d36412c9e9634208340b38f581aeca5, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple, NULL, 3, 0, 0);
code_objects_95266bef264bca38d29d42c795da4c03 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_038a5cc21616982cf551dec5da80d6db, mod_consts.const_tuple_str_plain_self_str_plain_var_str_plain_value_tuple, NULL, 3, 0, 0);
code_objects_836c994d483d924bd90733cc3cb2af78 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_516056ef54a2280691dcd17dd0e76ce1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bf5e960d92b411d16345c9b27be6a4c0 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__current_vars, mod_consts.const_str_digest_e7341fce0a7df1c10c728d0c79470a7e, mod_consts.const_tuple_str_plain_self_str_plain_token_str_plain_run_vars_tuple, NULL, 1, 0, 0);
code_objects_8744f049c5d948cfb04028951c43385d = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cancel_shielded_checkpoint, mod_consts.const_str_plain_cancel_shielded_checkpoint, NULL, NULL, 0, 0, 0);
code_objects_a2766d771df504ceff48ea4c6b529ff1 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_checkpoint, mod_consts.const_str_plain_checkpoint, NULL, NULL, 0, 0, 0);
code_objects_6c2fb628b6995855228e1c80982936b4 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_checkpoint_if_cancelled, mod_consts.const_str_plain_checkpoint_if_cancelled, NULL, NULL, 0, 0, 0);
code_objects_a5e3f15c841fbb68de2a8eb62de1a0e3 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_current_token, mod_consts.const_str_plain_current_token, NULL, NULL, 0, 0, 0);
code_objects_51a33ec81b483a967fa2a52cb6eeda9f = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_get, mod_consts.const_str_digest_25b61b2b7057735225e1a74989b743b9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e2441a532c985b0b9ba1f9d11b828415 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_get, mod_consts.const_str_digest_25b61b2b7057735225e1a74989b743b9, mod_consts.const_tuple_str_plain_self_str_plain_default_tuple, NULL, 2, 0, 0);
code_objects_f856bc8f49d9c8cf91a157087044c621 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_get, mod_consts.const_str_digest_25b61b2b7057735225e1a74989b743b9, mod_consts.const_tuple_str_plain_self_str_plain_default_tuple, NULL, 2, 0, 0);
code_objects_2992a581bdf7ec854173cacfbc74852a = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_reset, mod_consts.const_str_digest_4222ff4d349ae03535b3b229d9be43f1, mod_consts.const_tuple_str_plain_self_str_plain_token_tuple, NULL, 2, 0, 0);
code_objects_afd7cc068b0f23aefd5ba0bb037f3604 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set, mod_consts.const_str_digest_706094ebfec57970cd9ceeaff2eb545f, mod_consts.const_tuple_4d98c7377210a6ce8c57813bf01bc590_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_anyio$lowlevel$$$function__1_checkpoint$$$coroutine__1_checkpoint(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$lowlevel$$$function__2_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$lowlevel$$$function__3_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint(PyThreadState *tstate);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__10_get(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__11_set(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__12_reset(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__13___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__1_checkpoint(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__2_checkpoint_if_cancelled(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__3_cancel_shielded_checkpoint(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__4_current_token(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__5___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__7__current_vars(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__8_get(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__9_get(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anyio$lowlevel$$$function__1_checkpoint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.

tmp_return_value = MAKE_COROUTINE_anyio$lowlevel$$$function__1_checkpoint$$$coroutine__1_checkpoint(tstate);

goto function_return_exit;

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
struct anyio$lowlevel$$$function__1_checkpoint$$$coroutine__1_checkpoint_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$lowlevel$$$function__1_checkpoint$$$coroutine__1_checkpoint_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$lowlevel$$$function__1_checkpoint$$$coroutine__1_checkpoint_locals *coroutine_heap = (struct anyio$lowlevel$$$function__1_checkpoint$$$coroutine__1_checkpoint_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a2766d771df504ceff48ea4c6b529ff1, module_anyio$lowlevel, 0);
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
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 27;
tmp_called_value_1 = module_var_accessor_anyio$lowlevel$get_async_backend(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 27;

    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 27;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 27;

    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 27;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_checkpoint);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 27;

    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 27;

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
    coroutine_heap->type_description_1
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

static PyObject *MAKE_COROUTINE_anyio$lowlevel$$$function__1_checkpoint$$$coroutine__1_checkpoint(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$lowlevel$$$function__1_checkpoint$$$coroutine__1_checkpoint_context,
        module_anyio$lowlevel,
        mod_consts.const_str_plain_checkpoint,
        NULL,
        code_objects_a2766d771df504ceff48ea4c6b529ff1,
        NULL,
        0,
#if 1
        sizeof(struct anyio$lowlevel$$$function__1_checkpoint$$$coroutine__1_checkpoint_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$lowlevel$$$function__2_checkpoint_if_cancelled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.

tmp_return_value = MAKE_COROUTINE_anyio$lowlevel$$$function__2_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled(tstate);

goto function_return_exit;

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
struct anyio$lowlevel$$$function__2_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$lowlevel$$$function__2_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$lowlevel$$$function__2_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_locals *coroutine_heap = (struct anyio$lowlevel$$$function__2_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_6c2fb628b6995855228e1c80982936b4, module_anyio$lowlevel, 0);
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
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 39;
tmp_called_value_1 = module_var_accessor_anyio$lowlevel$get_async_backend(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 39;

    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 39;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 39;

    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 39;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_checkpoint_if_cancelled);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 39;

    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 39;

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
    coroutine_heap->type_description_1
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

static PyObject *MAKE_COROUTINE_anyio$lowlevel$$$function__2_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$lowlevel$$$function__2_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_context,
        module_anyio$lowlevel,
        mod_consts.const_str_plain_checkpoint_if_cancelled,
        NULL,
        code_objects_6c2fb628b6995855228e1c80982936b4,
        NULL,
        0,
#if 1
        sizeof(struct anyio$lowlevel$$$function__2_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$lowlevel$$$function__3_cancel_shielded_checkpoint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.

tmp_return_value = MAKE_COROUTINE_anyio$lowlevel$$$function__3_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint(tstate);

goto function_return_exit;

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
struct anyio$lowlevel$$$function__3_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$lowlevel$$$function__3_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$lowlevel$$$function__3_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_locals *coroutine_heap = (struct anyio$lowlevel$$$function__3_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8744f049c5d948cfb04028951c43385d, module_anyio$lowlevel, 0);
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
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 55;
tmp_called_value_1 = module_var_accessor_anyio$lowlevel$get_async_backend(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 55;

    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 55;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 55;

    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 55;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_cancel_shielded_checkpoint);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 55;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 55;

    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 55;

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
    coroutine_heap->type_description_1
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

static PyObject *MAKE_COROUTINE_anyio$lowlevel$$$function__3_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$lowlevel$$$function__3_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_context,
        module_anyio$lowlevel,
        mod_consts.const_str_plain_cancel_shielded_checkpoint,
        NULL,
        code_objects_8744f049c5d948cfb04028951c43385d,
        NULL,
        0,
#if 1
        sizeof(struct anyio$lowlevel$$$function__3_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$lowlevel$$$function__4_current_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_anyio$lowlevel$$$function__4_current_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$lowlevel$$$function__4_current_token = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$lowlevel$$$function__4_current_token)) {
    Py_XDECREF(cache_frame_frame_anyio$lowlevel$$$function__4_current_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$lowlevel$$$function__4_current_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$lowlevel$$$function__4_current_token = MAKE_FUNCTION_FRAME(tstate, code_objects_a5e3f15c841fbb68de2a8eb62de1a0e3, module_anyio$lowlevel, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$lowlevel$$$function__4_current_token->m_type_description == NULL);
frame_frame_anyio$lowlevel$$$function__4_current_token = cache_frame_frame_anyio$lowlevel$$$function__4_current_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$lowlevel$$$function__4_current_token);
assert(Py_REFCNT(frame_frame_anyio$lowlevel$$$function__4_current_token) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_anyio$lowlevel$get_async_backend(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_async_backend);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto frame_exception_exit_1;
}
frame_frame_anyio$lowlevel$$$function__4_current_token->m_frame.f_lineno = 64;
tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
frame_frame_anyio$lowlevel$$$function__4_current_token->m_frame.f_lineno = 64;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_token);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$function__4_current_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$lowlevel$$$function__4_current_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$function__4_current_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$lowlevel$$$function__4_current_token,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_anyio$lowlevel$$$function__4_current_token == cache_frame_frame_anyio$lowlevel$$$function__4_current_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$lowlevel$$$function__4_current_token);
    cache_frame_frame_anyio$lowlevel$$$function__4_current_token = NULL;
}

assertFrameObject(frame_frame_anyio$lowlevel$$$function__4_current_token);

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


static PyObject *impl_anyio$lowlevel$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_var = python_pars[1];
PyObject *par_value = python_pars[2];
struct Nuitka_FrameObject *frame_frame_anyio$lowlevel$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$lowlevel$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$lowlevel$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_anyio$lowlevel$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$lowlevel$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$lowlevel$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_95266bef264bca38d29d42c795da4c03, module_anyio$lowlevel, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$lowlevel$$$function__5___init__->m_type_description == NULL);
frame_frame_anyio$lowlevel$$$function__5___init__ = cache_frame_frame_anyio$lowlevel$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$lowlevel$$$function__5___init__);
assert(Py_REFCNT(frame_frame_anyio$lowlevel$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_var);
tmp_assattr_value_1 = par_var;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__var, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_value);
tmp_assattr_value_2 = par_value;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__value, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__redeemed, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$lowlevel$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$lowlevel$$$function__5___init__,
    type_description_1,
    par_self,
    par_var,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_anyio$lowlevel$$$function__5___init__ == cache_frame_frame_anyio$lowlevel$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$lowlevel$$$function__5___init__);
    cache_frame_frame_anyio$lowlevel$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_anyio$lowlevel$$$function__5___init__);

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
CHECK_OBJECT(par_var);
Py_DECREF(par_var);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_var);
Py_DECREF(par_var);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anyio$lowlevel$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_default = python_pars[2];
struct Nuitka_FrameObject *frame_frame_anyio$lowlevel$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$lowlevel$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$lowlevel$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_anyio$lowlevel$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$lowlevel$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$lowlevel$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8cbae051321373c77e23cff3cb165305, module_anyio$lowlevel, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$lowlevel$$$function__6___init__->m_type_description == NULL);
frame_frame_anyio$lowlevel$$$function__6___init__ = cache_frame_frame_anyio$lowlevel$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$lowlevel$$$function__6___init__);
assert(Py_REFCNT(frame_frame_anyio$lowlevel$$$function__6___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_name);
tmp_assattr_value_1 = par_name;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__name, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_default);
tmp_assattr_value_2 = par_default;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__default, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$lowlevel$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$lowlevel$$$function__6___init__,
    type_description_1,
    par_self,
    par_name,
    par_default
);


// Release cached frame if used for exception.
if (frame_frame_anyio$lowlevel$$$function__6___init__ == cache_frame_frame_anyio$lowlevel$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$lowlevel$$$function__6___init__);
    cache_frame_frame_anyio$lowlevel$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_anyio$lowlevel$$$function__6___init__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_default);
Py_DECREF(par_default);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_default);
Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anyio$lowlevel$$$function__7__current_vars(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_token = NULL;
PyObject *var_run_vars = NULL;
PyObject *tmp_assign_unpack_1__assign_source = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$lowlevel$$$function__7__current_vars;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$lowlevel$$$function__7__current_vars = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anyio$lowlevel$$$function__7__current_vars)) {
    Py_XDECREF(cache_frame_frame_anyio$lowlevel$$$function__7__current_vars);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$lowlevel$$$function__7__current_vars == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$lowlevel$$$function__7__current_vars = MAKE_FUNCTION_FRAME(tstate, code_objects_bf5e960d92b411d16345c9b27be6a4c0, module_anyio$lowlevel, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$lowlevel$$$function__7__current_vars->m_type_description == NULL);
frame_frame_anyio$lowlevel$$$function__7__current_vars = cache_frame_frame_anyio$lowlevel$$$function__7__current_vars;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$lowlevel$$$function__7__current_vars);
assert(Py_REFCNT(frame_frame_anyio$lowlevel$$$function__7__current_vars) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_anyio$lowlevel$current_token(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_token);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_anyio$lowlevel$$$function__7__current_vars->m_frame.f_lineno = 109;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_anyio$lowlevel$_run_vars(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__run_vars);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_token);
tmp_subscript_value_1 = var_token;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$function__7__current_vars, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$function__7__current_vars, exception_keeper_lineno_1);
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_DICT_EMPTY(tstate);
assert(tmp_assign_unpack_1__assign_source == NULL);
tmp_assign_unpack_1__assign_source = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assign_source_3 = tmp_assign_unpack_1__assign_source;
assert(var_run_vars == NULL);
Py_INCREF(tmp_assign_source_3);
var_run_vars = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_ass_subvalue_1 = tmp_assign_unpack_1__assign_source;
tmp_ass_subscribed_1 = module_var_accessor_anyio$lowlevel$_run_vars(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__run_vars);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_token);
tmp_ass_subscript_1 = var_token;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
CHECK_OBJECT(var_run_vars);
tmp_return_value = var_run_vars;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 110;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_anyio$lowlevel$$$function__7__current_vars->m_frame)) {
        frame_frame_anyio$lowlevel$$$function__7__current_vars->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$function__7__current_vars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$lowlevel$$$function__7__current_vars->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$function__7__current_vars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$lowlevel$$$function__7__current_vars,
    type_description_1,
    par_self,
    var_token,
    var_run_vars
);


// Release cached frame if used for exception.
if (frame_frame_anyio$lowlevel$$$function__7__current_vars == cache_frame_frame_anyio$lowlevel$$$function__7__current_vars) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$lowlevel$$$function__7__current_vars);
    cache_frame_frame_anyio$lowlevel$$$function__7__current_vars = NULL;
}

assertFrameObject(frame_frame_anyio$lowlevel$$$function__7__current_vars);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_token);
CHECK_OBJECT(var_token);
Py_DECREF(var_token);
var_token = NULL;
Py_XDECREF(var_run_vars);
var_run_vars = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_run_vars);
var_run_vars = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_anyio$lowlevel$$$function__10_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_default = python_pars[1];
struct Nuitka_FrameObject *frame_frame_anyio$lowlevel$$$function__10_get;
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
static struct Nuitka_FrameObject *cache_frame_frame_anyio$lowlevel$$$function__10_get = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$lowlevel$$$function__10_get)) {
    Py_XDECREF(cache_frame_frame_anyio$lowlevel$$$function__10_get);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$lowlevel$$$function__10_get == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$lowlevel$$$function__10_get = MAKE_FUNCTION_FRAME(tstate, code_objects_f856bc8f49d9c8cf91a157087044c621, module_anyio$lowlevel, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$lowlevel$$$function__10_get->m_type_description == NULL);
frame_frame_anyio$lowlevel$$$function__10_get = cache_frame_frame_anyio$lowlevel$$$function__10_get;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$lowlevel$$$function__10_get);
assert(Py_REFCNT(frame_frame_anyio$lowlevel$$$function__10_get) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__current_vars);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_self);
tmp_subscript_value_1 = par_self;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$function__10_get, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$function__10_get, exception_keeper_lineno_1);
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_default);
tmp_cmp_expr_left_2 = par_default;
tmp_expression_value_3 = module_var_accessor_anyio$lowlevel$RunVar(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RunVar);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_NO_VALUE_SET);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(par_default);
tmp_return_value = par_default;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__default);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_expression_value_5 = module_var_accessor_anyio$lowlevel$RunVar(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RunVar);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 130;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_NO_VALUE_SET);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 130;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__default);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
branch_no_3:;
branch_end_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 125;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_anyio$lowlevel$$$function__10_get->m_frame)) {
        frame_frame_anyio$lowlevel$$$function__10_get->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_1:;
goto try_end_1;
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
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_2b38abbad7321d9592f9e2bce08b4b6b;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__name);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_8cec1a45a67bfbafd3a886b035e2e807;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
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
frame_frame_anyio$lowlevel$$$function__10_get->m_frame.f_lineno = 133;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_LookupError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 133;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$function__10_get, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$lowlevel$$$function__10_get->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$function__10_get, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$lowlevel$$$function__10_get,
    type_description_1,
    par_self,
    par_default
);


// Release cached frame if used for exception.
if (frame_frame_anyio$lowlevel$$$function__10_get == cache_frame_frame_anyio$lowlevel$$$function__10_get) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$lowlevel$$$function__10_get);
    cache_frame_frame_anyio$lowlevel$$$function__10_get = NULL;
}

assertFrameObject(frame_frame_anyio$lowlevel$$$function__10_get);

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
CHECK_OBJECT(par_default);
Py_DECREF(par_default);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_default);
Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anyio$lowlevel$$$function__11_set(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *var_current_vars = NULL;
PyObject *var_token = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$lowlevel$$$function__11_set;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$lowlevel$$$function__11_set = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anyio$lowlevel$$$function__11_set)) {
    Py_XDECREF(cache_frame_frame_anyio$lowlevel$$$function__11_set);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$lowlevel$$$function__11_set == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$lowlevel$$$function__11_set = MAKE_FUNCTION_FRAME(tstate, code_objects_afd7cc068b0f23aefd5ba0bb037f3604, module_anyio$lowlevel, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$lowlevel$$$function__11_set->m_type_description == NULL);
frame_frame_anyio$lowlevel$$$function__11_set = cache_frame_frame_anyio$lowlevel$$$function__11_set;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$lowlevel$$$function__11_set);
assert(Py_REFCNT(frame_frame_anyio$lowlevel$$$function__11_set) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__current_vars);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_current_vars == NULL);
var_current_vars = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_3;
tmp_called_value_1 = module_var_accessor_anyio$lowlevel$RunvarToken(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RunvarToken);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(var_current_vars);
tmp_expression_value_2 = var_current_vars;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
tmp_expression_value_3 = module_var_accessor_anyio$lowlevel$RunVar(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RunVar);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_NO_VALUE_SET);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_anyio$lowlevel$$$function__11_set->m_frame.f_lineno = 139;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_anyio$lowlevel$$$function__11_set->m_frame.f_lineno = 139;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_2;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_value);
tmp_ass_subvalue_1 = par_value;
CHECK_OBJECT(var_current_vars);
tmp_ass_subscribed_1 = var_current_vars;
CHECK_OBJECT(par_self);
tmp_ass_subscript_1 = par_self;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$function__11_set, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$lowlevel$$$function__11_set->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$function__11_set, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$lowlevel$$$function__11_set,
    type_description_1,
    par_self,
    par_value,
    var_current_vars,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_anyio$lowlevel$$$function__11_set == cache_frame_frame_anyio$lowlevel$$$function__11_set) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$lowlevel$$$function__11_set);
    cache_frame_frame_anyio$lowlevel$$$function__11_set = NULL;
}

assertFrameObject(frame_frame_anyio$lowlevel$$$function__11_set);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_token);
tmp_return_value = var_token;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_current_vars);
CHECK_OBJECT(var_current_vars);
Py_DECREF(var_current_vars);
var_current_vars = NULL;
CHECK_OBJECT(var_token);
CHECK_OBJECT(var_token);
Py_DECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_current_vars);
var_current_vars = NULL;
Py_XDECREF(var_token);
var_token = NULL;
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


static PyObject *impl_anyio$lowlevel$$$function__12_reset(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_token = python_pars[1];
struct Nuitka_FrameObject *frame_frame_anyio$lowlevel$$$function__12_reset;
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
static struct Nuitka_FrameObject *cache_frame_frame_anyio$lowlevel$$$function__12_reset = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$lowlevel$$$function__12_reset)) {
    Py_XDECREF(cache_frame_frame_anyio$lowlevel$$$function__12_reset);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$lowlevel$$$function__12_reset == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$lowlevel$$$function__12_reset = MAKE_FUNCTION_FRAME(tstate, code_objects_2992a581bdf7ec854173cacfbc74852a, module_anyio$lowlevel, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$lowlevel$$$function__12_reset->m_type_description == NULL);
frame_frame_anyio$lowlevel$$$function__12_reset = cache_frame_frame_anyio$lowlevel$$$function__12_reset;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$lowlevel$$$function__12_reset);
assert(Py_REFCNT(frame_frame_anyio$lowlevel$$$function__12_reset) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_token);
tmp_expression_value_1 = par_token;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__var);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_cmp_expr_right_1 = par_self;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_f3d6b6f57a85a7b33cd10312c81087de;
frame_frame_anyio$lowlevel$$$function__12_reset->m_frame.f_lineno = 145;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 145;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_token);
tmp_expression_value_2 = par_token;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__redeemed);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 147;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_c3bf9359595d99c8bd6952038660d8da;
frame_frame_anyio$lowlevel$$$function__12_reset->m_frame.f_lineno = 148;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 148;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_token);
tmp_expression_value_3 = par_token;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__value);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_anyio$lowlevel$_NoValueSet(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NoValueSet);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_NO_VALUE_SET);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_delsubscr_subscript_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__current_vars);
if (tmp_delsubscr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_self);
tmp_delsubscr_subscript_1 = par_self;
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
CHECK_OBJECT(tmp_delsubscr_target_1);
Py_DECREF(tmp_delsubscr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$function__12_reset, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$function__12_reset, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 151;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_anyio$lowlevel$$$function__12_reset->m_frame)) {
        frame_frame_anyio$lowlevel$$$function__12_reset->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_no_4:;
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
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_token);
tmp_expression_value_6 = par_token;
tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__value);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__current_vars);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 156;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_subscript_1 = par_self;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
branch_end_3:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_token);
tmp_assattr_target_1 = par_token;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__redeemed, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$function__12_reset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$lowlevel$$$function__12_reset->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$function__12_reset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$lowlevel$$$function__12_reset,
    type_description_1,
    par_self,
    par_token
);


// Release cached frame if used for exception.
if (frame_frame_anyio$lowlevel$$$function__12_reset == cache_frame_frame_anyio$lowlevel$$$function__12_reset) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$lowlevel$$$function__12_reset);
    cache_frame_frame_anyio$lowlevel$$$function__12_reset = NULL;
}

assertFrameObject(frame_frame_anyio$lowlevel$$$function__12_reset);

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
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anyio$lowlevel$$$function__13___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anyio$lowlevel$$$function__13___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$lowlevel$$$function__13___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$lowlevel$$$function__13___repr__)) {
    Py_XDECREF(cache_frame_frame_anyio$lowlevel$$$function__13___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$lowlevel$$$function__13___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$lowlevel$$$function__13___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_836c994d483d924bd90733cc3cb2af78, module_anyio$lowlevel, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$lowlevel$$$function__13___repr__->m_type_description == NULL);
frame_frame_anyio$lowlevel$$$function__13___repr__ = cache_frame_frame_anyio$lowlevel$$$function__13___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$lowlevel$$$function__13___repr__);
assert(Py_REFCNT(frame_frame_anyio$lowlevel$$$function__13___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_705c7a48148ce14a0739e92a26af6ca7;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__name);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "o";
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
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$function__13___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$lowlevel$$$function__13___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$function__13___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$lowlevel$$$function__13___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anyio$lowlevel$$$function__13___repr__ == cache_frame_frame_anyio$lowlevel$$$function__13___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$lowlevel$$$function__13___repr__);
    cache_frame_frame_anyio$lowlevel$$$function__13___repr__ = NULL;
}

assertFrameObject(frame_frame_anyio$lowlevel$$$function__13___repr__);

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



static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__10_get(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$lowlevel$$$function__10_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_25b61b2b7057735225e1a74989b743b9,
#endif
        code_objects_f856bc8f49d9c8cf91a157087044c621,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$lowlevel,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__11_set(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$lowlevel$$$function__11_set,
        mod_consts.const_str_plain_set,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_706094ebfec57970cd9ceeaff2eb545f,
#endif
        code_objects_afd7cc068b0f23aefd5ba0bb037f3604,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$lowlevel,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__12_reset(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$lowlevel$$$function__12_reset,
        mod_consts.const_str_plain_reset,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4222ff4d349ae03535b3b229d9be43f1,
#endif
        code_objects_2992a581bdf7ec854173cacfbc74852a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$lowlevel,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__13___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$lowlevel$$$function__13___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_516056ef54a2280691dcd17dd0e76ce1,
#endif
        code_objects_836c994d483d924bd90733cc3cb2af78,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$lowlevel,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__1_checkpoint(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$lowlevel$$$function__1_checkpoint,
        mod_consts.const_str_plain_checkpoint,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a2766d771df504ceff48ea4c6b529ff1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$lowlevel,
        mod_consts.const_str_digest_34bf27162afb802cf42f15b80f986e4f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__2_checkpoint_if_cancelled(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$lowlevel$$$function__2_checkpoint_if_cancelled,
        mod_consts.const_str_plain_checkpoint_if_cancelled,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6c2fb628b6995855228e1c80982936b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$lowlevel,
        mod_consts.const_str_digest_34bc39c3c13b05f0e95a5fe586443e34,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__3_cancel_shielded_checkpoint(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$lowlevel$$$function__3_cancel_shielded_checkpoint,
        mod_consts.const_str_plain_cancel_shielded_checkpoint,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8744f049c5d948cfb04028951c43385d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$lowlevel,
        mod_consts.const_str_digest_02418136027a3be159f82f5d129fe12f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__4_current_token(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$lowlevel$$$function__4_current_token,
        mod_consts.const_str_plain_current_token,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a5e3f15c841fbb68de2a8eb62de1a0e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$lowlevel,
        mod_consts.const_str_digest_3955c2049f3725869bb556f67e7c999f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__5___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$lowlevel$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_038a5cc21616982cf551dec5da80d6db,
#endif
        code_objects_95266bef264bca38d29d42c795da4c03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$lowlevel,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$lowlevel$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9d36412c9e9634208340b38f581aeca5,
#endif
        code_objects_8cbae051321373c77e23cff3cb165305,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$lowlevel,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__7__current_vars(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$lowlevel$$$function__7__current_vars,
        mod_consts.const_str_plain__current_vars,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e7341fce0a7df1c10c728d0c79470a7e,
#endif
        code_objects_bf5e960d92b411d16345c9b27be6a4c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$lowlevel,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__8_get(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_get,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_25b61b2b7057735225e1a74989b743b9,
#endif
        code_objects_e2441a532c985b0b9ba1f9d11b828415,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$lowlevel,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$lowlevel$$$function__9_get(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_get,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_25b61b2b7057735225e1a74989b743b9,
#endif
        code_objects_51a33ec81b483a967fa2a52cb6eeda9f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$lowlevel,
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

static function_impl_code const function_table_anyio$lowlevel[] = {
impl_anyio$lowlevel$$$function__1_checkpoint,
impl_anyio$lowlevel$$$function__2_checkpoint_if_cancelled,
impl_anyio$lowlevel$$$function__3_cancel_shielded_checkpoint,
impl_anyio$lowlevel$$$function__4_current_token,
impl_anyio$lowlevel$$$function__5___init__,
impl_anyio$lowlevel$$$function__6___init__,
impl_anyio$lowlevel$$$function__7__current_vars,
impl_anyio$lowlevel$$$function__10_get,
impl_anyio$lowlevel$$$function__11_set,
impl_anyio$lowlevel$$$function__12_reset,
impl_anyio$lowlevel$$$function__13___repr__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anyio$lowlevel);
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
        module_anyio$lowlevel,
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
        function_table_anyio$lowlevel,
        sizeof(function_table_anyio$lowlevel) / sizeof(function_impl_code)
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
static char const *module_full_name = "anyio.lowlevel";
#endif

// Internal entry point for module code.
PyObject *module_code_anyio$lowlevel(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio$lowlevel");

    // Store the module for future use.
    module_anyio$lowlevel = module;

    moduledict_anyio$lowlevel = MODULE_DICT(module_anyio$lowlevel);

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
        PRINT_STRING("anyio$lowlevel: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio$lowlevel: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anyio$lowlevel: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio.lowlevel" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanyio$lowlevel\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$lowlevel,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$lowlevel,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$lowlevel,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$lowlevel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$lowlevel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$lowlevel);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anyio$lowlevel);
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

        UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$lowlevel;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_anyio$lowlevel$$$class__1__TokenWrapper_72 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_anyio$lowlevel$$$class__1__TokenWrapper_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
int tmp_res;
PyObject *locals_anyio$lowlevel$$$class__2__NoValueSet_77 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$lowlevel$$$class__2__NoValueSet_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_anyio$lowlevel$$$class__3_RunvarToken_81 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$lowlevel$$$class__3_RunvarToken_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_anyio$lowlevel$$$class__4_RunVar_90 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$lowlevel$$$class__4_RunVar_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anyio$lowlevel = MAKE_MODULE_FRAME(code_objects_f67868cda62d0ee0992f0cea931f34f6, module_anyio$lowlevel);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$lowlevel);
assert(Py_REFCNT(frame_frame_anyio$lowlevel) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anyio$lowlevel$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anyio$lowlevel$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$lowlevel;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_anyio$lowlevel->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_enum, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$lowlevel;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_dataclass_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_anyio$lowlevel->m_frame.f_lineno = 4;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anyio$lowlevel,
        mod_consts.const_str_plain_dataclass,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_dataclass);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anyio$lowlevel,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anyio$lowlevel,
        mod_consts.const_str_plain_Generic,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Generic);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic, tmp_assign_source_10);
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
        (PyObject *)moduledict_anyio$lowlevel,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anyio$lowlevel,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anyio$lowlevel,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_13);
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
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_weakref;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio$lowlevel;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_WeakKeyDictionary_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_anyio$lowlevel->m_frame.f_lineno = 6;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anyio$lowlevel,
        mod_consts.const_str_plain_WeakKeyDictionary,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_WeakKeyDictionary);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_WeakKeyDictionary, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_cf5bddb4df1babed4c2cafa5ee4c8f84;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anyio$lowlevel;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_get_async_backend_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_anyio$lowlevel->m_frame.f_lineno = 8;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anyio$lowlevel,
        mod_consts.const_str_plain_get_async_backend,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_get_async_backend);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_get_async_backend, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_anyio$lowlevel$TypeVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 10;

    goto frame_exception_exit_1;
}
frame_frame_anyio$lowlevel->m_frame.f_lineno = 10;
tmp_assign_source_16 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_T_tuple);

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_T, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_anyio$lowlevel$TypeVar(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 11;

    goto frame_exception_exit_1;
}
frame_frame_anyio$lowlevel->m_frame.f_lineno = 11;
tmp_assign_source_17 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_D_tuple);

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_D, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_assign_source_18 = MAKE_FUNCTION_anyio$lowlevel$$$function__1_checkpoint(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_checkpoint, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_assign_source_19 = MAKE_FUNCTION_anyio$lowlevel$$$function__2_checkpoint_if_cancelled(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_checkpoint_if_cancelled, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_assign_source_20 = MAKE_FUNCTION_anyio$lowlevel$$$function__3_cancel_shielded_checkpoint(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_cancel_shielded_checkpoint, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_d8a87def7d74b8d00e0a6e345b09bc91);

tmp_assign_source_21 = MAKE_FUNCTION_anyio$lowlevel$$$function__4_current_token(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_current_token, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_anyio$lowlevel$WeakKeyDictionary(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WeakKeyDictionary);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto frame_exception_exit_1;
}
frame_frame_anyio$lowlevel->m_frame.f_lineno = 67;
tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__run_vars, tmp_assign_source_22);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_083228e79ebd6fec2a472bab0867444f;
tmp_ass_subscribed_1 = module_var_accessor_anyio$lowlevel$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__run_vars;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__token_wrappers, tmp_assign_source_23);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_a3f9d0a65e0dd9eca4e939b8e1d5e6ec;
tmp_ass_subscribed_2 = module_var_accessor_anyio$lowlevel$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain__token_wrappers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_25;
}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
tmp_called_value_5 = module_var_accessor_anyio$lowlevel$dataclass(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto try_except_handler_2;
}
frame_frame_anyio$lowlevel->m_frame.f_lineno = 71;
tmp_called_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_frozen_tuple);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_2;
}
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_anyio$lowlevel$$$class__1__TokenWrapper_72 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_dc552dc98c880f665528182bafde84df;
tmp_result = DICT_SET_ITEM(locals_anyio$lowlevel$$$class__1__TokenWrapper_72, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain__TokenWrapper;
tmp_result = DICT_SET_ITEM(locals_anyio$lowlevel$$$class__1__TokenWrapper_72, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_72;
tmp_result = DICT_SET_ITEM(locals_anyio$lowlevel$$$class__1__TokenWrapper_72, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_anyio$lowlevel$$$class__1__TokenWrapper_72, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain__token_str_plain___weakref___tuple;
tmp_result = DICT_SET_ITEM(locals_anyio$lowlevel$$$class__1__TokenWrapper_72, mod_consts.const_str_plain___slots__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_anyio$lowlevel$$$class__1__TokenWrapper_2 = MAKE_CLASS_FRAME(tstate, code_objects_125296098b0ff6040b052b47d6bde06a, module_anyio$lowlevel, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$lowlevel$$$class__1__TokenWrapper_2);
assert(Py_REFCNT(frame_frame_anyio$lowlevel$$$class__1__TokenWrapper_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_plain_object;
tmp_ass_subscribed_3 = DICT_GET_ITEM0(tstate, locals_anyio$lowlevel$$$class__1__TokenWrapper_72, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain__token;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$class__1__TokenWrapper_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$lowlevel$$$class__1__TokenWrapper_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$class__1__TokenWrapper_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$lowlevel$$$class__1__TokenWrapper_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_anyio$lowlevel$$$class__1__TokenWrapper_2);

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
tmp_result = DICT_SET_ITEM(locals_anyio$lowlevel$$$class__1__TokenWrapper_72, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_6 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain__TokenWrapper;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_anyio$lowlevel$$$class__1__TokenWrapper_72;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anyio$lowlevel->m_frame.f_lineno = 72;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_27;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_args_element_value_1 = outline_0_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_anyio$lowlevel$$$class__1__TokenWrapper_72);
locals_anyio$lowlevel$$$class__1__TokenWrapper_72 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$lowlevel$$$class__1__TokenWrapper_72);
locals_anyio$lowlevel$$$class__1__TokenWrapper_72 = NULL;
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
exception_lineno = 72;
goto try_except_handler_2;
outline_result_2:;
frame_frame_anyio$lowlevel->m_frame.f_lineno = 71;
tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__TokenWrapper, tmp_assign_source_26);
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
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_anyio$lowlevel$enum(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto try_except_handler_5;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Enum);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_5;
}
tmp_assign_source_28 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_28, 0, tmp_tuple_element_2);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_29 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_5;
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
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_5;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_5;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_31 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_31;
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


exception_lineno = 77;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_5;
}
tmp_tuple_element_3 = mod_consts.const_str_plain__NoValueSet;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_anyio$lowlevel->m_frame.f_lineno = 77;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_32;
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


exception_lineno = 77;

    goto try_except_handler_5;
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
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_5;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_5;
}
frame_frame_anyio$lowlevel->m_frame.f_lineno = 77;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 77;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_33;
}
branch_end_1:;
{
PyObject *tmp_assign_source_34;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_anyio$lowlevel$$$class__2__NoValueSet_77 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_dc552dc98c880f665528182bafde84df;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__2__NoValueSet_77, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain__NoValueSet;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__2__NoValueSet_77, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_77;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__2__NoValueSet_77, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_7;
}
frame_frame_anyio$lowlevel$$$class__2__NoValueSet_3 = MAKE_CLASS_FRAME(tstate, code_objects_5e95fd32d164ebb9e8125f339551081e, module_anyio$lowlevel, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$lowlevel$$$class__2__NoValueSet_3);
assert(Py_REFCNT(frame_frame_anyio$lowlevel$$$class__2__NoValueSet_3) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = PyObject_GetItem(locals_anyio$lowlevel$$$class__2__NoValueSet_77, mod_consts.const_str_plain_enum);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_1 = module_var_accessor_anyio$lowlevel$enum(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_anyio$lowlevel$$$class__2__NoValueSet_3->m_frame.f_lineno = 78;
tmp_dictset_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_auto);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__2__NoValueSet_77, mod_consts.const_str_plain_NO_VALUE_SET, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$class__2__NoValueSet_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$lowlevel$$$class__2__NoValueSet_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$class__2__NoValueSet_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$lowlevel$$$class__2__NoValueSet_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_anyio$lowlevel$$$class__2__NoValueSet_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__2__NoValueSet_77, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_7;
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


exception_lineno = 77;

    goto try_except_handler_7;
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
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__2__NoValueSet_77, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_7;
}
branch_no_3:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain__NoValueSet;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_anyio$lowlevel$$$class__2__NoValueSet_77;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_anyio$lowlevel->m_frame.f_lineno = 77;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_35;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_34 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_34);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_anyio$lowlevel$$$class__2__NoValueSet_77);
locals_anyio$lowlevel$$$class__2__NoValueSet_77 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$lowlevel$$$class__2__NoValueSet_77);
locals_anyio$lowlevel$$$class__2__NoValueSet_77 = NULL;
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
exception_lineno = 77;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__NoValueSet, tmp_assign_source_34);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_36;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
tmp_expression_value_8 = module_var_accessor_anyio$lowlevel$Generic(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto try_except_handler_8;
}
tmp_subscript_value_2 = module_var_accessor_anyio$lowlevel$T(tstate);
if (unlikely(tmp_subscript_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_subscript_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto try_except_handler_8;
}
tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_8;
}
tmp_assign_source_36 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_36, 0, tmp_tuple_element_6);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_37 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_8;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_9 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_3, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_8;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_8;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_39 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_39;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_8;
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
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_8;
}
tmp_tuple_element_7 = mod_consts.const_str_plain_RunvarToken;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_anyio$lowlevel->m_frame.f_lineno = 81;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_40;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_12 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_8;
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
PyObject *tmp_expression_value_13;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_6, tmp_default_value_2);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_8;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_8;
}
frame_frame_anyio$lowlevel->m_frame.f_lineno = 81;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 81;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_41;
}
branch_end_4:;
{
PyObject *tmp_assign_source_42;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_anyio$lowlevel$$$class__3_RunvarToken_81 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_dc552dc98c880f665528182bafde84df;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__3_RunvarToken_81, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_RunvarToken;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__3_RunvarToken_81, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_81;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__3_RunvarToken_81, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
frame_frame_anyio$lowlevel$$$class__3_RunvarToken_4 = MAKE_CLASS_FRAME(tstate, code_objects_8131a006b92bedd968e299df5a026fbe, module_anyio$lowlevel, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$lowlevel$$$class__3_RunvarToken_4);
assert(Py_REFCNT(frame_frame_anyio$lowlevel$$$class__3_RunvarToken_4) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_tuple_str_plain__var_str_plain__value_str_plain__redeemed_tuple;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__3_RunvarToken_81, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_4ec256309942372006a3c0879e1e4765);

tmp_dictset_value = MAKE_FUNCTION_anyio$lowlevel$$$function__5___init__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__3_RunvarToken_81, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$class__3_RunvarToken_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$lowlevel$$$class__3_RunvarToken_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$class__3_RunvarToken_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$lowlevel$$$class__3_RunvarToken_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_anyio$lowlevel$$$class__3_RunvarToken_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_10;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__var_str_plain__value_str_plain__redeemed_tuple;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__3_RunvarToken_81, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__3_RunvarToken_81, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
branch_no_6:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_9 = mod_consts.const_str_plain_RunvarToken;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_anyio$lowlevel$$$class__3_RunvarToken_81;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_anyio$lowlevel->m_frame.f_lineno = 81;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_43;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_42 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_42);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_anyio$lowlevel$$$class__3_RunvarToken_81);
locals_anyio$lowlevel$$$class__3_RunvarToken_81 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$lowlevel$$$class__3_RunvarToken_81);
locals_anyio$lowlevel$$$class__3_RunvarToken_81 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 81;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_RunvarToken, tmp_assign_source_42);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
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
PyObject *tmp_assign_source_44;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_4;
tmp_expression_value_15 = module_var_accessor_anyio$lowlevel$Generic(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;

    goto try_except_handler_11;
}
tmp_subscript_value_4 = module_var_accessor_anyio$lowlevel$T(tstate);
if (unlikely(tmp_subscript_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_subscript_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;

    goto try_except_handler_11;
}
tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_4);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_11;
}
tmp_assign_source_44 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_44, 0, tmp_tuple_element_10);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_45 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_11;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_16 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_5, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_11;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_11;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_47 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_47;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_11;
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
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_11;
}
tmp_tuple_element_11 = mod_consts.const_str_plain_RunVar;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_anyio$lowlevel->m_frame.f_lineno = 90;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_48;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_19 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_11;
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
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_20;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_20, tmp_name_value_7, tmp_default_value_3);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_11;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_21 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_11;
}
frame_frame_anyio$lowlevel->m_frame.f_lineno = 90;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 90;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_49;
}
branch_end_7:;
{
PyObject *tmp_assign_source_50;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_anyio$lowlevel$$$class__4_RunVar_90 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_dc552dc98c880f665528182bafde84df;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_digest_39f8ebe7c74deb5637c9eb8434a4a0fe;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_RunVar;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_90;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_13;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_13;
}
frame_frame_anyio$lowlevel$$$class__4_RunVar_5 = MAKE_CLASS_FRAME(tstate, code_objects_29bb99b4afdf1e96bbb832c3d0833974, module_anyio$lowlevel, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$lowlevel$$$class__4_RunVar_5);
assert(Py_REFCNT(frame_frame_anyio$lowlevel$$$class__4_RunVar_5) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_tuple_str_plain__name_str_plain__default_tuple;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_expression_value_22;
tmp_expression_value_22 = PyObject_GetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain__NoValueSet);

if (tmp_expression_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_22 = module_var_accessor_anyio$lowlevel$_NoValueSet(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NoValueSet);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_NO_VALUE_SET);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain_NO_VALUE_SET, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_69b7bdc16c5db16f1e77029c2e0c287d;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_NO_VALUE_SET;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_12;
tmp_called_value_12 = PyObject_GetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain_set);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PySet_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

frame_frame_anyio$lowlevel$$$class__4_RunVar_5->m_frame.f_lineno = 99;
tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_12);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain__token_wrappers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_digest_b90a83246a8d017f2cfdfc7e7c7ac4f7;
tmp_ass_subscribed_5 = PyObject_GetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain__token_wrappers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_13;
PyObject *tmp_annotations_6;
tmp_tuple_element_13 = PyObject_GetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain_NO_VALUE_SET);

if (unlikely(tmp_tuple_element_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NO_VALUE_SET);

exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_13);
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_c212d4572e4bebac71047b49ac9fc30c);

tmp_dictset_value = MAKE_FUNCTION_anyio$lowlevel$$$function__6___init__(tstate, tmp_defaults_1, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_7;
tmp_called_value_13 = PyObject_GetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain_property);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_e7333726a313f9d19396d9053a579863);

tmp_args_element_value_2 = MAKE_FUNCTION_anyio$lowlevel$$$function__7__current_vars(tstate, tmp_annotations_7);

frame_frame_anyio$lowlevel$$$class__4_RunVar_5->m_frame.f_lineno = 107;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain__current_vars, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_8;
tmp_called_value_14 = PyObject_GetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain_overload);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = module_var_accessor_anyio$lowlevel$overload(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_6e9a4313a46be6111c2fd8a9efeade8e);

tmp_args_element_value_3 = MAKE_FUNCTION_anyio$lowlevel$$$function__8_get(tstate, tmp_annotations_8);

frame_frame_anyio$lowlevel$$$class__4_RunVar_5->m_frame.f_lineno = 116;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, const_str_plain_get, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_9;
tmp_called_value_15 = PyObject_GetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain_overload);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = module_var_accessor_anyio$lowlevel$overload(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_bffb516e78b31ac765febcae6d212486);

tmp_args_element_value_4 = MAKE_FUNCTION_anyio$lowlevel$$$function__9_get(tstate, tmp_annotations_9);

frame_frame_anyio$lowlevel$$$class__4_RunVar_5->m_frame.f_lineno = 119;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, const_str_plain_get, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_14;
PyObject *tmp_annotations_10;
tmp_tuple_element_14 = PyObject_GetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain_NO_VALUE_SET);

if (unlikely(tmp_tuple_element_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NO_VALUE_SET);

exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_14);
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_4da1dc822957c1cf94e5abc44392c1ec);

tmp_dictset_value = MAKE_FUNCTION_anyio$lowlevel$$$function__10_get(tstate, tmp_defaults_2, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, const_str_plain_get, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_f5458dd13c478fbf3c6927bf78fd574b);

tmp_dictset_value = MAKE_FUNCTION_anyio$lowlevel$$$function__11_set(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain_set, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_235af9a8d3e49a0a289f8e89877ca53e);

tmp_dictset_value = MAKE_FUNCTION_anyio$lowlevel$$$function__12_reset(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain_reset, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_anyio$lowlevel$$$function__13___repr__(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel$$$class__4_RunVar_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$lowlevel$$$class__4_RunVar_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel$$$class__4_RunVar_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$lowlevel$$$class__4_RunVar_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_anyio$lowlevel$$$class__4_RunVar_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_13;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__name_str_plain__default_tuple;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_13;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_anyio$lowlevel$$$class__4_RunVar_90, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_13;
}
branch_no_9:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_15 = mod_consts.const_str_plain_RunVar;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_15);
tmp_tuple_element_15 = locals_anyio$lowlevel$$$class__4_RunVar_90;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_anyio$lowlevel->m_frame.f_lineno = 90;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_13;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_51;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_50 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_50);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_anyio$lowlevel$$$class__4_RunVar_90);
locals_anyio$lowlevel$$$class__4_RunVar_90 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$lowlevel$$$class__4_RunVar_90);
locals_anyio$lowlevel$$$class__4_RunVar_90 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 90;
goto try_except_handler_11;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_anyio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_RunVar, tmp_assign_source_50);
}
goto try_end_5;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
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
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$lowlevel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$lowlevel->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$lowlevel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anyio$lowlevel);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio$lowlevel", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio.lowlevel" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anyio$lowlevel);
    return module_anyio$lowlevel;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$lowlevel, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$lowlevel", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

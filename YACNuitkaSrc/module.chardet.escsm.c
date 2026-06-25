/* Generated code for Python module 'chardet$escsm'
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



/* The "module_chardet$escsm" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$escsm;
PyDictObject *moduledict_chardet$escsm;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_codingstatemachinedict;
PyObject *const_tuple_str_plain_CodingStateMachineDict_tuple;
PyObject *const_str_plain_CodingStateMachineDict;
PyObject *const_str_plain_enums;
PyObject *const_tuple_str_plain_MachineState_tuple;
PyObject *const_str_plain_MachineState;
PyObject *const_tuple_5cc0bb764b46a8071c8c3bd7abd18f73_tuple;
PyObject *const_str_plain_HZ_CLS;
PyObject *const_str_plain_START;
PyObject *const_str_plain_ERROR;
PyObject *const_int_pos_3;
PyObject *const_str_plain_ITS_ME;
PyObject *const_int_pos_4;
PyObject *const_int_pos_5;
PyObject *const_int_pos_6;
PyObject *const_str_plain_HZ_ST;
PyObject *const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
PyObject *const_str_plain_HZ_CHAR_LEN_TABLE;
PyObject *const_str_plain_class_table;
PyObject *const_str_plain_class_factor;
PyObject *const_str_plain_state_table;
PyObject *const_str_plain_char_len_table;
PyObject *const_str_digest_63bfaeb074d98b627aa3253727ce36ed;
PyObject *const_str_plain_language;
PyObject *const_str_plain_Chinese;
PyObject *const_str_plain_HZ_SM_MODEL;
PyObject *const_tuple_d0c1ed4ef96187d2fdeff4f4a0885eb4_tuple;
PyObject *const_str_plain_ISO2022CN_CLS;
PyObject *const_str_plain_ISO2022CN_ST;
PyObject *const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
PyObject *const_str_plain_ISO2022CN_CHAR_LEN_TABLE;
PyObject *const_int_pos_9;
PyObject *const_str_digest_14d38da3e7e6ea8d316a25a29d33fc5e;
PyObject *const_str_plain_ISO2022CN_SM_MODEL;
PyObject *const_tuple_9f1cf13b115a0dbece9a4213c7d83f55_tuple;
PyObject *const_str_plain_ISO2022JP_CLS;
PyObject *const_str_plain_ISO2022JP_ST;
PyObject *const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
PyObject *const_str_plain_ISO2022JP_CHAR_LEN_TABLE;
PyObject *const_int_pos_10;
PyObject *const_str_digest_b563cc4e87000d93652e0cd29e7e2700;
PyObject *const_str_plain_Japanese;
PyObject *const_str_plain_ISO2022JP_SM_MODEL;
PyObject *const_tuple_ce5f341c81c23af7ea8f582778c33afe_tuple;
PyObject *const_str_plain_ISO2022KR_CLS;
PyObject *const_str_plain_ISO2022KR_ST;
PyObject *const_str_plain_ISO2022KR_CHAR_LEN_TABLE;
PyObject *const_str_digest_3b47d1a318c4d7181d14513b7ccdbfde;
PyObject *const_str_plain_Korean;
PyObject *const_str_plain_ISO2022KR_SM_MODEL;
PyObject *const_str_digest_8c314c565571bc47dafae68ec21532c3;
PyObject *const_str_digest_bd4a3823b6f1c241acc38b88f786e152;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[54];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("chardet.escsm"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_codingstatemachinedict);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodingStateMachineDict_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_CodingStateMachineDict);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_enums);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MachineState_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_MachineState);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_5cc0bb764b46a8071c8c3bd7abd18f73_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_HZ_CLS);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_START);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_ITS_ME);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_int_pos_6);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_HZ_ST);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_HZ_CHAR_LEN_TABLE);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_class_table);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_class_factor);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_state_table);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_char_len_table);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_63bfaeb074d98b627aa3253727ce36ed);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_language);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_Chinese);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_HZ_SM_MODEL);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_d0c1ed4ef96187d2fdeff4f4a0885eb4_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022CN_CLS);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022CN_ST);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022CN_CHAR_LEN_TABLE);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_int_pos_9);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_14d38da3e7e6ea8d316a25a29d33fc5e);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022CN_SM_MODEL);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_9f1cf13b115a0dbece9a4213c7d83f55_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022JP_CLS);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022JP_ST);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022JP_CHAR_LEN_TABLE);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_b563cc4e87000d93652e0cd29e7e2700);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_Japanese);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022JP_SM_MODEL);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_ce5f341c81c23af7ea8f582778c33afe_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022KR_CLS);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022KR_ST);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022KR_CHAR_LEN_TABLE);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b47d1a318c4d7181d14513b7ccdbfde);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_Korean);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022KR_SM_MODEL);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c314c565571bc47dafae68ec21532c3);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd4a3823b6f1c241acc38b88f786e152);
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
void checkModuleConstants_chardet$escsm(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_codingstatemachinedict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_codingstatemachinedict);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CodingStateMachineDict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CodingStateMachineDict_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_CodingStateMachineDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CodingStateMachineDict);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_enums));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enums);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MachineState_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MachineState_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_MachineState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MachineState);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_5cc0bb764b46a8071c8c3bd7abd18f73_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5cc0bb764b46a8071c8c3bd7abd18f73_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_HZ_CLS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HZ_CLS);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_START));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_START);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ERROR);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_ITS_ME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ITS_ME);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_int_pos_5));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_5);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_int_pos_6));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_6);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_HZ_ST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HZ_ST);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_HZ_CHAR_LEN_TABLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HZ_CHAR_LEN_TABLE);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_class_table));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_class_table);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_class_factor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_class_factor);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_state_table));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state_table);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_char_len_table));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_char_len_table);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_63bfaeb074d98b627aa3253727ce36ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_63bfaeb074d98b627aa3253727ce36ed);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_language));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_language);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_Chinese));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Chinese);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_HZ_SM_MODEL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HZ_SM_MODEL);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_d0c1ed4ef96187d2fdeff4f4a0885eb4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d0c1ed4ef96187d2fdeff4f4a0885eb4_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022CN_CLS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ISO2022CN_CLS);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022CN_ST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ISO2022CN_ST);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022CN_CHAR_LEN_TABLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ISO2022CN_CHAR_LEN_TABLE);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_int_pos_9));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_9);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_14d38da3e7e6ea8d316a25a29d33fc5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_14d38da3e7e6ea8d316a25a29d33fc5e);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022CN_SM_MODEL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ISO2022CN_SM_MODEL);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_9f1cf13b115a0dbece9a4213c7d83f55_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9f1cf13b115a0dbece9a4213c7d83f55_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022JP_CLS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ISO2022JP_CLS);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022JP_ST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ISO2022JP_ST);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022JP_CHAR_LEN_TABLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ISO2022JP_CHAR_LEN_TABLE);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_int_pos_10));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_10);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_b563cc4e87000d93652e0cd29e7e2700));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b563cc4e87000d93652e0cd29e7e2700);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_Japanese));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Japanese);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022JP_SM_MODEL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ISO2022JP_SM_MODEL);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_ce5f341c81c23af7ea8f582778c33afe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ce5f341c81c23af7ea8f582778c33afe_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022KR_CLS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ISO2022KR_CLS);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022KR_ST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ISO2022KR_ST);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022KR_CHAR_LEN_TABLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ISO2022KR_CHAR_LEN_TABLE);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b47d1a318c4d7181d14513b7ccdbfde));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b47d1a318c4d7181d14513b7ccdbfde);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_Korean));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Korean);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_ISO2022KR_SM_MODEL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ISO2022KR_SM_MODEL);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c314c565571bc47dafae68ec21532c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c314c565571bc47dafae68ec21532c3);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd4a3823b6f1c241acc38b88f786e152));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd4a3823b6f1c241acc38b88f786e152);
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
static PyObject *module_var_accessor_chardet$escsm$CodingStateMachineDict(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_CodingStateMachineDict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CodingStateMachineDict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CodingStateMachineDict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CodingStateMachineDict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CodingStateMachineDict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_CodingStateMachineDict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_CodingStateMachineDict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CodingStateMachineDict);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$HZ_CHAR_LEN_TABLE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_CHAR_LEN_TABLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HZ_CHAR_LEN_TABLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HZ_CHAR_LEN_TABLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HZ_CHAR_LEN_TABLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HZ_CHAR_LEN_TABLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_CHAR_LEN_TABLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_CHAR_LEN_TABLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_CHAR_LEN_TABLE);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$HZ_CLS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_CLS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HZ_CLS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HZ_CLS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HZ_CLS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HZ_CLS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_CLS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_CLS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_CLS);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$HZ_ST(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_ST);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HZ_ST);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HZ_ST, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HZ_ST);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HZ_ST, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_ST);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_ST);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_ST);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$ISO2022CN_CHAR_LEN_TABLE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_CHAR_LEN_TABLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022CN_CHAR_LEN_TABLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022CN_CHAR_LEN_TABLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022CN_CHAR_LEN_TABLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022CN_CHAR_LEN_TABLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_CHAR_LEN_TABLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_CHAR_LEN_TABLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_CHAR_LEN_TABLE);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$ISO2022CN_CLS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_CLS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022CN_CLS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022CN_CLS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022CN_CLS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022CN_CLS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_CLS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_CLS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_CLS);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$ISO2022CN_ST(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_ST);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022CN_ST);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022CN_ST, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022CN_ST);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022CN_ST, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_ST);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_ST);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_ST);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$ISO2022JP_CHAR_LEN_TABLE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_CHAR_LEN_TABLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022JP_CHAR_LEN_TABLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022JP_CHAR_LEN_TABLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022JP_CHAR_LEN_TABLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022JP_CHAR_LEN_TABLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_CHAR_LEN_TABLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_CHAR_LEN_TABLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_CHAR_LEN_TABLE);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$ISO2022JP_CLS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_CLS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022JP_CLS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022JP_CLS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022JP_CLS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022JP_CLS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_CLS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_CLS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_CLS);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$ISO2022JP_ST(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_ST);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022JP_ST);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022JP_ST, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022JP_ST);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022JP_ST, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_ST);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_ST);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_ST);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$ISO2022KR_CHAR_LEN_TABLE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_CHAR_LEN_TABLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022KR_CHAR_LEN_TABLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022KR_CHAR_LEN_TABLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022KR_CHAR_LEN_TABLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022KR_CHAR_LEN_TABLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_CHAR_LEN_TABLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_CHAR_LEN_TABLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_CHAR_LEN_TABLE);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$ISO2022KR_CLS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_CLS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022KR_CLS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022KR_CLS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022KR_CLS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022KR_CLS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_CLS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_CLS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_CLS);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$ISO2022KR_ST(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_ST);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022KR_ST);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022KR_ST, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ISO2022KR_ST);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ISO2022KR_ST, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_ST);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_ST);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_ST);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$MachineState(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_MachineState);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MachineState);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MachineState, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MachineState);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MachineState, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_MachineState);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_MachineState);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MachineState);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_chardet$escsm$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_chardet$escsm->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_chardet$escsm->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_chardet$escsm->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_4ac41437bb8f4e89bef6827c606e25f7;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_8c314c565571bc47dafae68ec21532c3); CHECK_OBJECT(module_filename_obj);
code_objects_4ac41437bb8f4e89bef6827c606e25f7 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_bd4a3823b6f1c241acc38b88f786e152, mod_consts.const_str_digest_bd4a3823b6f1c241acc38b88f786e152, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.


// The module function definitions.


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

static function_impl_code const function_table_chardet$escsm[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_chardet$escsm);
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
        module_chardet$escsm,
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
        function_table_chardet$escsm,
        sizeof(function_table_chardet$escsm) / sizeof(function_impl_code)
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
static char const *module_full_name = "chardet.escsm";
#endif

// Internal entry point for module code.
PyObject *module_code_chardet$escsm(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("chardet$escsm");

    // Store the module for future use.
    module_chardet$escsm = module;

    moduledict_chardet$escsm = MODULE_DICT(module_chardet$escsm);

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
        PRINT_STRING("chardet$escsm: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("chardet$escsm: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("chardet$escsm: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "chardet.escsm" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initchardet$escsm\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_chardet$escsm,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$escsm,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$escsm,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_chardet$escsm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_chardet$escsm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$escsm);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_chardet$escsm);
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

        UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_chardet$escsm;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_chardet$escsm = MAKE_MODULE_FRAME(code_objects_4ac41437bb8f4e89bef6827c606e25f7, module_chardet$escsm);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_chardet$escsm);
assert(Py_REFCNT(frame_frame_chardet$escsm) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_chardet$escsm$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_chardet$escsm$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_codingstatemachinedict;
tmp_globals_arg_value_1 = (PyObject *)moduledict_chardet$escsm;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_CodingStateMachineDict_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_chardet$escsm->m_frame.f_lineno = 28;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_chardet$escsm,
        mod_consts.const_str_plain_CodingStateMachineDict,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_CodingStateMachineDict);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_CodingStateMachineDict, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_enums;
tmp_globals_arg_value_2 = (PyObject *)moduledict_chardet$escsm;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_MachineState_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_chardet$escsm->m_frame.f_lineno = 29;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_chardet$escsm,
        mod_consts.const_str_plain_MachineState,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_MachineState);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_MachineState, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_tuple_5cc0bb764b46a8071c8c3bd7abd18f73_tuple;
UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_CLS, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_chardet$escsm$MachineState(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_START);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto frame_exception_exit_1;
}
tmp_assign_source_8 = MAKE_TUPLE_EMPTY(tstate, 48);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
PyTuple_SET_ITEM(tmp_assign_source_8, 0, tmp_tuple_element_1);
tmp_expression_value_2 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_3;
PyTuple_SET_ITEM0(tmp_assign_source_8, 2, tmp_tuple_element_1);
tmp_expression_value_3 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_START);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 3, tmp_tuple_element_1);
tmp_expression_value_4 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_START);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 4, tmp_tuple_element_1);
tmp_expression_value_5 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_START);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 5, tmp_tuple_element_1);
tmp_expression_value_6 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 6, tmp_tuple_element_1);
tmp_expression_value_7 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 7, tmp_tuple_element_1);
tmp_expression_value_8 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 8, tmp_tuple_element_1);
tmp_expression_value_9 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 9, tmp_tuple_element_1);
tmp_expression_value_10 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 10, tmp_tuple_element_1);
tmp_expression_value_11 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 11, tmp_tuple_element_1);
tmp_expression_value_12 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 12, tmp_tuple_element_1);
tmp_expression_value_13 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 13, tmp_tuple_element_1);
tmp_expression_value_14 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 14, tmp_tuple_element_1);
tmp_expression_value_15 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 15, tmp_tuple_element_1);
tmp_expression_value_16 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 16, tmp_tuple_element_1);
tmp_expression_value_17 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 17, tmp_tuple_element_1);
tmp_expression_value_18 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 18, tmp_tuple_element_1);
tmp_expression_value_19 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 19, tmp_tuple_element_1);
tmp_expression_value_20 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_START);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 20, tmp_tuple_element_1);
tmp_expression_value_21 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_START);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 21, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_4;
PyTuple_SET_ITEM0(tmp_assign_source_8, 22, tmp_tuple_element_1);
tmp_expression_value_22 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 23, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_5;
PyTuple_SET_ITEM0(tmp_assign_source_8, 24, tmp_tuple_element_1);
tmp_expression_value_23 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 25, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_6;
PyTuple_SET_ITEM0(tmp_assign_source_8, 26, tmp_tuple_element_1);
tmp_expression_value_24 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 27, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_5;
PyTuple_SET_ITEM0(tmp_assign_source_8, 28, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_5;
PyTuple_SET_ITEM0(tmp_assign_source_8, 29, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_4;
PyTuple_SET_ITEM0(tmp_assign_source_8, 30, tmp_tuple_element_1);
tmp_expression_value_25 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 31, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_4;
PyTuple_SET_ITEM0(tmp_assign_source_8, 32, tmp_tuple_element_1);
tmp_expression_value_26 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 33, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_4;
PyTuple_SET_ITEM0(tmp_assign_source_8, 34, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_4;
PyTuple_SET_ITEM0(tmp_assign_source_8, 35, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_4;
PyTuple_SET_ITEM0(tmp_assign_source_8, 36, tmp_tuple_element_1);
tmp_expression_value_27 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 37, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_4;
PyTuple_SET_ITEM0(tmp_assign_source_8, 38, tmp_tuple_element_1);
tmp_expression_value_28 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 39, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_4;
PyTuple_SET_ITEM0(tmp_assign_source_8, 40, tmp_tuple_element_1);
tmp_expression_value_29 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 41, tmp_tuple_element_1);
tmp_expression_value_30 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_START);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 42, tmp_tuple_element_1);
tmp_expression_value_31 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_START);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 43, tmp_tuple_element_1);
tmp_expression_value_32 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_START);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 44, tmp_tuple_element_1);
tmp_expression_value_33 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_START);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 45, tmp_tuple_element_1);
tmp_expression_value_34 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_START);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 46, tmp_tuple_element_1);
tmp_expression_value_35 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_START);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_8, 47, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_8);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_ST, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_CHAR_LEN_TABLE, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_class_table;
tmp_dict_value_1 = module_var_accessor_chardet$escsm$HZ_CLS(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HZ_CLS);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;

    goto frame_exception_exit_1;
}
tmp_assign_source_10 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_class_factor;
tmp_dict_value_1 = mod_consts.const_int_pos_6;
tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_state_table;
tmp_dict_value_1 = module_var_accessor_chardet$escsm$HZ_ST(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_char_len_table;
tmp_dict_value_1 = module_var_accessor_chardet$escsm$HZ_CHAR_LEN_TABLE(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_name;
tmp_dict_value_1 = mod_consts.const_str_digest_63bfaeb074d98b627aa3253727ce36ed;
tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_language;
tmp_dict_value_1 = mod_consts.const_str_plain_Chinese;
tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_HZ_SM_MODEL, tmp_assign_source_10);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = module_var_accessor_chardet$escsm$CodingStateMachineDict(tstate);
if (unlikely(tmp_ass_subvalue_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CodingStateMachineDict);
}

if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_1 = module_var_accessor_chardet$escsm$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_HZ_SM_MODEL;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = mod_consts.const_tuple_d0c1ed4ef96187d2fdeff4f4a0885eb4_tuple;
UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_CLS, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_36;
tmp_expression_value_36 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_START);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto frame_exception_exit_1;
}
tmp_assign_source_12 = MAKE_TUPLE_EMPTY(tstate, 64);
{
PyObject *tmp_expression_value_37;
PyObject *tmp_expression_value_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_expression_value_42;
PyObject *tmp_expression_value_43;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
PyObject *tmp_expression_value_46;
PyObject *tmp_expression_value_47;
PyObject *tmp_expression_value_48;
PyObject *tmp_expression_value_49;
PyObject *tmp_expression_value_50;
PyObject *tmp_expression_value_51;
PyObject *tmp_expression_value_52;
PyObject *tmp_expression_value_53;
PyObject *tmp_expression_value_54;
PyObject *tmp_expression_value_55;
PyObject *tmp_expression_value_56;
PyObject *tmp_expression_value_57;
PyObject *tmp_expression_value_58;
PyObject *tmp_expression_value_59;
PyObject *tmp_expression_value_60;
PyObject *tmp_expression_value_61;
PyObject *tmp_expression_value_62;
PyObject *tmp_expression_value_63;
PyObject *tmp_expression_value_64;
PyObject *tmp_expression_value_65;
PyObject *tmp_expression_value_66;
PyObject *tmp_expression_value_67;
PyObject *tmp_expression_value_68;
PyObject *tmp_expression_value_69;
PyObject *tmp_expression_value_70;
PyObject *tmp_expression_value_71;
PyObject *tmp_expression_value_72;
PyObject *tmp_expression_value_73;
PyObject *tmp_expression_value_74;
PyObject *tmp_expression_value_75;
PyObject *tmp_expression_value_76;
PyObject *tmp_expression_value_77;
PyObject *tmp_expression_value_78;
PyObject *tmp_expression_value_79;
PyObject *tmp_expression_value_80;
PyObject *tmp_expression_value_81;
PyObject *tmp_expression_value_82;
PyObject *tmp_expression_value_83;
PyObject *tmp_expression_value_84;
PyObject *tmp_expression_value_85;
PyObject *tmp_expression_value_86;
PyObject *tmp_expression_value_87;
PyObject *tmp_expression_value_88;
PyObject *tmp_expression_value_89;
PyObject *tmp_expression_value_90;
PyObject *tmp_expression_value_91;
PyObject *tmp_expression_value_92;
PyObject *tmp_expression_value_93;
PyObject *tmp_expression_value_94;
PyObject *tmp_expression_value_95;
PyTuple_SET_ITEM(tmp_assign_source_12, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_int_pos_3;
PyTuple_SET_ITEM0(tmp_assign_source_12, 1, tmp_tuple_element_2);
tmp_expression_value_37 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 2, tmp_tuple_element_2);
tmp_expression_value_38 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_START);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 3, tmp_tuple_element_2);
tmp_expression_value_39 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_START);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 4, tmp_tuple_element_2);
tmp_expression_value_40 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_START);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 5, tmp_tuple_element_2);
tmp_expression_value_41 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_START);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 6, tmp_tuple_element_2);
tmp_expression_value_42 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_START);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 7, tmp_tuple_element_2);
tmp_expression_value_43 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_START);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 8, tmp_tuple_element_2);
tmp_expression_value_44 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 9, tmp_tuple_element_2);
tmp_expression_value_45 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 10, tmp_tuple_element_2);
tmp_expression_value_46 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 11, tmp_tuple_element_2);
tmp_expression_value_47 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 12, tmp_tuple_element_2);
tmp_expression_value_48 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 13, tmp_tuple_element_2);
tmp_expression_value_49 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 14, tmp_tuple_element_2);
tmp_expression_value_50 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 15, tmp_tuple_element_2);
tmp_expression_value_51 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 16, tmp_tuple_element_2);
tmp_expression_value_52 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 17, tmp_tuple_element_2);
tmp_expression_value_53 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 18, tmp_tuple_element_2);
tmp_expression_value_54 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 19, tmp_tuple_element_2);
tmp_expression_value_55 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 20, tmp_tuple_element_2);
tmp_expression_value_56 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 21, tmp_tuple_element_2);
tmp_expression_value_57 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 22, tmp_tuple_element_2);
tmp_expression_value_58 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 23, tmp_tuple_element_2);
tmp_expression_value_59 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 24, tmp_tuple_element_2);
tmp_expression_value_60 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 25, tmp_tuple_element_2);
tmp_expression_value_61 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 26, tmp_tuple_element_2);
tmp_expression_value_62 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 27, tmp_tuple_element_2);
tmp_expression_value_63 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 28, tmp_tuple_element_2);
tmp_expression_value_64 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 29, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_int_pos_4;
PyTuple_SET_ITEM0(tmp_assign_source_12, 30, tmp_tuple_element_2);
tmp_expression_value_65 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 31, tmp_tuple_element_2);
tmp_expression_value_66 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 32, tmp_tuple_element_2);
tmp_expression_value_67 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 33, tmp_tuple_element_2);
tmp_expression_value_68 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 34, tmp_tuple_element_2);
tmp_expression_value_69 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 35, tmp_tuple_element_2);
tmp_expression_value_70 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_70 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_70 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 36, tmp_tuple_element_2);
tmp_expression_value_71 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_71 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_71 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 37, tmp_tuple_element_2);
tmp_expression_value_72 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_72 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_72 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 38, tmp_tuple_element_2);
tmp_expression_value_73 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_73 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 39, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_int_pos_5;
PyTuple_SET_ITEM0(tmp_assign_source_12, 40, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_int_pos_6;
PyTuple_SET_ITEM0(tmp_assign_source_12, 41, tmp_tuple_element_2);
tmp_expression_value_74 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_74 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_74 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 42, tmp_tuple_element_2);
tmp_expression_value_75 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_75 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_75 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 43, tmp_tuple_element_2);
tmp_expression_value_76 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_76 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_76 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 44, tmp_tuple_element_2);
tmp_expression_value_77 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_77 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_77 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 45, tmp_tuple_element_2);
tmp_expression_value_78 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_78 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_78 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 46, tmp_tuple_element_2);
tmp_expression_value_79 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_79 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_79 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 47, tmp_tuple_element_2);
tmp_expression_value_80 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_80 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_80 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 48, tmp_tuple_element_2);
tmp_expression_value_81 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_81 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_81 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 49, tmp_tuple_element_2);
tmp_expression_value_82 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_82 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_82 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 50, tmp_tuple_element_2);
tmp_expression_value_83 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_83 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_83 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 51, tmp_tuple_element_2);
tmp_expression_value_84 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_84 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_84 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 52, tmp_tuple_element_2);
tmp_expression_value_85 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_85 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_85 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 53, tmp_tuple_element_2);
tmp_expression_value_86 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_86 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_86 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 54, tmp_tuple_element_2);
tmp_expression_value_87 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_87 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_87 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 55, tmp_tuple_element_2);
tmp_expression_value_88 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_88 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_88 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 56, tmp_tuple_element_2);
tmp_expression_value_89 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_89 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_89 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 57, tmp_tuple_element_2);
tmp_expression_value_90 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_90 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_90 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 58, tmp_tuple_element_2);
tmp_expression_value_91 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_91 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_91 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 59, tmp_tuple_element_2);
tmp_expression_value_92 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_92 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_92 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 60, tmp_tuple_element_2);
tmp_expression_value_93 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_93 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_93 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 61, tmp_tuple_element_2);
tmp_expression_value_94 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_94 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_94 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 62, tmp_tuple_element_2);
tmp_expression_value_95 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_95 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_95 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts.const_str_plain_START);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_12, 63, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assign_source_12);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_ST, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_CHAR_LEN_TABLE, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_class_table;
tmp_dict_value_2 = module_var_accessor_chardet$escsm$ISO2022CN_CLS(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ISO2022CN_CLS);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;

    goto frame_exception_exit_1;
}
tmp_assign_source_14 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_class_factor;
tmp_dict_value_2 = mod_consts.const_int_pos_9;
tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_state_table;
tmp_dict_value_2 = module_var_accessor_chardet$escsm$ISO2022CN_ST(tstate);
assert(!(tmp_dict_value_2 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_char_len_table;
tmp_dict_value_2 = module_var_accessor_chardet$escsm$ISO2022CN_CHAR_LEN_TABLE(tstate);
assert(!(tmp_dict_value_2 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = const_str_plain_name;
tmp_dict_value_2 = mod_consts.const_str_digest_14d38da3e7e6ea8d316a25a29d33fc5e;
tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_language;
tmp_dict_value_2 = mod_consts.const_str_plain_Chinese;
tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022CN_SM_MODEL, tmp_assign_source_14);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = module_var_accessor_chardet$escsm$CodingStateMachineDict(tstate);
if (unlikely(tmp_ass_subvalue_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CodingStateMachineDict);
}

if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_2 = module_var_accessor_chardet$escsm$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_ISO2022CN_SM_MODEL;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_tuple_9f1cf13b115a0dbece9a4213c7d83f55_tuple;
UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_CLS, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_96;
tmp_expression_value_96 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_96 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_96 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts.const_str_plain_START);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto frame_exception_exit_1;
}
tmp_assign_source_16 = MAKE_TUPLE_EMPTY(tstate, 72);
{
PyObject *tmp_expression_value_97;
PyObject *tmp_expression_value_98;
PyObject *tmp_expression_value_99;
PyObject *tmp_expression_value_100;
PyObject *tmp_expression_value_101;
PyObject *tmp_expression_value_102;
PyObject *tmp_expression_value_103;
PyObject *tmp_expression_value_104;
PyObject *tmp_expression_value_105;
PyObject *tmp_expression_value_106;
PyObject *tmp_expression_value_107;
PyObject *tmp_expression_value_108;
PyObject *tmp_expression_value_109;
PyObject *tmp_expression_value_110;
PyObject *tmp_expression_value_111;
PyObject *tmp_expression_value_112;
PyObject *tmp_expression_value_113;
PyObject *tmp_expression_value_114;
PyObject *tmp_expression_value_115;
PyObject *tmp_expression_value_116;
PyObject *tmp_expression_value_117;
PyObject *tmp_expression_value_118;
PyObject *tmp_expression_value_119;
PyObject *tmp_expression_value_120;
PyObject *tmp_expression_value_121;
PyObject *tmp_expression_value_122;
PyObject *tmp_expression_value_123;
PyObject *tmp_expression_value_124;
PyObject *tmp_expression_value_125;
PyObject *tmp_expression_value_126;
PyObject *tmp_expression_value_127;
PyObject *tmp_expression_value_128;
PyObject *tmp_expression_value_129;
PyObject *tmp_expression_value_130;
PyObject *tmp_expression_value_131;
PyObject *tmp_expression_value_132;
PyObject *tmp_expression_value_133;
PyObject *tmp_expression_value_134;
PyObject *tmp_expression_value_135;
PyObject *tmp_expression_value_136;
PyObject *tmp_expression_value_137;
PyObject *tmp_expression_value_138;
PyObject *tmp_expression_value_139;
PyObject *tmp_expression_value_140;
PyObject *tmp_expression_value_141;
PyObject *tmp_expression_value_142;
PyObject *tmp_expression_value_143;
PyObject *tmp_expression_value_144;
PyObject *tmp_expression_value_145;
PyObject *tmp_expression_value_146;
PyObject *tmp_expression_value_147;
PyObject *tmp_expression_value_148;
PyObject *tmp_expression_value_149;
PyObject *tmp_expression_value_150;
PyObject *tmp_expression_value_151;
PyObject *tmp_expression_value_152;
PyObject *tmp_expression_value_153;
PyObject *tmp_expression_value_154;
PyObject *tmp_expression_value_155;
PyObject *tmp_expression_value_156;
PyObject *tmp_expression_value_157;
PyObject *tmp_expression_value_158;
PyObject *tmp_expression_value_159;
PyObject *tmp_expression_value_160;
PyObject *tmp_expression_value_161;
PyObject *tmp_expression_value_162;
PyObject *tmp_expression_value_163;
PyTuple_SET_ITEM(tmp_assign_source_16, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_int_pos_3;
PyTuple_SET_ITEM0(tmp_assign_source_16, 1, tmp_tuple_element_3);
tmp_expression_value_97 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_97 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_97 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 2, tmp_tuple_element_3);
tmp_expression_value_98 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts.const_str_plain_START);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 3, tmp_tuple_element_3);
tmp_expression_value_99 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_99 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_99 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts.const_str_plain_START);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 4, tmp_tuple_element_3);
tmp_expression_value_100 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_100 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_100 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts.const_str_plain_START);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 5, tmp_tuple_element_3);
tmp_expression_value_101 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_101 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_101 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts.const_str_plain_START);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 6, tmp_tuple_element_3);
tmp_expression_value_102 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_102 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_102 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts.const_str_plain_START);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 7, tmp_tuple_element_3);
tmp_expression_value_103 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_103 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_103 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts.const_str_plain_START);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 8, tmp_tuple_element_3);
tmp_expression_value_104 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_104 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_104 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts.const_str_plain_START);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 9, tmp_tuple_element_3);
tmp_expression_value_105 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_105 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_105 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 10, tmp_tuple_element_3);
tmp_expression_value_106 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_106 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_106 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 11, tmp_tuple_element_3);
tmp_expression_value_107 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_107 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_107 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 12, tmp_tuple_element_3);
tmp_expression_value_108 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_108 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_108 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 13, tmp_tuple_element_3);
tmp_expression_value_109 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_109 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_109 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 14, tmp_tuple_element_3);
tmp_expression_value_110 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_110 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_110 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 15, tmp_tuple_element_3);
tmp_expression_value_111 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_111 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_111 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 16, tmp_tuple_element_3);
tmp_expression_value_112 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_112 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_112 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 17, tmp_tuple_element_3);
tmp_expression_value_113 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_113 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_113 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 18, tmp_tuple_element_3);
tmp_expression_value_114 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_114 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_114 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 19, tmp_tuple_element_3);
tmp_expression_value_115 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_115 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_115 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 20, tmp_tuple_element_3);
tmp_expression_value_116 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_116 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_116 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 21, tmp_tuple_element_3);
tmp_expression_value_117 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_117 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_117 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 22, tmp_tuple_element_3);
tmp_expression_value_118 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_118 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_118 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 186;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 23, tmp_tuple_element_3);
tmp_expression_value_119 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_119 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_119 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 24, tmp_tuple_element_3);
tmp_expression_value_120 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_120 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_120 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 25, tmp_tuple_element_3);
tmp_expression_value_121 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_121 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_121 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 26, tmp_tuple_element_3);
tmp_expression_value_122 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_122 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_122 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 27, tmp_tuple_element_3);
tmp_expression_value_123 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_123 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_123 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 28, tmp_tuple_element_3);
tmp_expression_value_124 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_124 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_124 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 29, tmp_tuple_element_3);
tmp_expression_value_125 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_125 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_125 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 30, tmp_tuple_element_3);
tmp_expression_value_126 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_126 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_126 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 31, tmp_tuple_element_3);
tmp_expression_value_127 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_127 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_127 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 32, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_int_pos_5;
PyTuple_SET_ITEM0(tmp_assign_source_16, 33, tmp_tuple_element_3);
tmp_expression_value_128 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_128 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_128 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 34, tmp_tuple_element_3);
tmp_expression_value_129 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_129 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_129 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 35, tmp_tuple_element_3);
tmp_expression_value_130 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_130 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_130 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 36, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_int_pos_4;
PyTuple_SET_ITEM0(tmp_assign_source_16, 37, tmp_tuple_element_3);
tmp_expression_value_131 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_131 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_131 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 38, tmp_tuple_element_3);
tmp_expression_value_132 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_132 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_132 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 39, tmp_tuple_element_3);
tmp_expression_value_133 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_133 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_133 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 40, tmp_tuple_element_3);
tmp_expression_value_134 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_134 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_134 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 41, tmp_tuple_element_3);
tmp_expression_value_135 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_135 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_135 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 42, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_int_pos_6;
PyTuple_SET_ITEM0(tmp_assign_source_16, 43, tmp_tuple_element_3);
tmp_expression_value_136 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_136 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_136 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 44, tmp_tuple_element_3);
tmp_expression_value_137 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_137 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_137 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 45, tmp_tuple_element_3);
tmp_expression_value_138 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_138 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_138 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 46, tmp_tuple_element_3);
tmp_expression_value_139 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_139 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_139 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 47, tmp_tuple_element_3);
tmp_expression_value_140 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_140 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_140 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 48, tmp_tuple_element_3);
tmp_expression_value_141 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_141 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_141 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 49, tmp_tuple_element_3);
tmp_expression_value_142 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_142 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_142 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 50, tmp_tuple_element_3);
tmp_expression_value_143 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_143 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_143 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 51, tmp_tuple_element_3);
tmp_expression_value_144 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_144 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_144 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 52, tmp_tuple_element_3);
tmp_expression_value_145 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_145 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_145 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 53, tmp_tuple_element_3);
tmp_expression_value_146 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_146 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_146 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_146, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 54, tmp_tuple_element_3);
tmp_expression_value_147 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_147 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_147 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 55, tmp_tuple_element_3);
tmp_expression_value_148 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_148 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_148 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 56, tmp_tuple_element_3);
tmp_expression_value_149 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_149 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_149 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 57, tmp_tuple_element_3);
tmp_expression_value_150 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_150 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_150 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 58, tmp_tuple_element_3);
tmp_expression_value_151 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_151 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_151 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 59, tmp_tuple_element_3);
tmp_expression_value_152 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_152 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_152 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 60, tmp_tuple_element_3);
tmp_expression_value_153 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_153 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_153 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 61, tmp_tuple_element_3);
tmp_expression_value_154 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_154 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_154 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 62, tmp_tuple_element_3);
tmp_expression_value_155 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_155 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_155 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 63, tmp_tuple_element_3);
tmp_expression_value_156 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_156 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_156 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 64, tmp_tuple_element_3);
tmp_expression_value_157 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_157 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_157 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_157, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 65, tmp_tuple_element_3);
tmp_expression_value_158 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_158 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_158 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 66, tmp_tuple_element_3);
tmp_expression_value_159 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_159 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_159 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 67, tmp_tuple_element_3);
tmp_expression_value_160 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_160 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_160 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 68, tmp_tuple_element_3);
tmp_expression_value_161 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_161 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_161 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 69, tmp_tuple_element_3);
tmp_expression_value_162 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_162 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_162 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts.const_str_plain_START);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 70, tmp_tuple_element_3);
tmp_expression_value_163 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_163 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_163 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_163, mod_consts.const_str_plain_START);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 71, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_assign_source_16);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_ST, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_CHAR_LEN_TABLE, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_dict_key_3 = mod_consts.const_str_plain_class_table;
tmp_dict_value_3 = module_var_accessor_chardet$escsm$ISO2022JP_CLS(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ISO2022JP_CLS);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;

    goto frame_exception_exit_1;
}
tmp_assign_source_18 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_class_factor;
tmp_dict_value_3 = mod_consts.const_int_pos_10;
tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_state_table;
tmp_dict_value_3 = module_var_accessor_chardet$escsm$ISO2022JP_ST(tstate);
assert(!(tmp_dict_value_3 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_char_len_table;
tmp_dict_value_3 = module_var_accessor_chardet$escsm$ISO2022JP_CHAR_LEN_TABLE(tstate);
assert(!(tmp_dict_value_3 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = const_str_plain_name;
tmp_dict_value_3 = mod_consts.const_str_digest_b563cc4e87000d93652e0cd29e7e2700;
tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_language;
tmp_dict_value_3 = mod_consts.const_str_plain_Japanese;
tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022JP_SM_MODEL, tmp_assign_source_18);
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = module_var_accessor_chardet$escsm$CodingStateMachineDict(tstate);
if (unlikely(tmp_ass_subvalue_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CodingStateMachineDict);
}

if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_3 = module_var_accessor_chardet$escsm$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_ISO2022JP_SM_MODEL;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_tuple_ce5f341c81c23af7ea8f582778c33afe_tuple;
UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_CLS, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_164;
tmp_expression_value_164 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_164 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_164 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;

    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts.const_str_plain_START);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto frame_exception_exit_1;
}
tmp_assign_source_20 = MAKE_TUPLE_EMPTY(tstate, 40);
{
PyObject *tmp_expression_value_165;
PyObject *tmp_expression_value_166;
PyObject *tmp_expression_value_167;
PyObject *tmp_expression_value_168;
PyObject *tmp_expression_value_169;
PyObject *tmp_expression_value_170;
PyObject *tmp_expression_value_171;
PyObject *tmp_expression_value_172;
PyObject *tmp_expression_value_173;
PyObject *tmp_expression_value_174;
PyObject *tmp_expression_value_175;
PyObject *tmp_expression_value_176;
PyObject *tmp_expression_value_177;
PyObject *tmp_expression_value_178;
PyObject *tmp_expression_value_179;
PyObject *tmp_expression_value_180;
PyObject *tmp_expression_value_181;
PyObject *tmp_expression_value_182;
PyObject *tmp_expression_value_183;
PyObject *tmp_expression_value_184;
PyObject *tmp_expression_value_185;
PyObject *tmp_expression_value_186;
PyObject *tmp_expression_value_187;
PyObject *tmp_expression_value_188;
PyObject *tmp_expression_value_189;
PyObject *tmp_expression_value_190;
PyObject *tmp_expression_value_191;
PyObject *tmp_expression_value_192;
PyObject *tmp_expression_value_193;
PyObject *tmp_expression_value_194;
PyObject *tmp_expression_value_195;
PyObject *tmp_expression_value_196;
PyObject *tmp_expression_value_197;
PyObject *tmp_expression_value_198;
PyObject *tmp_expression_value_199;
PyObject *tmp_expression_value_200;
PyTuple_SET_ITEM(tmp_assign_source_20, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_int_pos_3;
PyTuple_SET_ITEM0(tmp_assign_source_20, 1, tmp_tuple_element_4);
tmp_expression_value_165 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_165 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_165 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 2, tmp_tuple_element_4);
tmp_expression_value_166 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_166 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_166 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_166, mod_consts.const_str_plain_START);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 3, tmp_tuple_element_4);
tmp_expression_value_167 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_167 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_167 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_167, mod_consts.const_str_plain_START);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 4, tmp_tuple_element_4);
tmp_expression_value_168 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_168 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_168 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, mod_consts.const_str_plain_START);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 5, tmp_tuple_element_4);
tmp_expression_value_169 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_169 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_169 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_169, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 6, tmp_tuple_element_4);
tmp_expression_value_170 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_170 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_170 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_170, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 7, tmp_tuple_element_4);
tmp_expression_value_171 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_171 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_171 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_171, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 8, tmp_tuple_element_4);
tmp_expression_value_172 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_172 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_172 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_172, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 9, tmp_tuple_element_4);
tmp_expression_value_173 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_173 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_173 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_173, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 10, tmp_tuple_element_4);
tmp_expression_value_174 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_174 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_174 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_174, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 11, tmp_tuple_element_4);
tmp_expression_value_175 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_175 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_175 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_175, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 12, tmp_tuple_element_4);
tmp_expression_value_176 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_176 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_176 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_176, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 13, tmp_tuple_element_4);
tmp_expression_value_177 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_177 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_177 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_177, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 14, tmp_tuple_element_4);
tmp_expression_value_178 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_178 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_178 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_178, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 15, tmp_tuple_element_4);
tmp_expression_value_179 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_179 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_179 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_179, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 16, tmp_tuple_element_4);
tmp_expression_value_180 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_180 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_180 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_180, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 17, tmp_tuple_element_4);
tmp_expression_value_181 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_181 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_181 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_181, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 18, tmp_tuple_element_4);
tmp_expression_value_182 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_182 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_182 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_182, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 19, tmp_tuple_element_4);
tmp_expression_value_183 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_183 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_183 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_183, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 20, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_int_pos_4;
PyTuple_SET_ITEM0(tmp_assign_source_20, 21, tmp_tuple_element_4);
tmp_expression_value_184 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_184 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_184 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_184, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 22, tmp_tuple_element_4);
tmp_expression_value_185 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_185 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_185 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_185, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 23, tmp_tuple_element_4);
tmp_expression_value_186 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_186 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_186 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_186, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 24, tmp_tuple_element_4);
tmp_expression_value_187 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_187 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_187 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_187, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 25, tmp_tuple_element_4);
tmp_expression_value_188 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_188 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_188 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_188, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 26, tmp_tuple_element_4);
tmp_expression_value_189 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_189 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_189 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_189, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 27, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_int_pos_5;
PyTuple_SET_ITEM0(tmp_assign_source_20, 28, tmp_tuple_element_4);
tmp_expression_value_190 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_190 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_190 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_190, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 29, tmp_tuple_element_4);
tmp_expression_value_191 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_191 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_191 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_191, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 30, tmp_tuple_element_4);
tmp_expression_value_192 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_192 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_192 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_192, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 31, tmp_tuple_element_4);
tmp_expression_value_193 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_193 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_193 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_193, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 32, tmp_tuple_element_4);
tmp_expression_value_194 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_194 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_194 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_194, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 33, tmp_tuple_element_4);
tmp_expression_value_195 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_195 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_195 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_195, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 34, tmp_tuple_element_4);
tmp_expression_value_196 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_196 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_196 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_196, mod_consts.const_str_plain_ITS_ME);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 35, tmp_tuple_element_4);
tmp_expression_value_197 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_197 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_197 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_197, mod_consts.const_str_plain_START);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 36, tmp_tuple_element_4);
tmp_expression_value_198 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_198 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_198 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_198, mod_consts.const_str_plain_START);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 37, tmp_tuple_element_4);
tmp_expression_value_199 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_199 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_199 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_199, mod_consts.const_str_plain_START);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 38, tmp_tuple_element_4);
tmp_expression_value_200 = module_var_accessor_chardet$escsm$MachineState(tstate);
if (unlikely(tmp_expression_value_200 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MachineState);
}

if (tmp_expression_value_200 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_200, mod_consts.const_str_plain_START);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_assign_source_20, 39, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_assign_source_20);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_ST, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = mod_consts.const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_CHAR_LEN_TABLE, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_dict_key_4 = mod_consts.const_str_plain_class_table;
tmp_dict_value_4 = module_var_accessor_chardet$escsm$ISO2022KR_CLS(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ISO2022KR_CLS);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;

    goto frame_exception_exit_1;
}
tmp_assign_source_22 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_class_factor;
tmp_dict_value_4 = mod_consts.const_int_pos_6;
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_state_table;
tmp_dict_value_4 = module_var_accessor_chardet$escsm$ISO2022KR_ST(tstate);
assert(!(tmp_dict_value_4 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_char_len_table;
tmp_dict_value_4 = module_var_accessor_chardet$escsm$ISO2022KR_CHAR_LEN_TABLE(tstate);
assert(!(tmp_dict_value_4 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = const_str_plain_name;
tmp_dict_value_4 = mod_consts.const_str_digest_3b47d1a318c4d7181d14513b7ccdbfde;
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_language;
tmp_dict_value_4 = mod_consts.const_str_plain_Korean;
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)mod_consts.const_str_plain_ISO2022KR_SM_MODEL, tmp_assign_source_22);
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = module_var_accessor_chardet$escsm$CodingStateMachineDict(tstate);
if (unlikely(tmp_ass_subvalue_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CodingStateMachineDict);
}

if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_4 = module_var_accessor_chardet$escsm$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_ISO2022KR_SM_MODEL;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_chardet$escsm, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_chardet$escsm->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_chardet$escsm, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_chardet$escsm);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("chardet$escsm", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "chardet.escsm" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_chardet$escsm);
    return module_chardet$escsm;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("chardet$escsm", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

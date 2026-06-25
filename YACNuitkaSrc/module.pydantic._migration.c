/* Generated code for Python module 'pydantic$_migration'
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



/* The "module_pydantic$_migration" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pydantic$_migration;
PyDictObject *moduledict_pydantic$_migration;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_93451e65d1b5351f1a776493e6ffe27f;
PyObject *const_str_plain_PydanticImportError;
PyObject *const_dict_6f78c9eecae60ace0689ee95235fc497;
PyObject *const_str_digest_e04cefbd6eb13481a3c834432f9ab84b;
PyObject *const_str_plain_wrapper;
PyObject *const_str_digest_db94514d3d0cf508b08c86d29605a3c4;
PyObject *const_str_digest_2b72f32e966bd80f23d4b78dfabc76f1;
PyObject *const_str_digest_d1c8809f58d29dc06e6066ecad9c57d8;
PyObject *const_str_plain_module;
PyObject *const_str_digest_9001025b284b55d7ce32f59f72fb50f2;
PyObject *const_str_plain_warnings;
PyObject *const_str_digest_c88dd60023a1b87cce761adba700a298;
PyObject *const_tuple_str_plain_import_string_tuple;
PyObject *const_str_plain_import_string;
PyObject *const_str_chr_58;
PyObject *const_str_plain_MOVED_IN_V2;
PyObject *const_str_plain_warn;
PyObject *const_str_chr_96;
PyObject *const_str_digest_e7a4f37379c8f7d446a51bd03ca12831;
PyObject *const_str_digest_a54e8a8600b7f6b19ac7af88079edc00;
PyObject *const_str_plain_DEPRECATED_MOVED_IN_V2;
PyObject *const_str_plain_REDIRECT_TO_V1;
PyObject *const_str_digest_f858c90b33185ce959dd6f3a4369c7d9;
PyObject *const_str_digest_36965e4f68c266535da79b9f3a709545;
PyObject *const_str_digest_0c194b75492f86c6f777c7e7a9b725a6;
PyObject *const_str_digest_4aec5925262feb4b6e5d39c4ee1d5163;
PyObject *const_str_plain_version_short;
PyObject *const_str_digest_652f36cd059e4ad816241b6288b8b47a;
PyObject *const_str_plain_REMOVED_IN_V2;
PyObject *const_str_digest_fe2c75fdcdcfa339e96f9b81d76afdc7;
PyObject *const_str_plain_modules;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_version;
PyObject *const_tuple_str_plain_version_short_tuple;
PyObject *const_dict_238ddb8906312126d4e38143f2207ef7;
PyObject *const_dict_9a603db080ebc932406eddf020fb2102;
PyObject *const_tuple_fc85233b4608e542a58739a2f025267c_tuple;
PyObject *const_str_digest_7cb8e50e9e9cb0f5a63ef90c1382c84a;
PyObject *const_str_digest_6a394169e433289cb14db8cdb26c9199;
PyObject *const_set_46fc26d2ccd183eed2257f9ae5daa2f6;
PyObject *const_str_plain_return;
PyObject *const_str_plain_getattr_migration;
PyObject *const_str_digest_5fb3c11e0f8aaf47d8ef2c916f68997c;
PyObject *const_str_digest_c3abc95d882661fb55e1544232289329;
PyObject *const_tuple_6073d14bceff129185b1a7b182f52198_tuple;
PyObject *const_tuple_03d1cf256ab5dc690fdf0cfa78d2a65e_tuple;
PyObject *const_tuple_str_plain_PydanticImportError_str_plain_module_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[51];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pydantic._migration"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticImportError);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_dict_6f78c9eecae60ace0689ee95235fc497);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_e04cefbd6eb13481a3c834432f9ab84b);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrapper);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_db94514d3d0cf508b08c86d29605a3c4);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b72f32e966bd80f23d4b78dfabc76f1);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1c8809f58d29dc06e6066ecad9c57d8);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_module);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_9001025b284b55d7ce32f59f72fb50f2);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_c88dd60023a1b87cce761adba700a298);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_import_string_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_import_string);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOVED_IN_V2);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_chr_96);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_e7a4f37379c8f7d446a51bd03ca12831);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_a54e8a8600b7f6b19ac7af88079edc00);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEPRECATED_MOVED_IN_V2);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_REDIRECT_TO_V1);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_f858c90b33185ce959dd6f3a4369c7d9);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_36965e4f68c266535da79b9f3a709545);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c194b75492f86c6f777c7e7a9b725a6);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_4aec5925262feb4b6e5d39c4ee1d5163);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_version_short);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_652f36cd059e4ad816241b6288b8b47a);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_REMOVED_IN_V2);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_fe2c75fdcdcfa339e96f9b81d76afdc7);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_modules);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_version_short_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_dict_238ddb8906312126d4e38143f2207ef7);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_dict_9a603db080ebc932406eddf020fb2102);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_fc85233b4608e542a58739a2f025267c_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_7cb8e50e9e9cb0f5a63ef90c1382c84a);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a394169e433289cb14db8cdb26c9199);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_set_46fc26d2ccd183eed2257f9ae5daa2f6);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_getattr_migration);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_5fb3c11e0f8aaf47d8ef2c916f68997c);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3abc95d882661fb55e1544232289329);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_6073d14bceff129185b1a7b182f52198_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_03d1cf256ab5dc690fdf0cfa78d2a65e_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PydanticImportError_str_plain_module_tuple);
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
void checkModuleConstants_pydantic$_migration(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticImportError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticImportError);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_dict_6f78c9eecae60ace0689ee95235fc497));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6f78c9eecae60ace0689ee95235fc497);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_e04cefbd6eb13481a3c834432f9ab84b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e04cefbd6eb13481a3c834432f9ab84b);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrapper);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_db94514d3d0cf508b08c86d29605a3c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db94514d3d0cf508b08c86d29605a3c4);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b72f32e966bd80f23d4b78dfabc76f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b72f32e966bd80f23d4b78dfabc76f1);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1c8809f58d29dc06e6066ecad9c57d8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1c8809f58d29dc06e6066ecad9c57d8);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_module);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_9001025b284b55d7ce32f59f72fb50f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9001025b284b55d7ce32f59f72fb50f2);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_c88dd60023a1b87cce761adba700a298));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c88dd60023a1b87cce761adba700a298);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_import_string_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_import_string_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_import_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_import_string);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_chr_58));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_58);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOVED_IN_V2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MOVED_IN_V2);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_chr_96));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_96);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_e7a4f37379c8f7d446a51bd03ca12831));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e7a4f37379c8f7d446a51bd03ca12831);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_a54e8a8600b7f6b19ac7af88079edc00));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a54e8a8600b7f6b19ac7af88079edc00);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEPRECATED_MOVED_IN_V2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEPRECATED_MOVED_IN_V2);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_REDIRECT_TO_V1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REDIRECT_TO_V1);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_f858c90b33185ce959dd6f3a4369c7d9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f858c90b33185ce959dd6f3a4369c7d9);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_36965e4f68c266535da79b9f3a709545));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36965e4f68c266535da79b9f3a709545);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c194b75492f86c6f777c7e7a9b725a6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c194b75492f86c6f777c7e7a9b725a6);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_4aec5925262feb4b6e5d39c4ee1d5163));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4aec5925262feb4b6e5d39c4ee1d5163);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_version_short));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version_short);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_652f36cd059e4ad816241b6288b8b47a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_652f36cd059e4ad816241b6288b8b47a);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_REMOVED_IN_V2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REMOVED_IN_V2);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_fe2c75fdcdcfa339e96f9b81d76afdc7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fe2c75fdcdcfa339e96f9b81d76afdc7);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_modules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_modules);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_version_short_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_version_short_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_dict_238ddb8906312126d4e38143f2207ef7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_238ddb8906312126d4e38143f2207ef7);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_dict_9a603db080ebc932406eddf020fb2102));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9a603db080ebc932406eddf020fb2102);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_fc85233b4608e542a58739a2f025267c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fc85233b4608e542a58739a2f025267c_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_7cb8e50e9e9cb0f5a63ef90c1382c84a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7cb8e50e9e9cb0f5a63ef90c1382c84a);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a394169e433289cb14db8cdb26c9199));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a394169e433289cb14db8cdb26c9199);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_set_46fc26d2ccd183eed2257f9ae5daa2f6));
CHECK_OBJECT_DEEP(mod_consts.const_set_46fc26d2ccd183eed2257f9ae5daa2f6);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_getattr_migration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getattr_migration);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_5fb3c11e0f8aaf47d8ef2c916f68997c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5fb3c11e0f8aaf47d8ef2c916f68997c);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3abc95d882661fb55e1544232289329));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3abc95d882661fb55e1544232289329);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_6073d14bceff129185b1a7b182f52198_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6073d14bceff129185b1a7b182f52198_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_03d1cf256ab5dc690fdf0cfa78d2a65e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_03d1cf256ab5dc690fdf0cfa78d2a65e_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PydanticImportError_str_plain_module_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PydanticImportError_str_plain_module_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 8
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
static PyObject *module_var_accessor_pydantic$_migration$Any(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_migration->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_migration->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_migration->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_migration$Callable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_migration->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_migration->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_migration->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_migration$DEPRECATED_MOVED_IN_V2(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_migration->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_migration->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_DEPRECATED_MOVED_IN_V2);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_migration->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEPRECATED_MOVED_IN_V2);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEPRECATED_MOVED_IN_V2, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEPRECATED_MOVED_IN_V2);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEPRECATED_MOVED_IN_V2, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_DEPRECATED_MOVED_IN_V2);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_DEPRECATED_MOVED_IN_V2);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEPRECATED_MOVED_IN_V2);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_migration$MOVED_IN_V2(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_migration->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_migration->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_MOVED_IN_V2);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_migration->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOVED_IN_V2);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOVED_IN_V2, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOVED_IN_V2);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOVED_IN_V2, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_MOVED_IN_V2);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_MOVED_IN_V2);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOVED_IN_V2);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_migration$REDIRECT_TO_V1(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_migration->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_migration->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_REDIRECT_TO_V1);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_migration->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REDIRECT_TO_V1);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REDIRECT_TO_V1, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REDIRECT_TO_V1);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REDIRECT_TO_V1, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_REDIRECT_TO_V1);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_REDIRECT_TO_V1);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_REDIRECT_TO_V1);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_migration$REMOVED_IN_V2(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_migration->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_migration->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_REMOVED_IN_V2);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_migration->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REMOVED_IN_V2);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REMOVED_IN_V2, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_REMOVED_IN_V2);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_REMOVED_IN_V2, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_REMOVED_IN_V2);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_REMOVED_IN_V2);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_REMOVED_IN_V2);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_migration$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_migration->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_migration->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_migration->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_migration$version_short(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_migration->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_migration->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_version_short);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_migration->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_version_short);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_version_short, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_version_short);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_version_short, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_version_short);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_version_short);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_version_short);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e7fc76e27f3714d05b90e4edb94a3e3a;
static PyCodeObject *code_objects_02d74ffdf1a348c0f8d2da12f707439a;
static PyCodeObject *code_objects_bb83aba1e086899e98ccf8de29d2cb62;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_5fb3c11e0f8aaf47d8ef2c916f68997c); CHECK_OBJECT(module_filename_obj);
code_objects_e7fc76e27f3714d05b90e4edb94a3e3a = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_c3abc95d882661fb55e1544232289329, mod_consts.const_str_digest_c3abc95d882661fb55e1544232289329, NULL, NULL, 0, 0, 0);
code_objects_02d74ffdf1a348c0f8d2da12f707439a = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_getattr_migration, mod_consts.const_str_plain_getattr_migration, mod_consts.const_tuple_6073d14bceff129185b1a7b182f52198_tuple, NULL, 1, 0, 0);
code_objects_bb83aba1e086899e98ccf8de29d2cb62 = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_wrapper, mod_consts.const_str_digest_db94514d3d0cf508b08c86d29605a3c4, mod_consts.const_tuple_03d1cf256ab5dc690fdf0cfa78d2a65e_tuple, mod_consts.const_tuple_str_plain_PydanticImportError_str_plain_module_tuple, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_pydantic$_migration$$$function__1_getattr_migration(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_pydantic$_migration$$$function__1_getattr_migration(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_module = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *var_PydanticImportError = Nuitka_Cell_NewEmpty();
PyObject *var_wrapper = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_migration$$$function__1_getattr_migration;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration)) {
    Py_XDECREF(cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration = MAKE_FUNCTION_FRAME(tstate, code_objects_02d74ffdf1a348c0f8d2da12f707439a, module_pydantic$_migration, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration->m_type_description == NULL);
frame_frame_pydantic$_migration$$$function__1_getattr_migration = cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_migration$$$function__1_getattr_migration);
assert(Py_REFCNT(frame_frame_pydantic$_migration$$$function__1_getattr_migration) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
frame_frame_pydantic$_migration$$$function__1_getattr_migration->m_frame.f_lineno = 260;
tmp_import_name_from_1 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$_migration,
        mod_consts.const_str_plain_PydanticImportError,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_PydanticImportError);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_PydanticImportError) == NULL);
Nuitka_Cell_SET(var_PydanticImportError, tmp_assign_source_1);

}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_migration$$$function__1_getattr_migration, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_migration$$$function__1_getattr_migration->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_migration$$$function__1_getattr_migration, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_migration$$$function__1_getattr_migration,
    type_description_1,
    par_module,
    var_PydanticImportError,
    var_wrapper
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_migration$$$function__1_getattr_migration == cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration);
    cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration = NULL;
}

assertFrameObject(frame_frame_pydantic$_migration$$$function__1_getattr_migration);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_6f78c9eecae60ace0689ee95235fc497);
tmp_closure_1[0] = var_PydanticImportError;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_module;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_2 = MAKE_FUNCTION_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_wrapper == NULL);
var_wrapper = tmp_assign_source_2;
}
CHECK_OBJECT(var_wrapper);
tmp_return_value = var_wrapper;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_module);
CHECK_OBJECT(par_module);
Py_DECREF(par_module);
par_module = NULL;
CHECK_OBJECT(var_PydanticImportError);
CHECK_OBJECT(var_PydanticImportError);
Py_DECREF(var_PydanticImportError);
var_PydanticImportError = NULL;
CHECK_OBJECT(var_wrapper);
CHECK_OBJECT(var_wrapper);
Py_DECREF(var_wrapper);
var_wrapper = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_module);
CHECK_OBJECT(par_module);
Py_DECREF(par_module);
par_module = NULL;
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


static PyObject *impl_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
PyObject *var_globals = NULL;
PyObject *var_warnings = NULL;
PyObject *var_import_string = NULL;
PyObject *var_import_path = NULL;
PyObject *var_new_location = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper)) {
    Py_XDECREF(cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper = MAKE_FUNCTION_FRAME(tstate, code_objects_bb83aba1e086899e98ccf8de29d2cb62, module_pydantic$_migration, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_type_description == NULL);
frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper = cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper);
assert(Py_REFCNT(frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_1 = par_name;
tmp_cmp_expr_right_1 = const_str_plain___path__;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oooooocc";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_d1c8809f58d29dc06e6066ecad9c57d8;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_module);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 274;
type_description_1 = "oooooocc";
    goto tuple_build_exception_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oooooocc";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oooooocc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_9001025b284b55d7ce32f59f72fb50f2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_name);
tmp_operand_value_2 = par_name;
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oooooocc";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oooooocc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
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
frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_frame.f_lineno = 274;
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


exception_lineno = 274;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 274;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooocc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$_migration;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_frame.f_lineno = 276;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
assert(var_warnings == NULL);
var_warnings = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_c88dd60023a1b87cce761adba700a298;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pydantic$_migration;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_import_string_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_frame.f_lineno = 278;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$_migration,
        mod_consts.const_str_plain_import_string,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_import_string);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
assert(var_import_string == NULL);
var_import_string = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_module);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}

tmp_format_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_name);
tmp_format_value_4 = par_name;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooocc";
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
tmp_assign_source_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_3 == NULL));
assert(var_import_path == NULL);
var_import_path = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_import_path);
tmp_cmp_expr_left_2 = var_import_path;
tmp_expression_value_1 = module_var_accessor_pydantic$_migration$MOVED_IN_V2(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOVED_IN_V2);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_frame.f_lineno = 281;
tmp_cmp_expr_right_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "oooooocc";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_expression_value_2 = module_var_accessor_pydantic$_migration$MOVED_IN_V2(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOVED_IN_V2);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_import_path);
tmp_subscript_value_1 = var_import_path;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
assert(var_new_location == NULL);
var_new_location = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_warnings);
tmp_expression_value_3 = var_warnings;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_warn);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = mod_consts.const_str_chr_96;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_import_path);
tmp_tuple_element_3 = var_import_path;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_e7a4f37379c8f7d446a51bd03ca12831;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
CHECK_OBJECT(var_new_location);
tmp_format_value_5 = var_new_location;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooooocc";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_a54e8a8600b7f6b19ac7af88079edc00;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_frame.f_lineno = 283;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_import_string);
tmp_called_value_3 = var_import_string;
tmp_expression_value_4 = module_var_accessor_pydantic$_migration$MOVED_IN_V2(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOVED_IN_V2);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_import_path);
tmp_subscript_value_2 = var_import_path;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_frame.f_lineno = 284;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_import_path);
tmp_cmp_expr_left_3 = var_import_path;
tmp_cmp_expr_right_3 = module_var_accessor_pydantic$_migration$DEPRECATED_MOVED_IN_V2(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEPRECATED_MOVED_IN_V2);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_import_string);
tmp_called_value_4 = var_import_string;
tmp_expression_value_5 = module_var_accessor_pydantic$_migration$DEPRECATED_MOVED_IN_V2(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEPRECATED_MOVED_IN_V2);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_import_path);
tmp_subscript_value_3 = var_import_path;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_frame.f_lineno = 287;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_import_path);
tmp_cmp_expr_left_4 = var_import_path;
tmp_cmp_expr_right_4 = module_var_accessor_pydantic$_migration$REDIRECT_TO_V1(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REDIRECT_TO_V1);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 288;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
tmp_expression_value_6 = module_var_accessor_pydantic$_migration$REDIRECT_TO_V1(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REDIRECT_TO_V1);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_import_path);
tmp_subscript_value_4 = var_import_path;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
assert(var_new_location == NULL);
var_new_location = tmp_assign_source_5;
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_4;
CHECK_OBJECT(var_warnings);
tmp_expression_value_7 = var_warnings;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_warn);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = mod_consts.const_str_chr_96;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_6;
PyObject *tmp_format_spec_6;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_import_path);
tmp_tuple_element_4 = var_import_path;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_f858c90b33185ce959dd6f3a4369c7d9;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
CHECK_OBJECT(var_new_location);
tmp_format_value_6 = var_new_location;
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooocc";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_36965e4f68c266535da79b9f3a709545;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 4, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_string_concat_values_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_args_element_value_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_args_element_value_4 == NULL));
frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_frame.f_lineno = 290;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(var_import_string);
tmp_called_value_6 = var_import_string;
tmp_expression_value_8 = module_var_accessor_pydantic$_migration$REDIRECT_TO_V1(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REDIRECT_TO_V1);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 294;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_import_path);
tmp_subscript_value_5 = var_import_path;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_5);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_frame.f_lineno = 294;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_import_path);
tmp_cmp_expr_left_5 = var_import_path;
tmp_cmp_expr_right_5 = mod_consts.const_str_digest_0c194b75492f86c6f777c7e7a9b725a6;
tmp_condition_result_5 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_string_concat_values_5;
PyObject *tmp_tuple_element_5;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticImportError);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 296;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}

tmp_called_value_7 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_tuple_element_5 = mod_consts.const_str_digest_4aec5925262feb4b6e5d39c4ee1d5163;
tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_7;
PyObject *tmp_called_value_8;
PyObject *tmp_format_spec_7;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
tmp_called_value_8 = module_var_accessor_pydantic$_migration$version_short(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_version_short);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_1 = "oooooocc";
    goto tuple_build_exception_5;
}
frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_frame.f_lineno = 298;
tmp_format_value_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
if (tmp_format_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooooocc";
    goto tuple_build_exception_5;
}
tmp_format_spec_7 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
CHECK_OBJECT(tmp_format_value_7);
Py_DECREF(tmp_format_value_7);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooooocc";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_digest_652f36cd059e4ad816241b6288b8b47a;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_string_concat_values_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_args_element_value_6 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_5);
CHECK_OBJECT(tmp_string_concat_values_5);
Py_DECREF(tmp_string_concat_values_5);
assert(!(tmp_args_element_value_6 == NULL));
frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_frame.f_lineno = 296;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 296;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooocc";
goto frame_exception_exit_1;
}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_import_path);
tmp_cmp_expr_left_6 = var_import_path;
tmp_cmp_expr_right_6 = module_var_accessor_pydantic$_migration$REMOVED_IN_V2(tstate);
if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_REMOVED_IN_V2);
}

if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
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
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_7;
PyObject *tmp_string_concat_values_6;
PyObject *tmp_tuple_element_6;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticImportError);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 302;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}

tmp_called_value_9 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_tuple_element_6 = mod_consts.const_str_chr_96;
tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
CHECK_OBJECT(var_import_path);
tmp_tuple_element_6 = var_import_path;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_str_digest_fe2c75fdcdcfa339e96f9b81d76afdc7;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_6);
tmp_args_element_value_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_6);
CHECK_OBJECT(tmp_string_concat_values_6);
Py_DECREF(tmp_string_concat_values_6);
assert(!(tmp_args_element_value_7 == NULL));
frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_frame.f_lineno = 302;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 302;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooocc";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_6;
tmp_expression_value_11 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_11 == NULL));
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_modules);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
Py_DECREF(tmp_expression_value_10);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_module);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 303;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}

tmp_subscript_value_6 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_expression_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_9);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
assert(var_globals == NULL);
var_globals = tmp_assign_source_6;
}
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_7 = par_name;
CHECK_OBJECT(var_globals);
tmp_cmp_expr_right_7 = var_globals;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(var_globals);
tmp_expression_value_12 = var_globals;
CHECK_OBJECT(par_name);
tmp_subscript_value_7 = par_name;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_7:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_7;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = mod_consts.const_str_digest_d1c8809f58d29dc06e6066ecad9c57d8;
tmp_string_concat_values_7 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_8;
PyObject *tmp_operand_value_3;
PyObject *tmp_format_spec_8;
PyObject *tmp_format_value_9;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_9;
PyTuple_SET_ITEM0(tmp_string_concat_values_7, 0, tmp_tuple_element_7);
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_module);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 306;
type_description_1 = "oooooocc";
    goto tuple_build_exception_6;
}

tmp_operand_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_format_value_8 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
if (tmp_format_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooocc";
    goto tuple_build_exception_6;
}
tmp_format_spec_8 = const_str_empty;
tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
CHECK_OBJECT(tmp_format_value_8);
Py_DECREF(tmp_format_value_8);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooocc";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_string_concat_values_7, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_str_digest_9001025b284b55d7ce32f59f72fb50f2;
PyTuple_SET_ITEM0(tmp_string_concat_values_7, 2, tmp_tuple_element_7);
CHECK_OBJECT(par_name);
tmp_operand_value_4 = par_name;
tmp_format_value_9 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooocc";
    goto tuple_build_exception_6;
}
tmp_format_spec_9 = const_str_empty;
tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
CHECK_OBJECT(tmp_format_value_9);
Py_DECREF(tmp_format_value_9);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooocc";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_string_concat_values_7, 3, tmp_tuple_element_7);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_string_concat_values_7);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_7);
CHECK_OBJECT(tmp_string_concat_values_7);
Py_DECREF(tmp_string_concat_values_7);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_frame.f_lineno = 306;
tmp_raise_type_input_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_input_4 == NULL));
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooocc";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 306;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooocc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper,
    type_description_1,
    par_name,
    var_globals,
    var_warnings,
    var_import_string,
    var_import_path,
    var_new_location,
    self->m_closure[1],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper == cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper);
    cache_frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper = NULL;
}

assertFrameObject(frame_frame_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_globals);
var_globals = NULL;
CHECK_OBJECT(var_warnings);
CHECK_OBJECT(var_warnings);
Py_DECREF(var_warnings);
var_warnings = NULL;
CHECK_OBJECT(var_import_string);
CHECK_OBJECT(var_import_string);
Py_DECREF(var_import_string);
var_import_string = NULL;
CHECK_OBJECT(var_import_path);
CHECK_OBJECT(var_import_path);
Py_DECREF(var_import_path);
var_import_path = NULL;
Py_XDECREF(var_new_location);
var_new_location = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_globals);
var_globals = NULL;
Py_XDECREF(var_warnings);
var_warnings = NULL;
Py_XDECREF(var_import_string);
var_import_string = NULL;
Py_XDECREF(var_import_path);
var_import_path = NULL;
Py_XDECREF(var_new_location);
var_new_location = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pydantic$_migration$$$function__1_getattr_migration(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_migration$$$function__1_getattr_migration,
        mod_consts.const_str_plain_getattr_migration,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_02d74ffdf1a348c0f8d2da12f707439a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_migration,
        mod_consts.const_str_digest_2b72f32e966bd80f23d4b78dfabc76f1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper,
        mod_consts.const_str_plain_wrapper,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_db94514d3d0cf508b08c86d29605a3c4,
#endif
        code_objects_bb83aba1e086899e98ccf8de29d2cb62,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_migration,
        mod_consts.const_str_digest_e04cefbd6eb13481a3c834432f9ab84b,
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

static function_impl_code const function_table_pydantic$_migration[] = {
impl_pydantic$_migration$$$function__1_getattr_migration$$$function__1_wrapper,
impl_pydantic$_migration$$$function__1_getattr_migration,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pydantic$_migration);
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
        module_pydantic$_migration,
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
        function_table_pydantic$_migration,
        sizeof(function_table_pydantic$_migration) / sizeof(function_impl_code)
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
static char const *module_full_name = "pydantic._migration";
#endif

// Internal entry point for module code.
PyObject *module_code_pydantic$_migration(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pydantic$_migration");

    // Store the module for future use.
    module_pydantic$_migration = module;

    moduledict_pydantic$_migration = MODULE_DICT(module_pydantic$_migration);

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
        PRINT_STRING("pydantic$_migration: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pydantic$_migration: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pydantic$_migration: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic._migration" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpydantic$_migration\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pydantic$_migration,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pydantic$_migration,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pydantic$_migration,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$_migration,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$_migration,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pydantic$_migration);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pydantic$_migration);
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

        UPDATE_STRING_DICT1(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var_obj = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_migration;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pydantic$_migration = MAKE_MODULE_FRAME(code_objects_e7fc76e27f3714d05b90e4edb94a3e3a, module_pydantic$_migration);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_migration);
assert(Py_REFCNT(frame_frame_pydantic$_migration) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pydantic$_migration$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pydantic$_migration$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_5 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_5);
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
        (PyObject *)moduledict_pydantic$_migration,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_6);
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
        (PyObject *)moduledict_pydantic$_migration,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_7);
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
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_version;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$_migration;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_version_short_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_pydantic$_migration->m_frame.f_lineno = 4;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pydantic$_migration,
        mod_consts.const_str_plain_version_short,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_version_short);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_version_short, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = DICT_COPY(tstate, mod_consts.const_dict_238ddb8906312126d4e38143f2207ef7);
UPDATE_STRING_DICT1(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_MOVED_IN_V2, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = DICT_COPY(tstate, mod_consts.const_dict_9a603db080ebc932406eddf020fb2102);
UPDATE_STRING_DICT1(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_DEPRECATED_MOVED_IN_V2, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_tuple_fc85233b4608e542a58739a2f025267c_tuple;
tmp_assign_source_12 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_12 == NULL));
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_13;
}
// Tried code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_14 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 31;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_assign_source_15 = tmp_dictcontraction_1__iter_value_0;
{
    PyObject *old = outline_0_var_obj;
    outline_0_var_obj = tmp_assign_source_15;
    Py_INCREF(outline_0_var_obj);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_dictset38_dict_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_7cb8e50e9e9cb0f5a63ef90c1382c84a;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(outline_0_var_obj);
tmp_format_value_1 = outline_0_var_obj;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

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
tmp_dictset38_key_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_dictset38_key_1 == NULL));
tmp_tuple_element_2 = mod_consts.const_str_digest_6a394169e433289cb14db8cdb26c9199;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(outline_0_var_obj);
tmp_format_value_2 = outline_0_var_obj;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_dictset38_key_1);
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_dictset38_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_dictset38_value_1 == NULL));
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_value_1);
Py_DECREF(tmp_dictset38_value_1);
CHECK_OBJECT(tmp_dictset38_key_1);
Py_DECREF(tmp_dictset38_key_1);
assert(!(tmp_res != 0));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_assign_source_11 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_assign_source_11);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_obj);
outline_0_var_obj = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_obj);
outline_0_var_obj = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 31;
goto frame_exception_exit_1;
outline_result_1:;
UPDATE_STRING_DICT1(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_REDIRECT_TO_V1, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = PySet_New(mod_consts.const_set_46fc26d2ccd183eed2257f9ae5daa2f6);
UPDATE_STRING_DICT1(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_REMOVED_IN_V2, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_module;
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
tmp_annotations_1 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_3;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_expression_value_1 = module_var_accessor_pydantic$_migration$Callable(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;

    goto dict_build_exception_1;
}
tmp_tuple_element_3 = MAKE_LIST1(tstate, (PyObject *)&PyUnicode_Type);
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = module_var_accessor_pydantic$_migration$Any(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_3);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_subscript_value_1);
goto dict_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_assign_source_17 = MAKE_FUNCTION_pydantic$_migration$$$function__1_getattr_migration(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_pydantic$_migration, (Nuitka_StringObject *)mod_consts.const_str_plain_getattr_migration, tmp_assign_source_17);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_migration, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_migration->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_migration, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pydantic$_migration);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pydantic$_migration", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic._migration" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pydantic$_migration);
    return module_pydantic$_migration;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_migration, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pydantic$_migration", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

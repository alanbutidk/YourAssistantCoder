/* Generated code for Python module 'textual$types'
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



/* The "module_textual$types" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$types;
PyDictObject *moduledict_textual$types;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_939ba09930ede307db0ba3199f20deab;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_525a71d7d6542dd74dc8c938339082dd;
PyObject *const_tuple_str_plain_Animatable_str_plain_EasingFunction_tuple;
PyObject *const_str_plain_Animatable;
PyObject *const_str_plain_EasingFunction;
PyObject *const_str_digest_e220f34e12dcf8546d521c209fe637ec;
PyObject *const_tuple_str_plain_NoActiveAppError_tuple;
PyObject *const_str_plain_NoActiveAppError;
PyObject *const_str_digest_0b9e208fe6ad5e4922c9f38cbb50e8ef;
PyObject *const_tuple_str_plain_CSSPathError_str_plain_CSSPathType_tuple;
PyObject *const_str_plain_CSSPathError;
PyObject *const_str_plain_CSSPathType;
PyObject *const_str_digest_c32863e446b1799beb3ada226b376daf;
PyObject *const_tuple_596aef38150ebd3352f64646ba4b3d7a_tuple;
PyObject *const_str_plain_AnimationLevel;
PyObject *const_str_plain_CallbackType;
PyObject *const_str_plain_IgnoreReturnCallbackType;
PyObject *const_str_plain_MessageTarget;
PyObject *const_str_plain_UnusedParameter;
PyObject *const_str_plain_WatchCallbackType;
PyObject *const_str_digest_ee8354b2a2c8f9d84a18430fcfe92099;
PyObject *const_tuple_str_plain_Direction_tuple;
PyObject *const_str_plain_Direction;
PyObject *const_str_digest_62e17eaab1764b9d5a0b2c32a341919e;
PyObject *const_tuple_str_plain_ActionParseResult_tuple;
PyObject *const_str_plain_ActionParseResult;
PyObject *const_str_digest_3012101a6d81a5664d70448375b90279;
PyObject *const_tuple_str_plain_RenderStyles_tuple;
PyObject *const_str_plain_RenderStyles;
PyObject *const_str_digest_33f093b5cfbd4e3fbabfbdc5d1b20419;
PyObject *const_tuple_str_plain_DirEntry_tuple;
PyObject *const_str_plain_DirEntry;
PyObject *const_str_digest_ff12b9527c0d08c86d817b7dd58fbba3;
PyObject *const_tuple_str_plain_InputValidationOn_tuple;
PyObject *const_str_plain_InputValidationOn;
PyObject *const_str_digest_e9da353d62873b67e2e0848bcc0edd5a;
PyObject *const_tuple_d1ff13a6d7ec42eaa5cce3074083ab17_tuple;
PyObject *const_str_plain_DuplicateID;
PyObject *const_str_plain_OptionDoesNotExist;
PyObject *const_str_plain_OptionListContent;
PyObject *const_str_digest_16543c44f751982671284f9add4ad268;
PyObject *const_tuple_str_plain_PlaceholderVariant_tuple;
PyObject *const_str_plain_PlaceholderVariant;
PyObject *const_str_digest_1e7bdaa104f4efd8f79748c5f95bccc0;
PyObject *const_tuple_str_plain_NoSelection_str_plain_SelectType_tuple;
PyObject *const_str_plain_NoSelection;
PyObject *const_str_plain_SelectType;
PyObject *const_list_d9edd86cd842097a9d7a94b30ea459cd_list;
PyObject *const_str_digest_cbb3b2cf04ce002d84a46c80d797ea0b;
PyObject *const_str_digest_a3a24f19036901ebfb936ab963432e80;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[52];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.types"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_939ba09930ede307db0ba3199f20deab);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_525a71d7d6542dd74dc8c938339082dd);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Animatable_str_plain_EasingFunction_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_Animatable);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_EasingFunction);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_e220f34e12dcf8546d521c209fe637ec);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NoActiveAppError_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoActiveAppError);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b9e208fe6ad5e4922c9f38cbb50e8ef);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSSPathError_str_plain_CSSPathType_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_CSSPathError);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_CSSPathType);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_596aef38150ebd3352f64646ba4b3d7a_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnimationLevel);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_CallbackType);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_IgnoreReturnCallbackType);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageTarget);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnusedParameter);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_WatchCallbackType);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee8354b2a2c8f9d84a18430fcfe92099);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Direction_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_Direction);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_62e17eaab1764b9d5a0b2c32a341919e);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ActionParseResult_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_ActionParseResult);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_3012101a6d81a5664d70448375b90279);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RenderStyles_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_RenderStyles);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_33f093b5cfbd4e3fbabfbdc5d1b20419);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DirEntry_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_DirEntry);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff12b9527c0d08c86d817b7dd58fbba3);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputValidationOn_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_InputValidationOn);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9da353d62873b67e2e0848bcc0edd5a);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_d1ff13a6d7ec42eaa5cce3074083ab17_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_DuplicateID);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_OptionDoesNotExist);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_OptionListContent);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_16543c44f751982671284f9add4ad268);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PlaceholderVariant_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_PlaceholderVariant);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e7bdaa104f4efd8f79748c5f95bccc0);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NoSelection_str_plain_SelectType_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoSelection);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_SelectType);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_list_d9edd86cd842097a9d7a94b30ea459cd_list);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbb3b2cf04ce002d84a46c80d797ea0b);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3a24f19036901ebfb936ab963432e80);
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
void checkModuleConstants_textual$types(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_939ba09930ede307db0ba3199f20deab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_939ba09930ede307db0ba3199f20deab);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_525a71d7d6542dd74dc8c938339082dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_525a71d7d6542dd74dc8c938339082dd);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Animatable_str_plain_EasingFunction_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Animatable_str_plain_EasingFunction_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_Animatable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Animatable);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_EasingFunction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EasingFunction);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_e220f34e12dcf8546d521c209fe637ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e220f34e12dcf8546d521c209fe637ec);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NoActiveAppError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_NoActiveAppError_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoActiveAppError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoActiveAppError);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b9e208fe6ad5e4922c9f38cbb50e8ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b9e208fe6ad5e4922c9f38cbb50e8ef);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSSPathError_str_plain_CSSPathType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CSSPathError_str_plain_CSSPathType_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_CSSPathError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CSSPathError);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_CSSPathType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CSSPathType);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_596aef38150ebd3352f64646ba4b3d7a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_596aef38150ebd3352f64646ba4b3d7a_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnimationLevel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnimationLevel);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_CallbackType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CallbackType);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_IgnoreReturnCallbackType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IgnoreReturnCallbackType);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageTarget));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageTarget);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnusedParameter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnusedParameter);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_WatchCallbackType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WatchCallbackType);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee8354b2a2c8f9d84a18430fcfe92099));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee8354b2a2c8f9d84a18430fcfe92099);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Direction_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Direction_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_Direction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Direction);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_62e17eaab1764b9d5a0b2c32a341919e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62e17eaab1764b9d5a0b2c32a341919e);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ActionParseResult_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ActionParseResult_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_ActionParseResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ActionParseResult);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_3012101a6d81a5664d70448375b90279));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3012101a6d81a5664d70448375b90279);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RenderStyles_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RenderStyles_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_RenderStyles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RenderStyles);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_33f093b5cfbd4e3fbabfbdc5d1b20419));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33f093b5cfbd4e3fbabfbdc5d1b20419);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DirEntry_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DirEntry_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_DirEntry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DirEntry);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff12b9527c0d08c86d817b7dd58fbba3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff12b9527c0d08c86d817b7dd58fbba3);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InputValidationOn_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InputValidationOn_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_InputValidationOn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InputValidationOn);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9da353d62873b67e2e0848bcc0edd5a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9da353d62873b67e2e0848bcc0edd5a);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_d1ff13a6d7ec42eaa5cce3074083ab17_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d1ff13a6d7ec42eaa5cce3074083ab17_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_DuplicateID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DuplicateID);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_OptionDoesNotExist));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OptionDoesNotExist);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_OptionListContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OptionListContent);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_16543c44f751982671284f9add4ad268));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16543c44f751982671284f9add4ad268);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PlaceholderVariant_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PlaceholderVariant_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_PlaceholderVariant));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PlaceholderVariant);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e7bdaa104f4efd8f79748c5f95bccc0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e7bdaa104f4efd8f79748c5f95bccc0);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NoSelection_str_plain_SelectType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_NoSelection_str_plain_SelectType_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoSelection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoSelection);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_SelectType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SelectType);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_list_d9edd86cd842097a9d7a94b30ea459cd_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_d9edd86cd842097a9d7a94b30ea459cd_list);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbb3b2cf04ce002d84a46c80d797ea0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cbb3b2cf04ce002d84a46c80d797ea0b);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3a24f19036901ebfb936ab963432e80));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3a24f19036901ebfb936ab963432e80);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 1
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
static PyObject *module_var_accessor_textual$types$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_606380520ff02643ca348592744361cf;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_cbb3b2cf04ce002d84a46c80d797ea0b); CHECK_OBJECT(module_filename_obj);
code_objects_606380520ff02643ca348592744361cf = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_a3a24f19036901ebfb936ab963432e80, mod_consts.const_str_digest_a3a24f19036901ebfb936ab963432e80, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_textual$types[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$types);
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
        module_textual$types,
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
        function_table_textual$types,
        sizeof(function_table_textual$types) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.types";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$types(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$types");

    // Store the module for future use.
    module_textual$types = module;

    moduledict_textual$types = MODULE_DICT(module_textual$types);

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
        PRINT_STRING("textual$types: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$types: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$types: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.types" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$types\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$types,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$types);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$types);
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

        UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$types;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_939ba09930ede307db0ba3199f20deab;
UPDATE_STRING_DICT0(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$types = MAKE_MODULE_FRAME(code_objects_606380520ff02643ca348592744361cf, module_textual$types);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$types);
assert(Py_REFCNT(frame_frame_textual$types) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$types$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$types$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_525a71d7d6542dd74dc8c938339082dd;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$types;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Animatable_str_plain_EasingFunction_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$types->m_frame.f_lineno = 5;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_Animatable,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Animatable);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Animatable, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_EasingFunction,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_EasingFunction);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EasingFunction, tmp_assign_source_6);
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
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_e220f34e12dcf8546d521c209fe637ec;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$types;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_NoActiveAppError_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$types->m_frame.f_lineno = 6;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_NoActiveAppError,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_NoActiveAppError);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_NoActiveAppError, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_0b9e208fe6ad5e4922c9f38cbb50e8ef;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$types;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_CSSPathError_str_plain_CSSPathType_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$types->m_frame.f_lineno = 7;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_CSSPathError,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_CSSPathError);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_CSSPathError, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_CSSPathType,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_CSSPathType);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_CSSPathType, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$types;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_596aef38150ebd3352f64646ba4b3d7a_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$types->m_frame.f_lineno = 8;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_6 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_AnimationLevel,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_AnimationLevel);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_AnimationLevel, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_7 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_CallbackType,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_CallbackType);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_CallbackType, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_IgnoreReturnCallbackType,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_IgnoreReturnCallbackType);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_IgnoreReturnCallbackType, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_MessageTarget,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_MessageTarget);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageTarget, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_UnusedParameter,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_UnusedParameter);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_UnusedParameter, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_WatchCallbackType,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_WatchCallbackType);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_WatchCallbackType, tmp_assign_source_17);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_ee8354b2a2c8f9d84a18430fcfe92099;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$types;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Direction_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$types->m_frame.f_lineno = 16;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_Direction,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Direction);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Direction, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_62e17eaab1764b9d5a0b2c32a341919e;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$types;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_ActionParseResult_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_textual$types->m_frame.f_lineno = 17;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_ActionParseResult,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_ActionParseResult);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ActionParseResult, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_3012101a6d81a5664d70448375b90279;
tmp_globals_arg_value_7 = (PyObject *)moduledict_textual$types;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_RenderStyles_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_textual$types->m_frame.f_lineno = 18;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_RenderStyles,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_RenderStyles);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_RenderStyles, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_33f093b5cfbd4e3fbabfbdc5d1b20419;
tmp_globals_arg_value_8 = (PyObject *)moduledict_textual$types;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_DirEntry_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_textual$types->m_frame.f_lineno = 19;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_DirEntry,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_DirEntry);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_DirEntry, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_ff12b9527c0d08c86d817b7dd58fbba3;
tmp_globals_arg_value_9 = (PyObject *)moduledict_textual$types;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_InputValidationOn_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_textual$types->m_frame.f_lineno = 20;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_InputValidationOn,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_InputValidationOn);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_InputValidationOn, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_e9da353d62873b67e2e0848bcc0edd5a;
tmp_globals_arg_value_10 = (PyObject *)moduledict_textual$types;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_d1ff13a6d7ec42eaa5cce3074083ab17_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_textual$types->m_frame.f_lineno = 21;
tmp_assign_source_23 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_17 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_DuplicateID,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_DuplicateID);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_DuplicateID, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_18 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_OptionDoesNotExist,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_OptionDoesNotExist);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_OptionDoesNotExist, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_19 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_OptionListContent,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_OptionListContent);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_OptionListContent, tmp_assign_source_26);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_16543c44f751982671284f9add4ad268;
tmp_globals_arg_value_11 = (PyObject *)moduledict_textual$types;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_PlaceholderVariant_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_textual$types->m_frame.f_lineno = 26;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_PlaceholderVariant,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_PlaceholderVariant);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_PlaceholderVariant, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_1e7bdaa104f4efd8f79748c5f95bccc0;
tmp_globals_arg_value_12 = (PyObject *)moduledict_textual$types;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_NoSelection_str_plain_SelectType_tuple;
tmp_level_value_12 = const_int_0;
frame_frame_textual$types->m_frame.f_lineno = 27;
tmp_assign_source_28 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_28;
}
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_21 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_NoSelection,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_NoSelection);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_NoSelection, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_22 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_textual$types,
        mod_consts.const_str_plain_SelectType,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_SelectType);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectType, tmp_assign_source_30);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$types->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$types);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = LIST_COPY(tstate, mod_consts.const_list_d9edd86cd842097a9d7a94b30ea459cd_list);
UPDATE_STRING_DICT1(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_31);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$types", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.types" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$types);
    return module_textual$types;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$types, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$types", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

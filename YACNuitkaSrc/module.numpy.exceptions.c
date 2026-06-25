/* Generated code for Python module 'numpy$exceptions'
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



/* The "module_numpy$exceptions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$exceptions;
PyDictObject *moduledict_numpy$exceptions;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__msg;
PyObject *const_str_plain_axis;
PyObject *const_str_plain_ndim;
PyObject *const_str_digest_84d7ea5870d7fb6ca2fc69fe5d06efc3;
PyObject *const_str_digest_0ab5f0abfdb9b59f58553ca5c6239689;
PyObject *const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyObject *const_str_digest_7d192c93bcfced5a00492fe53b6cbcb1;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_list_d09819ea7194f7af73f624a4e51ab8e1_list;
PyObject *const_str_plain__is_loaded;
PyObject *const_str_digest_8d9f2266e4a2b8328c89b572ff9cc038;
PyObject *const_str_plain_RuntimeWarning;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_ComplexWarning;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_6a6dfb627d6363965404a5f9e0516c7c;
PyObject *const_str_digest_e2a6f1a9c56cbb91ea28f657001dc1e4;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_47;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_str_plain_ModuleDeprecationWarning;
PyObject *const_str_digest_e0e46d9da7e55e9e03ce717c3a6ab071;
PyObject *const_int_pos_58;
PyObject *const_str_plain_UserWarning;
PyObject *const_str_plain_VisibleDeprecationWarning;
PyObject *const_str_digest_36f025c2ae62ec81f44eab7a5d4fb586;
PyObject *const_int_pos_75;
PyObject *const_str_plain_RankWarning;
PyObject *const_str_digest_273a5223684eb654920f1acc8c891330;
PyObject *const_int_pos_86;
PyObject *const_tuple_type_RuntimeError_tuple;
PyObject *const_str_plain_TooHardError;
PyObject *const_str_digest_24ab79f8c4d9c1041ad71a6890b5a606;
PyObject *const_int_pos_96;
PyObject *const_tuple_type_ValueError_type_IndexError_tuple;
PyObject *const_str_plain_AxisError;
PyObject *const_str_digest_bf392498621b87d1c1109e8d68a2a753;
PyObject *const_int_pos_108;
PyObject *const_tuple_str_plain__msg_str_plain_axis_str_plain_ndim_tuple;
PyObject *const_str_plain___slots__;
PyObject *const_tuple_none_none_tuple;
PyObject *const_str_digest_13127a95ccd0cfe6dfe82b517c78347a;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_1adfabed5c052de92645605cc3e580a6;
PyObject *const_tuple_type_TypeError_tuple;
PyObject *const_str_plain_DTypePromotionError;
PyObject *const_str_digest_1394cc4b97937420868835dde0909fea;
PyObject *const_int_pos_199;
PyObject *const_str_digest_d5f4b483e2eee826b878a9d70b2a45c0;
PyObject *const_str_digest_81e7e7eccc17f6f6c9dd9d1abd40aab6;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_1f88cb7c097f302841535c23476d8b33_tuple;
PyObject *const_tuple_str_plain_self_str_plain_axis_str_plain_ndim_str_plain_msg_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.exceptions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__msg);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_axis);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_84d7ea5870d7fb6ca2fc69fe5d06efc3);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ab5f0abfdb9b59f58553ca5c6239689);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d192c93bcfced5a00492fe53b6cbcb1);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_list_d09819ea7194f7af73f624a4e51ab8e1_list);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_loaded);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d9f2266e4a2b8328c89b572ff9cc038);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_RuntimeWarning);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_ComplexWarning);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a6dfb627d6363965404a5f9e0516c7c);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2a6f1a9c56cbb91ea28f657001dc1e4);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_int_pos_47);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModuleDeprecationWarning);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_e0e46d9da7e55e9e03ce717c3a6ab071);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_int_pos_58);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_UserWarning);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_VisibleDeprecationWarning);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_36f025c2ae62ec81f44eab7a5d4fb586);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_75);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_RankWarning);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_273a5223684eb654920f1acc8c891330);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_int_pos_86);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_type_RuntimeError_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_TooHardError);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_24ab79f8c4d9c1041ad71a6890b5a606);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_int_pos_96);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_type_ValueError_type_IndexError_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_AxisError);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf392498621b87d1c1109e8d68a2a753);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_int_pos_108);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__msg_str_plain_axis_str_plain_ndim_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain___slots__);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_13127a95ccd0cfe6dfe82b517c78347a);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_1adfabed5c052de92645605cc3e580a6);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_DTypePromotionError);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_1394cc4b97937420868835dde0909fea);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_int_pos_199);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5f4b483e2eee826b878a9d70b2a45c0);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_81e7e7eccc17f6f6c9dd9d1abd40aab6);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_1f88cb7c097f302841535c23476d8b33_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_ndim_str_plain_msg_tuple);
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
void checkModuleConstants_numpy$exceptions(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__msg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__msg);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_axis));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_axis);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_84d7ea5870d7fb6ca2fc69fe5d06efc3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_84d7ea5870d7fb6ca2fc69fe5d06efc3);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ab5f0abfdb9b59f58553ca5c6239689));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0ab5f0abfdb9b59f58553ca5c6239689);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d192c93bcfced5a00492fe53b6cbcb1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d192c93bcfced5a00492fe53b6cbcb1);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_list_d09819ea7194f7af73f624a4e51ab8e1_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_d09819ea7194f7af73f624a4e51ab8e1_list);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_loaded));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_loaded);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d9f2266e4a2b8328c89b572ff9cc038));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8d9f2266e4a2b8328c89b572ff9cc038);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_RuntimeWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RuntimeWarning);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_ComplexWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ComplexWarning);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a6dfb627d6363965404a5f9e0516c7c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a6dfb627d6363965404a5f9e0516c7c);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2a6f1a9c56cbb91ea28f657001dc1e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e2a6f1a9c56cbb91ea28f657001dc1e4);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_int_pos_47));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_47);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModuleDeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModuleDeprecationWarning);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_e0e46d9da7e55e9e03ce717c3a6ab071));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e0e46d9da7e55e9e03ce717c3a6ab071);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_int_pos_58));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_58);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_UserWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UserWarning);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_VisibleDeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VisibleDeprecationWarning);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_36f025c2ae62ec81f44eab7a5d4fb586));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36f025c2ae62ec81f44eab7a5d4fb586);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_75));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_75);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_RankWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RankWarning);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_273a5223684eb654920f1acc8c891330));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_273a5223684eb654920f1acc8c891330);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_int_pos_86));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_86);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_type_RuntimeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_RuntimeError_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_TooHardError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TooHardError);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_24ab79f8c4d9c1041ad71a6890b5a606));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24ab79f8c4d9c1041ad71a6890b5a606);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_int_pos_96));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_96);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_type_ValueError_type_IndexError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_ValueError_type_IndexError_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_AxisError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AxisError);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf392498621b87d1c1109e8d68a2a753));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf392498621b87d1c1109e8d68a2a753);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_int_pos_108));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_108);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__msg_str_plain_axis_str_plain_ndim_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__msg_str_plain_axis_str_plain_ndim_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain___slots__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___slots__);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_13127a95ccd0cfe6dfe82b517c78347a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13127a95ccd0cfe6dfe82b517c78347a);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___str__);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_1adfabed5c052de92645605cc3e580a6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1adfabed5c052de92645605cc3e580a6);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_TypeError_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_DTypePromotionError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DTypePromotionError);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_1394cc4b97937420868835dde0909fea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1394cc4b97937420868835dde0909fea);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_int_pos_199));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_199);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5f4b483e2eee826b878a9d70b2a45c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5f4b483e2eee826b878a9d70b2a45c0);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_81e7e7eccc17f6f6c9dd9d1abd40aab6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_81e7e7eccc17f6f6c9dd9d1abd40aab6);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_1f88cb7c097f302841535c23476d8b33_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1f88cb7c097f302841535c23476d8b33_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_ndim_str_plain_msg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_ndim_str_plain_msg_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 4
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
static PyObject *module_var_accessor_numpy$exceptions$DeprecationWarning(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$exceptions$RuntimeWarning(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RuntimeWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RuntimeWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RuntimeWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RuntimeWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RuntimeWarning);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$exceptions$UserWarning(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_UserWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UserWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UserWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UserWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UserWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_UserWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_UserWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UserWarning);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$exceptions$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$exceptions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_fdcef63e665504a8dcad533794721a99;
static PyCodeObject *code_objects_a3b6ef81d68685877dcd0d482c98076d;
static PyCodeObject *code_objects_2b8a30a0a6e35ebeceda1bbbedba53f0;
static PyCodeObject *code_objects_a754a818efe58686c1317d1622d706ba;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_d5f4b483e2eee826b878a9d70b2a45c0); CHECK_OBJECT(module_filename_obj);
code_objects_fdcef63e665504a8dcad533794721a99 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_81e7e7eccc17f6f6c9dd9d1abd40aab6, mod_consts.const_str_digest_81e7e7eccc17f6f6c9dd9d1abd40aab6, NULL, NULL, 0, 0, 0);
code_objects_a3b6ef81d68685877dcd0d482c98076d = MAKE_CODE_OBJECT(module_filename_obj, 108, 0, mod_consts.const_str_plain_AxisError, mod_consts.const_str_plain_AxisError, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2b8a30a0a6e35ebeceda1bbbedba53f0 = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_13127a95ccd0cfe6dfe82b517c78347a, mod_consts.const_tuple_1f88cb7c097f302841535c23476d8b33_tuple, NULL, 4, 0, 0);
code_objects_a754a818efe58686c1317d1622d706ba = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_1adfabed5c052de92645605cc3e580a6, mod_consts.const_tuple_str_plain_self_str_plain_axis_str_plain_ndim_str_plain_msg_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$exceptions$$$function__1___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$exceptions$$$function__2___str__(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$exceptions$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_axis = python_pars[1];
PyObject *par_ndim = python_pars[2];
PyObject *par_msg_prefix = python_pars[3];
nuitka_bool tmp_comparison_chain_1__comparison_result = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$exceptions$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$exceptions$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$exceptions$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$exceptions$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$exceptions$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$exceptions$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2b8a30a0a6e35ebeceda1bbbedba53f0, module_numpy$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$exceptions$$$function__1___init__->m_type_description == NULL);
frame_frame_numpy$exceptions$$$function__1___init__ = cache_frame_frame_numpy$exceptions$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$exceptions$$$function__1___init__);
assert(Py_REFCNT(frame_frame_numpy$exceptions$$$function__1___init__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_msg_prefix);
tmp_assign_source_1 = par_msg_prefix;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_1);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
{
nuitka_bool tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_ndim);
tmp_cmp_expr_left_1 = par_ndim;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
tmp_operand_value_1 = (tmp_comparison_chain_1__comparison_result == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
tmp_outline_return_value_1 = (tmp_comparison_chain_1__comparison_result == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_1;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = Py_None;
tmp_outline_return_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
tmp_comparison_chain_1__comparison_result = NUITKA_BOOL_UNASSIGNED;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
tmp_comparison_chain_1__comparison_result = NUITKA_BOOL_UNASSIGNED;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 176;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_axis);
tmp_assattr_value_1 = par_axis;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__msg, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_axis, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_ndim, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_msg_prefix);
tmp_assattr_value_4 = par_msg_prefix;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__msg, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_axis);
tmp_assattr_value_5 = par_axis;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_axis, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_ndim);
tmp_assattr_value_6 = par_ndim;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_ndim, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$exceptions$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$exceptions$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$exceptions$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$exceptions$$$function__1___init__,
    type_description_1,
    par_self,
    par_axis,
    par_ndim,
    par_msg_prefix
);


// Release cached frame if used for exception.
if (frame_frame_numpy$exceptions$$$function__1___init__ == cache_frame_frame_numpy$exceptions$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$exceptions$$$function__1___init__);
    cache_frame_frame_numpy$exceptions$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$exceptions$$$function__1___init__);

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
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_ndim);
Py_DECREF(par_ndim);
CHECK_OBJECT(par_msg_prefix);
Py_DECREF(par_msg_prefix);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_axis);
Py_DECREF(par_axis);
CHECK_OBJECT(par_ndim);
Py_DECREF(par_ndim);
CHECK_OBJECT(par_msg_prefix);
Py_DECREF(par_msg_prefix);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$exceptions$$$function__2___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_axis = NULL;
PyObject *var_ndim = NULL;
PyObject *var_msg = NULL;
nuitka_bool tmp_comparison_chain_1__comparison_result = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$exceptions$$$function__2___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$exceptions$$$function__2___str__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$exceptions$$$function__2___str__)) {
    Py_XDECREF(cache_frame_frame_numpy$exceptions$$$function__2___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$exceptions$$$function__2___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$exceptions$$$function__2___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a754a818efe58686c1317d1622d706ba, module_numpy$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$exceptions$$$function__2___str__->m_type_description == NULL);
frame_frame_numpy$exceptions$$$function__2___str__ = cache_frame_frame_numpy$exceptions$$$function__2___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$exceptions$$$function__2___str__);
assert(Py_REFCNT(frame_frame_numpy$exceptions$$$function__2___str__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_axis);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_axis == NULL);
var_axis = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ndim);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_ndim == NULL);
var_ndim = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(var_ndim);
tmp_assign_source_3 = var_ndim;
assert(tmp_comparison_chain_1__operand_2 == NULL);
Py_INCREF(tmp_assign_source_3);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_axis);
tmp_cmp_expr_left_1 = var_axis;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_4 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_comparison_chain_1__comparison_result = tmp_assign_source_4;
}
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
tmp_operand_value_1 = (tmp_comparison_chain_1__comparison_result == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
tmp_outline_return_value_1 = (tmp_comparison_chain_1__comparison_result == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_2;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = Py_None;
tmp_outline_return_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
tmp_comparison_chain_1__comparison_result = NUITKA_BOOL_UNASSIGNED;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
tmp_comparison_chain_1__comparison_result = NUITKA_BOOL_UNASSIGNED;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 190;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__msg);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_84d7ea5870d7fb6ca2fc69fe5d06efc3;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_axis);
tmp_format_value_1 = var_axis;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_0ab5f0abfdb9b59f58553ca5c6239689;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_ndim);
tmp_format_value_2 = var_ndim;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooo";
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
tmp_assign_source_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_5 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_5;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__msg);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_3;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__msg);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_msg);
tmp_tuple_element_2 = var_msg;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
tmp_assign_source_6 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_6 == NULL));
{
    PyObject *old = var_msg;
    assert(old != NULL);
    var_msg = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_3:;
CHECK_OBJECT(var_msg);
tmp_return_value = var_msg;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$exceptions$$$function__2___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$exceptions$$$function__2___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$exceptions$$$function__2___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$exceptions$$$function__2___str__,
    type_description_1,
    par_self,
    var_axis,
    var_ndim,
    var_msg
);


// Release cached frame if used for exception.
if (frame_frame_numpy$exceptions$$$function__2___str__ == cache_frame_frame_numpy$exceptions$$$function__2___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$exceptions$$$function__2___str__);
    cache_frame_frame_numpy$exceptions$$$function__2___str__ = NULL;
}

assertFrameObject(frame_frame_numpy$exceptions$$$function__2___str__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_axis);
CHECK_OBJECT(var_axis);
Py_DECREF(var_axis);
var_axis = NULL;
CHECK_OBJECT(var_ndim);
CHECK_OBJECT(var_ndim);
Py_DECREF(var_ndim);
var_ndim = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_axis);
var_axis = NULL;
Py_XDECREF(var_ndim);
var_ndim = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

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



static PyObject *MAKE_FUNCTION_numpy$exceptions$$$function__1___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$exceptions$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_13127a95ccd0cfe6dfe82b517c78347a,
#endif
        code_objects_2b8a30a0a6e35ebeceda1bbbedba53f0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$exceptions$$$function__2___str__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$exceptions$$$function__2___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1adfabed5c052de92645605cc3e580a6,
#endif
        code_objects_a754a818efe58686c1317d1622d706ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$exceptions,
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

static function_impl_code const function_table_numpy$exceptions[] = {
impl_numpy$exceptions$$$function__1___init__,
impl_numpy$exceptions$$$function__2___str__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$exceptions);
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
        module_numpy$exceptions,
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
        function_table_numpy$exceptions,
        sizeof(function_table_numpy$exceptions) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.exceptions";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$exceptions(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$exceptions");

    // Store the module for future use.
    module_numpy$exceptions = module;

    moduledict_numpy$exceptions = MODULE_DICT(module_numpy$exceptions);

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
        PRINT_STRING("numpy$exceptions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$exceptions: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$exceptions: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.exceptions" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$exceptions\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$exceptions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$exceptions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$exceptions);
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

        UPDATE_STRING_DICT1(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
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
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__bases = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__metaclass = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_class_container$class_creation_7__bases = NULL;
PyObject *tmp_class_container$class_creation_7__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_7__metaclass = NULL;
PyObject *tmp_class_container$class_creation_7__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$exceptions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_numpy$exceptions$$$class__1_ComplexWarning_47 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_numpy$exceptions$$$class__2_ModuleDeprecationWarning_58 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_numpy$exceptions$$$class__3_VisibleDeprecationWarning_75 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_numpy$exceptions$$$class__4_RankWarning_86 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_numpy$exceptions$$$class__5_TooHardError_96 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_numpy$exceptions$$$class__6_AxisError_108 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$exceptions$$$class__6_AxisError_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_numpy$exceptions$$$class__7_DTypePromotionError_199 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_7d192c93bcfced5a00492fe53b6cbcb1;
UPDATE_STRING_DICT0(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$exceptions = MAKE_MODULE_FRAME(code_objects_fdcef63e665504a8dcad533794721a99, module_numpy$exceptions);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$exceptions);
assert(Py_REFCNT(frame_frame_numpy$exceptions) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$exceptions$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$exceptions$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST6(tstate, mod_consts.const_list_d09819ea7194f7af73f624a4e51ab8e1_list);
UPDATE_STRING_DICT1(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_plain__is_loaded;
tmp_cmp_expr_right_1 = (PyObject *)moduledict_numpy$exceptions;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_8d9f2266e4a2b8328c89b572ff9cc038;
frame_frame_numpy$exceptions->m_frame.f_lineno = 43;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 43;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Py_True;
UPDATE_STRING_DICT0(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain__is_loaded, tmp_assign_source_5);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_numpy$exceptions$RuntimeWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto try_except_handler_1;
}
tmp_assign_source_6 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_6, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_7 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_9 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_9;
}
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_ComplexWarning;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$exceptions->m_frame.f_lineno = 47;
tmp_assign_source_10 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_10;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_1 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_1, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_1;
}
frame_frame_numpy$exceptions->m_frame.f_lineno = 47;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 47;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_11;
}
branch_end_2:;
{
PyObject *tmp_assign_source_12;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_numpy$exceptions$$$class__1_ComplexWarning_47 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6a6dfb627d6363965404a5f9e0516c7c;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__1_ComplexWarning_47, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_e2a6f1a9c56cbb91ea28f657001dc1e4;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__1_ComplexWarning_47, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_ComplexWarning;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__1_ComplexWarning_47, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_47;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__1_ComplexWarning_47, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__1_ComplexWarning_47, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__1_ComplexWarning_47, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
branch_no_4:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_ComplexWarning;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_numpy$exceptions$$$class__1_ComplexWarning_47;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$exceptions->m_frame.f_lineno = 47;
tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_13;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_12 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_12);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_numpy$exceptions$$$class__1_ComplexWarning_47);
locals_numpy$exceptions$$$class__1_ComplexWarning_47 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$exceptions$$$class__1_ComplexWarning_47);
locals_numpy$exceptions$$$class__1_ComplexWarning_47 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 47;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ComplexWarning, tmp_assign_source_12);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_numpy$exceptions$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto try_except_handler_4;
}
tmp_assign_source_14 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_14, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_15 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_4;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_4;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_17 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_17;
}
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_4;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_4;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_ModuleDeprecationWarning;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_numpy$exceptions->m_frame.f_lineno = 58;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_18;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_4;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_2, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_4;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_4;
}
frame_frame_numpy$exceptions->m_frame.f_lineno = 58;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 58;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_19;
}
branch_end_5:;
{
PyObject *tmp_assign_source_20;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_numpy$exceptions$$$class__2_ModuleDeprecationWarning_58 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6a6dfb627d6363965404a5f9e0516c7c;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__2_ModuleDeprecationWarning_58, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_e0e46d9da7e55e9e03ce717c3a6ab071;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__2_ModuleDeprecationWarning_58, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_ModuleDeprecationWarning;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__2_ModuleDeprecationWarning_58, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_58;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__2_ModuleDeprecationWarning_58, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__2_ModuleDeprecationWarning_58, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__2_ModuleDeprecationWarning_58, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
branch_no_7:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_ModuleDeprecationWarning;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_numpy$exceptions$$$class__2_ModuleDeprecationWarning_58;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_numpy$exceptions->m_frame.f_lineno = 58;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_21;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_20 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_20);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_numpy$exceptions$$$class__2_ModuleDeprecationWarning_58);
locals_numpy$exceptions$$$class__2_ModuleDeprecationWarning_58 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$exceptions$$$class__2_ModuleDeprecationWarning_58);
locals_numpy$exceptions$$$class__2_ModuleDeprecationWarning_58 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 58;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ModuleDeprecationWarning, tmp_assign_source_20);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_assign_source_22;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_numpy$exceptions$UserWarning(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UserWarning);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto try_except_handler_7;
}
tmp_assign_source_22 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_22, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_23 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_7;
}
tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_13 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_7;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_7;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_25 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_25;
}
{
bool tmp_condition_result_11;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_7;
}
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_7;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_VisibleDeprecationWarning;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_numpy$exceptions->m_frame.f_lineno = 75;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_26;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_7;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_3, tmp_default_value_3);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_7;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_7;
}
frame_frame_numpy$exceptions->m_frame.f_lineno = 75;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 75;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_9:;
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_27;
}
branch_end_8:;
{
PyObject *tmp_assign_source_28;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_numpy$exceptions$$$class__3_VisibleDeprecationWarning_75 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6a6dfb627d6363965404a5f9e0516c7c;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__3_VisibleDeprecationWarning_75, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_36f025c2ae62ec81f44eab7a5d4fb586;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__3_VisibleDeprecationWarning_75, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_VisibleDeprecationWarning;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__3_VisibleDeprecationWarning_75, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_75;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__3_VisibleDeprecationWarning_75, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_9;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__3_VisibleDeprecationWarning_75, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_9;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__3_VisibleDeprecationWarning_75, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_9;
}
branch_no_10:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_12 = mod_consts.const_str_plain_VisibleDeprecationWarning;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_numpy$exceptions$$$class__3_VisibleDeprecationWarning_75;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_numpy$exceptions->m_frame.f_lineno = 75;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_9;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_29;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_28 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_28);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_numpy$exceptions$$$class__3_VisibleDeprecationWarning_75);
locals_numpy$exceptions$$$class__3_VisibleDeprecationWarning_75 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$exceptions$$$class__3_VisibleDeprecationWarning_75);
locals_numpy$exceptions$$$class__3_VisibleDeprecationWarning_75 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 75;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_VisibleDeprecationWarning, tmp_assign_source_28);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_30;
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = module_var_accessor_numpy$exceptions$RuntimeWarning(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RuntimeWarning);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;

    goto try_except_handler_10;
}
tmp_assign_source_30 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_13);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_31 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_14;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_10;
}
tmp_condition_result_14 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_19 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_10;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_10;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_33 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_33;
}
{
bool tmp_condition_result_15;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_10;
}
tmp_condition_result_15 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_10;
}
tmp_tuple_element_14 = mod_consts.const_str_plain_RankWarning;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_numpy$exceptions->m_frame.f_lineno = 86;
tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_34;
}
{
bool tmp_condition_result_16;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_10;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_16 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_4, tmp_default_value_4);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_10;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_10;
}
frame_frame_numpy$exceptions->m_frame.f_lineno = 86;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 86;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_12:;
goto branch_end_11;
branch_no_11:;
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_35;
}
branch_end_11:;
{
PyObject *tmp_assign_source_36;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_numpy$exceptions$$$class__4_RankWarning_86 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6a6dfb627d6363965404a5f9e0516c7c;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__4_RankWarning_86, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_273a5223684eb654920f1acc8c891330;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__4_RankWarning_86, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_RankWarning;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__4_RankWarning_86, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_86;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__4_RankWarning_86, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_12;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__4_RankWarning_86, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_12;
}
{
nuitka_bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_12;
}
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__4_RankWarning_86, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_12;
}
branch_no_13:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_16 = mod_consts.const_str_plain_RankWarning;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
tmp_tuple_element_16 = locals_numpy$exceptions$$$class__4_RankWarning_86;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_numpy$exceptions->m_frame.f_lineno = 86;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_12;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_37;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_36 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_36);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_numpy$exceptions$$$class__4_RankWarning_86);
locals_numpy$exceptions$$$class__4_RankWarning_86 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$exceptions$$$class__4_RankWarning_86);
locals_numpy$exceptions$$$class__4_RankWarning_86 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 86;
goto try_except_handler_10;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RankWarning, tmp_assign_source_36);
}
goto try_end_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_direct_call_arg1_5;
tmp_direct_call_arg1_5 = mod_consts.const_tuple_type_RuntimeError_tuple;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_38 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_18;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_13;
}
tmp_condition_result_18 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_25 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_13;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_13;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_40 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_40;
}
{
bool tmp_condition_result_19;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_13;
}
tmp_condition_result_19 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_13;
}
tmp_tuple_element_17 = mod_consts.const_str_plain_TooHardError;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_numpy$exceptions->m_frame.f_lineno = 96;
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_41;
}
{
bool tmp_condition_result_20;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_13;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_20 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_20 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_5, tmp_default_value_5);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_13;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_18);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_13;
}
frame_frame_numpy$exceptions->m_frame.f_lineno = 96;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 96;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_15:;
goto branch_end_14;
branch_no_14:;
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_42;
}
branch_end_14:;
{
PyObject *tmp_assign_source_43;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_numpy$exceptions$$$class__5_TooHardError_96 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6a6dfb627d6363965404a5f9e0516c7c;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__5_TooHardError_96, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_24ab79f8c4d9c1041ad71a6890b5a606;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__5_TooHardError_96, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_TooHardError;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__5_TooHardError_96, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_96;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__5_TooHardError_96, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_15;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__5_TooHardError_96, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_15;
}
{
nuitka_bool tmp_condition_result_21;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_5__bases;
tmp_cmp_expr_right_6 = mod_consts.const_tuple_type_RuntimeError_tuple;
tmp_condition_result_21 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_15;
}
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
tmp_dictset_value = mod_consts.const_tuple_type_RuntimeError_tuple;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__5_TooHardError_96, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_15;
}
branch_no_16:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_19 = mod_consts.const_str_plain_TooHardError;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_19);
tmp_tuple_element_19 = locals_numpy$exceptions$$$class__5_TooHardError_96;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_numpy$exceptions->m_frame.f_lineno = 96;
tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto try_except_handler_15;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_44;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_43 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_43);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_numpy$exceptions$$$class__5_TooHardError_96);
locals_numpy$exceptions$$$class__5_TooHardError_96 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$exceptions$$$class__5_TooHardError_96);
locals_numpy$exceptions$$$class__5_TooHardError_96 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 96;
goto try_except_handler_13;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_TooHardError, tmp_assign_source_43);
}
goto try_end_5;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
{
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_45;
PyObject *tmp_direct_call_arg1_6;
tmp_direct_call_arg1_6 = mod_consts.const_tuple_type_ValueError_type_IndexError_tuple;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_45 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_22;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_16;
}
tmp_condition_result_22 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_31 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_6, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_16;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_16;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_47 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_47;
}
{
bool tmp_condition_result_23;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_16;
}
tmp_condition_result_23 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_16;
}
tmp_tuple_element_20 = mod_consts.const_str_plain_AxisError;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_numpy$exceptions->m_frame.f_lineno = 108;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_48;
}
{
bool tmp_condition_result_24;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_34 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_16;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_24 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_24 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_35;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_6, tmp_default_value_6);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_16;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_36;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_36 == NULL));
tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_21);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_16;
}
frame_frame_numpy$exceptions->m_frame.f_lineno = 108;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 108;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_16;
}
branch_no_18:;
goto branch_end_17;
branch_no_17:;
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_49;
}
branch_end_17:;
{
PyObject *tmp_assign_source_50;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_numpy$exceptions$$$class__6_AxisError_108 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6a6dfb627d6363965404a5f9e0516c7c;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__6_AxisError_108, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_bf392498621b87d1c1109e8d68a2a753;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__6_AxisError_108, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_plain_AxisError;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__6_AxisError_108, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_108;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__6_AxisError_108, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_18;
}
frame_frame_numpy$exceptions$$$class__6_AxisError_2 = MAKE_CLASS_FRAME(tstate, code_objects_a3b6ef81d68685877dcd0d482c98076d, module_numpy$exceptions, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$exceptions$$$class__6_AxisError_2);
assert(Py_REFCNT(frame_frame_numpy$exceptions$$$class__6_AxisError_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_tuple_str_plain__msg_str_plain_axis_str_plain_ndim_tuple;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__6_AxisError_108, mod_consts.const_str_plain___slots__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_numpy$exceptions$$$function__1___init__(tstate, tmp_defaults_1);

tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__6_AxisError_108, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_numpy$exceptions$$$function__2___str__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__6_AxisError_108, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$exceptions$$$class__6_AxisError_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$exceptions$$$class__6_AxisError_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$exceptions$$$class__6_AxisError_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$exceptions$$$class__6_AxisError_2,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_numpy$exceptions$$$class__6_AxisError_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_18;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__msg_str_plain_axis_str_plain_ndim_tuple;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__6_AxisError_108, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_18;
}
{
nuitka_bool tmp_condition_result_25;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_6__bases;
tmp_cmp_expr_right_7 = mod_consts.const_tuple_type_ValueError_type_IndexError_tuple;
tmp_condition_result_25 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_18;
}
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
tmp_dictset_value = mod_consts.const_tuple_type_ValueError_type_IndexError_tuple;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__6_AxisError_108, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_18;
}
branch_no_19:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_22 = mod_consts.const_str_plain_AxisError;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_22);
tmp_tuple_element_22 = locals_numpy$exceptions$$$class__6_AxisError_108;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_numpy$exceptions->m_frame.f_lineno = 108;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_18;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_51;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_50 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_50);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_numpy$exceptions$$$class__6_AxisError_108);
locals_numpy$exceptions$$$class__6_AxisError_108 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$exceptions$$$class__6_AxisError_108);
locals_numpy$exceptions$$$class__6_AxisError_108 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 108;
goto try_except_handler_16;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_AxisError, tmp_assign_source_50);
}
goto try_end_6;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
Py_DECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
Py_DECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
tmp_outline_return_value_6 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_6);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_6);
Py_DECREF(tmp_outline_return_value_6);
}
{
PyObject *tmp_outline_return_value_7;
// Tried code:
{
PyObject *tmp_assign_source_52;
PyObject *tmp_direct_call_arg1_7;
tmp_direct_call_arg1_7 = mod_consts.const_tuple_type_TypeError_tuple;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_52 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_26;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_19;
}
tmp_condition_result_26 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_37 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_7, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_19;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_19;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_54 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_54;
}
{
bool tmp_condition_result_27;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_38 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_19;
}
tmp_condition_result_27 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_23;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_19;
}
tmp_tuple_element_23 = mod_consts.const_str_plain_DTypePromotionError;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_23 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_numpy$exceptions->m_frame.f_lineno = 199;
tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_55;
}
{
bool tmp_condition_result_28;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_40 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_19;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_28 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_28 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_make_exception_arg_8;
PyObject *tmp_mod_expr_left_7;
PyObject *tmp_mod_expr_right_7;
PyObject *tmp_tuple_element_24;
PyObject *tmp_expression_value_41;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_41 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_24 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_7, tmp_default_value_7);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_19;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_42;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_42 == NULL));
tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_24);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_19;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_19;
}
frame_frame_numpy$exceptions->m_frame.f_lineno = 199;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 199;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_19;
}
branch_no_21:;
goto branch_end_20;
branch_no_20:;
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_56;
}
branch_end_20:;
{
PyObject *tmp_assign_source_57;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_numpy$exceptions$$$class__7_DTypePromotionError_199 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6a6dfb627d6363965404a5f9e0516c7c;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__7_DTypePromotionError_199, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_digest_1394cc4b97937420868835dde0909fea;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__7_DTypePromotionError_199, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_plain_DTypePromotionError;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__7_DTypePromotionError_199, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_int_pos_199;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__7_DTypePromotionError_199, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_21;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__7_DTypePromotionError_199, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_21;
}
{
nuitka_bool tmp_condition_result_29;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_7__bases;
tmp_cmp_expr_right_8 = mod_consts.const_tuple_type_TypeError_tuple;
tmp_condition_result_29 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_29 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_21;
}
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
tmp_dictset_value = mod_consts.const_tuple_type_TypeError_tuple;
tmp_res = PyObject_SetItem(locals_numpy$exceptions$$$class__7_DTypePromotionError_199, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_21;
}
branch_no_22:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_25 = mod_consts.const_str_plain_DTypePromotionError;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_25 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_25);
tmp_tuple_element_25 = locals_numpy$exceptions$$$class__7_DTypePromotionError_199;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_numpy$exceptions->m_frame.f_lineno = 199;
tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto try_except_handler_21;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_58;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_57 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_57);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
Py_DECREF(locals_numpy$exceptions$$$class__7_DTypePromotionError_199);
locals_numpy$exceptions$$$class__7_DTypePromotionError_199 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$exceptions$$$class__7_DTypePromotionError_199);
locals_numpy$exceptions$$$class__7_DTypePromotionError_199 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_20;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 199;
goto try_except_handler_19;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_numpy$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DTypePromotionError, tmp_assign_source_57);
}
goto try_end_7;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
Py_DECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
Py_DECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
Py_DECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
tmp_outline_return_value_7 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_7);
goto outline_result_13;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_13:;
CHECK_OBJECT(tmp_outline_return_value_7);
Py_DECREF(tmp_outline_return_value_7);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$exceptions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$exceptions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$exceptions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$exceptions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$exceptions", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.exceptions" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$exceptions);
    return module_numpy$exceptions;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$exceptions", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

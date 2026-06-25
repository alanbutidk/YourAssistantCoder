/* Generated code for Python module 'textual$css$scalar_animation'
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



/* The "module_textual$css$scalar_animation" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$css$scalar_animation;
PyDictObject *moduledict_textual$css$scalar_animation;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_2b100d7deb99bed63e6777bc8b8a7861;
PyObject *const_str_plain_widget;
PyObject *const_str_plain_styles;
PyObject *const_str_plain_start_time;
PyObject *const_str_plain_attribute;
PyObject *const_str_plain_final_value;
PyObject *const_str_plain_easing;
PyObject *const_str_plain_on_complete;
PyObject *const_str_plain_outer_size;
PyObject *const_str_plain_app;
PyObject *const_str_plain_size;
PyObject *const_str_plain_resolve;
PyObject *const_str_plain_start;
PyObject *const_str_plain_destination;
PyObject *const_str_plain_get_distance_to;
PyObject *const_str_plain_duration;
PyObject *const_str_digest_0bfd1542b58aa51499321c0e26e8860b;
PyObject *const_str_plain_min;
PyObject *const_str_plain_none;
PyObject *const_str_plain_basic;
PyObject *const_str_plain_full;
PyObject *const_str_plain_blend;
PyObject *const_str_plain_get_rule;
PyObject *const_str_digest_a2e7966b495d6a8d00c351fc2c1d96f0;
PyObject *const_str_plain_complete;
PyObject *const_str_plain_self;
PyObject *const_str_plain_invoke_callback;
PyObject *const_str_plain_stop;
PyObject *const_str_digest_a93099d3b179e981ec369264c4293f2b;
PyObject *const_str_plain_ScalarAnimation;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_digest_525a71d7d6542dd74dc8c938339082dd;
PyObject *const_tuple_str_plain_Animation_str_plain_EasingFunction_tuple;
PyObject *const_str_plain_Animation;
PyObject *const_str_plain_EasingFunction;
PyObject *const_str_digest_c32863e446b1799beb3ada226b376daf;
PyObject *const_tuple_str_plain_AnimationLevel_str_plain_CallbackType_tuple;
PyObject *const_str_plain_AnimationLevel;
PyObject *const_str_plain_CallbackType;
PyObject *const_str_digest_88ab157ca2f52fb8972e1dcf526073ed;
PyObject *const_tuple_str_plain_Scalar_str_plain_ScalarOffset_tuple;
PyObject *const_str_plain_Scalar;
PyObject *const_str_plain_ScalarOffset;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_b0d887f1611294f223b782b42808b833;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_14;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_none_str_plain_full_tuple;
PyObject *const_dict_3abb5ce1294287d983681726a5592fb6;
PyObject *const_str_digest_d7a5bbb1ce041ad7dee01a9c9ea0acc4;
PyObject *const_tuple_str_plain_full_tuple;
PyObject *const_dict_f674d803886d66ea59881859c89316bd;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_89045fec715698edc649e4500f1f895a;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_851a523712eff47621fc4105a9d00653;
PyObject *const_dict_48da6b0499a992d8a0861b3c7131d274;
PyObject *const_str_plain___eq__;
PyObject *const_str_digest_86887b5539d2fa8b76931f8f4e60a221;
PyObject *const_tuple_cb44f2459d36273528059cf509417c30_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_dc43a9e45f9bec9e07dbf175452945e6;
PyObject *const_str_digest_ac64b71f9fcd9d826323deb254c66f73;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_8520beb7b88530cb882cf40d68cb30ec_tuple;
PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
PyObject *const_tuple_74470f562f124e3af192f6589aa9af1f_tuple;
PyObject *const_tuple_str_plain_self_str_plain_complete_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[76];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.css.scalar_animation"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b100d7deb99bed63e6777bc8b8a7861);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_widget);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_styles);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_time);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_attribute);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_final_value);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_easing);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_complete);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_outer_size);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_destination);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_distance_to);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_duration);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_0bfd1542b58aa51499321c0e26e8860b);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_none);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_basic);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_full);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_blend);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_rule);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2e7966b495d6a8d00c351fc2c1d96f0);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_complete);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_invoke_callback);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_a93099d3b179e981ec369264c4293f2b);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_ScalarAnimation);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_525a71d7d6542dd74dc8c938339082dd);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Animation_str_plain_EasingFunction_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_Animation);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_EasingFunction);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnimationLevel_str_plain_CallbackType_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnimationLevel);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_CallbackType);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_88ab157ca2f52fb8972e1dcf526073ed);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Scalar_str_plain_ScalarOffset_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_Scalar);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_ScalarOffset);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0d887f1611294f223b782b42808b833);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_int_pos_14);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_none_str_plain_full_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_dict_3abb5ce1294287d983681726a5592fb6);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7a5bbb1ce041ad7dee01a9c9ea0acc4);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_full_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_dict_f674d803886d66ea59881859c89316bd);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_89045fec715698edc649e4500f1f895a);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_dict_851a523712eff47621fc4105a9d00653);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain___eq__);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_86887b5539d2fa8b76931f8f4e60a221);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_cb44f2459d36273528059cf509417c30_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc43a9e45f9bec9e07dbf175452945e6);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac64b71f9fcd9d826323deb254c66f73);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_8520beb7b88530cb882cf40d68cb30ec_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_74470f562f124e3af192f6589aa9af1f_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_complete_tuple);
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
void checkModuleConstants_textual$css$scalar_animation(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b100d7deb99bed63e6777bc8b8a7861));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b100d7deb99bed63e6777bc8b8a7861);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_widget));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_widget);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_styles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_styles);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_time);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_attribute));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attribute);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_final_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_final_value);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_easing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_easing);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_complete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_on_complete);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_outer_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_outer_size);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_destination));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_destination);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_distance_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_distance_to);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_duration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_duration);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_0bfd1542b58aa51499321c0e26e8860b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0bfd1542b58aa51499321c0e26e8860b);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_none));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_none);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_basic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_basic);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_full));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_full);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_blend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blend);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_rule));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_rule);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2e7966b495d6a8d00c351fc2c1d96f0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2e7966b495d6a8d00c351fc2c1d96f0);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_complete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_complete);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_invoke_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invoke_callback);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_a93099d3b179e981ec369264c4293f2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a93099d3b179e981ec369264c4293f2b);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_ScalarAnimation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ScalarAnimation);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_525a71d7d6542dd74dc8c938339082dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_525a71d7d6542dd74dc8c938339082dd);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Animation_str_plain_EasingFunction_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Animation_str_plain_EasingFunction_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_Animation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Animation);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_EasingFunction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EasingFunction);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnimationLevel_str_plain_CallbackType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnimationLevel_str_plain_CallbackType_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnimationLevel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnimationLevel);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_CallbackType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CallbackType);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_88ab157ca2f52fb8972e1dcf526073ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_88ab157ca2f52fb8972e1dcf526073ed);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Scalar_str_plain_ScalarOffset_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Scalar_str_plain_ScalarOffset_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_Scalar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Scalar);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_ScalarOffset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ScalarOffset);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0d887f1611294f223b782b42808b833));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0d887f1611294f223b782b42808b833);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_int_pos_14));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_14);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_none_str_plain_full_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_str_plain_full_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_dict_3abb5ce1294287d983681726a5592fb6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3abb5ce1294287d983681726a5592fb6);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7a5bbb1ce041ad7dee01a9c9ea0acc4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d7a5bbb1ce041ad7dee01a9c9ea0acc4);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_full_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_full_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_dict_f674d803886d66ea59881859c89316bd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f674d803886d66ea59881859c89316bd);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_89045fec715698edc649e4500f1f895a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89045fec715698edc649e4500f1f895a);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_dict_851a523712eff47621fc4105a9d00653));
CHECK_OBJECT_DEEP(mod_consts.const_dict_851a523712eff47621fc4105a9d00653);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274));
CHECK_OBJECT_DEEP(mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain___eq__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___eq__);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_86887b5539d2fa8b76931f8f4e60a221));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86887b5539d2fa8b76931f8f4e60a221);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_cb44f2459d36273528059cf509417c30_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cb44f2459d36273528059cf509417c30_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc43a9e45f9bec9e07dbf175452945e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc43a9e45f9bec9e07dbf175452945e6);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac64b71f9fcd9d826323deb254c66f73));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac64b71f9fcd9d826323deb254c66f73);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_8520beb7b88530cb882cf40d68cb30ec_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8520beb7b88530cb882cf40d68cb30ec_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_74470f562f124e3af192f6589aa9af1f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_74470f562f124e3af192f6589aa9af1f_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_complete_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_complete_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 3
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
static PyObject *module_var_accessor_textual$css$scalar_animation$Animation(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$scalar_animation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$scalar_animation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_Animation);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$scalar_animation->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Animation);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Animation, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Animation);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Animation, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_Animation);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_Animation);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Animation);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$scalar_animation$ScalarAnimation(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$scalar_animation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$scalar_animation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_ScalarAnimation);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$scalar_animation->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ScalarAnimation);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ScalarAnimation, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ScalarAnimation);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ScalarAnimation, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_ScalarAnimation);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_ScalarAnimation);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ScalarAnimation);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$scalar_animation$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$scalar_animation->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$scalar_animation->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$scalar_animation->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_01d13bbe0b9cb1e9b7232afe265677c1;
static PyCodeObject *code_objects_41606d45713c4daae320e7681754d0ef;
static PyCodeObject *code_objects_4f83e7654078ced0f26e30963c4ed495;
static PyCodeObject *code_objects_9ee5aaefa6d564ce1b5a4b794baded10;
static PyCodeObject *code_objects_5894982ed83646a3ff93f32da22dc687;
static PyCodeObject *code_objects_ffe51cbf46b039035f2ac02a4df83b96;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_dc43a9e45f9bec9e07dbf175452945e6); CHECK_OBJECT(module_filename_obj);
code_objects_01d13bbe0b9cb1e9b7232afe265677c1 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_ac64b71f9fcd9d826323deb254c66f73, mod_consts.const_str_digest_ac64b71f9fcd9d826323deb254c66f73, NULL, NULL, 0, 0, 0);
code_objects_41606d45713c4daae320e7681754d0ef = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ScalarAnimation, mod_consts.const_str_plain_ScalarAnimation, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_4f83e7654078ced0f26e30963c4ed495 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_89045fec715698edc649e4500f1f895a, mod_consts.const_tuple_8520beb7b88530cb882cf40d68cb30ec_tuple, NULL, 3, 0, 0);
code_objects_9ee5aaefa6d564ce1b5a4b794baded10 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___eq__, mod_consts.const_str_digest_86887b5539d2fa8b76931f8f4e60a221, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_5894982ed83646a3ff93f32da22dc687 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_d7a5bbb1ce041ad7dee01a9c9ea0acc4, mod_consts.const_tuple_74470f562f124e3af192f6589aa9af1f_tuple, NULL, 11, 0, 0);
code_objects_ffe51cbf46b039035f2ac02a4df83b96 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_stop, mod_consts.const_str_digest_a93099d3b179e981ec369264c4293f2b, mod_consts.const_tuple_str_plain_self_str_plain_complete_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_textual$css$scalar_animation$$$function__3_stop$$$coroutine__1_stop(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$css$scalar_animation$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$scalar_animation$$$function__2___call__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$scalar_animation$$$function__3_stop(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$scalar_animation$$$function__4___eq__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$css$scalar_animation$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_widget = python_pars[1];
PyObject *par_styles = python_pars[2];
PyObject *par_start_time = python_pars[3];
PyObject *par_attribute = python_pars[4];
PyObject *par_value = python_pars[5];
PyObject *par_duration = python_pars[6];
PyObject *par_speed = python_pars[7];
PyObject *par_easing = python_pars[8];
PyObject *par_on_complete = python_pars[9];
PyObject *par_level = python_pars[10];
PyObject *var_size = NULL;
PyObject *var_viewport = NULL;
PyObject *var_distance = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$scalar_animation$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_textual$css$scalar_animation$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$css$scalar_animation$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$css$scalar_animation$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$css$scalar_animation$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$css$scalar_animation$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5894982ed83646a3ff93f32da22dc687, module_textual$css$scalar_animation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$css$scalar_animation$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$css$scalar_animation$$$function__1___init__ = cache_frame_frame_textual$css$scalar_animation$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$scalar_animation$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$css$scalar_animation$$$function__1___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_speed);
tmp_cmp_expr_left_1 = par_speed;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_duration);
tmp_cmp_expr_left_2 = par_duration;
tmp_cmp_expr_right_2 = Py_None;
tmp_or_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? Py_True : Py_False;
tmp_operand_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_operand_value_1 = tmp_or_left_value_1;
or_end_1:;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_2b100d7deb99bed63e6777bc8b8a7861;
frame_frame_textual$css$scalar_animation$$$function__1___init__->m_frame.f_lineno = 28;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 28;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_widget);
tmp_assattr_value_1 = par_widget;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_widget, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_styles);
tmp_assattr_value_2 = par_styles;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_styles, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_start_time);
tmp_assattr_value_3 = par_start_time;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_start_time, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_attribute);
tmp_assattr_value_4 = par_attribute;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_attribute, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_value);
tmp_assattr_value_5 = par_value;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_final_value, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_easing);
tmp_assattr_value_6 = par_easing;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_easing, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_on_complete);
tmp_assattr_value_7 = par_on_complete;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_on_complete, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_level);
tmp_assattr_value_8 = par_level;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, const_str_plain_level, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_widget);
tmp_expression_value_1 = par_widget;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_outer_size);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_size == NULL);
var_size = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_widget);
tmp_expression_value_3 = par_widget;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_app);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_viewport == NULL);
var_viewport = tmp_assign_source_2;
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_styles);
tmp_expression_value_4 = par_styles;
CHECK_OBJECT(par_attribute);
tmp_name_value_1 = par_attribute;
tmp_called_instance_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_1, NULL);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_size);
tmp_args_element_value_1 = var_size;
CHECK_OBJECT(var_viewport);
tmp_args_element_value_2 = var_viewport;
frame_frame_textual$css$scalar_animation$$$function__1___init__->m_frame.f_lineno = 43;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assattr_value_9 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_resolve,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assattr_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_start, tmp_assattr_value_9);
CHECK_OBJECT(tmp_assattr_value_9);
Py_DECREF(tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_assattr_target_10;
CHECK_OBJECT(par_value);
tmp_called_instance_2 = par_value;
CHECK_OBJECT(var_size);
tmp_args_element_value_3 = var_size;
CHECK_OBJECT(var_viewport);
tmp_args_element_value_4 = var_viewport;
frame_frame_textual$css$scalar_animation$$$function__1___init__->m_frame.f_lineno = 44;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assattr_value_10 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_resolve,
        call_args
    );
}

if (tmp_assattr_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_destination, tmp_assattr_value_10);
CHECK_OBJECT(tmp_assattr_value_10);
Py_DECREF(tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_speed);
tmp_cmp_expr_left_3 = par_speed;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_start);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_get_distance_to);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_destination);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 47;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$css$scalar_animation$$$function__1___init__->m_frame.f_lineno = 47;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_distance == NULL);
var_distance = tmp_assign_source_3;
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_assattr_target_11;
CHECK_OBJECT(var_distance);
tmp_truediv_expr_left_1 = var_distance;
CHECK_OBJECT(par_speed);
tmp_truediv_expr_right_1 = par_speed;
tmp_assattr_value_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_assattr_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain_duration, tmp_assattr_value_11);
CHECK_OBJECT(tmp_assattr_value_11);
Py_DECREF(tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_duration);
tmp_cmp_expr_left_4 = par_duration;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_0bfd1542b58aa51499321c0e26e8860b;
frame_frame_textual$css$scalar_animation$$$function__1___init__->m_frame.f_lineno = 50;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 50;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_assattr_target_12;
CHECK_OBJECT(par_duration);
tmp_assattr_value_12 = par_duration;
CHECK_OBJECT(par_self);
tmp_assattr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain_duration, tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_end_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$scalar_animation$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$scalar_animation$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$scalar_animation$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$scalar_animation$$$function__1___init__,
    type_description_1,
    par_self,
    par_widget,
    par_styles,
    par_start_time,
    par_attribute,
    par_value,
    par_duration,
    par_speed,
    par_easing,
    par_on_complete,
    par_level,
    var_size,
    var_viewport,
    var_distance
);


// Release cached frame if used for exception.
if (frame_frame_textual$css$scalar_animation$$$function__1___init__ == cache_frame_frame_textual$css$scalar_animation$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$css$scalar_animation$$$function__1___init__);
    cache_frame_frame_textual$css$scalar_animation$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$css$scalar_animation$$$function__1___init__);

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
CHECK_OBJECT(var_size);
CHECK_OBJECT(var_size);
Py_DECREF(var_size);
var_size = NULL;
CHECK_OBJECT(var_viewport);
CHECK_OBJECT(var_viewport);
Py_DECREF(var_viewport);
var_viewport = NULL;
Py_XDECREF(var_distance);
var_distance = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_size);
var_size = NULL;
Py_XDECREF(var_viewport);
var_viewport = NULL;
Py_XDECREF(var_distance);
var_distance = NULL;
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
CHECK_OBJECT(par_widget);
Py_DECREF(par_widget);
CHECK_OBJECT(par_styles);
Py_DECREF(par_styles);
CHECK_OBJECT(par_start_time);
Py_DECREF(par_start_time);
CHECK_OBJECT(par_attribute);
Py_DECREF(par_attribute);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_duration);
Py_DECREF(par_duration);
CHECK_OBJECT(par_speed);
Py_DECREF(par_speed);
CHECK_OBJECT(par_easing);
Py_DECREF(par_easing);
CHECK_OBJECT(par_on_complete);
Py_DECREF(par_on_complete);
CHECK_OBJECT(par_level);
Py_DECREF(par_level);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_widget);
Py_DECREF(par_widget);
CHECK_OBJECT(par_styles);
Py_DECREF(par_styles);
CHECK_OBJECT(par_start_time);
Py_DECREF(par_start_time);
CHECK_OBJECT(par_attribute);
Py_DECREF(par_attribute);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_duration);
Py_DECREF(par_duration);
CHECK_OBJECT(par_speed);
Py_DECREF(par_speed);
CHECK_OBJECT(par_easing);
Py_DECREF(par_easing);
CHECK_OBJECT(par_on_complete);
Py_DECREF(par_on_complete);
CHECK_OBJECT(par_level);
Py_DECREF(par_level);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$css$scalar_animation$$$function__2___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_time = python_pars[1];
PyObject *par_app_animation_level = python_pars[2];
PyObject *var_factor = NULL;
PyObject *var_eased_factor = NULL;
PyObject *var_value = NULL;
PyObject *var_current = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$scalar_animation$$$function__2___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_textual$css$scalar_animation$$$function__2___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$css$scalar_animation$$$function__2___call__)) {
    Py_XDECREF(cache_frame_frame_textual$css$scalar_animation$$$function__2___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$css$scalar_animation$$$function__2___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$css$scalar_animation$$$function__2___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4f83e7654078ced0f26e30963c4ed495, module_textual$css$scalar_animation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$css$scalar_animation$$$function__2___call__->m_type_description == NULL);
frame_frame_textual$css$scalar_animation$$$function__2___call__ = cache_frame_frame_textual$css$scalar_animation$$$function__2___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$scalar_animation$$$function__2___call__);
assert(Py_REFCNT(frame_frame_textual$css$scalar_animation$$$function__2___call__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_1 != NULL);
tmp_args_element_value_1 = const_float_1_0;
CHECK_OBJECT(par_time);
tmp_sub_expr_left_1 = par_time;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_start_time);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_truediv_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_duration);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 56;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$css$scalar_animation$$$function__2___call__->m_frame.f_lineno = 56;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_factor == NULL);
var_factor = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_factor);
tmp_args_element_value_3 = var_factor;
frame_frame_textual$css$scalar_animation$$$function__2___call__->m_frame.f_lineno = 57;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_easing, tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_eased_factor == NULL);
var_eased_factor = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_eased_factor);
tmp_cmp_expr_left_1 = var_eased_factor;
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_or_left_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_app_animation_level);
tmp_cmp_expr_left_2 = par_app_animation_level;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_none;
tmp_or_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_app_animation_level);
tmp_cmp_expr_left_3 = par_app_animation_level;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_basic;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_level);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_full;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_right_value_2 = tmp_and_left_value_1;
and_end_1:;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_styles);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_name_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_attribute);
if (tmp_name_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_4);

exception_lineno = 65;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_final_value);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_4);
Py_DECREF(tmp_name_value_1);

exception_lineno = 65;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_capi_result_1 = BUILTIN_SETATTR(tmp_expression_value_4, tmp_name_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
CHECK_OBJECT(tmp_name_value_1);
Py_DECREF(tmp_name_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_start);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain_blend);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_start);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_blend);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_destination);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 69;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_eased_factor);
tmp_args_element_value_5 = var_eased_factor;
frame_frame_textual$css$scalar_animation$$$function__2___call__->m_frame.f_lineno = 69;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_value == NULL);
var_value = tmp_assign_source_3;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_start);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_destination);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 71;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_sub_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_start);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 71;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 71;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_eased_factor);
tmp_mult_expr_right_1 = var_eased_factor;
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 71;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_value == NULL);
var_value = tmp_assign_source_4;
}
branch_end_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_styles);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_get_rule);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_attribute);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 72;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$css$scalar_animation$$$function__2___call__->m_frame.f_lineno = 72;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_current == NULL);
var_current = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_current);
tmp_cmp_expr_left_5 = var_current;
CHECK_OBJECT(var_value);
tmp_cmp_expr_right_5 = var_value;
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_name_value_2;
PyObject *tmp_expression_value_21;
PyObject *tmp_value_value_2;
PyObject *tmp_capi_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_styles);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_21 = par_self;
tmp_name_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_attribute);
if (tmp_name_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_19);

exception_lineno = 74;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_value);
tmp_value_value_2 = var_value;
tmp_capi_result_2 = BUILTIN_SETATTR(tmp_expression_value_19, tmp_name_value_2, tmp_value_value_2);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
CHECK_OBJECT(tmp_name_value_2);
Py_DECREF(tmp_name_value_2);
if (tmp_capi_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$scalar_animation$$$function__2___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$scalar_animation$$$function__2___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$scalar_animation$$$function__2___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$scalar_animation$$$function__2___call__,
    type_description_1,
    par_self,
    par_time,
    par_app_animation_level,
    var_factor,
    var_eased_factor,
    var_value,
    var_current
);


// Release cached frame if used for exception.
if (frame_frame_textual$css$scalar_animation$$$function__2___call__ == cache_frame_frame_textual$css$scalar_animation$$$function__2___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$css$scalar_animation$$$function__2___call__);
    cache_frame_frame_textual$css$scalar_animation$$$function__2___call__ = NULL;
}

assertFrameObject(frame_frame_textual$css$scalar_animation$$$function__2___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_factor);
CHECK_OBJECT(var_factor);
Py_DECREF(var_factor);
var_factor = NULL;
CHECK_OBJECT(var_eased_factor);
CHECK_OBJECT(var_eased_factor);
Py_DECREF(var_eased_factor);
var_eased_factor = NULL;
Py_XDECREF(var_value);
var_value = NULL;
Py_XDECREF(var_current);
var_current = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_factor);
var_factor = NULL;
Py_XDECREF(var_eased_factor);
var_eased_factor = NULL;
Py_XDECREF(var_value);
var_value = NULL;
Py_XDECREF(var_current);
var_current = NULL;
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
CHECK_OBJECT(par_time);
Py_DECREF(par_time);
CHECK_OBJECT(par_app_animation_level);
Py_DECREF(par_app_animation_level);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_time);
Py_DECREF(par_time);
CHECK_OBJECT(par_app_animation_level);
Py_DECREF(par_app_animation_level);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$css$scalar_animation$$$function__3_stop(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_complete = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_complete;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_textual$css$scalar_animation$$$function__3_stop$$$coroutine__1_stop(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_complete);
CHECK_OBJECT(par_complete);
Py_DECREF(par_complete);
par_complete = NULL;
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
struct textual$css$scalar_animation$$$function__3_stop$$$coroutine__1_stop_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *textual$css$scalar_animation$$$function__3_stop$$$coroutine__1_stop_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$css$scalar_animation$$$function__3_stop$$$coroutine__1_stop_locals *coroutine_heap = (struct textual$css$scalar_animation$$$function__3_stop$$$coroutine__1_stop_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_ffe51cbf46b039035f2ac02a4df83b96, module_textual$css$scalar_animation, sizeof(void *)+sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_complete);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 88;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[0]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 88;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_capi_result_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_styles);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_expression_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_name_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_attribute);
if (tmp_name_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_expression_value_1);

coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_expression_value_1);
Py_DECREF(tmp_name_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_final_value);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_expression_value_1);
Py_DECREF(tmp_name_value_1);

coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_capi_result_1 = BUILTIN_SETATTR(tmp_expression_value_1, tmp_name_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
CHECK_OBJECT(tmp_name_value_1);
Py_DECREF(tmp_name_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 90;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 90;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 90;
tmp_expression_value_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_invoke_callback);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 90;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 90;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_5;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 90;
coroutine_heap->type_description_1 = "cc";
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

static PyObject *MAKE_COROUTINE_textual$css$scalar_animation$$$function__3_stop$$$coroutine__1_stop(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$css$scalar_animation$$$function__3_stop$$$coroutine__1_stop_context,
        module_textual$css$scalar_animation,
        mod_consts.const_str_plain_stop,
        mod_consts.const_str_digest_a93099d3b179e981ec369264c4293f2b,
        code_objects_ffe51cbf46b039035f2ac02a4df83b96,
        closure,
        2,
#if 1
        sizeof(struct textual$css$scalar_animation$$$function__3_stop$$$coroutine__1_stop_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$css$scalar_animation$$$function__4___eq__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$css$scalar_animation$$$function__4___eq__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$css$scalar_animation$$$function__4___eq__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$css$scalar_animation$$$function__4___eq__)) {
    Py_XDECREF(cache_frame_frame_textual$css$scalar_animation$$$function__4___eq__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$css$scalar_animation$$$function__4___eq__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$css$scalar_animation$$$function__4___eq__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9ee5aaefa6d564ce1b5a4b794baded10, module_textual$css$scalar_animation, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$css$scalar_animation$$$function__4___eq__->m_type_description == NULL);
frame_frame_textual$css$scalar_animation$$$function__4___eq__ = cache_frame_frame_textual$css$scalar_animation$$$function__4___eq__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$scalar_animation$$$function__4___eq__);
assert(Py_REFCNT(frame_frame_textual$css$scalar_animation$$$function__4___eq__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_other);
tmp_isinstance_inst_1 = par_other;
tmp_isinstance_cls_1 = module_var_accessor_textual$css$scalar_animation$ScalarAnimation(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ScalarAnimation);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oo";
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
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_final_value);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_2 = par_other;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_final_value);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 95;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 95;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_duration);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_other);
tmp_expression_value_4 = par_other;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_duration);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$scalar_animation$$$function__4___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$scalar_animation$$$function__4___eq__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$scalar_animation$$$function__4___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$scalar_animation$$$function__4___eq__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_textual$css$scalar_animation$$$function__4___eq__ == cache_frame_frame_textual$css$scalar_animation$$$function__4___eq__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$css$scalar_animation$$$function__4___eq__);
    cache_frame_frame_textual$css$scalar_animation$$$function__4___eq__ = NULL;
}

assertFrameObject(frame_frame_textual$css$scalar_animation$$$function__4___eq__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$css$scalar_animation$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$scalar_animation$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d7a5bbb1ce041ad7dee01a9c9ea0acc4,
#endif
        code_objects_5894982ed83646a3ff93f32da22dc687,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$scalar_animation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$scalar_animation$$$function__2___call__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$scalar_animation$$$function__2___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_89045fec715698edc649e4500f1f895a,
#endif
        code_objects_4f83e7654078ced0f26e30963c4ed495,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$scalar_animation,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$scalar_animation$$$function__3_stop(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$scalar_animation$$$function__3_stop,
        mod_consts.const_str_plain_stop,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a93099d3b179e981ec369264c4293f2b,
#endif
        code_objects_ffe51cbf46b039035f2ac02a4df83b96,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$scalar_animation,
        mod_consts.const_str_digest_a2e7966b495d6a8d00c351fc2c1d96f0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$scalar_animation$$$function__4___eq__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$scalar_animation$$$function__4___eq__,
        mod_consts.const_str_plain___eq__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_86887b5539d2fa8b76931f8f4e60a221,
#endif
        code_objects_9ee5aaefa6d564ce1b5a4b794baded10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$scalar_animation,
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

static function_impl_code const function_table_textual$css$scalar_animation[] = {
impl_textual$css$scalar_animation$$$function__1___init__,
impl_textual$css$scalar_animation$$$function__2___call__,
impl_textual$css$scalar_animation$$$function__3_stop,
impl_textual$css$scalar_animation$$$function__4___eq__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$css$scalar_animation);
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
        module_textual$css$scalar_animation,
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
        function_table_textual$css$scalar_animation,
        sizeof(function_table_textual$css$scalar_animation) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.css.scalar_animation";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$css$scalar_animation(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$css$scalar_animation");

    // Store the module for future use.
    module_textual$css$scalar_animation = module;

    moduledict_textual$css$scalar_animation = MODULE_DICT(module_textual$css$scalar_animation);

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
        PRINT_STRING("textual$css$scalar_animation: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$css$scalar_animation: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$css$scalar_animation: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.css.scalar_animation" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$css$scalar_animation\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$css$scalar_animation,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$css$scalar_animation,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$css$scalar_animation,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$css$scalar_animation,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$css$scalar_animation,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$css$scalar_animation);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$css$scalar_animation);
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

        UPDATE_STRING_DICT1(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$scalar_animation;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$css$scalar_animation$$$class__1_ScalarAnimation_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$css$scalar_animation = MAKE_MODULE_FRAME(code_objects_01d13bbe0b9cb1e9b7232afe265677c1, module_textual$css$scalar_animation);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$scalar_animation);
assert(Py_REFCNT(frame_frame_textual$css$scalar_animation) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$css$scalar_animation$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$css$scalar_animation$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_525a71d7d6542dd74dc8c938339082dd;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$css$scalar_animation;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Animation_str_plain_EasingFunction_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$css$scalar_animation->m_frame.f_lineno = 5;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

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
        (PyObject *)moduledict_textual$css$scalar_animation,
        mod_consts.const_str_plain_Animation,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Animation);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_Animation, tmp_assign_source_7);
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
        (PyObject *)moduledict_textual$css$scalar_animation,
        mod_consts.const_str_plain_EasingFunction,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_EasingFunction);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_EasingFunction, tmp_assign_source_8);
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
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$css$scalar_animation;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_AnimationLevel_str_plain_CallbackType_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$css$scalar_animation->m_frame.f_lineno = 6;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_9;
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
        (PyObject *)moduledict_textual$css$scalar_animation,
        mod_consts.const_str_plain_AnimationLevel,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_AnimationLevel);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_AnimationLevel, tmp_assign_source_10);
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
        (PyObject *)moduledict_textual$css$scalar_animation,
        mod_consts.const_str_plain_CallbackType,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_CallbackType);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_CallbackType, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_88ab157ca2f52fb8972e1dcf526073ed;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$css$scalar_animation;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Scalar_str_plain_ScalarOffset_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$css$scalar_animation->m_frame.f_lineno = 7;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_5 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$css$scalar_animation,
        mod_consts.const_str_plain_Scalar,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Scalar);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_Scalar, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_6 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$css$scalar_animation,
        mod_consts.const_str_plain_ScalarOffset,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ScalarOffset);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_ScalarOffset, tmp_assign_source_14);
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
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_textual$css$scalar_animation$Animation(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Animation);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 14;

    goto try_except_handler_4;
}
tmp_assign_source_15 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_15, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_16 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
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


exception_lineno = 14;

    goto try_except_handler_4;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
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


exception_lineno = 14;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_18 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_18;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_19;
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


exception_lineno = 14;

    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_ScalarAnimation;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$css$scalar_animation->m_frame.f_lineno = 14;
tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_19;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
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


exception_lineno = 14;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
}
frame_frame_textual$css$scalar_animation->m_frame.f_lineno = 14;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 14;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_20;
}
branch_end_1:;
{
PyObject *tmp_assign_source_21;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b0d887f1611294f223b782b42808b833;
tmp_res = PyObject_SetItem(locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_ScalarAnimation;
tmp_res = PyObject_SetItem(locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_14;
tmp_res = PyObject_SetItem(locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_6;
}
frame_frame_textual$css$scalar_animation$$$class__1_ScalarAnimation_2 = MAKE_CLASS_FRAME(tstate, code_objects_41606d45713c4daae320e7681754d0ef, module_textual$css$scalar_animation, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$scalar_animation$$$class__1_ScalarAnimation_2);
assert(Py_REFCNT(frame_frame_textual$css$scalar_animation$$$class__1_ScalarAnimation_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_none_str_plain_full_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_3abb5ce1294287d983681726a5592fb6);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_textual$css$scalar_animation$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_2;
tmp_defaults_2 = mod_consts.const_tuple_str_plain_full_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_f674d803886d66ea59881859c89316bd);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_textual$css$scalar_animation$$$function__2___call__(tstate, tmp_defaults_2, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_3;
tmp_defaults_3 = mod_consts.const_tuple_true_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_851a523712eff47621fc4105a9d00653);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_textual$css$scalar_animation$$$function__3_stop(tstate, tmp_defaults_3, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14, mod_consts.const_str_plain_stop, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);

tmp_dictset_value = MAKE_FUNCTION_textual$css$scalar_animation$$$function__4___eq__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$scalar_animation$$$class__1_ScalarAnimation_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$scalar_animation$$$class__1_ScalarAnimation_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$scalar_animation$$$class__1_ScalarAnimation_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$scalar_animation$$$class__1_ScalarAnimation_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$css$scalar_animation$$$class__1_ScalarAnimation_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_cb44f2459d36273528059cf509417c30_tuple;
tmp_res = PyObject_SetItem(locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_6;
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


exception_lineno = 14;

    goto try_except_handler_6;
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
tmp_res = PyObject_SetItem(locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_6;
}
branch_no_3:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_ScalarAnimation;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$css$scalar_animation->m_frame.f_lineno = 14;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_6;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_22;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_21 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_21);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14);
locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14);
locals_textual$css$scalar_animation$$$class__1_ScalarAnimation_14 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 14;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)mod_consts.const_str_plain_ScalarAnimation, tmp_assign_source_21);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$scalar_animation, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$scalar_animation->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$scalar_animation, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$css$scalar_animation);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$css$scalar_animation", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.css.scalar_animation" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$css$scalar_animation);
    return module_textual$css$scalar_animation;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$scalar_animation, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$css$scalar_animation", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

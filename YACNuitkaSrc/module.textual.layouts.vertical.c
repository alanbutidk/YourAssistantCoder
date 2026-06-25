/* Generated code for Python module 'textual$layouts$vertical'
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



/* The "module_textual$layouts$vertical" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$layouts$vertical;
PyDictObject *moduledict_textual$layouts$vertical;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_pre_layout;
PyObject *const_str_plain_append;
PyObject *const_str_plain_app;
PyObject *const_str_plain_viewport_size;
PyObject *const_str_plain_styles;
PyObject *const_str_plain_overlay;
PyObject *const_str_plain_screen;
PyObject *const_str_plain_margin;
PyObject *const_str_plain_Size;
PyObject *const_str_plain_max;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_plain_top;
PyObject *const_str_plain_bottom;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_plain_resolve_box_models;
PyObject *const_str_plain_height;
PyObject *const_str_plain_size;
PyObject *const_tuple_str_plain_resolve_dimension_str_plain_greedy_tuple;
PyObject *const_str_plain_Fraction;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_Region;
PyObject *const_str_plain_WidgetPlacement;
PyObject *const_str_plain_y;
PyObject *const_str_plain_has_rule;
PyObject *const_tuple_str_plain_offset_tuple;
PyObject *const_str_plain_offset;
PyObject *const_str_plain_resolve;
PyObject *const_str_plain__Size;
PyObject *const_str_plain___floor__;
PyObject *const_str_plain_viewport;
PyObject *const_str_plain_NULL_OFFSET;
PyObject *const_str_plain__Region;
PyObject *const_str_plain_left;
PyObject *const_tuple_str_plain_position_tuple;
PyObject *const_str_plain_position;
PyObject *const_str_plain_absolute;
PyObject *const_str_plain_add_placement;
PyObject *const_str_plain__WidgetPlacement;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_7159a549bd1e6adae32d449c22ce8e8e;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_fractions;
PyObject *const_tuple_str_plain_Fraction_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_digest_ff7fa4d10538d83945380730064513ff;
PyObject *const_tuple_str_plain_resolve_box_models_tuple;
PyObject *const_str_digest_8b449230fefb53e14684626fc331fc25;
PyObject *const_tuple_str_plain_NULL_OFFSET_str_plain_Region_str_plain_Size_tuple;
PyObject *const_str_digest_16d69cbdb0009d7d51a33d919e19e88f;
PyObject *const_tuple_113e1fdac89aec8ed66524c174fcab34_tuple;
PyObject *const_str_plain_ArrangeResult;
PyObject *const_str_plain_Layout;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_VerticalLayout;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_0c361d0b4aa32ef33cf42d8a2132e176;
PyObject *const_str_digest_a3ff24bd0eda6a038fbb24da3d9e8516;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_15;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_vertical;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_1bb78ad10dd3f60607421f0fa775c2cd;
PyObject *const_str_plain_arrange;
PyObject *const_str_digest_b21e4400c241c7021fef0e434acee51c;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_eb7d2f6fb9cc38e6ca3b35391a976bed;
PyObject *const_tuple_3bdeaa2719271eefb809d67119993d3d_tuple;
PyObject *const_str_digest_0fab8dc73244a478aeae4c29a0a6c78c;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_291bf7501515d48199525ae5eb7fc90f_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.layouts.vertical"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_pre_layout);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_viewport_size);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_styles);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_overlay);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_screen);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_margin);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Size);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_top);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_bottom);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_box_models);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_height);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resolve_dimension_str_plain_greedy_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_Fraction);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_Region);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_WidgetPlacement);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_y);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_rule);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_offset_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_offset);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__Size);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain___floor__);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_viewport);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_NULL_OFFSET);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__Region);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_left);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_position_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_position);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_absolute);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_placement);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__WidgetPlacement);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_7159a549bd1e6adae32d449c22ce8e8e);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_fractions);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Fraction_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff7fa4d10538d83945380730064513ff);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resolve_box_models_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NULL_OFFSET_str_plain_Region_str_plain_Size_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_16d69cbdb0009d7d51a33d919e19e88f);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_113e1fdac89aec8ed66524c174fcab34_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_ArrangeResult);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_Layout);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_VerticalLayout);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c361d0b4aa32ef33cf42d8a2132e176);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3ff24bd0eda6a038fbb24da3d9e8516);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_int_pos_15);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_vertical);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_dict_1bb78ad10dd3f60607421f0fa775c2cd);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_arrange);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_b21e4400c241c7021fef0e434acee51c);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb7d2f6fb9cc38e6ca3b35391a976bed);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_3bdeaa2719271eefb809d67119993d3d_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_0fab8dc73244a478aeae4c29a0a6c78c);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_291bf7501515d48199525ae5eb7fc90f_tuple);
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
void checkModuleConstants_textual$layouts$vertical(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_pre_layout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pre_layout);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_viewport_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_viewport_size);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_styles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_styles);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_overlay));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overlay);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_screen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_screen);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_margin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_margin);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_Size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Size);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_top));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_top);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_bottom));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bottom);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_box_models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve_box_models);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_height));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_height);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resolve_dimension_str_plain_greedy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_resolve_dimension_str_plain_greedy_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_Fraction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Fraction);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_Region));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Region);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_WidgetPlacement));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WidgetPlacement);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_y));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_y);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_rule));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_rule);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_offset_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_offset_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_offset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_offset);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__Size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Size);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain___floor__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___floor__);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_viewport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_viewport);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_NULL_OFFSET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NULL_OFFSET);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__Region));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Region);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_left));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_left);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_position_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_position_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_position));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_position);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_absolute));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_absolute);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_placement));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_placement);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__WidgetPlacement));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__WidgetPlacement);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_7159a549bd1e6adae32d449c22ce8e8e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7159a549bd1e6adae32d449c22ce8e8e);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_fractions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fractions);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Fraction_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Fraction_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff7fa4d10538d83945380730064513ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff7fa4d10538d83945380730064513ff);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resolve_box_models_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_resolve_box_models_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NULL_OFFSET_str_plain_Region_str_plain_Size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_NULL_OFFSET_str_plain_Region_str_plain_Size_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_16d69cbdb0009d7d51a33d919e19e88f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16d69cbdb0009d7d51a33d919e19e88f);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_113e1fdac89aec8ed66524c174fcab34_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_113e1fdac89aec8ed66524c174fcab34_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_ArrangeResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ArrangeResult);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_Layout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Layout);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_VerticalLayout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VerticalLayout);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c361d0b4aa32ef33cf42d8a2132e176));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c361d0b4aa32ef33cf42d8a2132e176);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3ff24bd0eda6a038fbb24da3d9e8516));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3ff24bd0eda6a038fbb24da3d9e8516);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_int_pos_15));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_15);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_vertical));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vertical);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_dict_1bb78ad10dd3f60607421f0fa775c2cd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1bb78ad10dd3f60607421f0fa775c2cd);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_arrange));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arrange);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_b21e4400c241c7021fef0e434acee51c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b21e4400c241c7021fef0e434acee51c);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb7d2f6fb9cc38e6ca3b35391a976bed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb7d2f6fb9cc38e6ca3b35391a976bed);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_3bdeaa2719271eefb809d67119993d3d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3bdeaa2719271eefb809d67119993d3d_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_0fab8dc73244a478aeae4c29a0a6c78c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0fab8dc73244a478aeae4c29a0a6c78c);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_291bf7501515d48199525ae5eb7fc90f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_291bf7501515d48199525ae5eb7fc90f_tuple);
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
static PyObject *module_var_accessor_textual$layouts$vertical$Fraction(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$vertical->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$vertical->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$vertical->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Fraction);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Fraction, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Fraction);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Fraction, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$vertical$Layout(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$vertical->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$vertical->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Layout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$vertical->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Layout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Layout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Layout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Layout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Layout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Layout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Layout);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$vertical$NULL_OFFSET(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$vertical->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$vertical->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL_OFFSET);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$vertical->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NULL_OFFSET);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NULL_OFFSET, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NULL_OFFSET);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NULL_OFFSET, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL_OFFSET);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL_OFFSET);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL_OFFSET);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$vertical$Region(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$vertical->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$vertical->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Region);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$vertical->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Region);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Region, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Region);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Region, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Region);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Region);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Region);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$vertical$Size(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$vertical->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$vertical->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$vertical->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Size);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Size, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Size);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Size, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$vertical$WidgetPlacement(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$vertical->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$vertical->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_WidgetPlacement);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$vertical->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WidgetPlacement);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WidgetPlacement, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WidgetPlacement);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WidgetPlacement, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_WidgetPlacement);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_WidgetPlacement);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WidgetPlacement);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$vertical$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$vertical->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$vertical->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$vertical->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$layouts$vertical$resolve_box_models(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$layouts$vertical->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$layouts$vertical->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve_box_models);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$layouts$vertical->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_resolve_box_models);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_resolve_box_models, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_resolve_box_models);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_resolve_box_models, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve_box_models);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve_box_models);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve_box_models);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_65f1e29f72a5ebfc083a411a372f2fd6;
static PyCodeObject *code_objects_e06c8e68ac37673924928d576bad3467;
static PyCodeObject *code_objects_8a4bc8ef2cf4647f5c897b2a5b35a6d4;
static PyCodeObject *code_objects_8e33412358c03f6c18a0600e8123c25a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_eb7d2f6fb9cc38e6ca3b35391a976bed); CHECK_OBJECT(module_filename_obj);
code_objects_65f1e29f72a5ebfc083a411a372f2fd6 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_7159a549bd1e6adae32d449c22ce8e8e, mod_consts.const_tuple_3bdeaa2719271eefb809d67119993d3d_tuple, NULL, 1, 0, 0);
code_objects_e06c8e68ac37673924928d576bad3467 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_0fab8dc73244a478aeae4c29a0a6c78c, mod_consts.const_str_digest_0fab8dc73244a478aeae4c29a0a6c78c, NULL, NULL, 0, 0, 0);
code_objects_8a4bc8ef2cf4647f5c897b2a5b35a6d4 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_VerticalLayout, mod_consts.const_str_plain_VerticalLayout, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8e33412358c03f6c18a0600e8123c25a = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_arrange, mod_consts.const_str_digest_b21e4400c241c7021fef0e434acee51c, mod_consts.const_tuple_291bf7501515d48199525ae5eb7fc90f_tuple, NULL, 5, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$layouts$vertical$$$function__1_arrange$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$layouts$vertical$$$function__1_arrange(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$layouts$vertical$$$function__1_arrange(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_parent = python_pars[1];
PyObject *par_children = python_pars[2];
PyObject *par_size = python_pars[3];
PyObject *par_greedy = python_pars[4];
PyObject *var_placements = NULL;
PyObject *var_box_margins = NULL;
PyObject *var_add_placement = NULL;
PyObject *var_viewport = NULL;
PyObject *var_child_styles = NULL;
PyObject *var_resolve_margin = NULL;
PyObject *var_box_models = NULL;
PyObject *var_margin_bottom = NULL;
PyObject *var_margin_top = NULL;
PyObject *var_margins = NULL;
PyObject *var_y = NULL;
PyObject *var__Region = NULL;
PyObject *var__WidgetPlacement = NULL;
PyObject *var__Size = NULL;
PyObject *var_widget = NULL;
PyObject *var_content_width = NULL;
PyObject *var_content_height = NULL;
PyObject *var_box_margin = NULL;
PyObject *var_margin = NULL;
PyObject *var_styles = NULL;
PyObject *var_overlay = NULL;
PyObject *var_next_y = NULL;
PyObject *var_offset = NULL;
PyObject *var_region = NULL;
PyObject *var_absolute = NULL;
PyObject *outline_0_var_child = NULL;
PyObject *outline_1_var_styles = NULL;
PyObject *outline_2_var__ = NULL;
PyObject *outline_2_var_margin_right = NULL;
PyObject *outline_2_var_margin_left = NULL;
PyObject *outline_3_var__ = NULL;
PyObject *outline_3_var_bottom = NULL;
PyObject *outline_3_var_top = NULL;
PyObject *outline_4_var_styles = NULL;
PyObject *outline_5_var__ = NULL;
PyObject *outline_5_var_margin1 = NULL;
PyObject *outline_5_var_margin2 = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_listcomp$assignment_expr_1__value = NULL;
PyObject *tmp_listcomp$assignment_expr_2__value = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_3 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_4 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_listcomp$tuple_unpack_2__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_2__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_2__source_iter = NULL;
PyObject *tmp_listcomp$tuple_unpack_3__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_3__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_3__element_3 = NULL;
PyObject *tmp_listcomp$tuple_unpack_3__element_4 = NULL;
PyObject *tmp_listcomp$tuple_unpack_3__source_iter = NULL;
PyObject *tmp_listcomp$tuple_unpack_4__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_4__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_4__element_3 = NULL;
PyObject *tmp_listcomp$tuple_unpack_4__element_4 = NULL;
PyObject *tmp_listcomp$tuple_unpack_4__source_iter = NULL;
PyObject *tmp_listcomp$tuple_unpack_5__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_5__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_5__source_iter = NULL;
PyObject *tmp_listcomp$tuple_unpack_6__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_6__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_6__element_3 = NULL;
PyObject *tmp_listcomp$tuple_unpack_6__source_iter = NULL;
PyObject *tmp_listcomp$tuple_unpack_7__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_7__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_7__element_3 = NULL;
PyObject *tmp_listcomp$tuple_unpack_7__source_iter = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
PyObject *tmp_listcomp_3__$0 = NULL;
PyObject *tmp_listcomp_3__contraction = NULL;
PyObject *tmp_listcomp_3__iter_value_0 = NULL;
PyObject *tmp_listcomp_4__$0 = NULL;
PyObject *tmp_listcomp_4__contraction = NULL;
PyObject *tmp_listcomp_4__iter_value_0 = NULL;
PyObject *tmp_listcomp_5__$0 = NULL;
PyObject *tmp_listcomp_5__contraction = NULL;
PyObject *tmp_listcomp_5__iter_value_0 = NULL;
PyObject *tmp_listcomp_6__$0 = NULL;
PyObject *tmp_listcomp_6__contraction = NULL;
PyObject *tmp_listcomp_6__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$layouts$vertical$$$function__1_arrange;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
static struct Nuitka_FrameObject *cache_frame_frame_textual$layouts$vertical$$$function__1_arrange = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$layouts$vertical$$$function__1_arrange)) {
    Py_XDECREF(cache_frame_frame_textual$layouts$vertical$$$function__1_arrange);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$layouts$vertical$$$function__1_arrange == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$layouts$vertical$$$function__1_arrange = MAKE_FUNCTION_FRAME(tstate, code_objects_8e33412358c03f6c18a0600e8123c25a, module_textual$layouts$vertical, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$layouts$vertical$$$function__1_arrange->m_type_description == NULL);
frame_frame_textual$layouts$vertical$$$function__1_arrange = cache_frame_frame_textual$layouts$vertical$$$function__1_arrange;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$layouts$vertical$$$function__1_arrange);
assert(Py_REFCNT(frame_frame_textual$layouts$vertical$$$function__1_arrange) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_parent);
tmp_called_instance_1 = par_parent;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 23;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_pre_layout, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_placements == NULL);
var_placements = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_placements);
tmp_expression_value_1 = var_placements;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_append);
assert(!(tmp_assign_source_2 == NULL));
assert(var_add_placement == NULL);
var_add_placement = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_parent);
tmp_expression_value_3 = par_parent;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_app);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_viewport_size);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_viewport == NULL);
var_viewport = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_children);
tmp_iter_arg_1 = par_children;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_6;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooo";
exception_lineno = 28;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_child;
    outline_0_var_child = tmp_assign_source_8;
    Py_INCREF(outline_0_var_child);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_child);
tmp_expression_value_4 = outline_0_var_child;
tmp_append_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_styles);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_4 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_4);
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
Py_XDECREF(outline_0_var_child);
outline_0_var_child = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_child);
outline_0_var_child = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 28;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_child_styles == NULL);
var_child_styles = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_9;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_child_styles);
tmp_iter_arg_2 = var_child_styles;
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_11;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_2 = tmp_listcomp_2__$0;
tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooo";
exception_lineno = 29;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_13 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_styles;
    outline_1_var_styles = tmp_assign_source_13;
    Py_INCREF(outline_1_var_styles);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(outline_1_var_styles);
tmp_expression_value_5 = outline_1_var_styles;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_overlay);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_screen;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
CHECK_OBJECT(outline_1_var_styles);
tmp_expression_value_6 = outline_1_var_styles;
tmp_append_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_margin);
if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_assign_source_9 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_assign_source_9);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_1_var_styles);
outline_1_var_styles = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_styles);
outline_1_var_styles = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 29;
goto frame_exception_exit_1;
outline_result_2:;
assert(var_box_margins == NULL);
var_box_margins = tmp_assign_source_9;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_box_margins);
tmp_truth_name_1 = CHECK_IF_TRUE(var_box_margins);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_sum_sequence_1;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_3;
tmp_called_value_1 = module_var_accessor_textual$layouts$vertical$Size(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Size);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_2 != NULL);
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_box_margins);
tmp_iter_arg_3 = var_box_margins;
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_listcomp_3__$0 == NULL);
tmp_listcomp_3__$0 = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_3__contraction == NULL);
tmp_listcomp_3__contraction = tmp_assign_source_16;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_listcomp_3__$0);
tmp_next_source_3 = tmp_listcomp_3__$0;
tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooo";
exception_lineno = 35;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_listcomp_3__iter_value_0;
    tmp_listcomp_3__iter_value_0 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
tmp_iter_arg_4 = tmp_listcomp_3__iter_value_0;
tmp_assign_source_18 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 4);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 4);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_3;
    tmp_listcomp$tuple_unpack_1__element_3 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_22 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_4;
    tmp_listcomp$tuple_unpack_1__element_4 = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_8;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_3);
tmp_listcomp$tuple_unpack_1__element_3 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_4);
tmp_listcomp$tuple_unpack_1__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_23 = tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = outline_2_var__;
    outline_2_var__ = tmp_assign_source_23;
    Py_INCREF(outline_2_var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_24 = tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = outline_2_var_margin_right;
    outline_2_var_margin_right = tmp_assign_source_24;
    Py_INCREF(outline_2_var_margin_right);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_3);
tmp_assign_source_25 = tmp_listcomp$tuple_unpack_1__element_3;
{
    PyObject *old = outline_2_var__;
    assert(old != NULL);
    outline_2_var__ = tmp_assign_source_25;
    Py_INCREF(outline_2_var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_3);
tmp_listcomp$tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_4);
tmp_assign_source_26 = tmp_listcomp$tuple_unpack_1__element_4;
{
    PyObject *old = outline_2_var_margin_left;
    outline_2_var_margin_left = tmp_assign_source_26;
    Py_INCREF(outline_2_var_margin_left);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_4);
tmp_listcomp$tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_append_list_3;
PyObject *tmp_append_value_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_append_list_3 = tmp_listcomp_3__contraction;
CHECK_OBJECT(outline_2_var_margin_right);
tmp_add_expr_left_1 = outline_2_var_margin_right;
CHECK_OBJECT(outline_2_var_margin_left);
tmp_add_expr_right_1 = outline_2_var_margin_left;
tmp_append_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_append_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_args_element_value_3 = tmp_listcomp_3__contraction;
Py_INCREF(tmp_args_element_value_3);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_XDECREF(outline_2_var__);
outline_2_var__ = NULL;
Py_XDECREF(outline_2_var_margin_right);
outline_2_var_margin_right = NULL;
Py_XDECREF(outline_2_var_margin_left);
outline_2_var_margin_left = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_2_var__);
outline_2_var__ = NULL;
Py_XDECREF(outline_2_var_margin_right);
outline_2_var_margin_right = NULL;
Py_XDECREF(outline_2_var_margin_left);
outline_2_var_margin_left = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 35;
goto frame_exception_exit_1;
outline_result_3:;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 34;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_iter_arg_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
tmp_called_value_3 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(var_box_margins);
tmp_args_element_value_5 = var_box_margins;
CHECK_OBJECT(var_box_margins);
tmp_expression_value_7 = var_box_margins;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_1_none_none;
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 43;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_27 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
assert(tmp_listcomp_4__$0 == NULL);
tmp_listcomp_4__$0 = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_4__contraction == NULL);
tmp_listcomp_4__contraction = tmp_assign_source_28;
}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_listcomp_4__$0);
tmp_next_source_4 = tmp_listcomp_4__$0;
tmp_assign_source_29 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_29 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooo";
exception_lineno = 41;
        goto try_except_handler_11;
    }
}

{
    PyObject *old = tmp_listcomp_4__iter_value_0;
    tmp_listcomp_4__iter_value_0 = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
tmp_iter_arg_6 = tmp_listcomp_4__iter_value_0;
tmp_assign_source_30 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_2__source_iter;
    tmp_listcomp$tuple_unpack_2__source_iter = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_listcomp$tuple_unpack_2__source_iter;
tmp_assign_source_31 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_2__element_1;
    tmp_listcomp$tuple_unpack_2__element_1 = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_listcomp$tuple_unpack_2__source_iter;
tmp_assign_source_32 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_2__element_2;
    tmp_listcomp$tuple_unpack_2__element_2 = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
tmp_listcomp$tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_12;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
tmp_listcomp$tuple_unpack_2__source_iter = NULL;
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_iter_arg_7;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_1);
tmp_iter_arg_7 = tmp_listcomp$tuple_unpack_2__element_1;
tmp_assign_source_33 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_3__source_iter;
    tmp_listcomp$tuple_unpack_3__source_iter = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
tmp_unpack_7 = tmp_listcomp$tuple_unpack_3__source_iter;
tmp_assign_source_34 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 4);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_3__element_1;
    tmp_listcomp$tuple_unpack_3__element_1 = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
tmp_unpack_8 = tmp_listcomp$tuple_unpack_3__source_iter;
tmp_assign_source_35 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 4);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_3__element_2;
    tmp_listcomp$tuple_unpack_3__element_2 = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
tmp_unpack_9 = tmp_listcomp$tuple_unpack_3__source_iter;
tmp_assign_source_36 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 2, 4);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_3__element_3;
    tmp_listcomp$tuple_unpack_3__element_3 = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
tmp_unpack_10 = tmp_listcomp$tuple_unpack_3__source_iter;
tmp_assign_source_37 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 3, 4);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_3__element_4;
    tmp_listcomp$tuple_unpack_3__element_4 = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_listcomp$tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_3__source_iter);
tmp_listcomp$tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_14;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_1);
tmp_listcomp$tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_2);
tmp_listcomp$tuple_unpack_3__element_2 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_3);
tmp_listcomp$tuple_unpack_3__element_3 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_4);
tmp_listcomp$tuple_unpack_3__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_3__source_iter);
tmp_listcomp$tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_38;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__element_1);
tmp_assign_source_38 = tmp_listcomp$tuple_unpack_3__element_1;
{
    PyObject *old = outline_3_var__;
    outline_3_var__ = tmp_assign_source_38;
    Py_INCREF(outline_3_var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_1);
tmp_listcomp$tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_39;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__element_2);
tmp_assign_source_39 = tmp_listcomp$tuple_unpack_3__element_2;
{
    PyObject *old = outline_3_var__;
    assert(old != NULL);
    outline_3_var__ = tmp_assign_source_39;
    Py_INCREF(outline_3_var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_2);
tmp_listcomp$tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_40;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__element_3);
tmp_assign_source_40 = tmp_listcomp$tuple_unpack_3__element_3;
{
    PyObject *old = outline_3_var_bottom;
    outline_3_var_bottom = tmp_assign_source_40;
    Py_INCREF(outline_3_var_bottom);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_3);
tmp_listcomp$tuple_unpack_3__element_3 = NULL;

{
PyObject *tmp_assign_source_41;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_3__element_4);
tmp_assign_source_41 = tmp_listcomp$tuple_unpack_3__element_4;
{
    PyObject *old = outline_3_var__;
    assert(old != NULL);
    outline_3_var__ = tmp_assign_source_41;
    Py_INCREF(outline_3_var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_3__element_4);
tmp_listcomp$tuple_unpack_3__element_4 = NULL;

Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
tmp_listcomp$tuple_unpack_2__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_iter_arg_8;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_2);
tmp_iter_arg_8 = tmp_listcomp$tuple_unpack_2__element_2;
tmp_assign_source_42 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_4__source_iter;
    tmp_listcomp$tuple_unpack_4__source_iter = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_unpack_11;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
tmp_unpack_11 = tmp_listcomp$tuple_unpack_4__source_iter;
tmp_assign_source_43 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 0, 4);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_4__element_1;
    tmp_listcomp$tuple_unpack_4__element_1 = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_unpack_12;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
tmp_unpack_12 = tmp_listcomp$tuple_unpack_4__source_iter;
tmp_assign_source_44 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 1, 4);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_4__element_2;
    tmp_listcomp$tuple_unpack_4__element_2 = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_unpack_13;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
tmp_unpack_13 = tmp_listcomp$tuple_unpack_4__source_iter;
tmp_assign_source_45 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 2, 4);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_4__element_3;
    tmp_listcomp$tuple_unpack_4__element_3 = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_unpack_14;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
tmp_unpack_14 = tmp_listcomp$tuple_unpack_4__source_iter;
tmp_assign_source_46 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_14, 3, 4);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_4__element_4;
    tmp_listcomp$tuple_unpack_4__element_4 = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
tmp_iterator_name_4 = tmp_listcomp$tuple_unpack_4__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_4__source_iter);
tmp_listcomp$tuple_unpack_4__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_16;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_1);
tmp_listcomp$tuple_unpack_4__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_2);
tmp_listcomp$tuple_unpack_4__element_2 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_3);
tmp_listcomp$tuple_unpack_4__element_3 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_4);
tmp_listcomp$tuple_unpack_4__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_12;
// End of try:
try_end_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
tmp_listcomp$tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
tmp_listcomp$tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_11;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_4__source_iter);
tmp_listcomp$tuple_unpack_4__source_iter = NULL;
{
PyObject *tmp_assign_source_47;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__element_1);
tmp_assign_source_47 = tmp_listcomp$tuple_unpack_4__element_1;
{
    PyObject *old = outline_3_var_top;
    outline_3_var_top = tmp_assign_source_47;
    Py_INCREF(outline_3_var_top);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_1);
tmp_listcomp$tuple_unpack_4__element_1 = NULL;

{
PyObject *tmp_assign_source_48;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__element_2);
tmp_assign_source_48 = tmp_listcomp$tuple_unpack_4__element_2;
{
    PyObject *old = outline_3_var__;
    assert(old != NULL);
    outline_3_var__ = tmp_assign_source_48;
    Py_INCREF(outline_3_var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_2);
tmp_listcomp$tuple_unpack_4__element_2 = NULL;

{
PyObject *tmp_assign_source_49;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__element_3);
tmp_assign_source_49 = tmp_listcomp$tuple_unpack_4__element_3;
{
    PyObject *old = outline_3_var__;
    assert(old != NULL);
    outline_3_var__ = tmp_assign_source_49;
    Py_INCREF(outline_3_var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_3);
tmp_listcomp$tuple_unpack_4__element_3 = NULL;

{
PyObject *tmp_assign_source_50;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_4__element_4);
tmp_assign_source_50 = tmp_listcomp$tuple_unpack_4__element_4;
{
    PyObject *old = outline_3_var__;
    assert(old != NULL);
    outline_3_var__ = tmp_assign_source_50;
    Py_INCREF(outline_3_var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_4__element_4);
tmp_listcomp$tuple_unpack_4__element_4 = NULL;

Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
tmp_listcomp$tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_append_list_4;
PyObject *tmp_append_value_4;
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_listcomp_4__contraction);
tmp_append_list_4 = tmp_listcomp_4__contraction;
CHECK_OBJECT(outline_3_var_bottom);
tmp_cmp_expr_left_2 = outline_3_var_bottom;
CHECK_OBJECT(outline_3_var_top);
tmp_cmp_expr_right_2 = outline_3_var_top;
tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(outline_3_var_bottom);
tmp_append_value_4 = outline_3_var_bottom;
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(outline_3_var_top);
tmp_append_value_4 = outline_3_var_top;
condexpr_end_1:;
tmp_result = LIST_APPEND0(tmp_append_list_4, tmp_append_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
goto loop_start_4;
loop_end_4:;
CHECK_OBJECT(tmp_listcomp_4__contraction);
tmp_sum_sequence_1 = tmp_listcomp_4__contraction;
Py_INCREF(tmp_sum_sequence_1);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(tmp_listcomp_4__$0);
CHECK_OBJECT(tmp_listcomp_4__$0);
Py_DECREF(tmp_listcomp_4__$0);
tmp_listcomp_4__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_4__contraction);
CHECK_OBJECT(tmp_listcomp_4__contraction);
Py_DECREF(tmp_listcomp_4__contraction);
tmp_listcomp_4__contraction = NULL;
Py_XDECREF(tmp_listcomp_4__iter_value_0);
tmp_listcomp_4__iter_value_0 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_4__$0);
CHECK_OBJECT(tmp_listcomp_4__$0);
Py_DECREF(tmp_listcomp_4__$0);
tmp_listcomp_4__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_4__contraction);
CHECK_OBJECT(tmp_listcomp_4__contraction);
Py_DECREF(tmp_listcomp_4__contraction);
tmp_listcomp_4__contraction = NULL;
Py_XDECREF(tmp_listcomp_4__iter_value_0);
tmp_listcomp_4__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_XDECREF(outline_3_var__);
outline_3_var__ = NULL;
Py_XDECREF(outline_3_var_bottom);
outline_3_var_bottom = NULL;
Py_XDECREF(outline_3_var_top);
outline_3_var_top = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_3_var__);
outline_3_var__ = NULL;
Py_XDECREF(outline_3_var_bottom);
outline_3_var_bottom = NULL;
Py_XDECREF(outline_3_var_top);
outline_3_var_top = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 41;
goto frame_exception_exit_1;
outline_result_4:;
tmp_add_expr_left_2 = BUILTIN_SUM1(tstate, tmp_sum_sequence_1);
CHECK_OBJECT(tmp_sum_sequence_1);
Py_DECREF(tmp_sum_sequence_1);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 40;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_box_margins);
tmp_expression_value_9 = var_box_margins;
tmp_subscript_value_2 = const_int_0;
tmp_expression_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, 0);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 48;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_top);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 48;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_box_margins);
tmp_expression_value_11 = var_box_margins;
tmp_subscript_value_3 = const_int_neg_1;
tmp_expression_value_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_3, -1);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 48;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_bottom);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 48;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 48;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 48;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 33;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_4};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_resolve_margin == NULL);
var_resolve_margin = tmp_assign_source_14;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_textual$layouts$vertical$Size(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Size);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 51;
tmp_assign_source_51 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_int_0_int_0_tuple);

if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_resolve_margin == NULL);
var_resolve_margin = tmp_assign_source_51;
}
branch_end_2:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_5 = module_var_accessor_textual$layouts$vertical$resolve_box_models(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_resolve_box_models);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
// Tried code:
{
PyObject *tmp_assign_source_53;
PyObject *tmp_iter_arg_9;
CHECK_OBJECT(var_child_styles);
tmp_iter_arg_9 = var_child_styles;
tmp_assign_source_53 = MAKE_ITERATOR(tstate, tmp_iter_arg_9);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
assert(tmp_listcomp_5__$0 == NULL);
tmp_listcomp_5__$0 = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_5__contraction == NULL);
tmp_listcomp_5__contraction = tmp_assign_source_54;
}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_55;
CHECK_OBJECT(tmp_listcomp_5__$0);
tmp_next_source_5 = tmp_listcomp_5__$0;
tmp_assign_source_55 = ITERATOR_NEXT(tmp_next_source_5);
if (tmp_assign_source_55 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooo";
exception_lineno = 54;
        goto try_except_handler_19;
    }
}

{
    PyObject *old = tmp_listcomp_5__iter_value_0;
    tmp_listcomp_5__iter_value_0 = tmp_assign_source_55;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_56;
CHECK_OBJECT(tmp_listcomp_5__iter_value_0);
tmp_assign_source_56 = tmp_listcomp_5__iter_value_0;
{
    PyObject *old = outline_4_var_styles;
    outline_4_var_styles = tmp_assign_source_56;
    Py_INCREF(outline_4_var_styles);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_5;
PyObject *tmp_append_value_5;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_listcomp_5__contraction);
tmp_append_list_5 = tmp_listcomp_5__contraction;
CHECK_OBJECT(outline_4_var_styles);
tmp_expression_value_12 = outline_4_var_styles;
tmp_append_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_height);
if (tmp_append_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
tmp_result = LIST_APPEND1(tmp_append_list_5, tmp_append_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
goto loop_start_5;
loop_end_5:;
CHECK_OBJECT(tmp_listcomp_5__contraction);
tmp_kw_call_arg_value_0_1 = tmp_listcomp_5__contraction;
Py_INCREF(tmp_kw_call_arg_value_0_1);
goto try_return_handler_19;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
CHECK_OBJECT(tmp_listcomp_5__$0);
CHECK_OBJECT(tmp_listcomp_5__$0);
Py_DECREF(tmp_listcomp_5__$0);
tmp_listcomp_5__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_5__contraction);
CHECK_OBJECT(tmp_listcomp_5__contraction);
Py_DECREF(tmp_listcomp_5__contraction);
tmp_listcomp_5__contraction = NULL;
Py_XDECREF(tmp_listcomp_5__iter_value_0);
tmp_listcomp_5__iter_value_0 = NULL;
goto try_return_handler_18;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_5__$0);
CHECK_OBJECT(tmp_listcomp_5__$0);
Py_DECREF(tmp_listcomp_5__$0);
tmp_listcomp_5__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_5__contraction);
CHECK_OBJECT(tmp_listcomp_5__contraction);
Py_DECREF(tmp_listcomp_5__contraction);
tmp_listcomp_5__contraction = NULL;
Py_XDECREF(tmp_listcomp_5__iter_value_0);
tmp_listcomp_5__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_18;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_XDECREF(outline_4_var_styles);
outline_4_var_styles = NULL;
goto outline_result_5;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_4_var_styles);
outline_4_var_styles = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 54;
goto frame_exception_exit_1;
outline_result_5:;
CHECK_OBJECT(par_children);
tmp_kw_call_arg_value_1_1 = par_children;
CHECK_OBJECT(par_size);
tmp_kw_call_arg_value_2_1 = par_size;
CHECK_OBJECT(par_parent);
tmp_expression_value_14 = par_parent;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_app);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 57;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_size);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 57;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_resolve_margin);
tmp_kw_call_arg_value_4_1 = var_resolve_margin;
tmp_kw_call_dict_value_0_1 = mod_consts.const_str_plain_height;
CHECK_OBJECT(par_greedy);
tmp_kw_call_dict_value_1_1 = par_greedy;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 53;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS5_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_resolve_dimension_str_plain_greedy_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_box_models == NULL);
var_box_models = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_57;
// Tried code:
{
PyObject *tmp_assign_source_58;
PyObject *tmp_iter_arg_10;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_4;
tmp_called_value_6 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(var_box_models);
tmp_args_element_value_7 = var_box_models;
CHECK_OBJECT(var_box_models);
tmp_expression_value_15 = var_box_models;
tmp_subscript_value_4 = mod_consts.const_slice_int_pos_1_none_none;
tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_4);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_20;
}
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 69;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_iter_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_20;
}
tmp_assign_source_58 = MAKE_ITERATOR(tstate, tmp_iter_arg_10);
CHECK_OBJECT(tmp_iter_arg_10);
Py_DECREF(tmp_iter_arg_10);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_20;
}
assert(tmp_listcomp_6__$0 == NULL);
tmp_listcomp_6__$0 = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_6__contraction == NULL);
tmp_listcomp_6__contraction = tmp_assign_source_59;
}
// Tried code:
loop_start_6:;
{
PyObject *tmp_next_source_6;
PyObject *tmp_assign_source_60;
CHECK_OBJECT(tmp_listcomp_6__$0);
tmp_next_source_6 = tmp_listcomp_6__$0;
tmp_assign_source_60 = ITERATOR_NEXT(tmp_next_source_6);
if (tmp_assign_source_60 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_6;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooo";
exception_lineno = 63;
        goto try_except_handler_21;
    }
}

{
    PyObject *old = tmp_listcomp_6__iter_value_0;
    tmp_listcomp_6__iter_value_0 = tmp_assign_source_60;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_61;
PyObject *tmp_iter_arg_11;
CHECK_OBJECT(tmp_listcomp_6__iter_value_0);
tmp_iter_arg_11 = tmp_listcomp_6__iter_value_0;
tmp_assign_source_61 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_5__source_iter;
    tmp_listcomp$tuple_unpack_5__source_iter = tmp_assign_source_61;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_62;
PyObject *tmp_unpack_15;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__source_iter);
tmp_unpack_15 = tmp_listcomp$tuple_unpack_5__source_iter;
tmp_assign_source_62 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_15, 0, 2);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_23;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_5__element_1;
    tmp_listcomp$tuple_unpack_5__element_1 = tmp_assign_source_62;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_unpack_16;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__source_iter);
tmp_unpack_16 = tmp_listcomp$tuple_unpack_5__source_iter;
tmp_assign_source_63 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_16, 1, 2);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_23;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_5__element_2;
    tmp_listcomp$tuple_unpack_5__element_2 = tmp_assign_source_63;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_5;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__source_iter);
tmp_iterator_name_5 = tmp_listcomp$tuple_unpack_5__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_23;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_5__source_iter);
tmp_listcomp$tuple_unpack_5__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_22;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_5__source_iter);
tmp_listcomp$tuple_unpack_5__source_iter = NULL;
// Tried code:
{
PyObject *tmp_assign_source_64;
PyObject *tmp_iter_arg_12;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__element_1);
tmp_iter_arg_12 = tmp_listcomp$tuple_unpack_5__element_1;
tmp_assign_source_64 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_6__source_iter;
    tmp_listcomp$tuple_unpack_6__source_iter = tmp_assign_source_64;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_65;
PyObject *tmp_unpack_17;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__source_iter);
tmp_unpack_17 = tmp_listcomp$tuple_unpack_6__source_iter;
tmp_assign_source_65 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_17, 0, 3);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_6__element_1;
    tmp_listcomp$tuple_unpack_6__element_1 = tmp_assign_source_65;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_unpack_18;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__source_iter);
tmp_unpack_18 = tmp_listcomp$tuple_unpack_6__source_iter;
tmp_assign_source_66 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_18, 1, 3);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_6__element_2;
    tmp_listcomp$tuple_unpack_6__element_2 = tmp_assign_source_66;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_unpack_19;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__source_iter);
tmp_unpack_19 = tmp_listcomp$tuple_unpack_6__source_iter;
tmp_assign_source_67 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_19, 2, 3);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_6__element_3;
    tmp_listcomp$tuple_unpack_6__element_3 = tmp_assign_source_67;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_6;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__source_iter);
tmp_iterator_name_6 = tmp_listcomp$tuple_unpack_6__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_6, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
}
goto try_end_10;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_6__source_iter);
tmp_listcomp$tuple_unpack_6__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto try_except_handler_24;
// End of try:
try_end_10:;
goto try_end_11;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_6__element_1);
tmp_listcomp$tuple_unpack_6__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_6__element_2);
tmp_listcomp$tuple_unpack_6__element_2 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_6__element_3);
tmp_listcomp$tuple_unpack_6__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_22;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_6__source_iter);
tmp_listcomp$tuple_unpack_6__source_iter = NULL;
{
PyObject *tmp_assign_source_68;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__element_1);
tmp_assign_source_68 = tmp_listcomp$tuple_unpack_6__element_1;
{
    PyObject *old = outline_5_var__;
    outline_5_var__ = tmp_assign_source_68;
    Py_INCREF(outline_5_var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_6__element_1);
tmp_listcomp$tuple_unpack_6__element_1 = NULL;

{
PyObject *tmp_assign_source_69;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__element_2);
tmp_assign_source_69 = tmp_listcomp$tuple_unpack_6__element_2;
{
    PyObject *old = outline_5_var__;
    assert(old != NULL);
    outline_5_var__ = tmp_assign_source_69;
    Py_INCREF(outline_5_var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_6__element_2);
tmp_listcomp$tuple_unpack_6__element_2 = NULL;

{
PyObject *tmp_assign_source_70;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_6__element_3);
tmp_assign_source_70 = tmp_listcomp$tuple_unpack_6__element_3;
{
    PyObject *old = outline_5_var_margin1;
    outline_5_var_margin1 = tmp_assign_source_70;
    Py_INCREF(outline_5_var_margin1);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_6__element_3);
tmp_listcomp$tuple_unpack_6__element_3 = NULL;

Py_XDECREF(tmp_listcomp$tuple_unpack_5__element_1);
tmp_listcomp$tuple_unpack_5__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_71;
PyObject *tmp_iter_arg_13;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_5__element_2);
tmp_iter_arg_13 = tmp_listcomp$tuple_unpack_5__element_2;
tmp_assign_source_71 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_13);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_26;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_7__source_iter;
    tmp_listcomp$tuple_unpack_7__source_iter = tmp_assign_source_71;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_72;
PyObject *tmp_unpack_20;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__source_iter);
tmp_unpack_20 = tmp_listcomp$tuple_unpack_7__source_iter;
tmp_assign_source_72 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_20, 0, 3);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_7__element_1;
    tmp_listcomp$tuple_unpack_7__element_1 = tmp_assign_source_72;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_unpack_21;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__source_iter);
tmp_unpack_21 = tmp_listcomp$tuple_unpack_7__source_iter;
tmp_assign_source_73 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_21, 1, 3);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_7__element_2;
    tmp_listcomp$tuple_unpack_7__element_2 = tmp_assign_source_73;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_unpack_22;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__source_iter);
tmp_unpack_22 = tmp_listcomp$tuple_unpack_7__source_iter;
tmp_assign_source_74 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_22, 2, 3);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_7__element_3;
    tmp_listcomp$tuple_unpack_7__element_3 = tmp_assign_source_74;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_7;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__source_iter);
tmp_iterator_name_7 = tmp_listcomp$tuple_unpack_7__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_7, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
}
goto try_end_12;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_7__source_iter);
tmp_listcomp$tuple_unpack_7__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto try_except_handler_26;
// End of try:
try_end_12:;
goto try_end_13;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_7__element_1);
tmp_listcomp$tuple_unpack_7__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_7__element_2);
tmp_listcomp$tuple_unpack_7__element_2 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_7__element_3);
tmp_listcomp$tuple_unpack_7__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto try_except_handler_22;
// End of try:
try_end_13:;
goto try_end_14;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_5__element_1);
tmp_listcomp$tuple_unpack_5__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_5__element_2);
tmp_listcomp$tuple_unpack_5__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto try_except_handler_21;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_7__source_iter);
tmp_listcomp$tuple_unpack_7__source_iter = NULL;
{
PyObject *tmp_assign_source_75;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__element_1);
tmp_assign_source_75 = tmp_listcomp$tuple_unpack_7__element_1;
{
    PyObject *old = outline_5_var__;
    assert(old != NULL);
    outline_5_var__ = tmp_assign_source_75;
    Py_INCREF(outline_5_var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_7__element_1);
tmp_listcomp$tuple_unpack_7__element_1 = NULL;

{
PyObject *tmp_assign_source_76;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__element_2);
tmp_assign_source_76 = tmp_listcomp$tuple_unpack_7__element_2;
{
    PyObject *old = outline_5_var__;
    assert(old != NULL);
    outline_5_var__ = tmp_assign_source_76;
    Py_INCREF(outline_5_var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_7__element_2);
tmp_listcomp$tuple_unpack_7__element_2 = NULL;

{
PyObject *tmp_assign_source_77;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_7__element_3);
tmp_assign_source_77 = tmp_listcomp$tuple_unpack_7__element_3;
{
    PyObject *old = outline_5_var_margin2;
    outline_5_var_margin2 = tmp_assign_source_77;
    Py_INCREF(outline_5_var_margin2);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_7__element_3);
tmp_listcomp$tuple_unpack_7__element_3 = NULL;

Py_XDECREF(tmp_listcomp$tuple_unpack_5__element_2);
tmp_listcomp$tuple_unpack_5__element_2 = NULL;

{
PyObject *tmp_append_list_6;
PyObject *tmp_append_value_6;
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_listcomp_6__contraction);
tmp_append_list_6 = tmp_listcomp_6__contraction;
// Tried code:
{
PyObject *tmp_assign_source_78;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(outline_5_var_margin1);
tmp_expression_value_16 = outline_5_var_margin1;
tmp_assign_source_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_bottom);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
{
    PyObject *old = tmp_listcomp$assignment_expr_1__value;
    tmp_listcomp$assignment_expr_1__value = tmp_assign_source_78;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_79;
CHECK_OBJECT(tmp_listcomp$assignment_expr_1__value);
tmp_assign_source_79 = tmp_listcomp$assignment_expr_1__value;
{
    PyObject *old = var_margin_bottom;
    var_margin_bottom = tmp_assign_source_79;
    Py_INCREF(var_margin_bottom);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_listcomp$assignment_expr_1__value);
tmp_cmp_expr_left_3 = tmp_listcomp$assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_3);
goto try_return_handler_28;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_28:;
CHECK_OBJECT(tmp_listcomp$assignment_expr_1__value);
CHECK_OBJECT(tmp_listcomp$assignment_expr_1__value);
Py_DECREF(tmp_listcomp$assignment_expr_1__value);
tmp_listcomp$assignment_expr_1__value = NULL;
goto outline_result_7;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$assignment_expr_1__value);
tmp_listcomp$assignment_expr_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto try_except_handler_21;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
// Tried code:
{
PyObject *tmp_assign_source_80;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(outline_5_var_margin2);
tmp_expression_value_17 = outline_5_var_margin2;
tmp_assign_source_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_top);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
{
    PyObject *old = tmp_listcomp$assignment_expr_2__value;
    tmp_listcomp$assignment_expr_2__value = tmp_assign_source_80;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_81;
CHECK_OBJECT(tmp_listcomp$assignment_expr_2__value);
tmp_assign_source_81 = tmp_listcomp$assignment_expr_2__value;
{
    PyObject *old = var_margin_top;
    var_margin_top = tmp_assign_source_81;
    Py_INCREF(var_margin_top);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_listcomp$assignment_expr_2__value);
tmp_cmp_expr_right_3 = tmp_listcomp$assignment_expr_2__value;
Py_INCREF(tmp_cmp_expr_right_3);
goto try_return_handler_29;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
CHECK_OBJECT(tmp_listcomp$assignment_expr_2__value);
CHECK_OBJECT(tmp_listcomp$assignment_expr_2__value);
Py_DECREF(tmp_listcomp$assignment_expr_2__value);
tmp_listcomp$assignment_expr_2__value = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$assignment_expr_2__value);
tmp_listcomp$assignment_expr_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto try_except_handler_21;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_8:;
tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(var_margin_bottom);
tmp_append_value_6 = var_margin_bottom;
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(var_margin_top);
tmp_append_value_6 = var_margin_top;
condexpr_end_2:;
tmp_result = LIST_APPEND0(tmp_append_list_6, tmp_append_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
goto loop_start_6;
loop_end_6:;
CHECK_OBJECT(tmp_listcomp_6__contraction);
tmp_assign_source_57 = tmp_listcomp_6__contraction;
Py_INCREF(tmp_assign_source_57);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
CHECK_OBJECT(tmp_listcomp_6__$0);
CHECK_OBJECT(tmp_listcomp_6__$0);
Py_DECREF(tmp_listcomp_6__$0);
tmp_listcomp_6__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_6__contraction);
CHECK_OBJECT(tmp_listcomp_6__contraction);
Py_DECREF(tmp_listcomp_6__contraction);
tmp_listcomp_6__contraction = NULL;
Py_XDECREF(tmp_listcomp_6__iter_value_0);
tmp_listcomp_6__iter_value_0 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_6__$0);
CHECK_OBJECT(tmp_listcomp_6__$0);
Py_DECREF(tmp_listcomp_6__$0);
tmp_listcomp_6__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_6__contraction);
CHECK_OBJECT(tmp_listcomp_6__contraction);
Py_DECREF(tmp_listcomp_6__contraction);
tmp_listcomp_6__contraction = NULL;
Py_XDECREF(tmp_listcomp_6__iter_value_0);
tmp_listcomp_6__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto try_except_handler_20;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_XDECREF(outline_5_var__);
outline_5_var__ = NULL;
Py_XDECREF(outline_5_var_margin1);
outline_5_var_margin1 = NULL;
Py_XDECREF(outline_5_var_margin2);
outline_5_var_margin2 = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_5_var__);
outline_5_var__ = NULL;
Py_XDECREF(outline_5_var_margin1);
outline_5_var_margin1 = NULL;
Py_XDECREF(outline_5_var_margin2);
outline_5_var_margin2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 63;
goto frame_exception_exit_1;
outline_result_6:;
assert(var_margins == NULL);
var_margins = tmp_assign_source_57;
}
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
CHECK_OBJECT(var_box_models);
tmp_truth_name_2 = CHECK_IF_TRUE(var_box_models);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_18;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(var_margins);
tmp_expression_value_18 = var_margins;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_append);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_box_models);
tmp_expression_value_21 = var_box_models;
tmp_subscript_value_5 = const_int_neg_1;
tmp_expression_value_20 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_5, -1);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 73;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_margin);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 73;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_bottom);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 73;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 73;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
{
PyObject *tmp_assign_source_82;
PyObject *tmp_next_arg_1;
PyObject *tmp_next_default_1;
PyObject *tmp_called_value_9;
{
PyObject *tmp_assign_source_83;
PyObject *tmp_iter_arg_14;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_8 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(var_box_models);
tmp_args_element_value_10 = var_box_models;
CHECK_OBJECT(par_children);
tmp_args_element_value_11 = par_children;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 78;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_iter_arg_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_iter_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_83 = MAKE_ITERATOR(tstate, tmp_iter_arg_14);
CHECK_OBJECT(tmp_iter_arg_14);
Py_DECREF(tmp_iter_arg_14);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_83;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_next_arg_1 = MAKE_GENERATOR_textual$layouts$vertical$$$function__1_arrange$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_30;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_30:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
tmp_called_value_9 = module_var_accessor_textual$layouts$vertical$Fraction(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fraction);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_next_arg_1);

exception_lineno = 81;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 81;
tmp_next_default_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_int_0_tuple);

if (tmp_next_default_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_next_arg_1);

exception_lineno = 81;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_82 = BUILTIN_NEXT2(tstate, tmp_next_arg_1, tmp_next_default_1);
CHECK_OBJECT(tmp_next_arg_1);
Py_DECREF(tmp_next_arg_1);
CHECK_OBJECT(tmp_next_default_1);
Py_DECREF(tmp_next_default_1);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_y == NULL);
var_y = tmp_assign_source_82;
}
{
PyObject *tmp_assign_source_84;
tmp_assign_source_84 = module_var_accessor_textual$layouts$vertical$Region(tstate);
if (unlikely(tmp_assign_source_84 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Region);
}

if (tmp_assign_source_84 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__Region == NULL);
Py_INCREF(tmp_assign_source_84);
var__Region = tmp_assign_source_84;
}
{
PyObject *tmp_assign_source_85;
tmp_assign_source_85 = module_var_accessor_textual$layouts$vertical$WidgetPlacement(tstate);
if (unlikely(tmp_assign_source_85 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WidgetPlacement);
}

if (tmp_assign_source_85 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__WidgetPlacement == NULL);
Py_INCREF(tmp_assign_source_85);
var__WidgetPlacement = tmp_assign_source_85;
}
{
PyObject *tmp_assign_source_86;
tmp_assign_source_86 = module_var_accessor_textual$layouts$vertical$Size(tstate);
if (unlikely(tmp_assign_source_86 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Size);
}

if (tmp_assign_source_86 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__Size == NULL);
Py_INCREF(tmp_assign_source_86);
var__Size = tmp_assign_source_86;
}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_iter_arg_15;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_value_10 = (PyObject *)&PyZip_Type;
CHECK_OBJECT(par_children);
tmp_args_element_value_12 = par_children;
CHECK_OBJECT(var_box_models);
tmp_args_element_value_13 = var_box_models;
CHECK_OBJECT(var_margins);
tmp_args_element_value_14 = var_margins;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 87;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_iter_arg_15 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
}

if (tmp_iter_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_87 = MAKE_ITERATOR(tstate, tmp_iter_arg_15);
CHECK_OBJECT(tmp_iter_arg_15);
Py_DECREF(tmp_iter_arg_15);
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_87;
}
// Tried code:
loop_start_7:;
{
PyObject *tmp_next_source_7;
PyObject *tmp_assign_source_88;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_7 = tmp_for_loop_1__for_iterator;
tmp_assign_source_88 = ITERATOR_NEXT(tmp_next_source_7);
if (tmp_assign_source_88 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_7;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooo";
exception_lineno = 87;
        goto try_except_handler_31;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_88;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_89;
PyObject *tmp_iter_arg_16;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_16 = tmp_for_loop_1__iter_value;
tmp_assign_source_89 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_16);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_32;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_89;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_90;
PyObject *tmp_unpack_23;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_23 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_90 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_23, 0, 3);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_90;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_91;
PyObject *tmp_unpack_24;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_24 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_91 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_24, 1, 3);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_91;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_92;
PyObject *tmp_unpack_25;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_25 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_92 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_25, 2, 3);
if (tmp_assign_source_92 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_92;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_8;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_8 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_8, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
}
}
goto try_end_15;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto try_except_handler_32;
// End of try:
try_end_15:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_93;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_93 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_widget;
    var_widget = tmp_assign_source_93;
    Py_INCREF(var_widget);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_94;
PyObject *tmp_iter_arg_17;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_iter_arg_17 = tmp_tuple_unpack_1__element_2;
tmp_assign_source_94 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_17);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_94;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_95;
PyObject *tmp_unpack_26;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_26 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_95 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_26, 0, 3);
if (tmp_assign_source_95 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_35;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_95;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_96;
PyObject *tmp_unpack_27;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_27 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_96 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_27, 1, 3);
if (tmp_assign_source_96 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_35;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_96;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_97;
PyObject *tmp_unpack_28;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_28 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_97 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_28, 2, 3);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_35;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_3;
    tmp_tuple_unpack_2__element_3 = tmp_assign_source_97;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_9;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_9 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_9, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_35;
}
}
goto try_end_16;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto try_except_handler_34;
// End of try:
try_end_16:;
goto try_end_17;
// Exception handler code:
try_except_handler_34:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto try_except_handler_32;
// End of try:
try_end_17:;
goto try_end_18;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto try_except_handler_31;
// End of try:
try_end_18:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_98;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_98 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_content_width;
    var_content_width = tmp_assign_source_98;
    Py_INCREF(var_content_width);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_99;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_99 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_content_height;
    var_content_height = tmp_assign_source_99;
    Py_INCREF(var_content_height);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_100;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_100 = tmp_tuple_unpack_2__element_3;
{
    PyObject *old = var_box_margin;
    var_box_margin = tmp_assign_source_100;
    Py_INCREF(var_box_margin);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_101;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_101 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var_margin;
    var_margin = tmp_assign_source_101;
    Py_INCREF(var_margin);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_102;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(var_widget);
tmp_expression_value_22 = var_widget;
tmp_assign_source_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_styles);
if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
{
    PyObject *old = var_styles;
    var_styles = tmp_assign_source_102;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_103;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(var_styles);
tmp_expression_value_23 = var_styles;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_overlay);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_screen;
tmp_assign_source_103 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
{
    PyObject *old = var_overlay;
    var_overlay = tmp_assign_source_103;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_104;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
if (var_y == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_y);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}

tmp_add_expr_left_4 = var_y;
CHECK_OBJECT(var_content_height);
tmp_add_expr_right_4 = var_content_height;
tmp_assign_source_104 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_assign_source_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
{
    PyObject *old = var_next_y;
    var_next_y = tmp_assign_source_104;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_105;
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
int tmp_truth_name_3;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_element_value_15;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_16;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_17;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_18;
CHECK_OBJECT(var_styles);
tmp_called_instance_2 = var_styles;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 98;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_has_rule,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_offset_tuple, 0)
);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 98;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(var_styles);
tmp_expression_value_25 = var_styles;
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_offset);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
if (var__Size == NULL) {
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 95;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}

tmp_called_value_12 = var__Size;
CHECK_OBJECT(var_content_width);
tmp_called_instance_3 = var_content_width;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 95;
tmp_args_element_value_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain___floor__);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 95;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
CHECK_OBJECT(var_content_height);
tmp_called_instance_4 = var_content_height;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 95;
tmp_args_element_value_17 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain___floor__);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_16);

exception_lineno = 95;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 95;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_args_element_value_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 95;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
if (var_viewport == NULL) {
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_15);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_viewport);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}

tmp_args_element_value_18 = var_viewport;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 94;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_18};
    tmp_assign_source_105 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_assign_source_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_assign_source_105 = module_var_accessor_textual$layouts$vertical$NULL_OFFSET(tstate);
if (unlikely(tmp_assign_source_105 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NULL_OFFSET);
}

if (tmp_assign_source_105 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
Py_INCREF(tmp_assign_source_105);
condexpr_end_3:;
{
    PyObject *old = var_offset;
    var_offset = tmp_assign_source_105;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_106;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_element_value_20;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_21;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_22;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_instance_7;
PyObject *tmp_called_instance_8;
if (var__Region == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Region);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 102;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}

tmp_called_value_13 = var__Region;
CHECK_OBJECT(var_box_margin);
tmp_expression_value_26 = var_box_margin;
tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_left);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
if (var_y == NULL) {
Py_DECREF(tmp_args_element_value_19);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_y);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 104;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}

tmp_called_instance_5 = var_y;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 104;
tmp_args_element_value_20 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain___floor__);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_19);

exception_lineno = 104;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
CHECK_OBJECT(var_content_width);
tmp_called_instance_6 = var_content_width;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 105;
tmp_args_element_value_21 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain___floor__);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_20);

exception_lineno = 105;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
CHECK_OBJECT(var_next_y);
tmp_called_instance_7 = var_next_y;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 106;
tmp_sub_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain___floor__);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_21);

exception_lineno = 106;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
if (var_y == NULL) {
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_21);
Py_DECREF(tmp_sub_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_y);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 106;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}

tmp_called_instance_8 = var_y;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 106;
tmp_sub_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts.const_str_plain___floor__);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_21);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 106;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
tmp_args_element_value_22 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_21);

exception_lineno = 106;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 102;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_assign_source_106 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
{
    PyObject *old = var_region;
    var_region = tmp_assign_source_106;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_107;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_instance_9;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(var_styles);
tmp_called_instance_9 = var_styles;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 108;
tmp_and_left_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_9,
    mod_consts.const_str_plain_has_rule,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_position_tuple, 0)
);

if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 108;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(var_styles);
tmp_expression_value_27 = var_styles;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_position);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_absolute;
tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
tmp_assign_source_107 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_assign_source_107 = tmp_and_left_value_1;
and_end_1:;
{
    PyObject *old = var_absolute;
    var_absolute = tmp_assign_source_107;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_23;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
PyObject *tmp_args_element_value_27;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
PyObject *tmp_args_element_value_31;
if (var_add_placement == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_add_placement);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 109;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}

tmp_called_value_14 = var_add_placement;
if (var__WidgetPlacement == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WidgetPlacement);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 110;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}

tmp_called_value_15 = var__WidgetPlacement;
CHECK_OBJECT(var_region);
tmp_args_element_value_24 = var_region;
CHECK_OBJECT(var_offset);
tmp_args_element_value_25 = var_offset;
CHECK_OBJECT(var_box_margin);
tmp_args_element_value_26 = var_box_margin;
CHECK_OBJECT(var_widget);
tmp_args_element_value_27 = var_widget;
tmp_args_element_value_28 = const_int_0;
tmp_args_element_value_29 = Py_False;
CHECK_OBJECT(var_overlay);
tmp_args_element_value_30 = var_overlay;
CHECK_OBJECT(var_absolute);
tmp_args_element_value_31 = var_absolute;
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 110;
{
    PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
    tmp_args_element_value_23 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_15, call_args);
}

if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame.f_lineno = 109;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_23);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
bool tmp_condition_result_7;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_overlay);
tmp_operand_value_1 = var_overlay;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_absolute);
tmp_operand_value_2 = var_absolute;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
tmp_condition_result_7 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_7 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_7 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_108;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
CHECK_OBJECT(var_next_y);
tmp_add_expr_left_5 = var_next_y;
CHECK_OBJECT(var_margin);
tmp_add_expr_right_5 = var_margin;
tmp_assign_source_108 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_assign_source_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
{
    PyObject *old = var_y;
    var_y = tmp_assign_source_108;
    Py_XDECREF(old);
}

}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
}
goto loop_start_7;
loop_end_7:;
goto try_end_19;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto frame_exception_exit_1;
// End of try:
try_end_19:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$layouts$vertical$$$function__1_arrange, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$layouts$vertical$$$function__1_arrange->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$layouts$vertical$$$function__1_arrange, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$layouts$vertical$$$function__1_arrange,
    type_description_1,
    par_self,
    par_parent,
    par_children,
    par_size,
    par_greedy,
    var_placements,
    var_box_margins,
    var_add_placement,
    var_viewport,
    var_child_styles,
    var_resolve_margin,
    var_box_models,
    var_margin_bottom,
    var_margin_top,
    var_margins,
    var_y,
    var__Region,
    var__WidgetPlacement,
    var__Size,
    var_widget,
    var_content_width,
    var_content_height,
    var_box_margin,
    var_margin,
    var_styles,
    var_overlay,
    var_next_y,
    var_offset,
    var_region,
    var_absolute
);


// Release cached frame if used for exception.
if (frame_frame_textual$layouts$vertical$$$function__1_arrange == cache_frame_frame_textual$layouts$vertical$$$function__1_arrange) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$layouts$vertical$$$function__1_arrange);
    cache_frame_frame_textual$layouts$vertical$$$function__1_arrange = NULL;
}

assertFrameObject(frame_frame_textual$layouts$vertical$$$function__1_arrange);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
CHECK_OBJECT(var_placements);
tmp_return_value = var_placements;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_placements);
CHECK_OBJECT(var_placements);
Py_DECREF(var_placements);
var_placements = NULL;
CHECK_OBJECT(var_box_margins);
CHECK_OBJECT(var_box_margins);
Py_DECREF(var_box_margins);
var_box_margins = NULL;
Py_XDECREF(var_add_placement);
var_add_placement = NULL;
Py_XDECREF(var_viewport);
var_viewport = NULL;
CHECK_OBJECT(var_child_styles);
CHECK_OBJECT(var_child_styles);
Py_DECREF(var_child_styles);
var_child_styles = NULL;
CHECK_OBJECT(var_resolve_margin);
CHECK_OBJECT(var_resolve_margin);
Py_DECREF(var_resolve_margin);
var_resolve_margin = NULL;
CHECK_OBJECT(var_box_models);
CHECK_OBJECT(var_box_models);
Py_DECREF(var_box_models);
var_box_models = NULL;
Py_XDECREF(var_margin_bottom);
var_margin_bottom = NULL;
Py_XDECREF(var_margin_top);
var_margin_top = NULL;
CHECK_OBJECT(var_margins);
CHECK_OBJECT(var_margins);
Py_DECREF(var_margins);
var_margins = NULL;
Py_XDECREF(var_y);
var_y = NULL;
Py_XDECREF(var__Region);
var__Region = NULL;
Py_XDECREF(var__WidgetPlacement);
var__WidgetPlacement = NULL;
Py_XDECREF(var__Size);
var__Size = NULL;
Py_XDECREF(var_widget);
var_widget = NULL;
Py_XDECREF(var_content_width);
var_content_width = NULL;
Py_XDECREF(var_content_height);
var_content_height = NULL;
Py_XDECREF(var_box_margin);
var_box_margin = NULL;
Py_XDECREF(var_margin);
var_margin = NULL;
Py_XDECREF(var_styles);
var_styles = NULL;
Py_XDECREF(var_overlay);
var_overlay = NULL;
Py_XDECREF(var_next_y);
var_next_y = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_region);
var_region = NULL;
Py_XDECREF(var_absolute);
var_absolute = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_placements);
var_placements = NULL;
Py_XDECREF(var_box_margins);
var_box_margins = NULL;
Py_XDECREF(var_add_placement);
var_add_placement = NULL;
Py_XDECREF(var_viewport);
var_viewport = NULL;
Py_XDECREF(var_child_styles);
var_child_styles = NULL;
Py_XDECREF(var_resolve_margin);
var_resolve_margin = NULL;
Py_XDECREF(var_box_models);
var_box_models = NULL;
Py_XDECREF(var_margin_bottom);
var_margin_bottom = NULL;
Py_XDECREF(var_margin_top);
var_margin_top = NULL;
Py_XDECREF(var_margins);
var_margins = NULL;
Py_XDECREF(var_y);
var_y = NULL;
Py_XDECREF(var__Region);
var__Region = NULL;
Py_XDECREF(var__WidgetPlacement);
var__WidgetPlacement = NULL;
Py_XDECREF(var__Size);
var__Size = NULL;
Py_XDECREF(var_widget);
var_widget = NULL;
Py_XDECREF(var_content_width);
var_content_width = NULL;
Py_XDECREF(var_content_height);
var_content_height = NULL;
Py_XDECREF(var_box_margin);
var_box_margin = NULL;
Py_XDECREF(var_margin);
var_margin = NULL;
Py_XDECREF(var_styles);
var_styles = NULL;
Py_XDECREF(var_overlay);
var_overlay = NULL;
Py_XDECREF(var_next_y);
var_next_y = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_region);
var_region = NULL;
Py_XDECREF(var_absolute);
var_absolute = NULL;
// Re-raise.
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_parent);
Py_DECREF(par_parent);
CHECK_OBJECT(par_children);
Py_DECREF(par_children);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
CHECK_OBJECT(par_greedy);
Py_DECREF(par_greedy);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_parent);
Py_DECREF(par_parent);
CHECK_OBJECT(par_children);
Py_DECREF(par_children);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
CHECK_OBJECT(par_greedy);
Py_DECREF(par_greedy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct textual$layouts$vertical$$$function__1_arrange$$$genexpr__1_genexpr_locals {
PyObject *var_box_model;
PyObject *var_child;
PyObject *tmp_iter_value_0;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *textual$layouts$vertical$$$function__1_arrange$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$layouts$vertical$$$function__1_arrange$$$genexpr__1_genexpr_locals *generator_heap = (struct textual$layouts$vertical$$$function__1_arrange$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_box_model = NULL;
generator_heap->var_child = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_65f1e29f72a5ebfc083a411a372f2fd6, module_textual$layouts$vertical, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noo";
generator_heap->exception_lineno = 76;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_box_model;
    generator_heap->var_box_model = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_box_model);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_child;
    generator_heap->var_child = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_child);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->var_child);
tmp_expression_value_2 = generator_heap->var_child;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_styles);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_overlay);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_screen;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_textual$layouts$vertical$Fraction(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Fraction);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_box_model);
tmp_expression_value_5 = generator_heap->var_box_model;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_margin);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_top);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 77;
tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_3;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 76;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

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
    NULL,
    generator_heap->var_box_model,
    generator_heap->var_child
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
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_box_model);
generator_heap->var_box_model = NULL;
Py_XDECREF(generator_heap->var_child);
generator_heap->var_child = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_box_model);
generator_heap->var_box_model = NULL;
Py_XDECREF(generator_heap->var_child);
generator_heap->var_child = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$layouts$vertical$$$function__1_arrange$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$layouts$vertical$$$function__1_arrange$$$genexpr__1_genexpr_context,
        module_textual$layouts$vertical,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_7159a549bd1e6adae32d449c22ce8e8e,
#endif
        code_objects_65f1e29f72a5ebfc083a411a372f2fd6,
        closure,
        1,
#if 1
        sizeof(struct textual$layouts$vertical$$$function__1_arrange$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_textual$layouts$vertical$$$function__1_arrange(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$layouts$vertical$$$function__1_arrange,
        mod_consts.const_str_plain_arrange,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b21e4400c241c7021fef0e434acee51c,
#endif
        code_objects_8e33412358c03f6c18a0600e8123c25a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$layouts$vertical,
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

static function_impl_code const function_table_textual$layouts$vertical[] = {
impl_textual$layouts$vertical$$$function__1_arrange,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$layouts$vertical);
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
        module_textual$layouts$vertical,
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
        function_table_textual$layouts$vertical,
        sizeof(function_table_textual$layouts$vertical) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.layouts.vertical";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$layouts$vertical(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$layouts$vertical");

    // Store the module for future use.
    module_textual$layouts$vertical = module;

    moduledict_textual$layouts$vertical = MODULE_DICT(module_textual$layouts$vertical);

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
        PRINT_STRING("textual$layouts$vertical: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$layouts$vertical: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$layouts$vertical: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.layouts.vertical" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$layouts$vertical\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$layouts$vertical,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$layouts$vertical,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$layouts$vertical,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$layouts$vertical,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$layouts$vertical,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$layouts$vertical);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$layouts$vertical);
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

        UPDATE_STRING_DICT1(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_textual$layouts$vertical;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_textual$layouts$vertical$$$class__1_VerticalLayout_15 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$layouts$vertical$$$class__1_VerticalLayout_2;
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
UPDATE_STRING_DICT0(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$layouts$vertical = MAKE_MODULE_FRAME(code_objects_e06c8e68ac37673924928d576bad3467, module_textual$layouts$vertical);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$layouts$vertical);
assert(Py_REFCNT(frame_frame_textual$layouts$vertical) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$layouts$vertical$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$layouts$vertical$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_fractions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$layouts$vertical;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Fraction_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$layouts$vertical->m_frame.f_lineno = 3;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$layouts$vertical,
        mod_consts.const_str_plain_Fraction,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Fraction);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Fraction, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_ff7fa4d10538d83945380730064513ff;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$layouts$vertical;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_resolve_box_models_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$layouts$vertical->m_frame.f_lineno = 6;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$layouts$vertical,
        mod_consts.const_str_plain_resolve_box_models,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_resolve_box_models);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve_box_models, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$layouts$vertical;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_NULL_OFFSET_str_plain_Region_str_plain_Size_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$layouts$vertical->m_frame.f_lineno = 7;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$layouts$vertical,
        mod_consts.const_str_plain_NULL_OFFSET,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_NULL_OFFSET);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_NULL_OFFSET, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$layouts$vertical,
        mod_consts.const_str_plain_Region,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Region);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Region, tmp_assign_source_10);
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
        (PyObject *)moduledict_textual$layouts$vertical,
        mod_consts.const_str_plain_Size,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Size);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Size, tmp_assign_source_11);
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
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_16d69cbdb0009d7d51a33d919e19e88f;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$layouts$vertical;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_113e1fdac89aec8ed66524c174fcab34_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$layouts$vertical->m_frame.f_lineno = 8;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$layouts$vertical,
        mod_consts.const_str_plain_ArrangeResult,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ArrangeResult);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_ArrangeResult, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$layouts$vertical,
        mod_consts.const_str_plain_Layout,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Layout);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_Layout, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$layouts$vertical,
        mod_consts.const_str_plain_WidgetPlacement,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_WidgetPlacement);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_WidgetPlacement, tmp_assign_source_15);
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
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_textual$layouts$vertical$Layout(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Layout);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 15;

    goto try_except_handler_3;
}
tmp_assign_source_16 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_16, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_17 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
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


exception_lineno = 15;

    goto try_except_handler_3;
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


exception_lineno = 15;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_19 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_19;
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


exception_lineno = 15;

    goto try_except_handler_3;
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
PyObject *tmp_assign_source_20;
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


exception_lineno = 15;

    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_VerticalLayout;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$layouts$vertical->m_frame.f_lineno = 15;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_20;
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


exception_lineno = 15;

    goto try_except_handler_3;
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
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_3;
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


exception_lineno = 15;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_3;
}
frame_frame_textual$layouts$vertical->m_frame.f_lineno = 15;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 15;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_21;
}
branch_end_1:;
{
PyObject *tmp_assign_source_22;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$layouts$vertical$$$class__1_VerticalLayout_15 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_0c361d0b4aa32ef33cf42d8a2132e176;
tmp_res = PyObject_SetItem(locals_textual$layouts$vertical$$$class__1_VerticalLayout_15, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_a3ff24bd0eda6a038fbb24da3d9e8516;
tmp_res = PyObject_SetItem(locals_textual$layouts$vertical$$$class__1_VerticalLayout_15, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_VerticalLayout;
tmp_res = PyObject_SetItem(locals_textual$layouts$vertical$$$class__1_VerticalLayout_15, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_15;
tmp_res = PyObject_SetItem(locals_textual$layouts$vertical$$$class__1_VerticalLayout_15, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
frame_frame_textual$layouts$vertical$$$class__1_VerticalLayout_2 = MAKE_CLASS_FRAME(tstate, code_objects_8a4bc8ef2cf4647f5c897b2a5b35a6d4, module_textual$layouts$vertical, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$layouts$vertical$$$class__1_VerticalLayout_2);
assert(Py_REFCNT(frame_frame_textual$layouts$vertical$$$class__1_VerticalLayout_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_vertical;
tmp_res = PyObject_SetItem(locals_textual$layouts$vertical$$$class__1_VerticalLayout_15, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_true_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_1bb78ad10dd3f60607421f0fa775c2cd);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_textual$layouts$vertical$$$function__1_arrange(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_textual$layouts$vertical$$$class__1_VerticalLayout_15, mod_consts.const_str_plain_arrange, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$layouts$vertical$$$class__1_VerticalLayout_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$layouts$vertical$$$class__1_VerticalLayout_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$layouts$vertical$$$class__1_VerticalLayout_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$layouts$vertical$$$class__1_VerticalLayout_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$layouts$vertical$$$class__1_VerticalLayout_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$layouts$vertical$$$class__1_VerticalLayout_15, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
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


exception_lineno = 15;

    goto try_except_handler_5;
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
tmp_res = PyObject_SetItem(locals_textual$layouts$vertical$$$class__1_VerticalLayout_15, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_VerticalLayout;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_textual$layouts$vertical$$$class__1_VerticalLayout_15;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$layouts$vertical->m_frame.f_lineno = 15;
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_23;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_22 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_22);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_textual$layouts$vertical$$$class__1_VerticalLayout_15);
locals_textual$layouts$vertical$$$class__1_VerticalLayout_15 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$layouts$vertical$$$class__1_VerticalLayout_15);
locals_textual$layouts$vertical$$$class__1_VerticalLayout_15 = NULL;
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
exception_lineno = 15;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)mod_consts.const_str_plain_VerticalLayout, tmp_assign_source_22);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$layouts$vertical, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$layouts$vertical->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$layouts$vertical, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$layouts$vertical);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$layouts$vertical", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.layouts.vertical" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$layouts$vertical);
    return module_textual$layouts$vertical;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$layouts$vertical, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$layouts$vertical", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

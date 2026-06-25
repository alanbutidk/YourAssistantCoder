/* Generated code for Python module 'textual$css$types'
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



/* The "module_textual$css$types" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$css$types;
PyDictObject *moduledict_textual$css$types;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_Tuple;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Literal_tuple;
PyObject *const_str_plain_Literal;
PyObject *const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
PyObject *const_tuple_str_plain_Color_tuple;
PyObject *const_str_plain_Color;
PyObject *const_tuple_6c8c61ab0143f81ee612543af813b52d_tuple;
PyObject *const_str_plain_DockEdge;
PyObject *const_tuple_0c619eed26e1d64ca6afe193137d298a_tuple;
PyObject *const_str_plain_EdgeType;
PyObject *const_tuple_4cd185373a7429a792e035efeedd84f2_tuple;
PyObject *const_str_plain_Visibility;
PyObject *const_tuple_str_plain_block_str_plain_none_tuple;
PyObject *const_str_plain_Display;
PyObject *const_tuple_str_plain_left_str_plain_center_str_plain_right_tuple;
PyObject *const_str_plain_AlignHorizontal;
PyObject *const_tuple_str_plain_top_str_plain_middle_str_plain_bottom_tuple;
PyObject *const_str_plain_AlignVertical;
PyObject *const_tuple_str_plain_auto_str_plain_stable_tuple;
PyObject *const_str_plain_ScrollbarGutter;
PyObject *const_tuple_29c24b8fbdbf85e58692b3246811b7d0_tuple;
PyObject *const_str_plain_BoxSizing;
PyObject *const_tuple_str_plain_scroll_str_plain_hidden_str_plain_auto_tuple;
PyObject *const_str_plain_Overflow;
PyObject *const_str_plain_EdgeStyle;
PyObject *const_tuple_583c5929b4822b667eb6f4acc522a370_tuple;
PyObject *const_str_plain_TextAlign;
PyObject *const_tuple_str_plain_none_str_plain_inflect_str_plain_inside_tuple;
PyObject *const_str_plain_Constrain;
PyObject *const_tuple_str_plain_none_str_plain_screen_tuple;
PyObject *const_str_plain_Overlay;
PyObject *const_tuple_str_plain_relative_str_plain_absolute_tuple;
PyObject *const_str_plain_Position;
PyObject *const_tuple_df97d33fd735a2c79ee4a02c5f41afa0_tuple;
PyObject *const_str_plain_PointerShape;
PyObject *const_tuple_str_plain_wrap_str_plain_nowrap_tuple;
PyObject *const_str_plain_TextWrap;
PyObject *const_tuple_str_plain_clip_str_plain_fold_str_plain_ellipsis_tuple;
PyObject *const_str_plain_TextOverflow;
PyObject *const_tuple_str_plain_greedy_str_plain_expand_tuple;
PyObject *const_str_plain_Expand;
PyObject *const_tuple_str_plain_visible_str_plain_hidden_tuple;
PyObject *const_str_plain_ScrollbarVisibility;
PyObject *const_tuple_type_int_type_int_type_int_tuple;
PyObject *const_str_plain_Specificity3;
PyObject *const_tuple_type_int_type_int_type_int_type_int_type_int_type_int_tuple;
PyObject *const_str_plain_Specificity6;
PyObject *const_tuple_type_str_type_str_tuple;
PyObject *const_str_plain_CSSLocation;
PyObject *const_str_digest_d5e4f87f751cfdc6c6bf03916e98abeb;
PyObject *const_str_digest_9602c90b6e1473764ce9a01b917683b2;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[55];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.css.types"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Color_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_Color);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_6c8c61ab0143f81ee612543af813b52d_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_DockEdge);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_0c619eed26e1d64ca6afe193137d298a_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_EdgeType);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_4cd185373a7429a792e035efeedd84f2_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_Visibility);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_block_str_plain_none_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_Display);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_left_str_plain_center_str_plain_right_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_AlignHorizontal);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_top_str_plain_middle_str_plain_bottom_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_AlignVertical);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_auto_str_plain_stable_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_ScrollbarGutter);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_29c24b8fbdbf85e58692b3246811b7d0_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_BoxSizing);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scroll_str_plain_hidden_str_plain_auto_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_Overflow);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_EdgeStyle);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_583c5929b4822b667eb6f4acc522a370_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextAlign);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_none_str_plain_inflect_str_plain_inside_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_Constrain);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_none_str_plain_screen_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_Overlay);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_relative_str_plain_absolute_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_Position);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_df97d33fd735a2c79ee4a02c5f41afa0_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_PointerShape);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wrap_str_plain_nowrap_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextWrap);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_clip_str_plain_fold_str_plain_ellipsis_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextOverflow);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_greedy_str_plain_expand_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_Expand);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_visible_str_plain_hidden_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_ScrollbarVisibility);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_type_int_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_Specificity3);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_type_int_type_int_type_int_type_int_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_Specificity6);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_str_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_CSSLocation);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5e4f87f751cfdc6c6bf03916e98abeb);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_9602c90b6e1473764ce9a01b917683b2);
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
void checkModuleConstants_textual$css$types(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Literal_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Literal_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Color_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Color_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_Color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Color);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_6c8c61ab0143f81ee612543af813b52d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6c8c61ab0143f81ee612543af813b52d_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_DockEdge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DockEdge);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_0c619eed26e1d64ca6afe193137d298a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0c619eed26e1d64ca6afe193137d298a_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_EdgeType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EdgeType);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_4cd185373a7429a792e035efeedd84f2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4cd185373a7429a792e035efeedd84f2_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_Visibility));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Visibility);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_block_str_plain_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_block_str_plain_none_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_Display));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Display);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_left_str_plain_center_str_plain_right_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_left_str_plain_center_str_plain_right_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_AlignHorizontal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AlignHorizontal);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_top_str_plain_middle_str_plain_bottom_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_top_str_plain_middle_str_plain_bottom_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_AlignVertical));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AlignVertical);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_auto_str_plain_stable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_auto_str_plain_stable_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_ScrollbarGutter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ScrollbarGutter);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_29c24b8fbdbf85e58692b3246811b7d0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_29c24b8fbdbf85e58692b3246811b7d0_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_BoxSizing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BoxSizing);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scroll_str_plain_hidden_str_plain_auto_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_scroll_str_plain_hidden_str_plain_auto_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_Overflow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Overflow);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_EdgeStyle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EdgeStyle);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_583c5929b4822b667eb6f4acc522a370_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_583c5929b4822b667eb6f4acc522a370_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextAlign));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TextAlign);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_none_str_plain_inflect_str_plain_inside_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_none_str_plain_inflect_str_plain_inside_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_Constrain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Constrain);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_none_str_plain_screen_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_none_str_plain_screen_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_Overlay));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Overlay);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_relative_str_plain_absolute_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_relative_str_plain_absolute_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_Position));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Position);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_df97d33fd735a2c79ee4a02c5f41afa0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_df97d33fd735a2c79ee4a02c5f41afa0_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_PointerShape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PointerShape);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wrap_str_plain_nowrap_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_wrap_str_plain_nowrap_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextWrap));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TextWrap);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_clip_str_plain_fold_str_plain_ellipsis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_clip_str_plain_fold_str_plain_ellipsis_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextOverflow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TextOverflow);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_greedy_str_plain_expand_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_greedy_str_plain_expand_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_Expand));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Expand);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_visible_str_plain_hidden_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_visible_str_plain_hidden_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_ScrollbarVisibility));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ScrollbarVisibility);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_type_int_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_int_type_int_type_int_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_Specificity3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Specificity3);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_int_type_int_type_int_type_int_type_int_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_int_type_int_type_int_type_int_type_int_type_int_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_Specificity6));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Specificity6);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_str_type_str_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_CSSLocation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CSSLocation);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5e4f87f751cfdc6c6bf03916e98abeb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5e4f87f751cfdc6c6bf03916e98abeb);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_9602c90b6e1473764ce9a01b917683b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9602c90b6e1473764ce9a01b917683b2);
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
static PyObject *module_var_accessor_textual$css$types$Color(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Color);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Color, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Color);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Color, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$types$EdgeType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EdgeType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EdgeType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EdgeType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EdgeType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeType);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$types$Literal(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$types$Tuple(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Tuple);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Tuple, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Tuple);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Tuple, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$types$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_ec83669fcf97025b0b335c6b2d328f72;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_d5e4f87f751cfdc6c6bf03916e98abeb); CHECK_OBJECT(module_filename_obj);
code_objects_ec83669fcf97025b0b335c6b2d328f72 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_9602c90b6e1473764ce9a01b917683b2, mod_consts.const_str_digest_9602c90b6e1473764ce9a01b917683b2, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_textual$css$types[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$css$types);
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
        module_textual$css$types,
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
        function_table_textual$css$types,
        sizeof(function_table_textual$css$types) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.css.types";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$css$types(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$css$types");

    // Store the module for future use.
    module_textual$css$types = module;

    moduledict_textual$css$types = MODULE_DICT(module_textual$css$types);

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
        PRINT_STRING("textual$css$types: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$css$types: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$css$types: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.css.types" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$css$types\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$css$types,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$css$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$css$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$css$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$css$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$css$types);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$css$types);
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

        UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_textual$css$types;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$css$types = MAKE_MODULE_FRAME(code_objects_ec83669fcf97025b0b335c6b2d328f72, module_textual$css$types);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$types);
assert(Py_REFCNT(frame_frame_textual$css$types) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$css$types$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$css$types$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$css$types,
        mod_consts.const_str_plain_Tuple,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Tuple);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Tuple, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$css$types;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Literal_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$css$types->m_frame.f_lineno = 5;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$css$types,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Literal);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$css$types;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Color_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$css$types->m_frame.f_lineno = 7;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$css$types,
        mod_consts.const_str_plain_Color,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Color);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Color, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 9;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_tuple_6c8c61ab0143f81ee612543af813b52d_tuple;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_DockEdge, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_expression_value_2 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 10;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_tuple_0c619eed26e1d64ca6afe193137d298a_tuple;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeType, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
tmp_expression_value_3 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_tuple_4cd185373a7429a792e035efeedd84f2_tuple;
tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Visibility, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
tmp_expression_value_4 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = mod_consts.const_tuple_str_plain_block_str_plain_none_tuple;
tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Display, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_5;
tmp_expression_value_5 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = mod_consts.const_tuple_str_plain_left_str_plain_center_str_plain_right_tuple;
tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_AlignHorizontal, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_6;
tmp_expression_value_6 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_subscript_value_6 = mod_consts.const_tuple_str_plain_top_str_plain_middle_str_plain_bottom_tuple;
tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_AlignVertical, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_7;
tmp_expression_value_7 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_subscript_value_7 = mod_consts.const_tuple_str_plain_auto_str_plain_stable_tuple;
tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ScrollbarGutter, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_8;
tmp_expression_value_8 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_subscript_value_8 = mod_consts.const_tuple_29c24b8fbdbf85e58692b3246811b7d0_tuple;
tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_BoxSizing, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_9;
tmp_expression_value_9 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_subscript_value_9 = mod_consts.const_tuple_str_plain_scroll_str_plain_hidden_str_plain_auto_tuple;
tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_9);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Overflow, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_10;
PyObject *tmp_tuple_element_1;
tmp_expression_value_10 = module_var_accessor_textual$css$types$Tuple(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_textual$css$types$EdgeType(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EdgeType);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_textual$css$types$Color(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Color);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_10);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_EdgeStyle, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_11;
tmp_expression_value_11 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto frame_exception_exit_1;
}
tmp_subscript_value_11 = mod_consts.const_tuple_583c5929b4822b667eb6f4acc522a370_tuple;
tmp_assign_source_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_11);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_TextAlign, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_12;
tmp_expression_value_12 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_subscript_value_12 = mod_consts.const_tuple_str_plain_none_str_plain_inflect_str_plain_inside_tuple;
tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_12);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Constrain, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_13;
tmp_expression_value_13 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto frame_exception_exit_1;
}
tmp_subscript_value_13 = mod_consts.const_tuple_str_plain_none_str_plain_screen_tuple;
tmp_assign_source_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_13);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Overlay, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_14;
tmp_expression_value_14 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_subscript_value_14 = mod_consts.const_tuple_str_plain_relative_str_plain_absolute_tuple;
tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_14);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Position, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_15;
tmp_expression_value_15 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto frame_exception_exit_1;
}
tmp_subscript_value_15 = mod_consts.const_tuple_df97d33fd735a2c79ee4a02c5f41afa0_tuple;
tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_15);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_PointerShape, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_16;
tmp_expression_value_16 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto frame_exception_exit_1;
}
tmp_subscript_value_16 = mod_consts.const_tuple_str_plain_wrap_str_plain_nowrap_tuple;
tmp_assign_source_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_16);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_TextWrap, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_17;
tmp_expression_value_17 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;

    goto frame_exception_exit_1;
}
tmp_subscript_value_17 = mod_consts.const_tuple_str_plain_clip_str_plain_fold_str_plain_ellipsis_tuple;
tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_17);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_TextOverflow, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_18;
tmp_expression_value_18 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;

    goto frame_exception_exit_1;
}
tmp_subscript_value_18 = mod_consts.const_tuple_str_plain_greedy_str_plain_expand_tuple;
tmp_assign_source_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_18);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Expand, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_19;
tmp_expression_value_19 = module_var_accessor_textual$css$types$Literal(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;

    goto frame_exception_exit_1;
}
tmp_subscript_value_19 = mod_consts.const_tuple_str_plain_visible_str_plain_hidden_tuple;
tmp_assign_source_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_19);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_ScrollbarVisibility, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_20;
tmp_expression_value_20 = module_var_accessor_textual$css$types$Tuple(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_subscript_value_20 = mod_consts.const_tuple_type_int_type_int_type_int_tuple;
tmp_assign_source_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_20);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Specificity3, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_21;
tmp_expression_value_21 = module_var_accessor_textual$css$types$Tuple(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto frame_exception_exit_1;
}
tmp_subscript_value_21 = mod_consts.const_tuple_type_int_type_int_type_int_type_int_type_int_type_int_tuple;
tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_21);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_Specificity6, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_22;
tmp_expression_value_22 = module_var_accessor_textual$css$types$Tuple(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Tuple);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto frame_exception_exit_1;
}
tmp_subscript_value_22 = mod_consts.const_tuple_type_str_type_str_tuple;
tmp_assign_source_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_22);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$types, (Nuitka_StringObject *)mod_consts.const_str_plain_CSSLocation, tmp_assign_source_29);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$types->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$css$types);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$css$types", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.css.types" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$css$types);
    return module_textual$css$types;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$types, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$css$types", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

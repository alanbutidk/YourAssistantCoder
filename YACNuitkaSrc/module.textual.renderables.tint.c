/* Generated code for Python module 'textual$renderables$tint'
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



/* The "module_textual$renderables$tint" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$renderables$tint;
PyDictObject *moduledict_textual$renderables$tint;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_renderable;
PyObject *const_str_plain_color;
PyObject *const_str_digest_602e465a3f4222096022c6a423677577;
PyObject *const_str_digest_6df9e26dc795464743938d04c3998259;
PyObject *const_str_plain_Color;
PyObject *const_str_plain_from_rich_color;
PyObject *const_str_plain_Style;
PyObject *const_str_plain_from_color;
PyObject *const_str_plain_Segment;
PyObject *const_str_plain_ANSIToTruecolor;
PyObject *const_str_plain_ansi_theme;
PyObject *const_str_plain_truecolor_style;
PyObject *const_str_plain_background;
PyObject *const_str_plain_rich_color;
PyObject *const_str_plain_segments;
PyObject *const_str_plain_background_rich_color;
PyObject *const_str_plain__Segment;
PyObject *const_str_plain_style_from_color;
PyObject *const_str_plain_bgcolor;
PyObject *const_str_plain_process_segments;
PyObject *const_str_digest_bccdfdcfedb941e2b6a68b3451c8e115;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_Iterable;
PyObject *const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e;
PyObject *const_tuple_str_plain_RenderableType_tuple;
PyObject *const_str_plain_RenderableType;
PyObject *const_str_digest_6ade9fb5040f26ac50721029664cef54;
PyObject *const_tuple_str_plain_Segment_tuple;
PyObject *const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5;
PyObject *const_tuple_str_plain_Style_tuple;
PyObject *const_str_digest_6bc791a702fe5b987b1341713efdae95;
PyObject *const_tuple_str_plain_TerminalTheme_tuple;
PyObject *const_str_plain_TerminalTheme;
PyObject *const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
PyObject *const_tuple_str_plain_TRANSPARENT_str_plain_Color_tuple;
PyObject *const_str_plain_TRANSPARENT;
PyObject *const_str_digest_401890d7b50ad6ac5c9efdfbf3c55cc1;
PyObject *const_tuple_str_plain_ANSIToTruecolor_tuple;
PyObject *const_str_digest_061ce1e16f806c4a05639ac7db8a9c7d;
PyObject *const_str_digest_c9c96ad0bc3e7b7422e61b497156e932;
PyObject *const_str_plain_Tint;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_14;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_e998df830dceaf26d9cfe139b2cdaabc;
PyObject *const_str_digest_04ce6a8ff2313e8f914d061c3d656364;
PyObject *const_dict_0941bb26b17c0c29b284e145e82ca0c8;
PyObject *const_tuple_str_plain_renderable_str_plain_color_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_8d0ec26765016a37f1d1f601b62b6cd0;
PyObject *const_str_digest_d245018454841d57c2f37685fed04d31;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_renderable_str_plain_color_tuple;
PyObject *const_tuple_4209b7950969ea20de84a3fcf08359e8_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.renderables.tint"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_renderable);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_color);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_602e465a3f4222096022c6a423677577);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_6df9e26dc795464743938d04c3998259);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_Color);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_rich_color);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_Style);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_color);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Segment);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_ANSIToTruecolor);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_theme);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_truecolor_style);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_background);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich_color);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_segments);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_background_rich_color);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__Segment);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_style_from_color);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_bgcolor);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_process_segments);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_bccdfdcfedb941e2b6a68b3451c8e115);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RenderableType_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_RenderableType);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Segment_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_6bc791a702fe5b987b1341713efdae95);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TerminalTheme_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_TerminalTheme);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TRANSPARENT_str_plain_Color_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_TRANSPARENT);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_401890d7b50ad6ac5c9efdfbf3c55cc1);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ANSIToTruecolor_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_061ce1e16f806c4a05639ac7db8a9c7d);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9c96ad0bc3e7b7422e61b497156e932);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tint);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_int_pos_14);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_dict_e998df830dceaf26d9cfe139b2cdaabc);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_04ce6a8ff2313e8f914d061c3d656364);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_0941bb26b17c0c29b284e145e82ca0c8);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_renderable_str_plain_color_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d0ec26765016a37f1d1f601b62b6cd0);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_d245018454841d57c2f37685fed04d31);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_renderable_str_plain_color_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_4209b7950969ea20de84a3fcf08359e8_tuple);
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
void checkModuleConstants_textual$renderables$tint(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_renderable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_renderable);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_color);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_602e465a3f4222096022c6a423677577));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_602e465a3f4222096022c6a423677577);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_6df9e26dc795464743938d04c3998259));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6df9e26dc795464743938d04c3998259);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_Color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Color);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_rich_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_rich_color);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_Style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Style);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_color);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_Segment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Segment);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_ANSIToTruecolor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ANSIToTruecolor);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_theme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ansi_theme);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_truecolor_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_truecolor_style);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_background));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_background);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich_color);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_segments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_segments);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_background_rich_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_background_rich_color);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__Segment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Segment);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_style_from_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_style_from_color);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_bgcolor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bgcolor);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_process_segments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_process_segments);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_bccdfdcfedb941e2b6a68b3451c8e115));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bccdfdcfedb941e2b6a68b3451c8e115);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RenderableType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RenderableType_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_RenderableType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RenderableType);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Segment_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Segment_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Style_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_6bc791a702fe5b987b1341713efdae95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6bc791a702fe5b987b1341713efdae95);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TerminalTheme_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TerminalTheme_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_TerminalTheme));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TerminalTheme);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TRANSPARENT_str_plain_Color_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TRANSPARENT_str_plain_Color_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_TRANSPARENT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TRANSPARENT);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_401890d7b50ad6ac5c9efdfbf3c55cc1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_401890d7b50ad6ac5c9efdfbf3c55cc1);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ANSIToTruecolor_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ANSIToTruecolor_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_061ce1e16f806c4a05639ac7db8a9c7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_061ce1e16f806c4a05639ac7db8a9c7d);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9c96ad0bc3e7b7422e61b497156e932));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c9c96ad0bc3e7b7422e61b497156e932);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tint);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_int_pos_14));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_14);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_dict_e998df830dceaf26d9cfe139b2cdaabc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e998df830dceaf26d9cfe139b2cdaabc);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_04ce6a8ff2313e8f914d061c3d656364));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04ce6a8ff2313e8f914d061c3d656364);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_0941bb26b17c0c29b284e145e82ca0c8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0941bb26b17c0c29b284e145e82ca0c8);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_renderable_str_plain_color_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_renderable_str_plain_color_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d0ec26765016a37f1d1f601b62b6cd0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8d0ec26765016a37f1d1f601b62b6cd0);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_d245018454841d57c2f37685fed04d31));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d245018454841d57c2f37685fed04d31);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_renderable_str_plain_color_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_renderable_str_plain_color_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_4209b7950969ea20de84a3fcf08359e8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4209b7950969ea20de84a3fcf08359e8_tuple);
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
static PyObject *module_var_accessor_textual$renderables$tint$ANSIToTruecolor(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$renderables$tint->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$renderables$tint->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIToTruecolor);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$renderables$tint->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ANSIToTruecolor);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ANSIToTruecolor, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ANSIToTruecolor);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ANSIToTruecolor, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIToTruecolor);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIToTruecolor);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIToTruecolor);
    }

    return result;
}

static PyObject *module_var_accessor_textual$renderables$tint$Color(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$renderables$tint->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$renderables$tint->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$renderables$tint->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
    }

    return result;
}

static PyObject *module_var_accessor_textual$renderables$tint$Segment(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$renderables$tint->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$renderables$tint->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$renderables$tint->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Segment);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Segment, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Segment);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Segment, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
    }

    return result;
}

static PyObject *module_var_accessor_textual$renderables$tint$Style(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$renderables$tint->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$renderables$tint->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$renderables$tint->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Style);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Style, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Style);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Style, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }

    return result;
}

static PyObject *module_var_accessor_textual$renderables$tint$TRANSPARENT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$renderables$tint->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$renderables$tint->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSPARENT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$renderables$tint->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TRANSPARENT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TRANSPARENT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TRANSPARENT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TRANSPARENT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSPARENT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSPARENT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSPARENT);
    }

    return result;
}

static PyObject *module_var_accessor_textual$renderables$tint$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$renderables$tint->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$renderables$tint->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$renderables$tint->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_7e8f5b52ba36aa17a08a17fb56285a66;
static PyCodeObject *code_objects_12e4b70cdcf152a8e8711eb814e6505e;
static PyCodeObject *code_objects_e4aeed8acec3995c776967d8916f303f;
static PyCodeObject *code_objects_5a92246c630ead7c39ea6e79e47bcc9b;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_8d0ec26765016a37f1d1f601b62b6cd0); CHECK_OBJECT(module_filename_obj);
code_objects_7e8f5b52ba36aa17a08a17fb56285a66 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_d245018454841d57c2f37685fed04d31, mod_consts.const_str_digest_d245018454841d57c2f37685fed04d31, NULL, NULL, 0, 0, 0);
code_objects_12e4b70cdcf152a8e8711eb814e6505e = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Tint, mod_consts.const_str_plain_Tint, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e4aeed8acec3995c776967d8916f303f = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_04ce6a8ff2313e8f914d061c3d656364, mod_consts.const_tuple_str_plain_self_str_plain_renderable_str_plain_color_tuple, NULL, 3, 0, 0);
code_objects_5a92246c630ead7c39ea6e79e47bcc9b = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_process_segments, mod_consts.const_str_digest_bccdfdcfedb941e2b6a68b3451c8e115, mod_consts.const_tuple_4209b7950969ea20de84a3fcf08359e8_tuple, NULL, 5, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$renderables$tint$$$function__2_process_segments$$$genobj__1_process_segments(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$renderables$tint$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$renderables$tint$$$function__2_process_segments(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$renderables$tint$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_renderable = python_pars[1];
PyObject *par_color = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$renderables$tint$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$renderables$tint$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$renderables$tint$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$renderables$tint$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$renderables$tint$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$renderables$tint$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e4aeed8acec3995c776967d8916f303f, module_textual$renderables$tint, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$renderables$tint$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$renderables$tint$$$function__1___init__ = cache_frame_frame_textual$renderables$tint$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$renderables$tint$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$renderables$tint$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_renderable);
tmp_assattr_value_1 = par_renderable;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_renderable, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_color);
tmp_assattr_value_2 = par_color;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_color, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$renderables$tint$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$renderables$tint$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$renderables$tint$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$renderables$tint$$$function__1___init__,
    type_description_1,
    par_self,
    par_renderable,
    par_color
);


// Release cached frame if used for exception.
if (frame_frame_textual$renderables$tint$$$function__1___init__ == cache_frame_frame_textual$renderables$tint$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$renderables$tint$$$function__1___init__);
    cache_frame_frame_textual$renderables$tint$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$renderables$tint$$$function__1___init__);

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
CHECK_OBJECT(par_renderable);
Py_DECREF(par_renderable);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_renderable);
Py_DECREF(par_renderable);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$renderables$tint$$$function__2_process_segments(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_CellObject *par_segments = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_color = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_ansi_theme = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_background = Nuitka_Cell_New1(python_pars[4]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[5];
tmp_closure_1[0] = par_ansi_theme;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_background;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = Nuitka_Cell_New0(par_cls);
tmp_closure_1[3] = par_color;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_segments;
Py_INCREF(tmp_closure_1[4]);
tmp_return_value = MAKE_GENERATOR_textual$renderables$tint$$$function__2_process_segments$$$genobj__1_process_segments(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_segments);
CHECK_OBJECT(par_segments);
Py_DECREF(par_segments);
par_segments = NULL;
CHECK_OBJECT(par_color);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
par_color = NULL;
CHECK_OBJECT(par_ansi_theme);
CHECK_OBJECT(par_ansi_theme);
Py_DECREF(par_ansi_theme);
par_ansi_theme = NULL;
CHECK_OBJECT(par_background);
CHECK_OBJECT(par_background);
Py_DECREF(par_background);
par_background = NULL;
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
struct textual$renderables$tint$$$function__2_process_segments$$$genobj__1_process_segments_locals {
PyObject *var_from_rich_color;
PyObject *var_style_from_color;
PyObject *var__Segment;
PyObject *var_truecolor_style;
PyObject *var_background_rich_color;
PyObject *var_NULL_STYLE;
PyObject *var_segment;
PyObject *var_text;
PyObject *var_style;
PyObject *var_control;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__element_3;
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

static PyObject *textual$renderables$tint$$$function__2_process_segments$$$genobj__1_process_segments_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$renderables$tint$$$function__2_process_segments$$$genobj__1_process_segments_locals *generator_heap = (struct textual$renderables$tint$$$function__2_process_segments$$$genobj__1_process_segments_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_from_rich_color = NULL;
generator_heap->var_style_from_color = NULL;
generator_heap->var__Segment = NULL;
generator_heap->var_truecolor_style = NULL;
generator_heap->var_background_rich_color = NULL;
generator_heap->var_NULL_STYLE = NULL;
generator_heap->var_segment = NULL;
generator_heap->var_text = NULL;
generator_heap->var_style = NULL;
generator_heap->var_control = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5a92246c630ead7c39ea6e79e47bcc9b, module_textual$renderables$tint, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_textual$renderables$tint$Color(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Color);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_rich_color);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_from_rich_color == NULL);
generator_heap->var_from_rich_color = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_textual$renderables$tint$Style(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_from_color);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_style_from_color == NULL);
generator_heap->var_style_from_color = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = module_var_accessor_textual$renderables$tint$Segment(tstate);
if (unlikely(tmp_assign_source_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 52;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var__Segment == NULL);
Py_INCREF(tmp_assign_source_3);
generator_heap->var__Segment = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_textual$renderables$tint$ANSIToTruecolor(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ANSIToTruecolor);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ansi_theme);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 54;
tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_truecolor_style);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_truecolor_style == NULL);
generator_heap->var_truecolor_style = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_background);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_rich_color);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_background_rich_color == NULL);
generator_heap->var_background_rich_color = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_textual$renderables$tint$Style(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 57;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_NULL_STYLE == NULL);
generator_heap->var_NULL_STYLE = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_segments);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[4]);
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_7;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cccccoooooooooo";
generator_heap->exception_lineno = 58;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_9 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_segment;
    generator_heap->var_segment = tmp_assign_source_9;
    Py_INCREF(generator_heap->var_segment);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(generator_heap->var_segment);
tmp_iter_arg_2 = generator_heap->var_segment;
tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 59;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 59;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 59;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 59;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_3;
    generator_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 3);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 59;
generator_heap->type_description_1 = "cccccoooooooooo";
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
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
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
PyObject *tmp_assign_source_14;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_14 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_text;
    generator_heap->var_text = tmp_assign_source_14;
    Py_INCREF(generator_heap->var_text);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_15 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_style;
    generator_heap->var_style = tmp_assign_source_15;
    Py_INCREF(generator_heap->var_style);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_3);
tmp_assign_source_16 = generator_heap->tmp_tuple_unpack_1__element_3;
{
    PyObject *old = generator_heap->var_control;
    generator_heap->var_control = tmp_assign_source_16;
    Py_INCREF(generator_heap->var_control);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->var_control);
tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->var_control);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 60;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_expression_value_5;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_segment);
tmp_expression_value_5 = generator_heap->var_segment;
Py_INCREF(tmp_expression_value_5);
generator->m_yield_return_index = 1;
return tmp_expression_value_5;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_17;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(generator_heap->var_style);
tmp_cmp_expr_left_1 = generator_heap->var_style;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
if (generator_heap->var_truecolor_style == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_truecolor_style);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 64;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_3 = generator_heap->var_truecolor_style;
CHECK_OBJECT(generator_heap->var_style);
tmp_args_element_value_2 = generator_heap->var_style;
if (generator_heap->var_background_rich_color == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_background_rich_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 64;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_3 = generator_heap->var_background_rich_color;
generator->m_frame->m_frame.f_lineno = 64;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 64;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(generator_heap->var_NULL_STYLE);
tmp_assign_source_17 = generator_heap->var_NULL_STYLE;
Py_INCREF(tmp_assign_source_17);
condexpr_end_1:;
{
    PyObject *old = generator_heap->var_style;
    assert(old != NULL);
    generator_heap->var_style = tmp_assign_source_17;
    Py_DECREF(old);
}

}
{
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_8;
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_10;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (generator_heap->var__Segment == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__Segment);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_4 = generator_heap->var__Segment;
CHECK_OBJECT(generator_heap->var_text);
tmp_args_element_value_4 = generator_heap->var_text;
CHECK_OBJECT(generator_heap->var_style);
tmp_add_expr_left_1 = generator_heap->var_style;
if (generator_heap->var_style_from_color == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_style_from_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_5 = generator_heap->var_style_from_color;
CHECK_OBJECT(generator_heap->var_style);
tmp_expression_value_7 = generator_heap->var_style;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_color);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 75;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
if (generator_heap->var_from_rich_color == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_from_rich_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 74;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_6 = generator_heap->var_from_rich_color;
CHECK_OBJECT(generator_heap->var_style);
tmp_expression_value_9 = generator_heap->var_style;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_color);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 74;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 74;
tmp_add_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 74;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_add_expr_left_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 74;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}

tmp_add_expr_right_2 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_expression_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 74;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_rich_color);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 74;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_args_element_value_6 = Py_None;
Py_INCREF(tmp_args_element_value_6);
condexpr_end_2:;
CHECK_OBJECT(generator_heap->var_style);
tmp_expression_value_10 = generator_heap->var_style;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_bgcolor);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_6);

generator_heap->exception_lineno = 80;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_4 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
if (generator_heap->var_from_rich_color == NULL) {
Py_DECREF(tmp_args_element_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_from_rich_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_7 = generator_heap->var_from_rich_color;
CHECK_OBJECT(generator_heap->var_style);
tmp_expression_value_12 = generator_heap->var_style;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_bgcolor);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_6);

generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 79;
tmp_add_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_6);

generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_add_expr_left_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}

tmp_add_expr_right_3 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_expression_value_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_6);

generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_rich_color);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_6);

generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_args_element_value_8 = Py_None;
Py_INCREF(tmp_args_element_value_8);
condexpr_end_3:;
generator->m_frame->m_frame.f_lineno = 72;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_8};
    tmp_add_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_control);
tmp_args_element_value_10 = generator_heap->var_control;
generator->m_frame->m_frame.f_lineno = 68;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_10};
    tmp_expression_value_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_condition_result_3, sizeof(bool), &tmp_cmp_expr_left_2, sizeof(PyObject *), &tmp_cmp_expr_right_2, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_add_expr_left_2, sizeof(PyObject *), &tmp_add_expr_right_2, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_condition_result_4, sizeof(bool), &tmp_cmp_expr_left_3, sizeof(PyObject *), &tmp_cmp_expr_right_3, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_add_expr_left_3, sizeof(PyObject *), &tmp_add_expr_right_3, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_6;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_condition_result_3, sizeof(bool), &tmp_cmp_expr_left_2, sizeof(PyObject *), &tmp_cmp_expr_right_2, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_add_expr_left_2, sizeof(PyObject *), &tmp_add_expr_right_2, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_condition_result_4, sizeof(bool), &tmp_cmp_expr_left_3, sizeof(PyObject *), &tmp_cmp_expr_right_3, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_add_expr_left_3, sizeof(PyObject *), &tmp_add_expr_right_3, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "cccccoooooooooo";
    goto try_except_handler_2;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "cccccoooooooooo";
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

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
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
    generator->m_closure[2],
    generator->m_closure[4],
    generator->m_closure[3],
    generator->m_closure[0],
    generator->m_closure[1],
    generator_heap->var_from_rich_color,
    generator_heap->var_style_from_color,
    generator_heap->var__Segment,
    generator_heap->var_truecolor_style,
    generator_heap->var_background_rich_color,
    generator_heap->var_NULL_STYLE,
    generator_heap->var_segment,
    generator_heap->var_text,
    generator_heap->var_style,
    generator_heap->var_control
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

Py_XDECREF(generator_heap->var_from_rich_color);
generator_heap->var_from_rich_color = NULL;
Py_XDECREF(generator_heap->var_style_from_color);
generator_heap->var_style_from_color = NULL;
Py_XDECREF(generator_heap->var__Segment);
generator_heap->var__Segment = NULL;
Py_XDECREF(generator_heap->var_truecolor_style);
generator_heap->var_truecolor_style = NULL;
Py_XDECREF(generator_heap->var_background_rich_color);
generator_heap->var_background_rich_color = NULL;
Py_XDECREF(generator_heap->var_NULL_STYLE);
generator_heap->var_NULL_STYLE = NULL;
Py_XDECREF(generator_heap->var_segment);
generator_heap->var_segment = NULL;
Py_XDECREF(generator_heap->var_text);
generator_heap->var_text = NULL;
Py_XDECREF(generator_heap->var_style);
generator_heap->var_style = NULL;
Py_XDECREF(generator_heap->var_control);
generator_heap->var_control = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_from_rich_color);
generator_heap->var_from_rich_color = NULL;
Py_XDECREF(generator_heap->var_style_from_color);
generator_heap->var_style_from_color = NULL;
Py_XDECREF(generator_heap->var__Segment);
generator_heap->var__Segment = NULL;
Py_XDECREF(generator_heap->var_truecolor_style);
generator_heap->var_truecolor_style = NULL;
Py_XDECREF(generator_heap->var_background_rich_color);
generator_heap->var_background_rich_color = NULL;
CHECK_OBJECT(generator_heap->var_NULL_STYLE);
CHECK_OBJECT(generator_heap->var_NULL_STYLE);
Py_DECREF(generator_heap->var_NULL_STYLE);
generator_heap->var_NULL_STYLE = NULL;
Py_XDECREF(generator_heap->var_segment);
generator_heap->var_segment = NULL;
Py_XDECREF(generator_heap->var_text);
generator_heap->var_text = NULL;
Py_XDECREF(generator_heap->var_style);
generator_heap->var_style = NULL;
Py_XDECREF(generator_heap->var_control);
generator_heap->var_control = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$renderables$tint$$$function__2_process_segments$$$genobj__1_process_segments(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$renderables$tint$$$function__2_process_segments$$$genobj__1_process_segments_context,
        module_textual$renderables$tint,
        mod_consts.const_str_plain_process_segments,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_bccdfdcfedb941e2b6a68b3451c8e115,
#endif
        code_objects_5a92246c630ead7c39ea6e79e47bcc9b,
        closure,
        5,
#if 1
        sizeof(struct textual$renderables$tint$$$function__2_process_segments$$$genobj__1_process_segments_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_textual$renderables$tint$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$renderables$tint$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_04ce6a8ff2313e8f914d061c3d656364,
#endif
        code_objects_e4aeed8acec3995c776967d8916f303f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$renderables$tint,
        mod_consts.const_str_digest_602e465a3f4222096022c6a423677577,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$renderables$tint$$$function__2_process_segments(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$renderables$tint$$$function__2_process_segments,
        mod_consts.const_str_plain_process_segments,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bccdfdcfedb941e2b6a68b3451c8e115,
#endif
        code_objects_5a92246c630ead7c39ea6e79e47bcc9b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$renderables$tint,
        mod_consts.const_str_digest_6df9e26dc795464743938d04c3998259,
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

static function_impl_code const function_table_textual$renderables$tint[] = {
impl_textual$renderables$tint$$$function__1___init__,
impl_textual$renderables$tint$$$function__2_process_segments,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$renderables$tint);
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
        module_textual$renderables$tint,
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
        function_table_textual$renderables$tint,
        sizeof(function_table_textual$renderables$tint) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.renderables.tint";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$renderables$tint(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$renderables$tint");

    // Store the module for future use.
    module_textual$renderables$tint = module;

    moduledict_textual$renderables$tint = MODULE_DICT(module_textual$renderables$tint);

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
        PRINT_STRING("textual$renderables$tint: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$renderables$tint: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$renderables$tint: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.renderables.tint" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$renderables$tint\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$renderables$tint,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$renderables$tint,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$renderables$tint,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$renderables$tint,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$renderables$tint,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$renderables$tint);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$renderables$tint);
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

        UPDATE_STRING_DICT1(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$renderables$tint;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_textual$renderables$tint$$$class__1_Tint_14 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$renderables$tint$$$class__1_Tint_2;
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
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$renderables$tint = MAKE_MODULE_FRAME(code_objects_7e8f5b52ba36aa17a08a17fb56285a66, module_textual$renderables$tint);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$renderables$tint);
assert(Py_REFCNT(frame_frame_textual$renderables$tint) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$renderables$tint$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$renderables$tint$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
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
        (PyObject *)moduledict_textual$renderables$tint,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$renderables$tint;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_RenderableType_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$renderables$tint->m_frame.f_lineno = 5;
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
        (PyObject *)moduledict_textual$renderables$tint,
        mod_consts.const_str_plain_RenderableType,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_RenderableType);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_RenderableType, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$renderables$tint;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Segment_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$renderables$tint->m_frame.f_lineno = 6;
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
        (PyObject *)moduledict_textual$renderables$tint,
        mod_consts.const_str_plain_Segment,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Segment);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$renderables$tint;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Style_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$renderables$tint->m_frame.f_lineno = 7;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$renderables$tint,
        mod_consts.const_str_plain_Style,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Style);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_Style, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_6bc791a702fe5b987b1341713efdae95;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$renderables$tint;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_TerminalTheme_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$renderables$tint->m_frame.f_lineno = 8;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$renderables$tint,
        mod_consts.const_str_plain_TerminalTheme,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_TerminalTheme);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_TerminalTheme, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$renderables$tint;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_TRANSPARENT_str_plain_Color_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$renderables$tint->m_frame.f_lineno = 10;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$renderables$tint,
        mod_consts.const_str_plain_TRANSPARENT,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_TRANSPARENT);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSPARENT, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$renderables$tint,
        mod_consts.const_str_plain_Color,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Color);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_Color, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_401890d7b50ad6ac5c9efdfbf3c55cc1;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$renderables$tint;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_ANSIToTruecolor_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_textual$renderables$tint->m_frame.f_lineno = 11;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$renderables$tint,
        mod_consts.const_str_plain_ANSIToTruecolor,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ANSIToTruecolor);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIToTruecolor, tmp_assign_source_13);
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
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$renderables$tint$$$class__1_Tint_14 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_061ce1e16f806c4a05639ac7db8a9c7d;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$tint$$$class__1_Tint_14, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_c9c96ad0bc3e7b7422e61b497156e932;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$tint$$$class__1_Tint_14, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Tint;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$tint$$$class__1_Tint_14, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_14;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$tint$$$class__1_Tint_14, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e998df830dceaf26d9cfe139b2cdaabc);

tmp_dictset_value = MAKE_FUNCTION_textual$renderables$tint$$$function__1___init__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_textual$renderables$tint$$$class__1_Tint_14, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_textual$renderables$tint$$$class__1_Tint_2 = MAKE_CLASS_FRAME(tstate, code_objects_12e4b70cdcf152a8e8711eb814e6505e, module_textual$renderables$tint, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$renderables$tint$$$class__1_Tint_2);
assert(Py_REFCNT(frame_frame_textual$renderables$tint$$$class__1_Tint_2) == 2);

// Framed code:
{
PyObject *tmp_classmethod_arg_1;
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_annotations_2;
tmp_tuple_element_1 = module_var_accessor_textual$renderables$tint$TRANSPARENT(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRANSPARENT);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0941bb26b17c0c29b284e145e82ca0c8);

tmp_classmethod_arg_1 = MAKE_FUNCTION_textual$renderables$tint$$$function__2_process_segments(tstate, tmp_defaults_1, tmp_annotations_2);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
CHECK_OBJECT(tmp_classmethod_arg_1);
Py_DECREF(tmp_classmethod_arg_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_textual$renderables$tint$$$class__1_Tint_14, mod_consts.const_str_plain_process_segments, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$renderables$tint$$$class__1_Tint_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$renderables$tint$$$class__1_Tint_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$renderables$tint$$$class__1_Tint_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$renderables$tint$$$class__1_Tint_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$renderables$tint$$$class__1_Tint_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_renderable_str_plain_color_tuple;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$tint$$$class__1_Tint_14, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_2 = mod_consts.const_str_plain_Tint;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_textual$renderables$tint$$$class__1_Tint_14;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$renderables$tint->m_frame.f_lineno = 14;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_17;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_16 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_16);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_textual$renderables$tint$$$class__1_Tint_14);
locals_textual$renderables$tint$$$class__1_Tint_14 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$renderables$tint$$$class__1_Tint_14);
locals_textual$renderables$tint$$$class__1_Tint_14 = NULL;
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
exception_lineno = 14;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$renderables$tint, (Nuitka_StringObject *)mod_consts.const_str_plain_Tint, tmp_assign_source_16);
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

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$renderables$tint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$renderables$tint->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$renderables$tint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$renderables$tint);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$renderables$tint", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.renderables.tint" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$renderables$tint);
    return module_textual$renderables$tint;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$tint, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$renderables$tint", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

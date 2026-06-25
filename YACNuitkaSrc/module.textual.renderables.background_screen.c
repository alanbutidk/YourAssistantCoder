/* Generated code for Python module 'textual$renderables$background_screen'
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



/* The "module_textual$renderables$background_screen" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$renderables$background_screen;
PyDictObject *moduledict_textual$renderables$background_screen;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_screen;
PyObject *const_str_plain_color;
PyObject *const_str_digest_8b41ff28e36e8d11ac26bfaea9728b35;
PyObject *const_str_digest_8a62ef830801811dba39eb29d54d675a;
PyObject *const_str_plain_Color;
PyObject *const_str_plain_from_rich_color;
PyObject *const_str_plain_Style;
PyObject *const_str_plain_from_color;
PyObject *const_str_plain_Segment;
PyObject *const_str_plain_a;
PyObject *const_str_plain_segments;
PyObject *const_str_plain__Segment;
PyObject *const_str_plain_clear_meta_and_links;
PyObject *const_str_plain_style_from_color;
PyObject *const_str_plain_rich_color;
PyObject *const_str_plain_bgcolor;
PyObject *const_str_plain_process_segments;
PyObject *const_str_digest_926e6f799614d36ff93470d1a7aaa06a;
PyObject *const_str_plain_render;
PyObject *const_str_plain__compositor;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Iterable;
PyObject *const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e;
PyObject *const_tuple_52bf26be4588d7229c975a99e142ebdf_tuple;
PyObject *const_str_plain_Console;
PyObject *const_str_plain_ConsoleOptions;
PyObject *const_str_plain_RenderResult;
PyObject *const_str_digest_6ade9fb5040f26ac50721029664cef54;
PyObject *const_tuple_str_plain_Segment_tuple;
PyObject *const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5;
PyObject *const_tuple_str_plain_Style_tuple;
PyObject *const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
PyObject *const_tuple_str_plain_Color_tuple;
PyObject *const_str_digest_82624d202bf00dddc4e64760ae8710a3;
PyObject *const_str_digest_0be6acbb10f77625382b783a4b5b600e;
PyObject *const_str_plain_BackgroundScreen;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_15;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_5b867ac1daeee64e934eba06c3bb8ab1;
PyObject *const_str_digest_ac7ae7fc5030d2bcfd931cab58a1dbbd;
PyObject *const_dict_2e83e7aa0dbb087e6310c032df98c276;
PyObject *const_dict_d2849d973cef618ef2f9b30f24b4da2f;
PyObject *const_str_plain___rich_console__;
PyObject *const_str_digest_d16dcf13c3e93e8ecfc37265f33688fb;
PyObject *const_tuple_str_plain_screen_str_plain_color_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_1368ff354f62d3526d010517081445dd;
PyObject *const_str_digest_21cfd83c5d220abe126fff876cf4ebca;
PyObject *const_tuple_str_plain_self_str_plain_screen_str_plain_color_tuple;
PyObject *const_tuple_e9818478ed93ff706cdb3ec17498b6e4_tuple;
PyObject *const_tuple_40e73c383e62ddd6b063b9e97c60f703_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.renderables.background_screen"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_screen);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_color);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b41ff28e36e8d11ac26bfaea9728b35);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a62ef830801811dba39eb29d54d675a);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_Color);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_rich_color);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_Style);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_color);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Segment);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_a);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_segments);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__Segment);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear_meta_and_links);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_style_from_color);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich_color);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_bgcolor);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_process_segments);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_926e6f799614d36ff93470d1a7aaa06a);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_render);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__compositor);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_52bf26be4588d7229c975a99e142ebdf_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_Console);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConsoleOptions);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_RenderResult);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Segment_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Color_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_82624d202bf00dddc4e64760ae8710a3);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_0be6acbb10f77625382b783a4b5b600e);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_BackgroundScreen);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_int_pos_15);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_dict_5b867ac1daeee64e934eba06c3bb8ab1);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac7ae7fc5030d2bcfd931cab58a1dbbd);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_dict_2e83e7aa0dbb087e6310c032df98c276);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_dict_d2849d973cef618ef2f9b30f24b4da2f);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain___rich_console__);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_d16dcf13c3e93e8ecfc37265f33688fb);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_screen_str_plain_color_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_1368ff354f62d3526d010517081445dd);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_21cfd83c5d220abe126fff876cf4ebca);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_screen_str_plain_color_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_e9818478ed93ff706cdb3ec17498b6e4_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_40e73c383e62ddd6b063b9e97c60f703_tuple);
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
void checkModuleConstants_textual$renderables$background_screen(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_screen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_screen);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_color);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b41ff28e36e8d11ac26bfaea9728b35));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b41ff28e36e8d11ac26bfaea9728b35);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a62ef830801811dba39eb29d54d675a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a62ef830801811dba39eb29d54d675a);
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
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_a));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_a);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_segments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_segments);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__Segment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Segment);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear_meta_and_links));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear_meta_and_links);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_style_from_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_style_from_color);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich_color);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_bgcolor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bgcolor);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_process_segments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_process_segments);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_926e6f799614d36ff93470d1a7aaa06a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_926e6f799614d36ff93470d1a7aaa06a);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_render));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__compositor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compositor);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_52bf26be4588d7229c975a99e142ebdf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_52bf26be4588d7229c975a99e142ebdf_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_Console));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Console);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConsoleOptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConsoleOptions);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_RenderResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RenderResult);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Segment_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Segment_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Style_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Color_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Color_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_82624d202bf00dddc4e64760ae8710a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_82624d202bf00dddc4e64760ae8710a3);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_0be6acbb10f77625382b783a4b5b600e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0be6acbb10f77625382b783a4b5b600e);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_BackgroundScreen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BackgroundScreen);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_int_pos_15));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_15);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_dict_5b867ac1daeee64e934eba06c3bb8ab1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5b867ac1daeee64e934eba06c3bb8ab1);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac7ae7fc5030d2bcfd931cab58a1dbbd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac7ae7fc5030d2bcfd931cab58a1dbbd);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_dict_2e83e7aa0dbb087e6310c032df98c276));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2e83e7aa0dbb087e6310c032df98c276);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_dict_d2849d973cef618ef2f9b30f24b4da2f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d2849d973cef618ef2f9b30f24b4da2f);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain___rich_console__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rich_console__);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_d16dcf13c3e93e8ecfc37265f33688fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d16dcf13c3e93e8ecfc37265f33688fb);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_screen_str_plain_color_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_screen_str_plain_color_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_1368ff354f62d3526d010517081445dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1368ff354f62d3526d010517081445dd);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_21cfd83c5d220abe126fff876cf4ebca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21cfd83c5d220abe126fff876cf4ebca);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_screen_str_plain_color_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_screen_str_plain_color_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_e9818478ed93ff706cdb3ec17498b6e4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e9818478ed93ff706cdb3ec17498b6e4_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_40e73c383e62ddd6b063b9e97c60f703_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_40e73c383e62ddd6b063b9e97c60f703_tuple);
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
static PyObject *module_var_accessor_textual$renderables$background_screen$Color(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$renderables$background_screen->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$renderables$background_screen->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$renderables$background_screen->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Color);
    }

    return result;
}

static PyObject *module_var_accessor_textual$renderables$background_screen$Segment(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$renderables$background_screen->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$renderables$background_screen->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$renderables$background_screen->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
    }

    return result;
}

static PyObject *module_var_accessor_textual$renderables$background_screen$Style(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$renderables$background_screen->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$renderables$background_screen->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$renderables$background_screen->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }

    return result;
}

static PyObject *module_var_accessor_textual$renderables$background_screen$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$renderables$background_screen->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$renderables$background_screen->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$renderables$background_screen->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_b016e069bc54d2313a22b2ef470bdea7;
static PyCodeObject *code_objects_2128c15cdbd470eda554066235570215;
static PyCodeObject *code_objects_89aac6224931068c219394bf8d92f921;
static PyCodeObject *code_objects_a265493a3d8bf5439df29b10b1f54b00;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_1368ff354f62d3526d010517081445dd); CHECK_OBJECT(module_filename_obj);
code_objects_b016e069bc54d2313a22b2ef470bdea7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_21cfd83c5d220abe126fff876cf4ebca, mod_consts.const_str_digest_21cfd83c5d220abe126fff876cf4ebca, NULL, NULL, 0, 0, 0);
code_objects_2128c15cdbd470eda554066235570215 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ac7ae7fc5030d2bcfd931cab58a1dbbd, mod_consts.const_tuple_str_plain_self_str_plain_screen_str_plain_color_tuple, NULL, 3, 0, 0);
code_objects_89aac6224931068c219394bf8d92f921 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rich_console__, mod_consts.const_str_digest_d16dcf13c3e93e8ecfc37265f33688fb, mod_consts.const_tuple_e9818478ed93ff706cdb3ec17498b6e4_tuple, NULL, 3, 0, 0);
code_objects_a265493a3d8bf5439df29b10b1f54b00 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_process_segments, mod_consts.const_str_digest_926e6f799614d36ff93470d1a7aaa06a, mod_consts.const_tuple_40e73c383e62ddd6b063b9e97c60f703_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$renderables$background_screen$$$function__2_process_segments$$$genobj__1_process_segments(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$renderables$background_screen$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$renderables$background_screen$$$function__2_process_segments(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$renderables$background_screen$$$function__3___rich_console__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$renderables$background_screen$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_screen = python_pars[1];
PyObject *par_color = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$renderables$background_screen$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$renderables$background_screen$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$renderables$background_screen$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$renderables$background_screen$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$renderables$background_screen$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$renderables$background_screen$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2128c15cdbd470eda554066235570215, module_textual$renderables$background_screen, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$renderables$background_screen$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$renderables$background_screen$$$function__1___init__ = cache_frame_frame_textual$renderables$background_screen$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$renderables$background_screen$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$renderables$background_screen$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_screen);
tmp_assattr_value_1 = par_screen;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_screen, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
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


exception_lineno = 31;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$renderables$background_screen$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$renderables$background_screen$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$renderables$background_screen$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$renderables$background_screen$$$function__1___init__,
    type_description_1,
    par_self,
    par_screen,
    par_color
);


// Release cached frame if used for exception.
if (frame_frame_textual$renderables$background_screen$$$function__1___init__ == cache_frame_frame_textual$renderables$background_screen$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$renderables$background_screen$$$function__1___init__);
    cache_frame_frame_textual$renderables$background_screen$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$renderables$background_screen$$$function__1___init__);

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
CHECK_OBJECT(par_screen);
Py_DECREF(par_screen);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_screen);
Py_DECREF(par_screen);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$renderables$background_screen$$$function__2_process_segments(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_CellObject *par_segments = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_color = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = Nuitka_Cell_New0(par_cls);
tmp_closure_1[1] = par_color;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_segments;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_GENERATOR_textual$renderables$background_screen$$$function__2_process_segments$$$genobj__1_process_segments(tstate, tmp_closure_1);

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
struct textual$renderables$background_screen$$$function__2_process_segments$$$genobj__1_process_segments_locals {
PyObject *var_from_rich_color;
PyObject *var_style_from_color;
PyObject *var__Segment;
PyObject *var_NULL_STYLE;
PyObject *var_segment;
PyObject *var_text;
PyObject *var_style;
PyObject *var_control;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__element_3;
PyObject *tmp_tuple_unpack_1__source_iter;
PyObject *tmp_tuple_unpack_2__element_1;
PyObject *tmp_tuple_unpack_2__element_2;
PyObject *tmp_tuple_unpack_2__element_3;
PyObject *tmp_tuple_unpack_2__source_iter;
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
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
};
#endif

static PyObject *textual$renderables$background_screen$$$function__2_process_segments$$$genobj__1_process_segments_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$renderables$background_screen$$$function__2_process_segments$$$genobj__1_process_segments_locals *generator_heap = (struct textual$renderables$background_screen$$$function__2_process_segments$$$genobj__1_process_segments_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_from_rich_color = NULL;
generator_heap->var_style_from_color = NULL;
generator_heap->var__Segment = NULL;
generator_heap->var_NULL_STYLE = NULL;
generator_heap->var_segment = NULL;
generator_heap->var_text = NULL;
generator_heap->var_style = NULL;
generator_heap->var_control = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_for_loop_2__iter_value = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
generator_heap->tmp_tuple_unpack_2__element_3 = NULL;
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;
generator_heap->tmp_return_value = NULL;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a265493a3d8bf5439df29b10b1f54b00, module_textual$renderables$background_screen, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
tmp_expression_value_1 = module_var_accessor_textual$renderables$background_screen$Color(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Color);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cccoooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_rich_color);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "cccoooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_from_rich_color == NULL);
generator_heap->var_from_rich_color = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_textual$renderables$background_screen$Style(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "cccoooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_from_color);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 48;
generator_heap->type_description_1 = "cccoooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_style_from_color == NULL);
generator_heap->var_style_from_color = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = module_var_accessor_textual$renderables$background_screen$Segment(tstate);
if (unlikely(tmp_assign_source_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "cccoooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var__Segment == NULL);
Py_INCREF(tmp_assign_source_3);
generator_heap->var__Segment = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_textual$renderables$background_screen$Style(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "cccoooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 51;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "cccoooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_NULL_STYLE == NULL);
generator_heap->var_NULL_STYLE = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "cccoooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_a);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "cccoooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "cccoooooooo";
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
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_segments);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cccoooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cccoooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cccoooooooo";
generator_heap->exception_lineno = 55;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_7 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_segment;
    generator_heap->var_segment = tmp_assign_source_7;
    Py_INCREF(generator_heap->var_segment);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(generator_heap->var_segment);
tmp_iter_arg_2 = generator_heap->var_segment;
tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 56;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 56;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 56;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 56;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_3;
    generator_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_11;
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



generator_heap->exception_lineno = 56;
generator_heap->type_description_1 = "cccoooooooo";
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
PyObject *tmp_assign_source_12;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_12 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_text;
    generator_heap->var_text = tmp_assign_source_12;
    Py_INCREF(generator_heap->var_text);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_13 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_style;
    generator_heap->var_style = tmp_assign_source_13;
    Py_INCREF(generator_heap->var_style);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_3);
tmp_assign_source_14 = generator_heap->tmp_tuple_unpack_1__element_3;
{
    PyObject *old = generator_heap->var_control;
    generator_heap->var_control = tmp_assign_source_14;
    Py_INCREF(generator_heap->var_control);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;

{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->var_control);
tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->var_control);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_segment);
tmp_expression_value_4 = generator_heap->var_segment;
Py_INCREF(tmp_expression_value_4);
generator->m_yield_return_index = 1;
return tmp_expression_value_4;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (generator_heap->var__Segment == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__Segment);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 60;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_2;
}

tmp_called_value_2 = generator_heap->var__Segment;
CHECK_OBJECT(generator_heap->var_text);
tmp_args_element_value_1 = generator_heap->var_text;
CHECK_OBJECT(generator_heap->var_style);
tmp_cmp_expr_left_2 = generator_heap->var_style;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(generator_heap->var_NULL_STYLE);
tmp_args_element_value_2 = generator_heap->var_NULL_STYLE;
Py_INCREF(tmp_args_element_value_2);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(generator_heap->var_style);
tmp_called_instance_1 = generator_heap->var_style;
generator->m_frame->m_frame.f_lineno = 62;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_clear_meta_and_links);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 62;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_2;
}
condexpr_end_1:;
CHECK_OBJECT(generator_heap->var_control);
tmp_args_element_value_3 = generator_heap->var_control;
generator->m_frame->m_frame.f_lineno = 60;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 60;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_condition_result_3, sizeof(bool), &tmp_cmp_expr_left_2, sizeof(PyObject *), &tmp_cmp_expr_right_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_5;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_condition_result_3, sizeof(bool), &tmp_cmp_expr_left_2, sizeof(PyObject *), &tmp_cmp_expr_right_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 60;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_2;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 55;
generator_heap->type_description_1 = "cccoooooooo";
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
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_return_value = Py_None;
Py_INCREF(generator_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_3;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_segments);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 67;
generator_heap->type_description_1 = "cccoooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_3 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 67;
generator_heap->type_description_1 = "cccoooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_2__for_iterator == NULL);
generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_15;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cccoooooooo";
generator_heap->exception_lineno = 67;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_17 = generator_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = generator_heap->var_segment;
    generator_heap->var_segment = tmp_assign_source_17;
    Py_INCREF(generator_heap->var_segment);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(generator_heap->var_segment);
tmp_iter_arg_4 = generator_heap->var_segment;
tmp_assign_source_18 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__source_iter;
    generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_4;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_4, 0, 3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__element_1;
    generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_5, 1, 3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__element_2;
    generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_6, 2, 3);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__element_3;
    generator_heap->tmp_tuple_unpack_2__element_3 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = generator_heap->tmp_tuple_unpack_2__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_2, 3);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 68;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_7;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_3);
generator_heap->tmp_tuple_unpack_2__element_3 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
try_end_5:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
tmp_assign_source_22 = generator_heap->tmp_tuple_unpack_2__element_1;
{
    PyObject *old = generator_heap->var_text;
    generator_heap->var_text = tmp_assign_source_22;
    Py_INCREF(generator_heap->var_text);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_2);
tmp_assign_source_23 = generator_heap->tmp_tuple_unpack_2__element_2;
{
    PyObject *old = generator_heap->var_style;
    generator_heap->var_style = tmp_assign_source_23;
    Py_INCREF(generator_heap->var_style);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_3);
tmp_assign_source_24 = generator_heap->tmp_tuple_unpack_2__element_3;
{
    PyObject *old = generator_heap->var_control;
    generator_heap->var_control = tmp_assign_source_24;
    Py_INCREF(generator_heap->var_control);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_3);
generator_heap->tmp_tuple_unpack_2__element_3 = NULL;

{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(generator_heap->var_control);
tmp_truth_name_2 = CHECK_IF_TRUE(generator_heap->var_control);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_expression_value_6;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
CHECK_OBJECT(generator_heap->var_segment);
tmp_expression_value_6 = generator_heap->var_segment;
Py_INCREF(tmp_expression_value_6);
generator->m_yield_return_index = 3;
return tmp_expression_value_6;
yield_return_3:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 70;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
tmp_yield_result_3 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_3);
Py_DECREF(tmp_yield_result_3);
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_25;
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(generator_heap->var_style);
tmp_cmp_expr_left_3 = generator_heap->var_style;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(generator_heap->var_NULL_STYLE);
tmp_assign_source_25 = generator_heap->var_NULL_STYLE;
Py_INCREF(tmp_assign_source_25);
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(generator_heap->var_style);
tmp_called_instance_2 = generator_heap->var_style;
generator->m_frame->m_frame.f_lineno = 72;
tmp_assign_source_25 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_clear_meta_and_links);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 72;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
condexpr_end_2:;
{
    PyObject *old = generator_heap->var_style;
    assert(old != NULL);
    generator_heap->var_style = tmp_assign_source_25;
    Py_DECREF(old);
}

}
{
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_8;
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_10;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_4;
if (generator_heap->var__Segment == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__Segment);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 73;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}

tmp_called_value_3 = generator_heap->var__Segment;
CHECK_OBJECT(generator_heap->var_text);
tmp_args_element_value_4 = generator_heap->var_text;
CHECK_OBJECT(generator_heap->var_style);
tmp_add_expr_left_1 = generator_heap->var_style;
if (generator_heap->var_style_from_color == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_style_from_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}

tmp_called_value_4 = generator_heap->var_style_from_color;
CHECK_OBJECT(generator_heap->var_style);
tmp_expression_value_8 = generator_heap->var_style;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_color);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 80;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_6 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
if (generator_heap->var_from_rich_color == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_from_rich_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}

tmp_called_value_5 = generator_heap->var_from_rich_color;
CHECK_OBJECT(generator_heap->var_style);
tmp_expression_value_10 = generator_heap->var_style;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_color);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
generator->m_frame->m_frame.f_lineno = 79;
tmp_add_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_add_expr_left_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}

tmp_add_expr_right_2 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_expression_value_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_rich_color);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_args_element_value_6 = Py_None;
Py_INCREF(tmp_args_element_value_6);
condexpr_end_3:;
CHECK_OBJECT(generator_heap->var_style);
tmp_expression_value_11 = generator_heap->var_style;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_bgcolor);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_6);

generator_heap->exception_lineno = 85;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_7 != false) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
if (generator_heap->var_from_rich_color == NULL) {
Py_DECREF(tmp_args_element_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_from_rich_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 84;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}

tmp_called_value_6 = generator_heap->var_from_rich_color;
CHECK_OBJECT(generator_heap->var_style);
tmp_expression_value_13 = generator_heap->var_style;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_bgcolor);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_6);

generator_heap->exception_lineno = 84;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
generator->m_frame->m_frame.f_lineno = 84;
tmp_add_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_6);

generator_heap->exception_lineno = 84;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_args_element_value_6);
Py_DECREF(tmp_add_expr_left_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_color);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 84;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}

tmp_add_expr_right_3 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_expression_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_6);

generator_heap->exception_lineno = 84;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_rich_color);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_6);

generator_heap->exception_lineno = 84;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_args_element_value_8 = Py_None;
Py_INCREF(tmp_args_element_value_8);
condexpr_end_4:;
generator->m_frame->m_frame.f_lineno = 77;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_8};
    tmp_add_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(generator_heap->var_control);
tmp_args_element_value_10 = generator_heap->var_control;
generator->m_frame->m_frame.f_lineno = 73;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_10};
    tmp_expression_value_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 73;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_condition_result_6, sizeof(bool), &tmp_cmp_expr_left_4, sizeof(PyObject *), &tmp_cmp_expr_right_4, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_add_expr_left_2, sizeof(PyObject *), &tmp_add_expr_right_2, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_condition_result_7, sizeof(bool), &tmp_cmp_expr_left_5, sizeof(PyObject *), &tmp_cmp_expr_right_5, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_add_expr_left_3, sizeof(PyObject *), &tmp_add_expr_right_3, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 4;
return tmp_expression_value_7;
yield_return_4:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_condition_result_6, sizeof(bool), &tmp_cmp_expr_left_4, sizeof(PyObject *), &tmp_cmp_expr_right_4, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), &tmp_add_expr_left_2, sizeof(PyObject *), &tmp_add_expr_right_2, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_condition_result_7, sizeof(bool), &tmp_cmp_expr_left_5, sizeof(PyObject *), &tmp_cmp_expr_right_5, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_add_expr_left_3, sizeof(PyObject *), &tmp_add_expr_right_3, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 73;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
tmp_yield_result_4 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_4);
Py_DECREF(tmp_yield_result_4);
}
branch_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 67;
generator_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_6;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(generator));
#endif
Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

goto try_return_handler_1;

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
    generator->m_closure[0],
    generator->m_closure[2],
    generator->m_closure[1],
    generator_heap->var_from_rich_color,
    generator_heap->var_style_from_color,
    generator_heap->var__Segment,
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
goto try_end_7;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(generator_heap->var_from_rich_color);
CHECK_OBJECT(generator_heap->var_from_rich_color);
Py_DECREF(generator_heap->var_from_rich_color);
generator_heap->var_from_rich_color = NULL;
CHECK_OBJECT(generator_heap->var_style_from_color);
CHECK_OBJECT(generator_heap->var_style_from_color);
Py_DECREF(generator_heap->var_style_from_color);
generator_heap->var_style_from_color = NULL;
Py_XDECREF(generator_heap->var__Segment);
generator_heap->var__Segment = NULL;
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
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_from_rich_color);
generator_heap->var_from_rich_color = NULL;
Py_XDECREF(generator_heap->var_style_from_color);
generator_heap->var_style_from_color = NULL;
Py_XDECREF(generator_heap->var__Segment);
generator_heap->var__Segment = NULL;
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
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:
try_end_7:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
Py_XDECREF(generator_heap->var_from_rich_color);
generator_heap->var_from_rich_color = NULL;
Py_XDECREF(generator_heap->var_style_from_color);
generator_heap->var_style_from_color = NULL;
Py_XDECREF(generator_heap->var__Segment);
generator_heap->var__Segment = NULL;
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
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif


    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$renderables$background_screen$$$function__2_process_segments$$$genobj__1_process_segments(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$renderables$background_screen$$$function__2_process_segments$$$genobj__1_process_segments_context,
        module_textual$renderables$background_screen,
        mod_consts.const_str_plain_process_segments,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_926e6f799614d36ff93470d1a7aaa06a,
#endif
        code_objects_a265493a3d8bf5439df29b10b1f54b00,
        closure,
        3,
#if 1
        sizeof(struct textual$renderables$background_screen$$$function__2_process_segments$$$genobj__1_process_segments_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$renderables$background_screen$$$function__3___rich_console__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_console = python_pars[1];
PyObject *par_options = python_pars[2];
PyObject *var_segments = NULL;
PyObject *var_color = NULL;
struct Nuitka_FrameObject *frame_frame_textual$renderables$background_screen$$$function__3___rich_console__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$renderables$background_screen$$$function__3___rich_console__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$renderables$background_screen$$$function__3___rich_console__)) {
    Py_XDECREF(cache_frame_frame_textual$renderables$background_screen$$$function__3___rich_console__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$renderables$background_screen$$$function__3___rich_console__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$renderables$background_screen$$$function__3___rich_console__ = MAKE_FUNCTION_FRAME(tstate, code_objects_89aac6224931068c219394bf8d92f921, module_textual$renderables$background_screen, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$renderables$background_screen$$$function__3___rich_console__->m_type_description == NULL);
frame_frame_textual$renderables$background_screen$$$function__3___rich_console__ = cache_frame_frame_textual$renderables$background_screen$$$function__3___rich_console__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$renderables$background_screen$$$function__3___rich_console__);
assert(Py_REFCNT(frame_frame_textual$renderables$background_screen$$$function__3___rich_console__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_console);
tmp_expression_value_1 = par_console;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_render);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_screen);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 96;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__compositor);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 96;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_options);
tmp_args_element_value_2 = par_options;
frame_frame_textual$renderables$background_screen$$$function__3___rich_console__->m_frame.f_lineno = 96;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_segments == NULL);
var_segments = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_color);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_color == NULL);
var_color = tmp_assign_source_2;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_segments);
tmp_args_element_value_3 = var_segments;
CHECK_OBJECT(var_color);
tmp_args_element_value_4 = var_color;
frame_frame_textual$renderables$background_screen$$$function__3___rich_console__->m_frame.f_lineno = 98;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_process_segments,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$renderables$background_screen$$$function__3___rich_console__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$renderables$background_screen$$$function__3___rich_console__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$renderables$background_screen$$$function__3___rich_console__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$renderables$background_screen$$$function__3___rich_console__,
    type_description_1,
    par_self,
    par_console,
    par_options,
    var_segments,
    var_color
);


// Release cached frame if used for exception.
if (frame_frame_textual$renderables$background_screen$$$function__3___rich_console__ == cache_frame_frame_textual$renderables$background_screen$$$function__3___rich_console__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$renderables$background_screen$$$function__3___rich_console__);
    cache_frame_frame_textual$renderables$background_screen$$$function__3___rich_console__ = NULL;
}

assertFrameObject(frame_frame_textual$renderables$background_screen$$$function__3___rich_console__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_segments);
CHECK_OBJECT(var_segments);
Py_DECREF(var_segments);
var_segments = NULL;
CHECK_OBJECT(var_color);
CHECK_OBJECT(var_color);
Py_DECREF(var_color);
var_color = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_segments);
var_segments = NULL;
Py_XDECREF(var_color);
var_color = NULL;
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
CHECK_OBJECT(par_console);
Py_DECREF(par_console);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_console);
Py_DECREF(par_console);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$renderables$background_screen$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$renderables$background_screen$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ac7ae7fc5030d2bcfd931cab58a1dbbd,
#endif
        code_objects_2128c15cdbd470eda554066235570215,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$renderables$background_screen,
        mod_consts.const_str_digest_8b41ff28e36e8d11ac26bfaea9728b35,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$renderables$background_screen$$$function__2_process_segments(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$renderables$background_screen$$$function__2_process_segments,
        mod_consts.const_str_plain_process_segments,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_926e6f799614d36ff93470d1a7aaa06a,
#endif
        code_objects_a265493a3d8bf5439df29b10b1f54b00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$renderables$background_screen,
        mod_consts.const_str_digest_8a62ef830801811dba39eb29d54d675a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$renderables$background_screen$$$function__3___rich_console__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$renderables$background_screen$$$function__3___rich_console__,
        mod_consts.const_str_plain___rich_console__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d16dcf13c3e93e8ecfc37265f33688fb,
#endif
        code_objects_89aac6224931068c219394bf8d92f921,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$renderables$background_screen,
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

static function_impl_code const function_table_textual$renderables$background_screen[] = {
impl_textual$renderables$background_screen$$$function__1___init__,
impl_textual$renderables$background_screen$$$function__2_process_segments,
impl_textual$renderables$background_screen$$$function__3___rich_console__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$renderables$background_screen);
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
        module_textual$renderables$background_screen,
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
        function_table_textual$renderables$background_screen,
        sizeof(function_table_textual$renderables$background_screen) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.renderables.background_screen";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$renderables$background_screen(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$renderables$background_screen");

    // Store the module for future use.
    module_textual$renderables$background_screen = module;

    moduledict_textual$renderables$background_screen = MODULE_DICT(module_textual$renderables$background_screen);

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
        PRINT_STRING("textual$renderables$background_screen: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$renderables$background_screen: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$renderables$background_screen: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.renderables.background_screen" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$renderables$background_screen\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$renderables$background_screen,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$renderables$background_screen,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$renderables$background_screen,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$renderables$background_screen,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$renderables$background_screen,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$renderables$background_screen);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$renderables$background_screen);
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

        UPDATE_STRING_DICT1(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$renderables$background_screen;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15 = NULL;
PyObject *tmp_dictset_value;
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
UPDATE_STRING_DICT0(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$renderables$background_screen = MAKE_MODULE_FRAME(code_objects_b016e069bc54d2313a22b2ef470bdea7, module_textual$renderables$background_screen);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$renderables$background_screen);
assert(Py_REFCNT(frame_frame_textual$renderables$background_screen) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$renderables$background_screen$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$renderables$background_screen$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_5 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_5);
tmp_import_from_1__module = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_6);
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
        (PyObject *)moduledict_textual$renderables$background_screen,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_7);
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
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$renderables$background_screen;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_52bf26be4588d7229c975a99e142ebdf_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$renderables$background_screen->m_frame.f_lineno = 5;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_2 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$renderables$background_screen,
        mod_consts.const_str_plain_Console,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Console);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_Console, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$renderables$background_screen,
        mod_consts.const_str_plain_ConsoleOptions,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ConsoleOptions);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_ConsoleOptions, tmp_assign_source_10);
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
        (PyObject *)moduledict_textual$renderables$background_screen,
        mod_consts.const_str_plain_RenderResult,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_RenderResult);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_RenderResult, tmp_assign_source_11);
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
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$renderables$background_screen;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Segment_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$renderables$background_screen->m_frame.f_lineno = 6;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$renderables$background_screen,
        mod_consts.const_str_plain_Segment,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Segment);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$renderables$background_screen;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Style_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$renderables$background_screen->m_frame.f_lineno = 7;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$renderables$background_screen,
        mod_consts.const_str_plain_Style,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Style);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_Style, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_270e542d7c0f48bdcb48007deb45ca83;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$renderables$background_screen;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Color_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$renderables$background_screen->m_frame.f_lineno = 9;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$renderables$background_screen,
        mod_consts.const_str_plain_Color,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Color);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_Color, tmp_assign_source_14);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_82624d202bf00dddc4e64760ae8710a3;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_0be6acbb10f77625382b783a4b5b600e;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_BackgroundScreen;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_15;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_5b867ac1daeee64e934eba06c3bb8ab1);

tmp_dictset_value = MAKE_FUNCTION_textual$renderables$background_screen$$$function__1___init__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_classmethod_arg_1;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_2e83e7aa0dbb087e6310c032df98c276);

tmp_classmethod_arg_1 = MAKE_FUNCTION_textual$renderables$background_screen$$$function__2_process_segments(tstate, tmp_annotations_2);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
CHECK_OBJECT(tmp_classmethod_arg_1);
Py_DECREF(tmp_classmethod_arg_1);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15, mod_consts.const_str_plain_process_segments, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_d2849d973cef618ef2f9b30f24b4da2f);

tmp_dictset_value = MAKE_FUNCTION_textual$renderables$background_screen$$$function__3___rich_console__(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15, mod_consts.const_str_plain___rich_console__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_screen_str_plain_color_tuple;
tmp_result = DICT_SET_ITEM(locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_BackgroundScreen;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$renderables$background_screen->m_frame.f_lineno = 15;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_18;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_17 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_17);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15);
locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15);
locals_textual$renderables$background_screen$$$class__1_BackgroundScreen_15 = NULL;
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
UPDATE_STRING_DICT1(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)mod_consts.const_str_plain_BackgroundScreen, tmp_assign_source_17);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$renderables$background_screen, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$renderables$background_screen->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$renderables$background_screen, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$renderables$background_screen);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$renderables$background_screen", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.renderables.background_screen" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$renderables$background_screen);
    return module_textual$renderables$background_screen;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$renderables$background_screen, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$renderables$background_screen", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

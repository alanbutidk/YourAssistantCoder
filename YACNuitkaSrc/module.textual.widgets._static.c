/* Generated code for Python module 'textual$widgets$_static'
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



/* The "module_textual$widgets$_static" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$widgets$_static;
PyDictObject *moduledict_textual$widgets$_static;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_tuple_bee06a0d36f01c6f92e15ef0b48c865c_tuple;
PyObject *const_str_plain_set_reactive;
PyObject *const_str_plain_Widget;
PyObject *const_str_plain_expand;
PyObject *const_str_plain_shrink;
PyObject *const_str_plain__Static__content;
PyObject *const_str_plain__Static__visual;
PyObject *const_str_plain_visualize;
PyObject *const_str_plain__render_markup;
PyObject *const_tuple_str_plain_markup_tuple;
PyObject *const_str_digest_dd5152868e0e6bfbcf2a4a17ad931735;
PyObject *const_str_digest_ca7357628c29e08d1942730578b2f25c;
PyObject *const_str_plain_clear_cached_dimensions;
PyObject *const_str_plain_refresh;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_layout_tuple;
PyObject *const_str_plain_visual;
PyObject *const_str_digest_e409a022a44bd42a112f5c248e8068f9;
PyObject *const_str_digest_f9bec672db65a14c427145c22526edc8;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_digest_1b00f9dbf1aac6a126d2652b3524d484;
PyObject *const_tuple_str_plain_Visual_str_plain_VisualType_str_plain_visualize_tuple;
PyObject *const_str_plain_Visual;
PyObject *const_str_plain_VisualType;
PyObject *const_str_digest_cedd216d41d29545a37269a9a7f4ddc6;
PyObject *const_tuple_str_plain_Widget_tuple;
PyObject *const_dict_66d76ec06d7757fabacf5fd2bf378afd;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Static;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_633dcd707105ca4a456fbda8f3770e71;
PyObject *const_str_digest_16127397a20bae98d9f4e81b3ca4d41e;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_12;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_45c61f575974cadaa1a6bc2116d60f6a;
PyObject *const_str_plain_DEFAULT_CSS;
PyObject *const_tuple_str_empty_tuple;
PyObject *const_dict_64bd7cdb8f1c9cdae0221e8a4084db16;
PyObject *const_dict_96bae17bdc25e131695483dd2176122b;
PyObject *const_str_digest_1c701f27a7a7a9ac2112ed2b9566c9a3;
PyObject *const_str_plain_property;
PyObject *const_dict_da793f45281631834bf999ef68e24496;
PyObject *const_str_digest_44b7ce9ae6e6b55be5008f6183b51c5e;
PyObject *const_dict_c90e9b5f4b7d2470fc43bd13d644a9d4;
PyObject *const_str_plain_content;
PyObject *const_str_digest_85469f76cc377ea0111972b4c542abe3;
PyObject *const_str_plain_setter;
PyObject *const_dict_a5e23b5275c74d1b1df02afcbfcf6d6b;
PyObject *const_dict_5c14c7fdfd34a59895e5d688ee950ced;
PyObject *const_str_plain_render;
PyObject *const_str_digest_3c8f1b5945bac38ab9e3259cd230d3f7;
PyObject *const_dict_19aa6f08e450c507c086872e2feb0353;
PyObject *const_dict_75ec57dab0634271a6def4d860026e9a;
PyObject *const_str_plain_update;
PyObject *const_str_digest_4aaad2f300b10177056c88931aed61ba;
PyObject *const_tuple_str_plain___content_str_plain___visual_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_66f87cfd0b8edf50127524e768e942d7;
PyObject *const_str_digest_ce5503bb0cf5a114a13d03d0780de7de;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_715949c3d9f22086fe02cb65c65a08d0_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_content_tuple;
PyObject *const_tuple_str_plain_self_str_plain_content_str_plain_layout_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[71];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.widgets._static"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_tuple_bee06a0d36f01c6f92e15ef0b48c865c_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_reactive);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Widget);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_expand);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_shrink);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__Static__content);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__Static__visual);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_visualize);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__render_markup);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_markup_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd5152868e0e6bfbcf2a4a17ad931735);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca7357628c29e08d1942730578b2f25c);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear_cached_dimensions);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_layout_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_visual);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_e409a022a44bd42a112f5c248e8068f9);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9bec672db65a14c427145c22526edc8);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b00f9dbf1aac6a126d2652b3524d484);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Visual_str_plain_VisualType_str_plain_visualize_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_Visual);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_VisualType);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_cedd216d41d29545a37269a9a7f4ddc6);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Widget_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_dict_66d76ec06d7757fabacf5fd2bf378afd);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Static);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_633dcd707105ca4a456fbda8f3770e71);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_16127397a20bae98d9f4e81b3ca4d41e);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_int_pos_12);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_45c61f575974cadaa1a6bc2116d60f6a);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CSS);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_dict_64bd7cdb8f1c9cdae0221e8a4084db16);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_dict_96bae17bdc25e131695483dd2176122b);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c701f27a7a7a9ac2112ed2b9566c9a3);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_dict_da793f45281631834bf999ef68e24496);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_44b7ce9ae6e6b55be5008f6183b51c5e);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_dict_c90e9b5f4b7d2470fc43bd13d644a9d4);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_85469f76cc377ea0111972b4c542abe3);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_setter);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_dict_a5e23b5275c74d1b1df02afcbfcf6d6b);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_dict_5c14c7fdfd34a59895e5d688ee950ced);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_render);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c8f1b5945bac38ab9e3259cd230d3f7);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_dict_19aa6f08e450c507c086872e2feb0353);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_dict_75ec57dab0634271a6def4d860026e9a);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_4aaad2f300b10177056c88931aed61ba);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___content_str_plain___visual_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_66f87cfd0b8edf50127524e768e942d7);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce5503bb0cf5a114a13d03d0780de7de);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_715949c3d9f22086fe02cb65c65a08d0_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_content_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_content_str_plain_layout_tuple);
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
void checkModuleConstants_textual$widgets$_static(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_tuple_bee06a0d36f01c6f92e15ef0b48c865c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bee06a0d36f01c6f92e15ef0b48c865c_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_reactive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_reactive);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Widget));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Widget);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_expand));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expand);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_shrink));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shrink);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__Static__content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Static__content);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__Static__visual));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Static__visual);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_visualize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_visualize);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__render_markup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__render_markup);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_markup_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_markup_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd5152868e0e6bfbcf2a4a17ad931735));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd5152868e0e6bfbcf2a4a17ad931735);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca7357628c29e08d1942730578b2f25c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca7357628c29e08d1942730578b2f25c);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear_cached_dimensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear_cached_dimensions);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_layout_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_layout_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_visual));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_visual);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_e409a022a44bd42a112f5c248e8068f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e409a022a44bd42a112f5c248e8068f9);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9bec672db65a14c427145c22526edc8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9bec672db65a14c427145c22526edc8);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b00f9dbf1aac6a126d2652b3524d484));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b00f9dbf1aac6a126d2652b3524d484);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Visual_str_plain_VisualType_str_plain_visualize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Visual_str_plain_VisualType_str_plain_visualize_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_Visual));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Visual);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_VisualType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VisualType);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_cedd216d41d29545a37269a9a7f4ddc6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cedd216d41d29545a37269a9a7f4ddc6);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Widget_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Widget_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_dict_66d76ec06d7757fabacf5fd2bf378afd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_66d76ec06d7757fabacf5fd2bf378afd);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Static));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Static);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_633dcd707105ca4a456fbda8f3770e71));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_633dcd707105ca4a456fbda8f3770e71);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_16127397a20bae98d9f4e81b3ca4d41e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16127397a20bae98d9f4e81b3ca4d41e);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_int_pos_12));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_12);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_45c61f575974cadaa1a6bc2116d60f6a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45c61f575974cadaa1a6bc2116d60f6a);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CSS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_CSS);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_dict_64bd7cdb8f1c9cdae0221e8a4084db16));
CHECK_OBJECT_DEEP(mod_consts.const_dict_64bd7cdb8f1c9cdae0221e8a4084db16);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_dict_96bae17bdc25e131695483dd2176122b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_96bae17bdc25e131695483dd2176122b);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c701f27a7a7a9ac2112ed2b9566c9a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c701f27a7a7a9ac2112ed2b9566c9a3);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_dict_da793f45281631834bf999ef68e24496));
CHECK_OBJECT_DEEP(mod_consts.const_dict_da793f45281631834bf999ef68e24496);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_44b7ce9ae6e6b55be5008f6183b51c5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44b7ce9ae6e6b55be5008f6183b51c5e);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_dict_c90e9b5f4b7d2470fc43bd13d644a9d4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c90e9b5f4b7d2470fc43bd13d644a9d4);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_85469f76cc377ea0111972b4c542abe3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85469f76cc377ea0111972b4c542abe3);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_setter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setter);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_dict_a5e23b5275c74d1b1df02afcbfcf6d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a5e23b5275c74d1b1df02afcbfcf6d6b);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_dict_5c14c7fdfd34a59895e5d688ee950ced));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5c14c7fdfd34a59895e5d688ee950ced);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_render));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c8f1b5945bac38ab9e3259cd230d3f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c8f1b5945bac38ab9e3259cd230d3f7);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_dict_19aa6f08e450c507c086872e2feb0353));
CHECK_OBJECT_DEEP(mod_consts.const_dict_19aa6f08e450c507c086872e2feb0353);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_dict_75ec57dab0634271a6def4d860026e9a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_75ec57dab0634271a6def4d860026e9a);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_4aaad2f300b10177056c88931aed61ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4aaad2f300b10177056c88931aed61ba);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___content_str_plain___visual_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___content_str_plain___visual_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_66f87cfd0b8edf50127524e768e942d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_66f87cfd0b8edf50127524e768e942d7);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce5503bb0cf5a114a13d03d0780de7de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce5503bb0cf5a114a13d03d0780de7de);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_715949c3d9f22086fe02cb65c65a08d0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_715949c3d9f22086fe02cb65c65a08d0_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_content_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_content_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_content_str_plain_layout_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_content_str_plain_layout_tuple);
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
static PyObject *module_var_accessor_textual$widgets$_static$Widget(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_static->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_static->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)mod_consts.const_str_plain_Widget);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_static->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Widget);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Widget, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Widget);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Widget, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)mod_consts.const_str_plain_Widget);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)mod_consts.const_str_plain_Widget);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Widget);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_static$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_static->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_static->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_static->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_static$visualize(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_static->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_static->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)mod_consts.const_str_plain_visualize);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_static->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_visualize);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_visualize, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_visualize);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_visualize, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)mod_consts.const_str_plain_visualize);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)mod_consts.const_str_plain_visualize);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_visualize);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_6410b7f18b82ab39fa637a5c09753b05;
static PyCodeObject *code_objects_5bf940b814e3c390c1ac8910a67d764f;
static PyCodeObject *code_objects_460261d4c7601a90605494dc2a98ff18;
static PyCodeObject *code_objects_38c492c6a5663619460294bde11d73ab;
static PyCodeObject *code_objects_272182e048021699778cdabcaca89b41;
static PyCodeObject *code_objects_58f52d9fd89c01d5e9d89b8beda0d8ec;
static PyCodeObject *code_objects_a5660dba54d69132693baadd791b6d9d;
static PyCodeObject *code_objects_37a0d306f0b1b2dfe863869b7a20f93d;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_66f87cfd0b8edf50127524e768e942d7); CHECK_OBJECT(module_filename_obj);
code_objects_6410b7f18b82ab39fa637a5c09753b05 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_ce5503bb0cf5a114a13d03d0780de7de, mod_consts.const_str_digest_ce5503bb0cf5a114a13d03d0780de7de, NULL, NULL, 0, 0, 0);
code_objects_5bf940b814e3c390c1ac8910a67d764f = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Static, mod_consts.const_str_plain_Static, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_460261d4c7601a90605494dc2a98ff18 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_1c701f27a7a7a9ac2112ed2b9566c9a3, mod_consts.const_tuple_715949c3d9f22086fe02cb65c65a08d0_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 7, 0);
code_objects_38c492c6a5663619460294bde11d73ab = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_content, mod_consts.const_str_digest_85469f76cc377ea0111972b4c542abe3, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_272182e048021699778cdabcaca89b41 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_content, mod_consts.const_str_digest_85469f76cc377ea0111972b4c542abe3, mod_consts.const_tuple_str_plain_self_str_plain_content_tuple, NULL, 2, 0, 0);
code_objects_58f52d9fd89c01d5e9d89b8beda0d8ec = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render, mod_consts.const_str_digest_3c8f1b5945bac38ab9e3259cd230d3f7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a5660dba54d69132693baadd791b6d9d = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_4aaad2f300b10177056c88931aed61ba, mod_consts.const_tuple_str_plain_self_str_plain_content_str_plain_layout_tuple, NULL, 2, 1, 0);
code_objects_37a0d306f0b1b2dfe863869b7a20f93d = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_visual, mod_consts.const_str_digest_44b7ce9ae6e6b55be5008f6183b51c5e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$widgets$_static$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$widgets$_static$$$function__2_visual(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_static$$$function__3_content(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_static$$$function__4_content(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_static$$$function__5_render(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_static$$$function__6_update(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$widgets$_static$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_content = python_pars[1];
PyObject *par_expand = python_pars[2];
PyObject *par_shrink = python_pars[3];
PyObject *par_markup = python_pars[4];
PyObject *par_name = python_pars[5];
PyObject *par_id = python_pars[6];
PyObject *par_classes = python_pars[7];
PyObject *par_disabled = python_pars[8];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_static$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_static$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_static$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_static$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_static$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_static$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_460261d4c7601a90605494dc2a98ff18, module_textual$widgets$_static, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_static$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$widgets$_static$$$function__1___init__ = cache_frame_frame_textual$widgets$_static$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_static$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$widgets$_static$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 44;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_textual$widgets$_static, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_kw_call_value_0_1 = par_name;
CHECK_OBJECT(par_id);
tmp_kw_call_value_1_1 = par_id;
CHECK_OBJECT(par_classes);
tmp_kw_call_value_2_1 = par_classes;
CHECK_OBJECT(par_disabled);
tmp_kw_call_value_3_1 = par_disabled;
CHECK_OBJECT(par_markup);
tmp_kw_call_value_4_1 = par_markup;
frame_frame_textual$widgets$_static$$$function__1___init__->m_frame.f_lineno = 44;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_bee06a0d36f01c6f92e15ef0b48c865c_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_set_reactive);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_textual$widgets$_static$Widget(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Widget);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 47;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_expand);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 47;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_expand);
tmp_args_element_value_2 = par_expand;
frame_frame_textual$widgets$_static$$$function__1___init__->m_frame.f_lineno = 47;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_set_reactive);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_textual$widgets$_static$Widget(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Widget);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 48;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_shrink);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 48;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_shrink);
tmp_args_element_value_4 = par_shrink;
frame_frame_textual$widgets$_static$$$function__1___init__->m_frame.f_lineno = 48;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_content);
tmp_assattr_value_1 = par_content;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__Static__content, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__Static__visual, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_static$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_static$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_static$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_static$$$function__1___init__,
    type_description_1,
    par_self,
    par_content,
    par_expand,
    par_shrink,
    par_markup,
    par_name,
    par_id,
    par_classes,
    par_disabled,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_static$$$function__1___init__ == cache_frame_frame_textual$widgets$_static$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_static$$$function__1___init__);
    cache_frame_frame_textual$widgets$_static$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_static$$$function__1___init__);

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
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_expand);
Py_DECREF(par_expand);
CHECK_OBJECT(par_shrink);
Py_DECREF(par_shrink);
CHECK_OBJECT(par_markup);
Py_DECREF(par_markup);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_id);
Py_DECREF(par_id);
CHECK_OBJECT(par_classes);
Py_DECREF(par_classes);
CHECK_OBJECT(par_disabled);
Py_DECREF(par_disabled);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_expand);
Py_DECREF(par_expand);
CHECK_OBJECT(par_shrink);
Py_DECREF(par_shrink);
CHECK_OBJECT(par_markup);
Py_DECREF(par_markup);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_id);
Py_DECREF(par_id);
CHECK_OBJECT(par_classes);
Py_DECREF(par_classes);
CHECK_OBJECT(par_disabled);
Py_DECREF(par_disabled);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_static$$$function__2_visual(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_static$$$function__2_visual;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_static$$$function__2_visual = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_static$$$function__2_visual)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_static$$$function__2_visual);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_static$$$function__2_visual == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_static$$$function__2_visual = MAKE_FUNCTION_FRAME(tstate, code_objects_37a0d306f0b1b2dfe863869b7a20f93d, module_textual$widgets$_static, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_static$$$function__2_visual->m_type_description == NULL);
frame_frame_textual$widgets$_static$$$function__2_visual = cache_frame_frame_textual$widgets$_static$$$function__2_visual;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_static$$$function__2_visual);
assert(Py_REFCNT(frame_frame_textual$widgets$_static$$$function__2_visual) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__Static__visual);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_1;
tmp_called_value_1 = module_var_accessor_textual$widgets$_static$visualize(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_visualize);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_0_1 = par_self;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__Static__content);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__render_markup);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 62;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_static$$$function__2_visual->m_frame.f_lineno = 62;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_markup_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__Static__visual, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__Static__visual);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_static$$$function__2_visual, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_static$$$function__2_visual->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_static$$$function__2_visual, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_static$$$function__2_visual,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_static$$$function__2_visual == cache_frame_frame_textual$widgets$_static$$$function__2_visual) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_static$$$function__2_visual);
    cache_frame_frame_textual$widgets$_static$$$function__2_visual = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_static$$$function__2_visual);

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


static PyObject *impl_textual$widgets$_static$$$function__3_content(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_static$$$function__3_content;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_static$$$function__3_content = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_static$$$function__3_content)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_static$$$function__3_content);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_static$$$function__3_content == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_static$$$function__3_content = MAKE_FUNCTION_FRAME(tstate, code_objects_38c492c6a5663619460294bde11d73ab, module_textual$widgets$_static, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_static$$$function__3_content->m_type_description == NULL);
frame_frame_textual$widgets$_static$$$function__3_content = cache_frame_frame_textual$widgets$_static$$$function__3_content;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_static$$$function__3_content);
assert(Py_REFCNT(frame_frame_textual$widgets$_static$$$function__3_content) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__Static__content);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_static$$$function__3_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_static$$$function__3_content->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_static$$$function__3_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_static$$$function__3_content,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_static$$$function__3_content == cache_frame_frame_textual$widgets$_static$$$function__3_content) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_static$$$function__3_content);
    cache_frame_frame_textual$widgets$_static$$$function__3_content = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_static$$$function__3_content);

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


static PyObject *impl_textual$widgets$_static$$$function__4_content(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_content = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_static$$$function__4_content;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_static$$$function__4_content = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_static$$$function__4_content)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_static$$$function__4_content);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_static$$$function__4_content == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_static$$$function__4_content = MAKE_FUNCTION_FRAME(tstate, code_objects_272182e048021699778cdabcaca89b41, module_textual$widgets$_static, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_static$$$function__4_content->m_type_description == NULL);
frame_frame_textual$widgets$_static$$$function__4_content = cache_frame_frame_textual$widgets$_static$$$function__4_content;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_static$$$function__4_content);
assert(Py_REFCNT(frame_frame_textual$widgets$_static$$$function__4_content) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_content);
tmp_assattr_value_1 = par_content;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__Static__content, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_2;
tmp_called_value_1 = module_var_accessor_textual$widgets$_static$visualize(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_visualize);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_0_1 = par_self;
CHECK_OBJECT(par_content);
tmp_kw_call_arg_value_1_1 = par_content;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__render_markup);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_static$$$function__4_content->m_frame.f_lineno = 73;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_markup_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__Static__visual, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$widgets$_static$$$function__4_content->m_frame.f_lineno = 74;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_clear_cached_dimensions);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_refresh);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_static$$$function__4_content->m_frame.f_lineno = 75;
tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_layout_tuple);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_static$$$function__4_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_static$$$function__4_content->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_static$$$function__4_content, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_static$$$function__4_content,
    type_description_1,
    par_self,
    par_content
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_static$$$function__4_content == cache_frame_frame_textual$widgets$_static$$$function__4_content) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_static$$$function__4_content);
    cache_frame_frame_textual$widgets$_static$$$function__4_content = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_static$$$function__4_content);

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
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_static$$$function__5_render(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_static$$$function__5_render;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_static$$$function__5_render = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_static$$$function__5_render)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_static$$$function__5_render);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_static$$$function__5_render == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_static$$$function__5_render = MAKE_FUNCTION_FRAME(tstate, code_objects_58f52d9fd89c01d5e9d89b8beda0d8ec, module_textual$widgets$_static, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_static$$$function__5_render->m_type_description == NULL);
frame_frame_textual$widgets$_static$$$function__5_render = cache_frame_frame_textual$widgets$_static$$$function__5_render;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_static$$$function__5_render);
assert(Py_REFCNT(frame_frame_textual$widgets$_static$$$function__5_render) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_visual);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_static$$$function__5_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_static$$$function__5_render->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_static$$$function__5_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_static$$$function__5_render,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_static$$$function__5_render == cache_frame_frame_textual$widgets$_static$$$function__5_render) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_static$$$function__5_render);
    cache_frame_frame_textual$widgets$_static$$$function__5_render = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_static$$$function__5_render);

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


static PyObject *impl_textual$widgets$_static$$$function__6_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_content = python_pars[1];
PyObject *par_layout = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_static$$$function__6_update;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_static$$$function__6_update = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_static$$$function__6_update)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_static$$$function__6_update);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_static$$$function__6_update == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_static$$$function__6_update = MAKE_FUNCTION_FRAME(tstate, code_objects_a5660dba54d69132693baadd791b6d9d, module_textual$widgets$_static, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_static$$$function__6_update->m_type_description == NULL);
frame_frame_textual$widgets$_static$$$function__6_update = cache_frame_frame_textual$widgets$_static$$$function__6_update;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_static$$$function__6_update);
assert(Py_REFCNT(frame_frame_textual$widgets$_static$$$function__6_update) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_content);
tmp_assattr_value_1 = par_content;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__Static__content, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_2;
tmp_called_value_1 = module_var_accessor_textual$widgets$_static$visualize(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_visualize);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_0_1 = par_self;
CHECK_OBJECT(par_content);
tmp_kw_call_arg_value_1_1 = par_content;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__render_markup);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_static$$$function__6_update->m_frame.f_lineno = 94;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_markup_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__Static__visual, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_refresh);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_layout);
tmp_kw_call_value_0_1 = par_layout;
frame_frame_textual$widgets$_static$$$function__6_update->m_frame.f_lineno = 95;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_layout_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_static$$$function__6_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_static$$$function__6_update->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_static$$$function__6_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_static$$$function__6_update,
    type_description_1,
    par_self,
    par_content,
    par_layout
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_static$$$function__6_update == cache_frame_frame_textual$widgets$_static$$$function__6_update) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_static$$$function__6_update);
    cache_frame_frame_textual$widgets$_static$$$function__6_update = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_static$$$function__6_update);

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
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_layout);
Py_DECREF(par_layout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_layout);
Py_DECREF(par_layout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_static$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_static$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1c701f27a7a7a9ac2112ed2b9566c9a3,
#endif
        code_objects_460261d4c7601a90605494dc2a98ff18,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_textual$widgets$_static,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_static$$$function__2_visual(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_static$$$function__2_visual,
        mod_consts.const_str_plain_visual,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_44b7ce9ae6e6b55be5008f6183b51c5e,
#endif
        code_objects_37a0d306f0b1b2dfe863869b7a20f93d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_static,
        mod_consts.const_str_digest_dd5152868e0e6bfbcf2a4a17ad931735,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_static$$$function__3_content(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_static$$$function__3_content,
        mod_consts.const_str_plain_content,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_85469f76cc377ea0111972b4c542abe3,
#endif
        code_objects_38c492c6a5663619460294bde11d73ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_static,
        mod_consts.const_str_digest_ca7357628c29e08d1942730578b2f25c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_static$$$function__4_content(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_static$$$function__4_content,
        mod_consts.const_str_plain_content,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_85469f76cc377ea0111972b4c542abe3,
#endif
        code_objects_272182e048021699778cdabcaca89b41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_static,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_static$$$function__5_render(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_static$$$function__5_render,
        mod_consts.const_str_plain_render,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3c8f1b5945bac38ab9e3259cd230d3f7,
#endif
        code_objects_58f52d9fd89c01d5e9d89b8beda0d8ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_static,
        mod_consts.const_str_digest_e409a022a44bd42a112f5c248e8068f9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_static$$$function__6_update(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_static$$$function__6_update,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4aaad2f300b10177056c88931aed61ba,
#endif
        code_objects_a5660dba54d69132693baadd791b6d9d,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_textual$widgets$_static,
        mod_consts.const_str_digest_f9bec672db65a14c427145c22526edc8,
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

static function_impl_code const function_table_textual$widgets$_static[] = {
impl_textual$widgets$_static$$$function__1___init__,
impl_textual$widgets$_static$$$function__2_visual,
impl_textual$widgets$_static$$$function__3_content,
impl_textual$widgets$_static$$$function__4_content,
impl_textual$widgets$_static$$$function__5_render,
impl_textual$widgets$_static$$$function__6_update,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$widgets$_static);
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
        module_textual$widgets$_static,
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
        function_table_textual$widgets$_static,
        sizeof(function_table_textual$widgets$_static) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.widgets._static";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$widgets$_static(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$widgets$_static");

    // Store the module for future use.
    module_textual$widgets$_static = module;

    moduledict_textual$widgets$_static = MODULE_DICT(module_textual$widgets$_static);

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
        PRINT_STRING("textual$widgets$_static: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$widgets$_static: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$widgets$_static: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.widgets._static" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$widgets$_static\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$widgets$_static,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$widgets$_static,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$widgets$_static,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$widgets$_static,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$widgets$_static,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$widgets$_static);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$widgets$_static);
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

        UPDATE_STRING_DICT1(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_static;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_textual$widgets$_static$$$class__1_Static_12 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_static$$$class__1_Static_2;
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
UPDATE_STRING_DICT0(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$widgets$_static = MAKE_MODULE_FRAME(code_objects_6410b7f18b82ab39fa637a5c09753b05, module_textual$widgets$_static);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_static);
assert(Py_REFCNT(frame_frame_textual$widgets$_static) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$widgets$_static$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$widgets$_static$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$widgets$_static, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$widgets$_static, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_1b00f9dbf1aac6a126d2652b3524d484;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$widgets$_static;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Visual_str_plain_VisualType_str_plain_visualize_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$widgets$_static->m_frame.f_lineno = 8;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

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
        (PyObject *)moduledict_textual$widgets$_static,
        mod_consts.const_str_plain_Visual,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Visual);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_static, (Nuitka_StringObject *)mod_consts.const_str_plain_Visual, tmp_assign_source_7);
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
        (PyObject *)moduledict_textual$widgets$_static,
        mod_consts.const_str_plain_VisualType,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_VisualType);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_static, (Nuitka_StringObject *)mod_consts.const_str_plain_VisualType, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$widgets$_static,
        mod_consts.const_str_plain_visualize,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_visualize);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_static, (Nuitka_StringObject *)mod_consts.const_str_plain_visualize, tmp_assign_source_9);
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
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_cedd216d41d29545a37269a9a7f4ddc6;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$widgets$_static;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Widget_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$widgets$_static->m_frame.f_lineno = 9;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$widgets$_static,
        mod_consts.const_str_plain_Widget,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Widget);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_static, (Nuitka_StringObject *)mod_consts.const_str_plain_Widget, tmp_assign_source_10);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_textual$widgets$_static$Widget(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_assign_source_11 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_11, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_12 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = DICT_COPY(tstate, mod_consts.const_dict_66d76ec06d7757fabacf5fd2bf378afd);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
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


exception_lineno = 12;

    goto try_except_handler_2;
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


exception_lineno = 12;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_14 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_14;
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


exception_lineno = 12;

    goto try_except_handler_2;
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
PyObject *tmp_assign_source_15;
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


exception_lineno = 12;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Static;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$widgets$_static->m_frame.f_lineno = 12;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
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


exception_lineno = 12;

    goto try_except_handler_2;
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
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
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


exception_lineno = 12;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
frame_frame_textual$widgets$_static->m_frame.f_lineno = 12;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 12;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_16;
}
branch_end_1:;
{
PyObject *tmp_assign_source_17;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$widgets$_static$$$class__1_Static_12 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_633dcd707105ca4a456fbda8f3770e71;
tmp_res = PyObject_SetItem(locals_textual$widgets$_static$$$class__1_Static_12, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_16127397a20bae98d9f4e81b3ca4d41e;
tmp_res = PyObject_SetItem(locals_textual$widgets$_static$$$class__1_Static_12, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_Static;
tmp_res = PyObject_SetItem(locals_textual$widgets$_static$$$class__1_Static_12, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_12;
tmp_res = PyObject_SetItem(locals_textual$widgets$_static$$$class__1_Static_12, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
frame_frame_textual$widgets$_static$$$class__1_Static_2 = MAKE_CLASS_FRAME(tstate, code_objects_5bf940b814e3c390c1ac8910a67d764f, module_textual$widgets$_static, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_static$$$class__1_Static_2);
assert(Py_REFCNT(frame_frame_textual$widgets$_static$$$class__1_Static_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_digest_45c61f575974cadaa1a6bc2116d60f6a;
tmp_res = PyObject_SetItem(locals_textual$widgets$_static$$$class__1_Static_12, mod_consts.const_str_plain_DEFAULT_CSS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_1 = mod_consts.const_tuple_str_empty_tuple;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_64bd7cdb8f1c9cdae0221e8a4084db16);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_96bae17bdc25e131695483dd2176122b);
Py_INCREF(tmp_defaults_1);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_static$$$function__1___init__(tstate, tmp_defaults_1, tmp_kw_defaults_1, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_textual$widgets$_static$$$class__1_Static_12, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_2;
tmp_called_value_2 = PyObject_GetItem(locals_textual$widgets$_static$$$class__1_Static_12, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_da793f45281631834bf999ef68e24496);

tmp_args_element_value_1 = MAKE_FUNCTION_textual$widgets$_static$$$function__2_visual(tstate, tmp_annotations_2);

frame_frame_textual$widgets$_static$$$class__1_Static_2->m_frame.f_lineno = 52;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$widgets$_static$$$class__1_Static_12, mod_consts.const_str_plain_visual, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_3;
tmp_called_value_3 = PyObject_GetItem(locals_textual$widgets$_static$$$class__1_Static_12, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_c90e9b5f4b7d2470fc43bd13d644a9d4);

tmp_args_element_value_2 = MAKE_FUNCTION_textual$widgets$_static$$$function__3_content(tstate, tmp_annotations_3);

frame_frame_textual$widgets$_static$$$class__1_Static_2->m_frame.f_lineno = 65;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$widgets$_static$$$class__1_Static_12, mod_consts.const_str_plain_content, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_4;
tmp_called_instance_1 = PyObject_GetItem(locals_textual$widgets$_static$$$class__1_Static_12, mod_consts.const_str_plain_content);

if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_content);

exception_lineno = 70;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_a5e23b5275c74d1b1df02afcbfcf6d6b);

tmp_args_element_value_3 = MAKE_FUNCTION_textual$widgets$_static$$$function__4_content(tstate, tmp_annotations_4);

frame_frame_textual$widgets$_static$$$class__1_Static_2->m_frame.f_lineno = 70;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_setter, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$widgets$_static$$$class__1_Static_12, mod_consts.const_str_plain_content, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_5c14c7fdfd34a59895e5d688ee950ced);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_static$$$function__5_render(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_textual$widgets$_static$$$class__1_Static_12, mod_consts.const_str_plain_render, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_6;
tmp_defaults_2 = mod_consts.const_tuple_str_empty_tuple;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_19aa6f08e450c507c086872e2feb0353);
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_75ec57dab0634271a6def4d860026e9a);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_static$$$function__6_update(tstate, tmp_defaults_2, tmp_kw_defaults_2, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_textual$widgets$_static$$$class__1_Static_12, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_static$$$class__1_Static_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_static$$$class__1_Static_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_static$$$class__1_Static_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_static$$$class__1_Static_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$widgets$_static$$$class__1_Static_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain___content_str_plain___visual_tuple;
tmp_res = PyObject_SetItem(locals_textual$widgets$_static$$$class__1_Static_12, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
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


exception_lineno = 12;

    goto try_except_handler_4;
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
tmp_res = PyObject_SetItem(locals_textual$widgets$_static$$$class__1_Static_12, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Static;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_textual$widgets$_static$$$class__1_Static_12;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$widgets$_static->m_frame.f_lineno = 12;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_18);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_17 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_17);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_textual$widgets$_static$$$class__1_Static_12);
locals_textual$widgets$_static$$$class__1_Static_12 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_static$$$class__1_Static_12);
locals_textual$widgets$_static$$$class__1_Static_12 = NULL;
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
exception_lineno = 12;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$widgets$_static, (Nuitka_StringObject *)mod_consts.const_str_plain_Static, tmp_assign_source_17);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_static, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_static->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_static, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$widgets$_static);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$widgets$_static", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.widgets._static" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$widgets$_static);
    return module_textual$widgets$_static;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_static, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$widgets$_static", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

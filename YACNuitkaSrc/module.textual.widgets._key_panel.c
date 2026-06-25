/* Generated code for Python module 'textual$widgets$_key_panel'
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



/* The "module_textual$widgets$_key_panel" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$widgets$_key_panel;
PyDictObject *moduledict_textual$widgets$_key_panel;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_screen;
PyObject *const_str_plain_active_bindings;
PyObject *const_str_plain_values;
PyObject *const_str_plain_get_component_rich_style;
PyObject *const_tuple_str_digest_dfeb9cb84e163a299edac78fc068cf57_tuple;
PyObject *const_str_plain_get_component_styles;
PyObject *const_tuple_str_digest_815bc0d341ccc35d4f29c17e42c5b634_tuple;
PyObject *const_str_plain_color;
PyObject *const_str_plain_a;
PyObject *const_str_plain_Table;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_plain_box;
PyObject *const_str_plain_SIMPLE;
PyObject *const_str_plain_HORIZONTALS;
PyObject *const_tuple_6e1ba25934e2a0ac6d8aae610aa23d84_tuple;
PyObject *const_str_plain_add_column;
PyObject *const_tuple_str_empty_str_plain_right_tuple;
PyObject *const_tuple_str_plain_justify_tuple;
PyObject *const_tuple_str_digest_fc66296c479bd18c08e900cbce126aa0_tuple;
PyObject *const_str_plain_groupby;
PyObject *const_str_plain_itemgetter;
PyObject *const_tuple_int_0_tuple;
PyObject *const_tuple_str_plain_key_tuple;
PyObject *const_str_plain_BINDING_GROUP_TITLE;
PyObject *const_str_plain_Text;
PyObject *const_dict_f2db04d3b784bf8416a3b4d843a160af;
PyObject *const_str_plain_stylize;
PyObject *const_str_plain_header_style;
PyObject *const_str_plain_table;
PyObject *const_str_plain_add_row;
PyObject *const_str_plain_defaultdict;
PyObject *const_tuple_type_list_tuple;
PyObject *const_str_plain_system;
PyObject *const_str_plain_action;
PyObject *const_str_plain_append;
PyObject *const_str_plain_self;
PyObject *const_tuple_str_digest_c69bfe30fd473e31db7bbc1492e50f76_tuple;
PyObject *const_dict_6bf47fdd7085923921d162f93fa92698;
PyObject *const_str_digest_c7ae10fe870b8ae7625a70e90e049a10;
PyObject *const_str_plain_render_description;
PyObject *const_str_digest_772bcd909123780b236937ff58ad723d;
PyObject *const_str_plain_app;
PyObject *const_str_plain_get_key_display;
PyObject *const_str_space;
PyObject *const_str_plain_key_style;
PyObject *const_tuple_str_plain_style_tuple;
PyObject *const_str_plain_previous_namespace;
PyObject *const_str_plain_add_section;
PyObject *const_str_digest_a2e44f038e467320507affcb33c46401;
PyObject *const_str_plain_from_markup;
PyObject *const_str_plain_description;
PyObject *const_str_plain_description_style;
PyObject *const_tuple_str_plain_end_str_plain_style_tuple;
PyObject *const_str_plain_tooltip;
PyObject *const_tuple_str_space_tuple;
PyObject *const_str_plain_dim;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_5b5e902a75193c56e3760aaea17db8e4;
PyObject *const_str_plain_render_bindings_table;
PyObject *const_str_plain_BindingsTable;
PyObject *const_tuple_true_false_tuple;
PyObject *const_tuple_str_plain_shrink_str_plain_expand_tuple;
PyObject *const_str_plain_compose;
PyObject *const_str_digest_8142f3eb5d0acc9611dc2470035f46b0;
PyObject *const_dict_e314a0d832df76a7335d922207e90ad6;
PyObject *const_str_digest_9964fe6ca285541a54877c78dca2d51a;
PyObject *const_str_plain_bindings_changed;
PyObject *const_str_digest_8fd8024614ce5c46cfbcfdeef6d78c04;
PyObject *const_str_plain__bindings_changed;
PyObject *const_str_digest_1d4f82d87e5602fb9042ed1ad79abc2b;
PyObject *const_str_plain_set_class;
PyObject *const_str_plain_ansi_color;
PyObject *const_str_digest_7bf314d8d88893d5574e2dd389ba9447;
PyObject *const_str_plain_bindings_updated_signal;
PyObject *const_str_plain_subscribe;
PyObject *const_str_plain_on_mount;
PyObject *const_str_digest_7a60c26586f3e937181bfe88cf6d9fe9;
PyObject *const_str_plain_app_focus;
PyObject *const_str_plain_is_attached;
PyObject *const_str_plain_mount_screen;
PyObject *const_str_plain_recompose;
PyObject *const_str_plain_call_after_refresh;
PyObject *const_str_plain_unsubscribe;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_collections;
PyObject *const_tuple_str_plain_defaultdict_tuple;
PyObject *const_str_plain_itertools;
PyObject *const_tuple_str_plain_groupby_tuple;
PyObject *const_str_plain_operator;
PyObject *const_tuple_str_plain_itemgetter_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_rich;
PyObject *const_tuple_str_plain_box_tuple;
PyObject *const_str_digest_4b8f91bec518130c8fda9cccc2a0bf69;
PyObject *const_tuple_str_plain_Table_tuple;
PyObject *const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e;
PyObject *const_tuple_str_plain_Text_tuple;
PyObject *const_str_digest_4b198d212d9a0bf540e5157dbac1b8bd;
PyObject *const_tuple_str_plain_ComposeResult_tuple;
PyObject *const_str_plain_ComposeResult;
PyObject *const_str_digest_d2a246f6e260a2c4ad9692789d633ead;
PyObject *const_tuple_str_plain_Binding_tuple;
PyObject *const_str_plain_Binding;
PyObject *const_str_digest_45837af94bae6220963db538704d20ea;
PyObject *const_tuple_str_plain_VerticalScroll_tuple;
PyObject *const_str_plain_VerticalScroll;
PyObject *const_str_digest_09eff8b7f8b8176140fd165775b873cd;
PyObject *const_tuple_str_plain_Static_tuple;
PyObject *const_str_plain_Static;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_1b725ea641cf008f1c7db2f35336f6e8;
PyObject *const_str_digest_429a0ded05bd2732870cab3e35b20f6d;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_21;
PyObject *const_str_plain___firstlineno__;
PyObject *const_set_2742763883a4d04982f00e90435bb07f;
PyObject *const_str_plain_COMPONENT_CLASSES;
PyObject *const_str_digest_6fb6a0a25b3f6edfc5a0dd56b5908219;
PyObject *const_str_plain_DEFAULT_CSS;
PyObject *const_dict_908bc31258b6b42268d142309b7d5f1a;
PyObject *const_str_digest_16ea4db472d1aa41f79461fa542b4e91;
PyObject *const_str_plain_render;
PyObject *const_str_digest_78eed0c0182ee73b3031aaa49da6d521;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_9477b962e9893e35c25977a84e86f195;
PyObject *const_str_plain_KeyPanel;
PyObject *const_str_digest_4afd66d677da3777871c370faf72c0bd;
PyObject *const_int_pos_117;
PyObject *const_str_digest_00c2d1e8fb807429d38afc82f4543557;
PyObject *const_str_digest_5b4d179610cdf73833819673f735c2fb;
PyObject *const_str_plain_DEFAULT_CLASSES;
PyObject *const_dict_45f8252a11e5e4152cf13f146844ebd3;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain_on_unmount;
PyObject *const_str_digest_5cf7c502ae052ffb1edf3bc7d5e1f552;
PyObject *const_str_digest_80351a62eafc87461655bac7c5cb3b78;
PyObject *const_tuple_faed6a6745edf10d543d43fe95111ec5_tuple;
PyObject *const_str_digest_ba95d27ef8218d98e1d0c03a09626f62;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_screen_str_plain_self_str_plain_bindings_changed_tuple;
PyObject *const_tuple_str_plain_bindings_changed_str_plain_self_tuple;
PyObject *const_tuple_str_plain_screen_str_plain_self_str_plain_mount_screen_tuple;
PyObject *const_tuple_str_plain_mount_screen_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_4cbb65e57d8348f4e3f5efdeb7ced1a1_tuple;
PyObject *const_tuple_eb79a65dc1db4fb468ccb6d7a124a2b0_tuple;
PyObject *const_tuple_str_plain_binding_str_plain_text_str_plain_description_style_tuple;
PyObject *const_tuple_str_plain_description_style_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[154];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.widgets._key_panel"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_screen);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_active_bindings);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_component_rich_style);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_dfeb9cb84e163a299edac78fc068cf57_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_component_styles);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_815bc0d341ccc35d4f29c17e42c5b634_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_color);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_a);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_Table);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_box);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_SIMPLE);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_HORIZONTALS);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_6e1ba25934e2a0ac6d8aae610aa23d84_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_column);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_str_plain_right_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_justify_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fc66296c479bd18c08e900cbce126aa0_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_groupby);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_itemgetter);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_BINDING_GROUP_TITLE);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_Text);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_dict_f2db04d3b784bf8416a3b4d843a160af);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_stylize);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_header_style);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_table);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_row);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_defaultdict);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_type_list_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_system);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_action);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c69bfe30fd473e31db7bbc1492e50f76_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_dict_6bf47fdd7085923921d162f93fa92698);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7ae10fe870b8ae7625a70e90e049a10);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_render_description);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_772bcd909123780b236937ff58ad723d);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_key_display);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_style);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_style_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_previous_namespace);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_section);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2e44f038e467320507affcb33c46401);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_markup);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_description);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_description_style);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_end_str_plain_style_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_tooltip);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_space_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_dim);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b5e902a75193c56e3760aaea17db8e4);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_render_bindings_table);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_BindingsTable);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_true_false_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shrink_str_plain_expand_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_compose);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_8142f3eb5d0acc9611dc2470035f46b0);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_dict_e314a0d832df76a7335d922207e90ad6);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_9964fe6ca285541a54877c78dca2d51a);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_bindings_changed);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_8fd8024614ce5c46cfbcfdeef6d78c04);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain__bindings_changed);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d4f82d87e5602fb9042ed1ad79abc2b);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_class);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_color);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_7bf314d8d88893d5574e2dd389ba9447);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_bindings_updated_signal);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_subscribe);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_mount);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a60c26586f3e937181bfe88cf6d9fe9);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_app_focus);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_attached);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_mount_screen);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_recompose);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_call_after_refresh);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_unsubscribe);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_collections);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_defaultdict_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_itertools);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_groupby_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_operator);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_itemgetter_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_box_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b8f91bec518130c8fda9cccc2a0bf69);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Table_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Text_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b198d212d9a0bf540e5157dbac1b8bd);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ComposeResult_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_ComposeResult);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2a246f6e260a2c4ad9692789d633ead);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Binding_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_Binding);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_45837af94bae6220963db538704d20ea);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VerticalScroll_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_VerticalScroll);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_09eff8b7f8b8176140fd165775b873cd);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Static_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_Static);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b725ea641cf008f1c7db2f35336f6e8);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_429a0ded05bd2732870cab3e35b20f6d);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_int_pos_21);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_set_2742763883a4d04982f00e90435bb07f);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_COMPONENT_CLASSES);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_6fb6a0a25b3f6edfc5a0dd56b5908219);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CSS);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_dict_908bc31258b6b42268d142309b7d5f1a);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_16ea4db472d1aa41f79461fa542b4e91);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_render);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_78eed0c0182ee73b3031aaa49da6d521);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_dict_9477b962e9893e35c25977a84e86f195);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_KeyPanel);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_4afd66d677da3777871c370faf72c0bd);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_int_pos_117);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_00c2d1e8fb807429d38afc82f4543557);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b4d179610cdf73833819673f735c2fb);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CLASSES);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_dict_45f8252a11e5e4152cf13f146844ebd3);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_unmount);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_5cf7c502ae052ffb1edf3bc7d5e1f552);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_80351a62eafc87461655bac7c5cb3b78);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_faed6a6745edf10d543d43fe95111ec5_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba95d27ef8218d98e1d0c03a09626f62);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_screen_str_plain_self_str_plain_bindings_changed_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bindings_changed_str_plain_self_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_screen_str_plain_self_str_plain_mount_screen_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mount_screen_str_plain_self_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_4cbb65e57d8348f4e3f5efdeb7ced1a1_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_eb79a65dc1db4fb468ccb6d7a124a2b0_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_binding_str_plain_text_str_plain_description_style_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_description_style_tuple);
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
void checkModuleConstants_textual$widgets$_key_panel(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_screen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_screen);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_active_bindings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_active_bindings);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_component_rich_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_component_rich_style);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_dfeb9cb84e163a299edac78fc068cf57_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_dfeb9cb84e163a299edac78fc068cf57_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_component_styles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_component_styles);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_815bc0d341ccc35d4f29c17e42c5b634_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_815bc0d341ccc35d4f29c17e42c5b634_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_color);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_a));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_a);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_Table));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Table);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_box));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_box);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_SIMPLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SIMPLE);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_HORIZONTALS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HORIZONTALS);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_6e1ba25934e2a0ac6d8aae610aa23d84_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6e1ba25934e2a0ac6d8aae610aa23d84_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_column));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_column);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_str_plain_right_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_str_plain_right_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_justify_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_justify_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fc66296c479bd18c08e900cbce126aa0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_fc66296c479bd18c08e900cbce126aa0_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_groupby));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_groupby);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_itemgetter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itemgetter);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_BINDING_GROUP_TITLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BINDING_GROUP_TITLE);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_Text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Text);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_dict_f2db04d3b784bf8416a3b4d843a160af));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f2db04d3b784bf8416a3b4d843a160af);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_stylize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stylize);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_header_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_header_style);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_table));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_table);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_row));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_row);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_defaultdict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_defaultdict);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_type_list_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_list_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_system));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_system);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_action));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_action);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c69bfe30fd473e31db7bbc1492e50f76_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c69bfe30fd473e31db7bbc1492e50f76_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_dict_6bf47fdd7085923921d162f93fa92698));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6bf47fdd7085923921d162f93fa92698);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7ae10fe870b8ae7625a70e90e049a10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7ae10fe870b8ae7625a70e90e049a10);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_render_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render_description);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_772bcd909123780b236937ff58ad723d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_772bcd909123780b236937ff58ad723d);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_key_display));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_key_display);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_style);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_style_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_previous_namespace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_previous_namespace);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_section));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_section);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2e44f038e467320507affcb33c46401));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2e44f038e467320507affcb33c46401);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_markup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_markup);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_description);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_description_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_description_style);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_end_str_plain_style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_end_str_plain_style_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_tooltip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tooltip);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_space_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_space_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_dim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dim);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b5e902a75193c56e3760aaea17db8e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b5e902a75193c56e3760aaea17db8e4);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_render_bindings_table));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render_bindings_table);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_BindingsTable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BindingsTable);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_true_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_false_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shrink_str_plain_expand_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_shrink_str_plain_expand_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_compose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compose);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_8142f3eb5d0acc9611dc2470035f46b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8142f3eb5d0acc9611dc2470035f46b0);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_dict_e314a0d832df76a7335d922207e90ad6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e314a0d832df76a7335d922207e90ad6);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_9964fe6ca285541a54877c78dca2d51a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9964fe6ca285541a54877c78dca2d51a);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_bindings_changed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bindings_changed);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_8fd8024614ce5c46cfbcfdeef6d78c04));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8fd8024614ce5c46cfbcfdeef6d78c04);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain__bindings_changed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__bindings_changed);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d4f82d87e5602fb9042ed1ad79abc2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d4f82d87e5602fb9042ed1ad79abc2b);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_class);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_ansi_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ansi_color);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_7bf314d8d88893d5574e2dd389ba9447));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7bf314d8d88893d5574e2dd389ba9447);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_bindings_updated_signal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bindings_updated_signal);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_subscribe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subscribe);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_mount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_on_mount);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a60c26586f3e937181bfe88cf6d9fe9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a60c26586f3e937181bfe88cf6d9fe9);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_app_focus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app_focus);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_attached));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_attached);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_mount_screen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mount_screen);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_recompose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_recompose);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_call_after_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_call_after_refresh);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_unsubscribe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unsubscribe);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_collections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_collections);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_defaultdict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_defaultdict_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_itertools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itertools);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_groupby_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_groupby_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_operator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_operator);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_itemgetter_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_itemgetter_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_box_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_box_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b8f91bec518130c8fda9cccc2a0bf69));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b8f91bec518130c8fda9cccc2a0bf69);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Table_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Table_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Text_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Text_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b198d212d9a0bf540e5157dbac1b8bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b198d212d9a0bf540e5157dbac1b8bd);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ComposeResult_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ComposeResult_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_ComposeResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ComposeResult);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2a246f6e260a2c4ad9692789d633ead));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d2a246f6e260a2c4ad9692789d633ead);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Binding_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Binding_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_Binding));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Binding);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_45837af94bae6220963db538704d20ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45837af94bae6220963db538704d20ea);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VerticalScroll_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VerticalScroll_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_VerticalScroll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VerticalScroll);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_09eff8b7f8b8176140fd165775b873cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09eff8b7f8b8176140fd165775b873cd);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Static_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Static_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_Static));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Static);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b725ea641cf008f1c7db2f35336f6e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b725ea641cf008f1c7db2f35336f6e8);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_429a0ded05bd2732870cab3e35b20f6d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_429a0ded05bd2732870cab3e35b20f6d);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_int_pos_21));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_21);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_set_2742763883a4d04982f00e90435bb07f));
CHECK_OBJECT_DEEP(mod_consts.const_set_2742763883a4d04982f00e90435bb07f);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_COMPONENT_CLASSES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_COMPONENT_CLASSES);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_6fb6a0a25b3f6edfc5a0dd56b5908219));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6fb6a0a25b3f6edfc5a0dd56b5908219);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CSS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_CSS);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_dict_908bc31258b6b42268d142309b7d5f1a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_908bc31258b6b42268d142309b7d5f1a);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_16ea4db472d1aa41f79461fa542b4e91));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16ea4db472d1aa41f79461fa542b4e91);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_render));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_78eed0c0182ee73b3031aaa49da6d521));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_78eed0c0182ee73b3031aaa49da6d521);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_dict_9477b962e9893e35c25977a84e86f195));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9477b962e9893e35c25977a84e86f195);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_KeyPanel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KeyPanel);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_4afd66d677da3777871c370faf72c0bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4afd66d677da3777871c370faf72c0bd);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_int_pos_117));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_117);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_00c2d1e8fb807429d38afc82f4543557));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_00c2d1e8fb807429d38afc82f4543557);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b4d179610cdf73833819673f735c2fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b4d179610cdf73833819673f735c2fb);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CLASSES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_CLASSES);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_dict_45f8252a11e5e4152cf13f146844ebd3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_45f8252a11e5e4152cf13f146844ebd3);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_unmount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_on_unmount);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_5cf7c502ae052ffb1edf3bc7d5e1f552));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5cf7c502ae052ffb1edf3bc7d5e1f552);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_80351a62eafc87461655bac7c5cb3b78));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80351a62eafc87461655bac7c5cb3b78);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_faed6a6745edf10d543d43fe95111ec5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_faed6a6745edf10d543d43fe95111ec5_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba95d27ef8218d98e1d0c03a09626f62));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba95d27ef8218d98e1d0c03a09626f62);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_screen_str_plain_self_str_plain_bindings_changed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_screen_str_plain_self_str_plain_bindings_changed_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bindings_changed_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bindings_changed_str_plain_self_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_screen_str_plain_self_str_plain_mount_screen_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_screen_str_plain_self_str_plain_mount_screen_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mount_screen_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mount_screen_str_plain_self_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_4cbb65e57d8348f4e3f5efdeb7ced1a1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4cbb65e57d8348f4e3f5efdeb7ced1a1_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_eb79a65dc1db4fb468ccb6d7a124a2b0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_eb79a65dc1db4fb468ccb6d7a124a2b0_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_binding_str_plain_text_str_plain_description_style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_binding_str_plain_text_str_plain_description_style_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_description_style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_description_style_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 10
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
static PyObject *module_var_accessor_textual$widgets$_key_panel$BindingsTable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_key_panel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_key_panel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_BindingsTable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_key_panel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BindingsTable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BindingsTable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BindingsTable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BindingsTable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_BindingsTable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_BindingsTable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BindingsTable);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_key_panel$Static(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_key_panel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_key_panel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_Static);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_key_panel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Static);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Static, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Static);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Static, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_Static);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_Static);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Static);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_key_panel$Table(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_key_panel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_key_panel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_Table);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_key_panel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Table);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Table, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Table);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Table, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_Table);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_Table);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Table);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_key_panel$Text(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_key_panel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_key_panel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_key_panel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Text);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Text, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Text);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Text, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_key_panel$VerticalScroll(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_key_panel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_key_panel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_VerticalScroll);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_key_panel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VerticalScroll);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VerticalScroll, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VerticalScroll);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VerticalScroll, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_VerticalScroll);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_VerticalScroll);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VerticalScroll);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_key_panel$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_key_panel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_key_panel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_key_panel->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_key_panel$box(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_key_panel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_key_panel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_box);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_key_panel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_box);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_box, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_box);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_box, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_box);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_box);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_box);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_key_panel$defaultdict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_key_panel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_key_panel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_key_panel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_defaultdict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_defaultdict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_defaultdict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_defaultdict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_key_panel$groupby(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_key_panel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_key_panel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_groupby);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_key_panel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_groupby);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_groupby, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_groupby);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_groupby, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_groupby);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_groupby);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_groupby);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_key_panel$itemgetter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_key_panel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_key_panel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_itemgetter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_key_panel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_itemgetter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_itemgetter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_itemgetter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_itemgetter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_itemgetter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_itemgetter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_itemgetter);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_59630ee3b29c2956ef23f4fbf6f8b210;
static PyCodeObject *code_objects_471ca6df2d03840ac087ad4b5a38f439;
static PyCodeObject *code_objects_0ad2c7ca3953839070f1a24cc31432b9;
static PyCodeObject *code_objects_6fe5721791e9e42ef8ac9acaf6c36160;
static PyCodeObject *code_objects_f536d90697777ecaeebaf7277a902cb6;
static PyCodeObject *code_objects_9d1c087604685763313c4583c6b29b5b;
static PyCodeObject *code_objects_e9fa2a8428c66683d771d7c87bdfc802;
static PyCodeObject *code_objects_ac8d5d114a73b630f0b91618af56b7c9;
static PyCodeObject *code_objects_ee881d0ab18f6e87d1c0a36868756367;
static PyCodeObject *code_objects_15226f2d6931ad44ee574df534a6ae4c;
static PyCodeObject *code_objects_7d577d6b5a82701bd952c29c5fb5557d;
static PyCodeObject *code_objects_a8a3d7119e5ec90f629df377b0c532b1;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_80351a62eafc87461655bac7c5cb3b78); CHECK_OBJECT(module_filename_obj);
code_objects_59630ee3b29c2956ef23f4fbf6f8b210 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_5b5e902a75193c56e3760aaea17db8e4, mod_consts.const_tuple_faed6a6745edf10d543d43fe95111ec5_tuple, NULL, 1, 0, 0);
code_objects_471ca6df2d03840ac087ad4b5a38f439 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_ba95d27ef8218d98e1d0c03a09626f62, mod_consts.const_str_digest_ba95d27ef8218d98e1d0c03a09626f62, NULL, NULL, 0, 0, 0);
code_objects_0ad2c7ca3953839070f1a24cc31432b9 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_BindingsTable, mod_consts.const_str_plain_BindingsTable, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6fe5721791e9e42ef8ac9acaf6c36160 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_KeyPanel, mod_consts.const_str_plain_KeyPanel, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f536d90697777ecaeebaf7277a902cb6 = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__bindings_changed, mod_consts.const_str_digest_1d4f82d87e5602fb9042ed1ad79abc2b, mod_consts.const_tuple_str_plain_screen_str_plain_self_str_plain_bindings_changed_tuple, mod_consts.const_tuple_str_plain_bindings_changed_str_plain_self_tuple, 1, 0, 0);
code_objects_9d1c087604685763313c4583c6b29b5b = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_bindings_changed, mod_consts.const_str_digest_8fd8024614ce5c46cfbcfdeef6d78c04, mod_consts.const_tuple_str_plain_screen_str_plain_self_str_plain_mount_screen_tuple, mod_consts.const_tuple_str_plain_mount_screen_str_plain_self_tuple, 1, 0, 0);
code_objects_e9fa2a8428c66683d771d7c87bdfc802 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_compose, mod_consts.const_str_digest_8142f3eb5d0acc9611dc2470035f46b0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ac8d5d114a73b630f0b91618af56b7c9 = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_on_mount, mod_consts.const_str_digest_7a60c26586f3e937181bfe88cf6d9fe9, mod_consts.const_tuple_4cbb65e57d8348f4e3f5efdeb7ced1a1_tuple, NULL, 1, 0, 0);
code_objects_ee881d0ab18f6e87d1c0a36868756367 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_on_unmount, mod_consts.const_str_digest_5cf7c502ae052ffb1edf3bc7d5e1f552, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_15226f2d6931ad44ee574df534a6ae4c = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render, mod_consts.const_str_digest_78eed0c0182ee73b3031aaa49da6d521, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7d577d6b5a82701bd952c29c5fb5557d = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render_bindings_table, mod_consts.const_str_digest_16ea4db472d1aa41f79461fa542b4e91, mod_consts.const_tuple_eb79a65dc1db4fb468ccb6d7a124a2b0_tuple, NULL, 1, 0, 0);
code_objects_a8a3d7119e5ec90f629df377b0c532b1 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render_description, mod_consts.const_str_digest_772bcd909123780b236937ff58ad723d, mod_consts.const_tuple_str_plain_binding_str_plain_text_str_plain_description_style_tuple, mod_consts.const_tuple_str_plain_description_style_tuple, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_textual$widgets$_key_panel$$$function__3_compose$$$genobj__1_compose(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed$$$coroutine__1_bindings_changed(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__1_render_bindings_table(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__2_render(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__3_compose(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__4_on_mount(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__5_on_unmount(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$widgets$_key_panel$$$function__1_render_bindings_table(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_previous_namespace = NULL;
PyObject *var_action_to_bindings = NULL;
PyObject *var_bindings = NULL;
PyObject *var_key_style = NULL;
PyObject *var_divider_transparent = NULL;
PyObject *var_table = NULL;
PyObject *var_header_style = NULL;
PyObject *var_namespace = NULL;
PyObject *var__bindings = NULL;
PyObject *var_table_bindings = NULL;
PyObject *var_title = NULL;
PyObject *var__ = NULL;
PyObject *var_binding = NULL;
PyObject *var_enabled = NULL;
PyObject *var_tooltip = NULL;
struct Nuitka_CellObject *var_description_style = Nuitka_Cell_NewEmpty();
PyObject *var_render_description = NULL;
struct Nuitka_CellObject *var_get_key_display = Nuitka_Cell_NewEmpty();
PyObject *var_multi_bindings = NULL;
PyObject *var_keys_display = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__element_4 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__element_3 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table = MAKE_FUNCTION_FRAME(tstate, code_objects_7d577d6b5a82701bd952c29c5fb5557d, module_textual$widgets$_key_panel, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_type_description == NULL);
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table = cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table);
assert(Py_REFCNT(frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_screen);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_active_bindings);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_values);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 45;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
assert(var_bindings == NULL);
var_bindings = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 47;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_get_component_rich_style,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_dfeb9cb84e163a299edac78fc068cf57_tuple, 0)
);

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
assert(var_key_style == NULL);
var_key_style = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 49;
tmp_expression_value_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_get_component_styles,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_815bc0d341ccc35d4f29c17e42c5b634_tuple, 0)
);

if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_color);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_a);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_assign_source_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
assert(var_divider_transparent == NULL);
var_divider_transparent = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_called_instance_3;
tmp_called_value_2 = module_var_accessor_textual$widgets$_key_panel$Table(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Table);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = mod_consts.const_tuple_int_0_int_0_tuple;
tmp_kw_call_value_1_1 = Py_False;
CHECK_OBJECT(var_divider_transparent);
tmp_truth_name_1 = CHECK_IF_TRUE(var_divider_transparent);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_expression_value_6 = module_var_accessor_textual$widgets$_key_panel$box(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_box);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_SIMPLE);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_expression_value_7 = module_var_accessor_textual$widgets$_key_panel$box(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_box);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_HORIZONTALS);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 55;
tmp_kw_call_value_3_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_get_component_rich_style,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_815bc0d341ccc35d4f29c17e42c5b634_tuple, 0)
);

if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 55;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 51;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_6e1ba25934e2a0ac6d8aae610aa23d84_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
assert(var_table == NULL);
var_table = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_table);
tmp_expression_value_8 = var_table;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_add_column);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 57;
tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_empty_str_plain_right_tuple, 0), mod_consts.const_tuple_str_plain_justify_tuple);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 59;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_get_component_rich_style,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_fc66296c479bd18c08e900cbce126aa0_tuple, 0)
);

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
assert(var_header_style == NULL);
var_header_style = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_None;
assert(var_previous_namespace == NULL);
Py_INCREF(tmp_assign_source_6);
var_previous_namespace = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_called_value_5;
tmp_called_value_4 = module_var_accessor_textual$widgets$_key_panel$groupby(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_groupby);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bindings);
tmp_kw_call_arg_value_0_1 = var_bindings;
tmp_called_value_5 = module_var_accessor_textual$widgets$_key_panel$itemgetter(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_itemgetter);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 61;
tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_int_0_tuple);

if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 61;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_7;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooococoo";
exception_lineno = 61;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_namespace;
    var_namespace = tmp_assign_source_12;
    Py_INCREF(var_namespace);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var__bindings;
    var__bindings = tmp_assign_source_13;
    Py_INCREF(var__bindings);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_14;
PyObject *tmp_list_arg_1;
CHECK_OBJECT(var__bindings);
tmp_list_arg_1 = var__bindings;
tmp_assign_source_14 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_table_bindings;
    var_table_bindings = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_table_bindings);
tmp_operand_value_1 = var_table_bindings;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_start_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
CHECK_OBJECT(var_namespace);
tmp_expression_value_9 = var_namespace;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_BINDING_GROUP_TITLE);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 66;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_kwargs_value_1;
tmp_called_value_6 = module_var_accessor_textual$widgets$_key_panel$Text(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_namespace);
tmp_expression_value_10 = var_namespace;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_BINDING_GROUP_TITLE);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f2db04d3b784bf8416a3b4d843a160af);
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 67;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_title;
    var_title = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_title);
tmp_expression_value_11 = var_title;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_stylize);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
if (var_header_style == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_header_style);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 68;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = var_header_style;
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 68;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (var_table == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_table);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 69;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}

tmp_called_instance_5 = var_table;
tmp_args_element_value_2 = const_str_empty;
CHECK_OBJECT(var_title);
tmp_args_element_value_3 = var_title;
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 69;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain_add_row,
        call_args
    );
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_2:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_8;
tmp_called_value_8 = module_var_accessor_textual$widgets$_key_panel$defaultdict(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_defaultdict);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 72;
tmp_assign_source_16 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_type_list_tuple);

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_action_to_bindings;
    var_action_to_bindings = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_table_bindings);
tmp_iter_arg_3 = var_table_bindings;
tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_18 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_18 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooococoo";
exception_lineno = 73;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 4);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 4);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_22 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 2, 4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_3;
    tmp_tuple_unpack_2__element_3 = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_23 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 3, 4);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_4;
    tmp_tuple_unpack_2__element_4 = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_7;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_6;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_4);
tmp_tuple_unpack_2__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_24 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var__;
    var__ = tmp_assign_source_24;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_25 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_binding;
    var_binding = tmp_assign_source_25;
    Py_INCREF(var_binding);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_26 = tmp_tuple_unpack_2__element_3;
{
    PyObject *old = var_enabled;
    var_enabled = tmp_assign_source_26;
    Py_INCREF(var_enabled);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
tmp_assign_source_27 = tmp_tuple_unpack_2__element_4;
{
    PyObject *old = var_tooltip;
    var_tooltip = tmp_assign_source_27;
    Py_INCREF(var_tooltip);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_4);
tmp_tuple_unpack_2__element_4 = NULL;

{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_binding);
tmp_expression_value_12 = var_binding;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_system);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_5;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_action_to_bindings);
tmp_expression_value_14 = var_action_to_bindings;
CHECK_OBJECT(var_binding);
tmp_expression_value_15 = var_binding;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_action);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_5;
}
tmp_expression_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_5;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_binding);
tmp_tuple_element_2 = var_binding;
tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_element_value_4, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_enabled);
tmp_tuple_element_2 = var_enabled;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_tooltip);
tmp_tuple_element_2 = var_tooltip;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 2, tmp_tuple_element_2);
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 75;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_2;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_instance_6;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 79;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}

tmp_called_instance_6 = par_self;
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 79;
tmp_assign_source_28 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_get_component_rich_style,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c69bfe30fd473e31db7bbc1492e50f76_tuple, 0)
);

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
{
    PyObject *old = Nuitka_Cell_GET(var_description_style);
    Nuitka_Cell_SET(var_description_style, tmp_assign_source_28);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_6bf47fdd7085923921d162f93fa92698);
tmp_closure_1[0] = var_description_style;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_29 = MAKE_FUNCTION_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description(tstate, tmp_annotations_1, tmp_closure_1);

{
    PyObject *old = var_render_description;
    var_render_description = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}

tmp_expression_value_17 = par_self;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_app);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
tmp_assign_source_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_get_key_display);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
{
    PyObject *old = Nuitka_Cell_GET(var_get_key_display);
    Nuitka_Cell_SET(var_get_key_display, tmp_assign_source_30);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_iter_arg_5;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(var_action_to_bindings);
tmp_expression_value_18 = var_action_to_bindings;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_values);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 95;
tmp_iter_arg_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
tmp_assign_source_31 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_32;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_32 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_32 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooococoo";
exception_lineno = 95;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_33 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_multi_bindings;
    var_multi_bindings = tmp_assign_source_33;
    Py_INCREF(var_multi_bindings);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_iter_arg_6;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_multi_bindings);
tmp_expression_value_19 = var_multi_bindings;
tmp_subscript_value_2 = const_int_0;
tmp_iter_arg_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_2, 0);
if (tmp_iter_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_9;
}
tmp_assign_source_34 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_35 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 3);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_36 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 3);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_37 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 2, 3);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_3;
    tmp_tuple_unpack_3__element_3 = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_10;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_9;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_38;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_38 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_binding;
    var_binding = tmp_assign_source_38;
    Py_INCREF(var_binding);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_39;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_39 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_enabled;
    var_enabled = tmp_assign_source_39;
    Py_INCREF(var_enabled);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_40;
CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
tmp_assign_source_40 = tmp_tuple_unpack_3__element_3;
{
    PyObject *old = var_tooltip;
    var_tooltip = tmp_assign_source_40;
    Py_INCREF(var_tooltip);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;

{
PyObject *tmp_assign_source_41;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_iterable_value_2;
tmp_str_arg_value_1 = mod_consts.const_str_space;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_iter_arg_7;
CHECK_OBJECT(var_multi_bindings);
tmp_iter_arg_7 = var_multi_bindings;
tmp_assign_source_42 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_2[2];
tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_2[1] = var_get_key_display;
Py_INCREF(tmp_closure_2[1]);
tmp_iterable_value_2 = MAKE_GENERATOR_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$genexpr__1_genexpr(tstate, tmp_closure_2);

goto try_return_handler_11;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 98;
tmp_iterable_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, dict_builtin_fromkeys, tmp_iterable_value_2);
CHECK_OBJECT(tmp_iterable_value_2);
Py_DECREF(tmp_iterable_value_2);
assert(!(tmp_iterable_value_1 == NULL));
tmp_assign_source_41 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_keys_display;
    var_keys_display = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_20;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_12;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_7;
if (var_table == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_table);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 102;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_8;
}

tmp_expression_value_20 = var_table;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_add_row);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_8;
}
tmp_called_value_12 = module_var_accessor_textual$widgets$_key_panel$Text(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 103;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_keys_display);
tmp_kw_call_arg_value_0_2 = var_keys_display;
if (var_key_style == NULL) {
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key_style);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_8;
}

tmp_kw_call_dict_value_0_2 = var_key_style;
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 103;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts.const_tuple_str_plain_style_tuple);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 103;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_8;
}
if (var_render_description == NULL) {
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_render_description);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 104;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_8;
}

tmp_called_value_13 = var_render_description;
CHECK_OBJECT(var_binding);
tmp_args_element_value_7 = var_binding;
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 104;
tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_7);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 104;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_8;
}
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 102;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_8;
}
goto loop_start_3;
loop_end_3:;
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_2;
// End of try:
try_end_8:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_namespace);
tmp_cmp_expr_left_2 = var_namespace;
if (var_previous_namespace == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_previous_namespace);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 106;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_2 = var_previous_namespace;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_6;
if (var_table == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_table);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 107;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}

tmp_called_instance_7 = var_table;
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame.f_lineno = 107;
tmp_call_result_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain_add_section);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_4:;
{
PyObject *tmp_assign_source_43;
CHECK_OBJECT(var_namespace);
tmp_assign_source_43 = var_namespace;
{
    PyObject *old = var_previous_namespace;
    var_previous_namespace = tmp_assign_source_43;
    Py_INCREF(var_previous_namespace);
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooooooooooococoo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_9;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_table == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_table);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 111;
type_description_1 = "oooooooooooooooococoo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_table;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table,
    type_description_1,
    par_self,
    var_previous_namespace,
    var_action_to_bindings,
    var_bindings,
    var_key_style,
    var_divider_transparent,
    var_table,
    var_header_style,
    var_namespace,
    var__bindings,
    var_table_bindings,
    var_title,
    var__,
    var_binding,
    var_enabled,
    var_tooltip,
    var_description_style,
    var_render_description,
    var_get_key_display,
    var_multi_bindings,
    var_keys_display
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table == cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table);
    cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_previous_namespace);
var_previous_namespace = NULL;
Py_XDECREF(var_action_to_bindings);
var_action_to_bindings = NULL;
CHECK_OBJECT(var_bindings);
CHECK_OBJECT(var_bindings);
Py_DECREF(var_bindings);
var_bindings = NULL;
Py_XDECREF(var_key_style);
var_key_style = NULL;
CHECK_OBJECT(var_divider_transparent);
CHECK_OBJECT(var_divider_transparent);
Py_DECREF(var_divider_transparent);
var_divider_transparent = NULL;
Py_XDECREF(var_table);
var_table = NULL;
Py_XDECREF(var_header_style);
var_header_style = NULL;
Py_XDECREF(var_namespace);
var_namespace = NULL;
Py_XDECREF(var__bindings);
var__bindings = NULL;
Py_XDECREF(var_table_bindings);
var_table_bindings = NULL;
Py_XDECREF(var_title);
var_title = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_binding);
var_binding = NULL;
Py_XDECREF(var_enabled);
var_enabled = NULL;
Py_XDECREF(var_tooltip);
var_tooltip = NULL;
CHECK_OBJECT(var_description_style);
CHECK_OBJECT(var_description_style);
Py_DECREF(var_description_style);
var_description_style = NULL;
Py_XDECREF(var_render_description);
var_render_description = NULL;
CHECK_OBJECT(var_get_key_display);
CHECK_OBJECT(var_get_key_display);
Py_DECREF(var_get_key_display);
var_get_key_display = NULL;
Py_XDECREF(var_multi_bindings);
var_multi_bindings = NULL;
Py_XDECREF(var_keys_display);
var_keys_display = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_previous_namespace);
var_previous_namespace = NULL;
Py_XDECREF(var_action_to_bindings);
var_action_to_bindings = NULL;
Py_XDECREF(var_bindings);
var_bindings = NULL;
Py_XDECREF(var_key_style);
var_key_style = NULL;
Py_XDECREF(var_divider_transparent);
var_divider_transparent = NULL;
Py_XDECREF(var_table);
var_table = NULL;
Py_XDECREF(var_header_style);
var_header_style = NULL;
Py_XDECREF(var_namespace);
var_namespace = NULL;
Py_XDECREF(var__bindings);
var__bindings = NULL;
Py_XDECREF(var_table_bindings);
var_table_bindings = NULL;
Py_XDECREF(var_title);
var_title = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_binding);
var_binding = NULL;
Py_XDECREF(var_enabled);
var_enabled = NULL;
Py_XDECREF(var_tooltip);
var_tooltip = NULL;
CHECK_OBJECT(var_description_style);
CHECK_OBJECT(var_description_style);
Py_DECREF(var_description_style);
var_description_style = NULL;
Py_XDECREF(var_render_description);
var_render_description = NULL;
CHECK_OBJECT(var_get_key_display);
CHECK_OBJECT(var_get_key_display);
Py_DECREF(var_get_key_display);
var_get_key_display = NULL;
Py_XDECREF(var_multi_bindings);
var_multi_bindings = NULL;
Py_XDECREF(var_keys_display);
var_keys_display = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

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


static PyObject *impl_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_binding = python_pars[0];
PyObject *var_text = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description = MAKE_FUNCTION_FRAME(tstate, code_objects_a8a3d7119e5ec90f629df377b0c532b1, module_textual$widgets$_key_panel, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description->m_type_description == NULL);
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description = cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description);
assert(Py_REFCNT(frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_1 = module_var_accessor_textual$widgets$_key_panel$Text(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_from_markup);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_binding);
tmp_expression_value_2 = par_binding;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_description);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 86;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = const_str_empty;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_description_style);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 86;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(self->m_closure[0]);
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description->m_frame.f_lineno = 85;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_end_str_plain_style_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
assert(var_text == NULL);
var_text = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_binding);
tmp_expression_value_3 = par_binding;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_tooltip);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 88;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_binding);
tmp_expression_value_4 = par_binding;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_description);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 89;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_text);
tmp_expression_value_5 = var_text;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_append);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description->m_frame.f_lineno = 90;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_space_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_text);
tmp_expression_value_6 = var_text;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_append);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_binding);
tmp_expression_value_7 = par_binding;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_tooltip);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 91;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_dim;
frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description->m_frame.f_lineno = 91;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description,
    type_description_1,
    par_binding,
    var_text,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description == cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description);
    cache_frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_text);
tmp_return_value = var_text;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_text);
CHECK_OBJECT(var_text);
Py_DECREF(var_text);
var_text = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_text);
var_text = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_binding);
Py_DECREF(par_binding);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_binding);
Py_DECREF(par_binding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct textual$widgets$_key_panel$$$function__1_render_bindings_table$$$genexpr__1_genexpr_locals {
PyObject *var_binding;
PyObject *var__;
PyObject *tmp_iter_value_0;
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

static PyObject *textual$widgets$_key_panel$$$function__1_render_bindings_table$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$widgets$_key_panel$$$function__1_render_bindings_table$$$genexpr__1_genexpr_locals *generator_heap = (struct textual$widgets$_key_panel$$$function__1_render_bindings_table$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_binding = NULL;
generator_heap->var__ = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_59630ee3b29c2956ef23f4fbf6f8b210, module_textual$widgets$_key_panel, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Nooc";
generator_heap->exception_lineno = 98;
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


generator_heap->exception_lineno = 99;
generator_heap->type_description_1 = "Nooc";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 99;
generator_heap->type_description_1 = "Nooc";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 99;
generator_heap->type_description_1 = "Nooc";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 99;
generator_heap->type_description_1 = "Nooc";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_3;
    generator_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
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



generator_heap->exception_lineno = 99;
generator_heap->type_description_1 = "Nooc";
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_binding;
    generator_heap->var_binding = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_binding);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var__;
    generator_heap->var__ = tmp_assign_source_7;
    Py_INCREF(generator_heap->var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_3);
tmp_assign_source_8 = generator_heap->tmp_tuple_unpack_1__element_3;
{
    PyObject *old = generator_heap->var__;
    assert(old != NULL);
    generator_heap->var__ = tmp_assign_source_8;
    Py_INCREF(generator_heap->var__);
    Py_DECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_get_key_display);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 99;
generator_heap->type_description_1 = "Nooc";
    goto try_except_handler_2;
}

tmp_called_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_binding);
tmp_args_element_value_1 = generator_heap->var_binding;
generator->m_frame->m_frame.f_lineno = 99;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 99;
generator_heap->type_description_1 = "Nooc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 99;
generator_heap->type_description_1 = "Nooc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 98;
generator_heap->type_description_1 = "Nooc";
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
    generator_heap->var_binding,
    generator_heap->var__,
    generator->m_closure[1]
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

Py_XDECREF(generator_heap->var_binding);
generator_heap->var_binding = NULL;
Py_XDECREF(generator_heap->var__);
generator_heap->var__ = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_binding);
generator_heap->var_binding = NULL;
Py_XDECREF(generator_heap->var__);
generator_heap->var__ = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$widgets$_key_panel$$$function__1_render_bindings_table$$$genexpr__1_genexpr_context,
        module_textual$widgets$_key_panel,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_5b5e902a75193c56e3760aaea17db8e4,
#endif
        code_objects_59630ee3b29c2956ef23f4fbf6f8b210,
        closure,
        2,
#if 1
        sizeof(struct textual$widgets$_key_panel$$$function__1_render_bindings_table$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$widgets$_key_panel$$$function__2_render(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_key_panel$$$function__2_render;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_key_panel$$$function__2_render = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_key_panel$$$function__2_render)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_key_panel$$$function__2_render);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_key_panel$$$function__2_render == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_key_panel$$$function__2_render = MAKE_FUNCTION_FRAME(tstate, code_objects_15226f2d6931ad44ee574df534a6ae4c, module_textual$widgets$_key_panel, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_key_panel$$$function__2_render->m_type_description == NULL);
frame_frame_textual$widgets$_key_panel$$$function__2_render = cache_frame_frame_textual$widgets$_key_panel$$$function__2_render;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_key_panel$$$function__2_render);
assert(Py_REFCNT(frame_frame_textual$widgets$_key_panel$$$function__2_render) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$widgets$_key_panel$$$function__2_render->m_frame.f_lineno = 114;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_render_bindings_table);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_key_panel$$$function__2_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_key_panel$$$function__2_render->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_key_panel$$$function__2_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_key_panel$$$function__2_render,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_key_panel$$$function__2_render == cache_frame_frame_textual$widgets$_key_panel$$$function__2_render) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_key_panel$$$function__2_render);
    cache_frame_frame_textual$widgets$_key_panel$$$function__2_render = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_key_panel$$$function__2_render);

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


static PyObject *impl_textual$widgets$_key_panel$$$function__3_compose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(par_self);
tmp_return_value = MAKE_GENERATOR_textual$widgets$_key_panel$$$function__3_compose$$$genobj__1_compose(tstate, tmp_closure_1);

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
struct textual$widgets$_key_panel$$$function__3_compose$$$genobj__1_compose_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *textual$widgets$_key_panel$$$function__3_compose$$$genobj__1_compose_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$widgets$_key_panel$$$function__3_compose$$$genobj__1_compose_locals *generator_heap = (struct textual$widgets$_key_panel$$$function__3_compose$$$genobj__1_compose_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_e9fa2a8428c66683d771d7c87bdfc802, module_textual$widgets$_key_panel, sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_textual$widgets$_key_panel$BindingsTable(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_BindingsTable);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 163;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 163;
tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_false_tuple, 0), mod_consts.const_tuple_str_plain_shrink_str_plain_expand_tuple);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 163;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 163;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}

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
    generator->m_closure[0]
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
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$widgets$_key_panel$$$function__3_compose$$$genobj__1_compose(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$widgets$_key_panel$$$function__3_compose$$$genobj__1_compose_context,
        module_textual$widgets$_key_panel,
        mod_consts.const_str_plain_compose,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_8142f3eb5d0acc9611dc2470035f46b0,
#endif
        code_objects_e9fa2a8428c66683d771d7c87bdfc802,
        closure,
        1,
#if 1
        sizeof(struct textual$widgets$_key_panel$$$function__3_compose$$$genobj__1_compose_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$widgets$_key_panel$$$function__4_on_mount(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount(tstate, tmp_closure_1);

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
struct textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount_locals {
struct Nuitka_CellObject *var_mount_screen;
struct Nuitka_CellObject *var_bindings_changed;
PyObject *var__bindings_changed;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount_locals *coroutine_heap = (struct textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_mount_screen = Nuitka_Cell_NewEmpty();
coroutine_heap->var_bindings_changed = Nuitka_Cell_NewEmpty();
coroutine_heap->var__bindings_changed = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_ac8d5d114a73b630f0b91618af56b7c9, module_textual$widgets$_key_panel, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 166;
coroutine_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_screen);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 166;
coroutine_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(coroutine_heap->var_mount_screen) == NULL);
Nuitka_Cell_SET(coroutine_heap->var_mount_screen, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e314a0d832df76a7335d922207e90ad6);
tmp_closure_1[0] = coroutine_heap->var_mount_screen;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = coroutine->m_closure[0];
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_2 = MAKE_FUNCTION_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed(tstate, tmp_annotations_1, tmp_closure_1);

assert(Nuitka_Cell_GET(coroutine_heap->var_bindings_changed) == NULL);
Nuitka_Cell_SET(coroutine_heap->var_bindings_changed, tmp_assign_source_2);

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_annotations_2;
struct Nuitka_CellObject *tmp_closure_2[2];
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e314a0d832df76a7335d922207e90ad6);
tmp_closure_2[0] = coroutine_heap->var_bindings_changed;
Py_INCREF(tmp_closure_2[0]);
tmp_closure_2[1] = coroutine->m_closure[0];
Py_INCREF(tmp_closure_2[1]);
tmp_assign_source_3 = MAKE_FUNCTION_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed(tstate, tmp_annotations_2, tmp_closure_2);

assert(coroutine_heap->var__bindings_changed == NULL);
coroutine_heap->var__bindings_changed = tmp_assign_source_3;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 178;
coroutine_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_set_class);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 178;
coroutine_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 178;
coroutine_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_app);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 178;
coroutine_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ansi_color);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 178;
coroutine_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_digest_7bf314d8d88893d5574e2dd389ba9447;
coroutine->m_frame->m_frame.f_lineno = 178;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 178;
coroutine_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 179;
coroutine_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_screen);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 179;
coroutine_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_bindings_updated_signal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 179;
coroutine_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_subscribe);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 179;
coroutine_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 179;
coroutine_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
CHECK_OBJECT(coroutine_heap->var__bindings_changed);
tmp_args_element_value_4 = coroutine_heap->var__bindings_changed;
coroutine->m_frame->m_frame.f_lineno = 179;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 179;
coroutine_heap->type_description_1 = "ccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
    coroutine->m_closure[0],
    coroutine_heap->var_mount_screen,
    coroutine_heap->var_bindings_changed,
    coroutine_heap->var__bindings_changed
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
goto try_except_handler_1;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_mount_screen);
CHECK_OBJECT(coroutine_heap->var_mount_screen);
Py_DECREF(coroutine_heap->var_mount_screen);
coroutine_heap->var_mount_screen = NULL;
CHECK_OBJECT(coroutine_heap->var_bindings_changed);
CHECK_OBJECT(coroutine_heap->var_bindings_changed);
Py_DECREF(coroutine_heap->var_bindings_changed);
coroutine_heap->var_bindings_changed = NULL;
CHECK_OBJECT(coroutine_heap->var__bindings_changed);
CHECK_OBJECT(coroutine_heap->var__bindings_changed);
Py_DECREF(coroutine_heap->var__bindings_changed);
coroutine_heap->var__bindings_changed = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->var_mount_screen);
CHECK_OBJECT(coroutine_heap->var_mount_screen);
Py_DECREF(coroutine_heap->var_mount_screen);
coroutine_heap->var_mount_screen = NULL;
CHECK_OBJECT(coroutine_heap->var_bindings_changed);
CHECK_OBJECT(coroutine_heap->var_bindings_changed);
Py_DECREF(coroutine_heap->var_bindings_changed);
coroutine_heap->var_bindings_changed = NULL;
Py_XDECREF(coroutine_heap->var__bindings_changed);
coroutine_heap->var__bindings_changed = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount_context,
        module_textual$widgets$_key_panel,
        mod_consts.const_str_plain_on_mount,
        mod_consts.const_str_digest_7a60c26586f3e937181bfe88cf6d9fe9,
        code_objects_ac8d5d114a73b630f0b91618af56b7c9,
        closure,
        1,
#if 1
        sizeof(struct textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_screen = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_screen;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = self->m_closure[1];
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed$$$coroutine__1_bindings_changed(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_screen);
CHECK_OBJECT(par_screen);
Py_DECREF(par_screen);
par_screen = NULL;
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
struct textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed$$$coroutine__1_bindings_changed_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed$$$coroutine__1_bindings_changed_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed$$$coroutine__1_bindings_changed_locals *coroutine_heap = (struct textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed$$$coroutine__1_bindings_changed_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_9d1c087604685763313c4583c6b29b5b, module_textual$widgets$_key_panel, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_screen);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 170;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_app);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 170;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_app_focus);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 170;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 170;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 172;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_is_attached);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 172;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 172;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 172;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_screen);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 172;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_mount_screen);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 172;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_and_right_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 173;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 173;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 173;
tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_recompose);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 173;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 173;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 173;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
branch_no_2:;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

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
    coroutine->m_closure[2],
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

static PyObject *MAKE_COROUTINE_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed$$$coroutine__1_bindings_changed(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed$$$coroutine__1_bindings_changed_context,
        module_textual$widgets$_key_panel,
        mod_consts.const_str_plain_bindings_changed,
        mod_consts.const_str_digest_8fd8024614ce5c46cfbcfdeef6d78c04,
        code_objects_9d1c087604685763313c4583c6b29b5b,
        closure,
        3,
#if 1
        sizeof(struct textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed$$$coroutine__1_bindings_changed_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_screen = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed = MAKE_FUNCTION_FRAME(tstate, code_objects_f536d90697777ecaeebaf7277a902cb6, module_textual$widgets$_key_panel, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed->m_type_description == NULL);
frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed = cache_frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed);
assert(Py_REFCNT(frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 176;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_call_after_refresh);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bindings_changed);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 176;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_screen);
tmp_args_element_value_2 = par_screen;
frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed->m_frame.f_lineno = 176;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed,
    type_description_1,
    par_screen,
    self->m_closure[1],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed == cache_frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed);
    cache_frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed);

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
CHECK_OBJECT(par_screen);
Py_DECREF(par_screen);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_screen);
Py_DECREF(par_screen);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_key_panel$$$function__5_on_unmount(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount = MAKE_FUNCTION_FRAME(tstate, code_objects_ee881d0ab18f6e87d1c0a36868756367, module_textual$widgets$_key_panel, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount->m_type_description == NULL);
frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount = cache_frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount);
assert(Py_REFCNT(frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_screen);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_bindings_updated_signal);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount->m_frame.f_lineno = 182;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_unsubscribe, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount == cache_frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount);
    cache_frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_key_panel$$$function__5_on_unmount);

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



static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__1_render_bindings_table(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_key_panel$$$function__1_render_bindings_table,
        mod_consts.const_str_plain_render_bindings_table,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_16ea4db472d1aa41f79461fa542b4e91,
#endif
        code_objects_7d577d6b5a82701bd952c29c5fb5557d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_key_panel,
        mod_consts.const_str_digest_a2e44f038e467320507affcb33c46401,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description,
        mod_consts.const_str_plain_render_description,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_772bcd909123780b236937ff58ad723d,
#endif
        code_objects_a8a3d7119e5ec90f629df377b0c532b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_key_panel,
        mod_consts.const_str_digest_c7ae10fe870b8ae7625a70e90e049a10,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__2_render(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_key_panel$$$function__2_render,
        mod_consts.const_str_plain_render,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_78eed0c0182ee73b3031aaa49da6d521,
#endif
        code_objects_15226f2d6931ad44ee574df534a6ae4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_key_panel,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__3_compose(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_key_panel$$$function__3_compose,
        mod_consts.const_str_plain_compose,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8142f3eb5d0acc9611dc2470035f46b0,
#endif
        code_objects_e9fa2a8428c66683d771d7c87bdfc802,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_key_panel,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__4_on_mount(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_key_panel$$$function__4_on_mount,
        mod_consts.const_str_plain_on_mount,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7a60c26586f3e937181bfe88cf6d9fe9,
#endif
        code_objects_ac8d5d114a73b630f0b91618af56b7c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_key_panel,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed,
        mod_consts.const_str_plain_bindings_changed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8fd8024614ce5c46cfbcfdeef6d78c04,
#endif
        code_objects_9d1c087604685763313c4583c6b29b5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_key_panel,
        mod_consts.const_str_digest_9964fe6ca285541a54877c78dca2d51a,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed,
        mod_consts.const_str_plain__bindings_changed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1d4f82d87e5602fb9042ed1ad79abc2b,
#endif
        code_objects_f536d90697777ecaeebaf7277a902cb6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_key_panel,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_key_panel$$$function__5_on_unmount(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_key_panel$$$function__5_on_unmount,
        mod_consts.const_str_plain_on_unmount,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5cf7c502ae052ffb1edf3bc7d5e1f552,
#endif
        code_objects_ee881d0ab18f6e87d1c0a36868756367,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_key_panel,
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

static function_impl_code const function_table_textual$widgets$_key_panel[] = {
impl_textual$widgets$_key_panel$$$function__1_render_bindings_table$$$function__1_render_description,
impl_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__1_bindings_changed,
impl_textual$widgets$_key_panel$$$function__4_on_mount$$$coroutine__1_on_mount$$$function__2__bindings_changed,
impl_textual$widgets$_key_panel$$$function__1_render_bindings_table,
impl_textual$widgets$_key_panel$$$function__2_render,
impl_textual$widgets$_key_panel$$$function__3_compose,
impl_textual$widgets$_key_panel$$$function__4_on_mount,
impl_textual$widgets$_key_panel$$$function__5_on_unmount,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$widgets$_key_panel);
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
        module_textual$widgets$_key_panel,
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
        function_table_textual$widgets$_key_panel,
        sizeof(function_table_textual$widgets$_key_panel) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.widgets._key_panel";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$widgets$_key_panel(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$widgets$_key_panel");

    // Store the module for future use.
    module_textual$widgets$_key_panel = module;

    moduledict_textual$widgets$_key_panel = MODULE_DICT(module_textual$widgets$_key_panel);

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
        PRINT_STRING("textual$widgets$_key_panel: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$widgets$_key_panel: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$widgets$_key_panel: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.widgets._key_panel" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$widgets$_key_panel\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$widgets$_key_panel,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$widgets$_key_panel,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$widgets$_key_panel,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$widgets$_key_panel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$widgets$_key_panel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$widgets$_key_panel);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$widgets$_key_panel);
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

        UPDATE_STRING_DICT1(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
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
struct Nuitka_FrameObject *frame_frame_textual$widgets$_key_panel;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_key_panel$$$class__1_BindingsTable_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_key_panel$$$class__2_KeyPanel_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
UPDATE_STRING_DICT0(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$widgets$_key_panel = MAKE_MODULE_FRAME(code_objects_471ca6df2d03840ac087ad4b5a38f439, module_textual$widgets$_key_panel);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_key_panel);
assert(Py_REFCNT(frame_frame_textual$widgets$_key_panel) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$widgets$_key_panel$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$widgets$_key_panel$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_collections;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$widgets$_key_panel;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_defaultdict_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 3;
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
        (PyObject *)moduledict_textual$widgets$_key_panel,
        mod_consts.const_str_plain_defaultdict,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_defaultdict);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_itertools;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$widgets$_key_panel;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_groupby_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 4;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$widgets$_key_panel,
        mod_consts.const_str_plain_groupby,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_groupby);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_groupby, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_operator;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$widgets$_key_panel;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_itemgetter_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 5;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$widgets$_key_panel,
        mod_consts.const_str_plain_itemgetter,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_itemgetter);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_itemgetter, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_rich;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$widgets$_key_panel;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_box_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 8;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$widgets$_key_panel,
        mod_consts.const_str_plain_box,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_box);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_box, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_4b8f91bec518130c8fda9cccc2a0bf69;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$widgets$_key_panel;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Table_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 9;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$widgets$_key_panel,
        mod_consts.const_str_plain_Table,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Table);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_Table, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$widgets$_key_panel;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_Text_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 10;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$widgets$_key_panel,
        mod_consts.const_str_plain_Text,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Text);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_Text, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_4b198d212d9a0bf540e5157dbac1b8bd;
tmp_globals_arg_value_7 = (PyObject *)moduledict_textual$widgets$_key_panel;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_ComposeResult_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 12;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$widgets$_key_panel,
        mod_consts.const_str_plain_ComposeResult,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_ComposeResult);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_ComposeResult, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_d2a246f6e260a2c4ad9692789d633ead;
tmp_globals_arg_value_8 = (PyObject *)moduledict_textual$widgets$_key_panel;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_Binding_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 13;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$widgets$_key_panel,
        mod_consts.const_str_plain_Binding,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Binding);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_Binding, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_45837af94bae6220963db538704d20ea;
tmp_globals_arg_value_9 = (PyObject *)moduledict_textual$widgets$_key_panel;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_VerticalScroll_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 14;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_textual$widgets$_key_panel,
        mod_consts.const_str_plain_VerticalScroll,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_VerticalScroll);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_VerticalScroll, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_09eff8b7f8b8176140fd165775b873cd;
tmp_globals_arg_value_10 = (PyObject *)moduledict_textual$widgets$_key_panel;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_Static_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 15;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_textual$widgets$_key_panel,
        mod_consts.const_str_plain_Static,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Static);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_Static, tmp_assign_source_15);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_textual$widgets$_key_panel$Static(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_assign_source_16 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_16, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_16;
}
// Tried code:
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


exception_lineno = 21;

    goto try_except_handler_1;
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


exception_lineno = 21;

    goto try_except_handler_1;
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


exception_lineno = 21;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_1;
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


exception_lineno = 21;

    goto try_except_handler_1;
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


exception_lineno = 21;

    goto try_except_handler_1;
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


exception_lineno = 21;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_BindingsTable;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 21;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_1;
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


exception_lineno = 21;

    goto try_except_handler_1;
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
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_11, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

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


exception_lineno = 21;

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
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_1;
}
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 21;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 21;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
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
locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1b725ea641cf008f1c7db2f35336f6e8;
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_429a0ded05bd2732870cab3e35b20f6d;
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_BindingsTable;
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_21;
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
frame_frame_textual$widgets$_key_panel$$$class__1_BindingsTable_2 = MAKE_CLASS_FRAME(tstate, code_objects_0ad2c7ca3953839070f1a24cc31432b9, module_textual$widgets$_key_panel, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_key_panel$$$class__1_BindingsTable_2);
assert(Py_REFCNT(frame_frame_textual$widgets$_key_panel$$$class__1_BindingsTable_2) == 2);

// Framed code:
tmp_dictset_value = PySet_New(mod_consts.const_set_2742763883a4d04982f00e90435bb07f);
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21, mod_consts.const_str_plain_COMPONENT_CLASSES, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_6fb6a0a25b3f6edfc5a0dd56b5908219;
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21, mod_consts.const_str_plain_DEFAULT_CSS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_908bc31258b6b42268d142309b7d5f1a);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_key_panel$$$function__1_render_bindings_table(tstate, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21, mod_consts.const_str_plain_render_bindings_table, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_908bc31258b6b42268d142309b7d5f1a);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_key_panel$$$function__2_render(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21, mod_consts.const_str_plain_render, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_key_panel$$$class__1_BindingsTable_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_key_panel$$$class__1_BindingsTable_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_key_panel$$$class__1_BindingsTable_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_key_panel$$$class__1_BindingsTable_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$widgets$_key_panel$$$class__1_BindingsTable_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
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


exception_lineno = 21;

    goto try_except_handler_3;
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
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
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
tmp_tuple_element_4 = mod_consts.const_str_plain_BindingsTable;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 21;
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_23;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_22 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_22);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21);
locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21);
locals_textual$widgets$_key_panel$$$class__1_BindingsTable_21 = NULL;
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
exception_lineno = 21;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_BindingsTable, tmp_assign_source_22);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
PyObject *tmp_assign_source_24;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_textual$widgets$_key_panel$VerticalScroll(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VerticalScroll);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;

    goto try_except_handler_4;
}
tmp_assign_source_24 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_24, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_25 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = DICT_COPY(tstate, mod_consts.const_dict_9477b962e9893e35c25977a84e86f195);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
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


exception_lineno = 117;

    goto try_except_handler_4;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
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


exception_lineno = 117;

    goto try_except_handler_4;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_27 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_27;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_4;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_28;
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


exception_lineno = 117;

    goto try_except_handler_4;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_KeyPanel;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 117;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_28;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_4;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_12, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

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


exception_lineno = 117;

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
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_4;
}
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 117;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 117;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_29;
}
branch_end_4:;
{
PyObject *tmp_assign_source_30;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_1b725ea641cf008f1c7db2f35336f6e8;
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_4afd66d677da3777871c370faf72c0bd;
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_KeyPanel;
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_117;
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_6;
}
frame_frame_textual$widgets$_key_panel$$$class__2_KeyPanel_3 = MAKE_CLASS_FRAME(tstate, code_objects_6fe5721791e9e42ef8ac9acaf6c36160, module_textual$widgets$_key_panel, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_key_panel$$$class__2_KeyPanel_3);
assert(Py_REFCNT(frame_frame_textual$widgets$_key_panel$$$class__2_KeyPanel_3) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_digest_00c2d1e8fb807429d38afc82f4543557;
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117, mod_consts.const_str_plain_DEFAULT_CSS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_str_digest_5b4d179610cdf73833819673f735c2fb;
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117, mod_consts.const_str_plain_DEFAULT_CLASSES, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_45f8252a11e5e4152cf13f146844ebd3);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_key_panel$$$function__3_compose(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117, mod_consts.const_str_plain_compose, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_key_panel$$$function__4_on_mount(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117, mod_consts.const_str_plain_on_mount, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_key_panel$$$function__5_on_unmount(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117, mod_consts.const_str_plain_on_unmount, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_key_panel$$$class__2_KeyPanel_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_key_panel$$$class__2_KeyPanel_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_key_panel$$$class__2_KeyPanel_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_key_panel$$$class__2_KeyPanel_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_textual$widgets$_key_panel$$$class__2_KeyPanel_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_6;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_6;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_6;
}
branch_no_6:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_KeyPanel;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$widgets$_key_panel->m_frame.f_lineno = 117;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_31;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_30 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_30);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117);
locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117);
locals_textual$widgets$_key_panel$$$class__2_KeyPanel_117 = NULL;
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
exception_lineno = 117;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyPanel, tmp_assign_source_30);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_key_panel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_key_panel->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_key_panel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$widgets$_key_panel);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$widgets$_key_panel", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.widgets._key_panel" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$widgets$_key_panel);
    return module_textual$widgets$_key_panel;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_key_panel, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$widgets$_key_panel", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

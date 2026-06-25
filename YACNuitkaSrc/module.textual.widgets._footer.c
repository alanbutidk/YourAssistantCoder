/* Generated code for Python module 'textual$widgets$_footer'
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



/* The "module_textual$widgets$_footer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$widgets$_footer;
PyDictObject *moduledict_textual$widgets$_footer;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_key;
PyObject *const_str_plain_key_display;
PyObject *const_str_plain_description;
PyObject *const_str_plain_action;
PyObject *const_str_plain__disabled;
PyObject *const_str_digest_80104042f61777325a37fcc7b45a7a96;
PyObject *const_tuple_str_plain_classes_tuple;
PyObject *const_str_plain_set_reactive;
PyObject *const_str_plain_Widget;
PyObject *const_str_plain_shrink;
PyObject *const_str_plain_tooltip;
PyObject *const_str_plain_get_component_rich_style;
PyObject *const_tuple_str_digest_896944f022a792a34ed1f6085038bc98_tuple;
PyObject *const_tuple_str_digest_326f15d458560280b444515536d8293b_tuple;
PyObject *const_str_plain_get_component_styles;
PyObject *const_str_plain_padding;
PyObject *const_str_plain_Text;
PyObject *const_str_plain_assemble;
PyObject *const_str_space;
PyObject *const_str_plain_left;
PyObject *const_str_plain_right;
PyObject *const_str_plain_stylize_before;
PyObject *const_str_plain_rich_style;
PyObject *const_str_plain_app;
PyObject *const_str_plain_bell;
PyObject *const_str_plain_simulate_key;
PyObject *const_str_plain_set_class;
PyObject *const_str_digest_39af7a8d6bb104a15b8654559750d449;
PyObject *const_str_plain_id;
PyObject *const_str_plain_classes;
PyObject *const_str_plain_disabled;
PyObject *const_str_plain_Footer;
PyObject *const_str_plain_show_command_palette;
PyObject *const_str_plain_compact;
PyObject *const_dict_559b761e51b85341313b24c0bbe5cacd;
PyObject *const_str_digest_17f80252000ab54f00a451ceeb10d592;
PyObject *const_str_plain_self;
PyObject *const_str_plain__bindings_ready;
PyObject *const_str_plain_screen;
PyObject *const_str_plain_active_bindings;
PyObject *const_str_plain_values;
PyObject *const_str_plain_show;
PyObject *const_str_plain_defaultdict;
PyObject *const_tuple_type_list_tuple;
PyObject *const_str_plain_append;
PyObject *const_str_plain_styles;
PyObject *const_str_plain_grid_size_columns;
PyObject *const_str_plain_groupby;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_40225ebe140bf63911238c814e64d2bd;
PyObject *const_str_plain_KeyGroup;
PyObject *const_str_plain_FooterKey;
PyObject *const_str_plain_get_key_display;
PyObject *const_str_digest_aaa5a679342823057b4ff4a0e59f94bf;
PyObject *const_tuple_str_plain_disabled_str_plain_tooltip_str_plain_classes_tuple;
PyObject *const_str_plain_data_bind;
PyObject *const_tuple_str_plain_compact_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_FooterLabel;
PyObject *const_tuple_str_plain_disabled_str_plain_tooltip_tuple;
PyObject *const_str_plain_ENABLE_COMMAND_PALETTE;
PyObject *const_str_plain_COMMAND_PALETTE_BINDING;
PyObject *const_str_plain_binding;
PyObject *const_str_digest_c6b386b08e59d813672dab26f54cae7c;
PyObject *const_str_plain_enabled;
PyObject *const_tuple_str_plain_classes_str_plain_disabled_str_plain_tooltip_tuple;
PyObject *const_str_plain_compose;
PyObject *const_str_digest_1c9c17fd06a6595bb36f1869114ca3c0;
PyObject *const_str_plain_group;
PyObject *const_str_plain_app_focus;
PyObject *const_str_plain_is_attached;
PyObject *const_str_plain_call_after_refresh;
PyObject *const_str_plain_recompose;
PyObject *const_str_plain_allow_horizontal_scroll;
PyObject *const_str_plain_release_anchor;
PyObject *const_str_plain__scroll_right_for_pointer;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_animate_tuple;
PyObject *const_str_plain_stop;
PyObject *const_str_plain_prevent_default;
PyObject *const_str_plain__scroll_left_for_pointer;
PyObject *const_str_plain_bindings_updated_signal;
PyObject *const_str_plain_subscribe;
PyObject *const_str_plain_bindings_changed;
PyObject *const_str_plain_unsubscribe;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_collections;
PyObject *const_tuple_str_plain_defaultdict_tuple;
PyObject *const_str_plain_itertools;
PyObject *const_tuple_str_plain_groupby_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_digest_0266ac3c468cbbaf99b230132943e04e;
PyObject *const_str_plain_rich;
PyObject *const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e;
PyObject *const_tuple_str_plain_Text_tuple;
PyObject *const_str_plain_textual;
PyObject *const_tuple_str_plain_events_tuple;
PyObject *const_str_plain_events;
PyObject *const_str_digest_4b198d212d9a0bf540e5157dbac1b8bd;
PyObject *const_tuple_str_plain_ComposeResult_tuple;
PyObject *const_str_plain_ComposeResult;
PyObject *const_str_digest_d2a246f6e260a2c4ad9692789d633ead;
PyObject *const_tuple_str_plain_Binding_tuple;
PyObject *const_str_plain_Binding;
PyObject *const_str_digest_45837af94bae6220963db538704d20ea;
PyObject *const_tuple_str_plain_HorizontalGroup_str_plain_ScrollableContainer_tuple;
PyObject *const_str_plain_HorizontalGroup;
PyObject *const_str_plain_ScrollableContainer;
PyObject *const_str_digest_4979ed38fe8de6337e942bbe079bf23b;
PyObject *const_tuple_str_plain_reactive_tuple;
PyObject *const_str_plain_reactive;
PyObject *const_str_digest_cedd216d41d29545a37269a9a7f4ddc6;
PyObject *const_tuple_str_plain_Widget_tuple;
PyObject *const_str_digest_09eff8b7f8b8176140fd165775b873cd;
PyObject *const_tuple_str_plain_Label_tuple;
PyObject *const_str_plain_Label;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_plain_auto;
PyObject *const_str_digest_fd2b06f27e0a4918f8f421882a0ed013;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_23;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_89aabc9f743967cefdaa852bce6366c3;
PyObject *const_str_plain_DEFAULT_CSS;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_32;
PyObject *const_str_plain_ALLOW_SELECT;
PyObject *const_set_661a02ebc516a841d575b299571e3d19;
PyObject *const_str_plain_COMPONENT_CLASSES;
PyObject *const_str_digest_ed42f43e676428786324f6fb1747ae84;
PyObject *const_tuple_false_str_empty_str_empty_tuple;
PyObject *const_dict_fb214f5a855238ae5d17f13ed2bd7643;
PyObject *const_str_digest_8c120c045ec60e40706536d35f400fc3;
PyObject *const_dict_b685ac1c87f5b6bdc8e585e42b7efba4;
PyObject *const_str_plain_render;
PyObject *const_str_digest_45af2dd9f5a778b428de120e186ec899;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain_on_mouse_down;
PyObject *const_str_digest_e888244c6e69fcdd320c393bc236192d;
PyObject *const_dict_7ba3d157564a998922a2db3616078943;
PyObject *const_str_plain__watch_compact;
PyObject *const_str_digest_91e45bb575fab1fef81cf59990913884;
PyObject *const_tuple_a1134fd80f88197e984c087e30683d3d_tuple;
PyObject *const_str_digest_983d2ff8313f2b28e7cea36d66b1103c;
PyObject *const_int_pos_143;
PyObject *const_dict_829a2f090deec102e0b943e994a79ba5;
PyObject *const_int_pos_148;
PyObject *const_str_digest_6dfeca71f5096f6bbb877d85f270c47b;
PyObject *const_tuple_false_str_digest_39af7a8d6bb104a15b8654559750d449_tuple;
PyObject *const_tuple_str_plain_toggle_class_tuple;
PyObject *const_tuple_false_false_tuple;
PyObject *const_tuple_str_plain_repaint_tuple;
PyObject *const_str_plain_combine_groups;
PyObject *const_dict_5d1988ae173ebe1e89bf94930c7e4ffe;
PyObject *const_dict_db63ed5e4f63364a9df7ae85ee304bcc;
PyObject *const_str_digest_7a0145b3eb2b2869033806c544546fd4;
PyObject *const_dict_45f8252a11e5e4152cf13f146844ebd3;
PyObject *const_dict_e314a0d832df76a7335d922207e90ad6;
PyObject *const_str_digest_05c95f9ffb59286aafad09c087efa036;
PyObject *const_dict_3b7322adfaccc121004acd48996db02b;
PyObject *const_str_plain__on_mouse_scroll_down;
PyObject *const_str_digest_f03b3ef73632ae8f0d62aeedc5153b5e;
PyObject *const_dict_faad7c44485929a585811ff86815f796;
PyObject *const_str_plain__on_mouse_scroll_up;
PyObject *const_str_digest_9ff9fe4f840ab8cf93835a4d07a63aea;
PyObject *const_str_plain_on_mount;
PyObject *const_str_digest_39b84962e89c3fd74241250a1e85905f;
PyObject *const_str_plain_on_unmount;
PyObject *const_str_digest_607d903bb81f3f5f9b079b7a943c7e19;
PyObject *const_tuple_str_plain__bindings_ready_tuple;
PyObject *const_str_digest_503504b74bb4ae6675441c08b37606f9;
PyObject *const_tuple_str_plain_multi_bindings__tuple;
PyObject *const_str_digest_4271a0c0651be45f5f8e6b0df7a89fe0;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_c84889e5c697052d07956237bd326540_tuple;
PyObject *const_tuple_39849974b317b99662c9eb8dc0ffd2e0_tuple;
PyObject *const_tuple_str_plain_self_str_plain_event_tuple;
PyObject *const_tuple_str_plain_self_str_plain_compact_tuple;
PyObject *const_tuple_str_plain_self_str_plain_screen_tuple;
PyObject *const_tuple_5a00085d864881842962cb10ab620761_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_2aa9fccdc4d197ff869371426e5ac79c_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[188];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.widgets._footer"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_key);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_display);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_description);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_action);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__disabled);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_80104042f61777325a37fcc7b45a7a96);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_classes_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_reactive);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Widget);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_shrink);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_tooltip);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_component_rich_style);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_896944f022a792a34ed1f6085038bc98_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_326f15d458560280b444515536d8293b_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_component_styles);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_padding);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_Text);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_assemble);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_left);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_right);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_stylize_before);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich_style);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_bell);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_simulate_key);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_class);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_39af7a8d6bb104a15b8654559750d449);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_classes);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_disabled);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Footer);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_show_command_palette);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_compact);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_dict_559b761e51b85341313b24c0bbe5cacd);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_17f80252000ab54f00a451ceeb10d592);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__bindings_ready);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_screen);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_active_bindings);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_show);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_defaultdict);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_type_list_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_styles);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_grid_size_columns);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_groupby);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_40225ebe140bf63911238c814e64d2bd);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_KeyGroup);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_FooterKey);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_key_display);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_aaa5a679342823057b4ff4a0e59f94bf);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_disabled_str_plain_tooltip_str_plain_classes_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_data_bind);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_compact_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_FooterLabel);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_disabled_str_plain_tooltip_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_COMMAND_PALETTE);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_COMMAND_PALETTE_BINDING);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_binding);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_c6b386b08e59d813672dab26f54cae7c);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_enabled);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_classes_str_plain_disabled_str_plain_tooltip_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_compose);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c9c17fd06a6595bb36f1869114ca3c0);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_app_focus);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_attached);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_call_after_refresh);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_recompose);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_allow_horizontal_scroll);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_release_anchor);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__scroll_right_for_pointer);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_animate_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_prevent_default);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__scroll_left_for_pointer);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_bindings_updated_signal);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_subscribe);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_bindings_changed);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_unsubscribe);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_collections);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_defaultdict_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_itertools);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_groupby_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Text_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_textual);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_events_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_events);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b198d212d9a0bf540e5157dbac1b8bd);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ComposeResult_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_ComposeResult);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2a246f6e260a2c4ad9692789d633ead);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Binding_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_Binding);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_45837af94bae6220963db538704d20ea);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HorizontalGroup_str_plain_ScrollableContainer_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_HorizontalGroup);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_ScrollableContainer);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_4979ed38fe8de6337e942bbe079bf23b);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reactive_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_reactive);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_cedd216d41d29545a37269a9a7f4ddc6);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Widget_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_09eff8b7f8b8176140fd165775b873cd);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Label_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_Label);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_auto);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd2b06f27e0a4918f8f421882a0ed013);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_int_pos_23);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_89aabc9f743967cefdaa852bce6366c3);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CSS);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_ALLOW_SELECT);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_set_661a02ebc516a841d575b299571e3d19);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_COMPONENT_CLASSES);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed42f43e676428786324f6fb1747ae84);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_false_str_empty_str_empty_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_dict_fb214f5a855238ae5d17f13ed2bd7643);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c120c045ec60e40706536d35f400fc3);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_dict_b685ac1c87f5b6bdc8e585e42b7efba4);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_render);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_45af2dd9f5a778b428de120e186ec899);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_mouse_down);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_e888244c6e69fcdd320c393bc236192d);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_dict_7ba3d157564a998922a2db3616078943);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain__watch_compact);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_91e45bb575fab1fef81cf59990913884);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_a1134fd80f88197e984c087e30683d3d_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_983d2ff8313f2b28e7cea36d66b1103c);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_int_pos_143);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_dict_829a2f090deec102e0b943e994a79ba5);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_int_pos_148);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_6dfeca71f5096f6bbb877d85f270c47b);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_false_str_digest_39af7a8d6bb104a15b8654559750d449_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_toggle_class_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_repaint_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_combine_groups);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_dict_5d1988ae173ebe1e89bf94930c7e4ffe);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_dict_db63ed5e4f63364a9df7ae85ee304bcc);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a0145b3eb2b2869033806c544546fd4);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_dict_45f8252a11e5e4152cf13f146844ebd3);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_dict_e314a0d832df76a7335d922207e90ad6);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_05c95f9ffb59286aafad09c087efa036);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_dict_3b7322adfaccc121004acd48996db02b);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain__on_mouse_scroll_down);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_f03b3ef73632ae8f0d62aeedc5153b5e);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_dict_faad7c44485929a585811ff86815f796);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain__on_mouse_scroll_up);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ff9fe4f840ab8cf93835a4d07a63aea);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_mount);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_39b84962e89c3fd74241250a1e85905f);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_unmount);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_607d903bb81f3f5f9b079b7a943c7e19);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__bindings_ready_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_503504b74bb4ae6675441c08b37606f9);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_multi_bindings__tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_4271a0c0651be45f5f8e6b0df7a89fe0);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_c84889e5c697052d07956237bd326540_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_39849974b317b99662c9eb8dc0ffd2e0_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_compact_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_screen_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_5a00085d864881842962cb10ab620761_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_2aa9fccdc4d197ff869371426e5ac79c_tuple);
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
void checkModuleConstants_textual$widgets$_footer(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_display));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_display);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_description);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_action));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_action);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__disabled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__disabled);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_80104042f61777325a37fcc7b45a7a96));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80104042f61777325a37fcc7b45a7a96);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_classes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_classes_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_reactive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_reactive);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_Widget));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Widget);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_shrink));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shrink);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_tooltip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tooltip);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_component_rich_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_component_rich_style);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_896944f022a792a34ed1f6085038bc98_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_896944f022a792a34ed1f6085038bc98_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_326f15d458560280b444515536d8293b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_326f15d458560280b444515536d8293b_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_component_styles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_component_styles);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_padding));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_padding);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_Text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Text);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_assemble));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assemble);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_left));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_left);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_right));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_right);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_stylize_before));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stylize_before);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich_style);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_bell));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bell);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_simulate_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_simulate_key);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_class);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_39af7a8d6bb104a15b8654559750d449));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39af7a8d6bb104a15b8654559750d449);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_classes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_classes);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_disabled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_disabled);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Footer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Footer);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_show_command_palette));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_show_command_palette);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_compact));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compact);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_dict_559b761e51b85341313b24c0bbe5cacd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_559b761e51b85341313b24c0bbe5cacd);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_17f80252000ab54f00a451ceeb10d592));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_17f80252000ab54f00a451ceeb10d592);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__bindings_ready));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__bindings_ready);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_screen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_screen);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_active_bindings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_active_bindings);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_show));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_show);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_defaultdict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_defaultdict);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_type_list_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_list_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_styles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_styles);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_grid_size_columns));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_grid_size_columns);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_groupby));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_groupby);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_40225ebe140bf63911238c814e64d2bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_40225ebe140bf63911238c814e64d2bd);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_KeyGroup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KeyGroup);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_FooterKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FooterKey);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_key_display));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_key_display);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_aaa5a679342823057b4ff4a0e59f94bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aaa5a679342823057b4ff4a0e59f94bf);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_disabled_str_plain_tooltip_str_plain_classes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_disabled_str_plain_tooltip_str_plain_classes_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_data_bind));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data_bind);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_compact_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_compact_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_FooterLabel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FooterLabel);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_disabled_str_plain_tooltip_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_disabled_str_plain_tooltip_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_COMMAND_PALETTE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENABLE_COMMAND_PALETTE);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_COMMAND_PALETTE_BINDING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_COMMAND_PALETTE_BINDING);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_binding));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_binding);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_c6b386b08e59d813672dab26f54cae7c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c6b386b08e59d813672dab26f54cae7c);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_enabled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enabled);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_classes_str_plain_disabled_str_plain_tooltip_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_classes_str_plain_disabled_str_plain_tooltip_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_compose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compose);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c9c17fd06a6595bb36f1869114ca3c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c9c17fd06a6595bb36f1869114ca3c0);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_app_focus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app_focus);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_attached));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_attached);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_call_after_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_call_after_refresh);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_recompose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_recompose);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_allow_horizontal_scroll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_allow_horizontal_scroll);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_release_anchor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_release_anchor);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__scroll_right_for_pointer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__scroll_right_for_pointer);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_animate_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_animate_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_prevent_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prevent_default);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__scroll_left_for_pointer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__scroll_left_for_pointer);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_bindings_updated_signal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bindings_updated_signal);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_subscribe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subscribe);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_bindings_changed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bindings_changed);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_unsubscribe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unsubscribe);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_collections));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_collections);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_defaultdict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_defaultdict_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_itertools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itertools);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_groupby_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_groupby_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Text_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Text_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_textual));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_textual);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_events_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_events_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_events);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b198d212d9a0bf540e5157dbac1b8bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b198d212d9a0bf540e5157dbac1b8bd);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ComposeResult_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ComposeResult_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_ComposeResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ComposeResult);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2a246f6e260a2c4ad9692789d633ead));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d2a246f6e260a2c4ad9692789d633ead);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Binding_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Binding_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_Binding));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Binding);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_45837af94bae6220963db538704d20ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45837af94bae6220963db538704d20ea);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HorizontalGroup_str_plain_ScrollableContainer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_HorizontalGroup_str_plain_ScrollableContainer_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_HorizontalGroup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HorizontalGroup);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_ScrollableContainer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ScrollableContainer);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_4979ed38fe8de6337e942bbe079bf23b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4979ed38fe8de6337e942bbe079bf23b);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reactive_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_reactive_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_reactive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reactive);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_cedd216d41d29545a37269a9a7f4ddc6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cedd216d41d29545a37269a9a7f4ddc6);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Widget_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Widget_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_09eff8b7f8b8176140fd165775b873cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09eff8b7f8b8176140fd165775b873cd);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Label_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Label_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_Label));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Label);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_auto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auto);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd2b06f27e0a4918f8f421882a0ed013));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd2b06f27e0a4918f8f421882a0ed013);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_int_pos_23));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_23);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_89aabc9f743967cefdaa852bce6366c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89aabc9f743967cefdaa852bce6366c3);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CSS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_CSS);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_int_pos_32));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_ALLOW_SELECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ALLOW_SELECT);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_set_661a02ebc516a841d575b299571e3d19));
CHECK_OBJECT_DEEP(mod_consts.const_set_661a02ebc516a841d575b299571e3d19);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_COMPONENT_CLASSES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_COMPONENT_CLASSES);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed42f43e676428786324f6fb1747ae84));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed42f43e676428786324f6fb1747ae84);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_false_str_empty_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_str_empty_str_empty_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_dict_fb214f5a855238ae5d17f13ed2bd7643));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fb214f5a855238ae5d17f13ed2bd7643);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c120c045ec60e40706536d35f400fc3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c120c045ec60e40706536d35f400fc3);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_dict_b685ac1c87f5b6bdc8e585e42b7efba4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b685ac1c87f5b6bdc8e585e42b7efba4);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_render));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_45af2dd9f5a778b428de120e186ec899));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45af2dd9f5a778b428de120e186ec899);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_mouse_down));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_on_mouse_down);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_e888244c6e69fcdd320c393bc236192d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e888244c6e69fcdd320c393bc236192d);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_dict_7ba3d157564a998922a2db3616078943));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7ba3d157564a998922a2db3616078943);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain__watch_compact));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__watch_compact);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_91e45bb575fab1fef81cf59990913884));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91e45bb575fab1fef81cf59990913884);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_a1134fd80f88197e984c087e30683d3d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a1134fd80f88197e984c087e30683d3d_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_983d2ff8313f2b28e7cea36d66b1103c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_983d2ff8313f2b28e7cea36d66b1103c);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_int_pos_143));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_143);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_dict_829a2f090deec102e0b943e994a79ba5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_829a2f090deec102e0b943e994a79ba5);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_int_pos_148));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_148);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_6dfeca71f5096f6bbb877d85f270c47b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6dfeca71f5096f6bbb877d85f270c47b);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_false_str_digest_39af7a8d6bb104a15b8654559750d449_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_str_digest_39af7a8d6bb104a15b8654559750d449_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_toggle_class_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_toggle_class_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_false_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_repaint_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_repaint_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_combine_groups));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_combine_groups);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_dict_5d1988ae173ebe1e89bf94930c7e4ffe));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5d1988ae173ebe1e89bf94930c7e4ffe);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_dict_db63ed5e4f63364a9df7ae85ee304bcc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_db63ed5e4f63364a9df7ae85ee304bcc);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a0145b3eb2b2869033806c544546fd4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a0145b3eb2b2869033806c544546fd4);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_dict_45f8252a11e5e4152cf13f146844ebd3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_45f8252a11e5e4152cf13f146844ebd3);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_dict_e314a0d832df76a7335d922207e90ad6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e314a0d832df76a7335d922207e90ad6);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_05c95f9ffb59286aafad09c087efa036));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_05c95f9ffb59286aafad09c087efa036);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_dict_3b7322adfaccc121004acd48996db02b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3b7322adfaccc121004acd48996db02b);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain__on_mouse_scroll_down));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__on_mouse_scroll_down);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_f03b3ef73632ae8f0d62aeedc5153b5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f03b3ef73632ae8f0d62aeedc5153b5e);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_dict_faad7c44485929a585811ff86815f796));
CHECK_OBJECT_DEEP(mod_consts.const_dict_faad7c44485929a585811ff86815f796);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain__on_mouse_scroll_up));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__on_mouse_scroll_up);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ff9fe4f840ab8cf93835a4d07a63aea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ff9fe4f840ab8cf93835a4d07a63aea);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_mount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_on_mount);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_39b84962e89c3fd74241250a1e85905f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39b84962e89c3fd74241250a1e85905f);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_unmount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_on_unmount);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_607d903bb81f3f5f9b079b7a943c7e19));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_607d903bb81f3f5f9b079b7a943c7e19);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__bindings_ready_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__bindings_ready_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_503504b74bb4ae6675441c08b37606f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_503504b74bb4ae6675441c08b37606f9);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_multi_bindings__tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_multi_bindings__tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_4271a0c0651be45f5f8e6b0df7a89fe0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4271a0c0651be45f5f8e6b0df7a89fe0);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_c84889e5c697052d07956237bd326540_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c84889e5c697052d07956237bd326540_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_39849974b317b99662c9eb8dc0ffd2e0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_39849974b317b99662c9eb8dc0ffd2e0_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_event_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_compact_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_compact_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_screen_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_screen_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_5a00085d864881842962cb10ab620761_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5a00085d864881842962cb10ab620761_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_2aa9fccdc4d197ff869371426e5ac79c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2aa9fccdc4d197ff869371426e5ac79c_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 14
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
static PyObject *module_var_accessor_textual$widgets$_footer$Footer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_footer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_footer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Footer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_footer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Footer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Footer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Footer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Footer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Footer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Footer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Footer);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_footer$FooterKey(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_footer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_footer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_FooterKey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_footer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FooterKey);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FooterKey, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FooterKey);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FooterKey, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_FooterKey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_FooterKey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FooterKey);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_footer$FooterLabel(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_footer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_footer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_FooterLabel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_footer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FooterLabel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FooterLabel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FooterLabel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FooterLabel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_FooterLabel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_FooterLabel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FooterLabel);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_footer$HorizontalGroup(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_footer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_footer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_HorizontalGroup);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_footer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HorizontalGroup);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HorizontalGroup, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HorizontalGroup);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HorizontalGroup, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_HorizontalGroup);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_HorizontalGroup);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HorizontalGroup);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_footer$KeyGroup(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_footer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_footer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyGroup);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_footer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KeyGroup);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KeyGroup, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KeyGroup);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KeyGroup, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyGroup);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyGroup);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyGroup);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_footer$Label(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_footer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_footer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Label);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_footer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Label);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Label, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Label);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Label, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Label);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Label);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Label);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_footer$ScrollableContainer(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_footer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_footer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_ScrollableContainer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_footer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ScrollableContainer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ScrollableContainer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ScrollableContainer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ScrollableContainer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_ScrollableContainer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_ScrollableContainer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ScrollableContainer);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_footer$Text(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_footer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_footer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_footer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Text);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_footer$Widget(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_footer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_footer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Widget);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_footer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Widget);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Widget);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Widget);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_footer$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_footer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_footer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_footer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_footer$defaultdict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_footer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_footer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_footer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_footer$groupby(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_footer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_footer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_groupby);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_footer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_groupby);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_groupby);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_groupby);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_footer$reactive(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_footer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_footer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_reactive);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_footer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_reactive);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_reactive, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_reactive);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_reactive, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_reactive);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_reactive);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_reactive);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_footer$rich(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_footer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_footer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_footer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rich);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rich, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rich);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rich, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e7e8d167b16634dd39d6dd2250e6640a;
static PyCodeObject *code_objects_f8d7159a84db71a23867381d08539a1a;
static PyCodeObject *code_objects_ecbcb1a2198c503672e7c58e06d89683;
static PyCodeObject *code_objects_fe8b86b358381486921fa0c316ed8c7b;
static PyCodeObject *code_objects_8009e0f60fe936e15030409457ac26b5;
static PyCodeObject *code_objects_4bab7f6948371a6a7b7053c21924a3d1;
static PyCodeObject *code_objects_2fc6562fe940240df42ae014842b8827;
static PyCodeObject *code_objects_b5bc6a7e492d4a3a940e77211267ba7c;
static PyCodeObject *code_objects_fc44560d979ffbafa44d0129906ed992;
static PyCodeObject *code_objects_e583b5239d04d906c98072451ed14e5c;
static PyCodeObject *code_objects_30902815ed5d4535f075ffa936a41b1d;
static PyCodeObject *code_objects_5394481e0eb880ad4fedf3b9fb6d5518;
static PyCodeObject *code_objects_ccea132894c46e58b502967099e3f2f2;
static PyCodeObject *code_objects_539095ba103fc53728f6705568359ed4;
static PyCodeObject *code_objects_cb3114f8326098d190908e6abc8bd8ca;
static PyCodeObject *code_objects_58335330832ba8968473054572a8e226;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_503504b74bb4ae6675441c08b37606f9); CHECK_OBJECT(module_filename_obj);
code_objects_e7e8d167b16634dd39d6dd2250e6640a = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_40225ebe140bf63911238c814e64d2bd, mod_consts.const_tuple_str_plain_multi_bindings__tuple, NULL, 1, 0, 0);
code_objects_f8d7159a84db71a23867381d08539a1a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_4271a0c0651be45f5f8e6b0df7a89fe0, mod_consts.const_str_digest_4271a0c0651be45f5f8e6b0df7a89fe0, NULL, NULL, 0, 0, 0);
code_objects_ecbcb1a2198c503672e7c58e06d89683 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Footer, mod_consts.const_str_plain_Footer, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_fe8b86b358381486921fa0c316ed8c7b = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_FooterKey, mod_consts.const_str_plain_FooterKey, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8009e0f60fe936e15030409457ac26b5 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_KeyGroup, mod_consts.const_str_plain_KeyGroup, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_4bab7f6948371a6a7b7053c21924a3d1 = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_7a0145b3eb2b2869033806c544546fd4, mod_consts.const_tuple_c84889e5c697052d07956237bd326540_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 6, 0);
code_objects_2fc6562fe940240df42ae014842b8827 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_8c120c045ec60e40706536d35f400fc3, mod_consts.const_tuple_39849974b317b99662c9eb8dc0ffd2e0_tuple, mod_consts.const_tuple_str_plain___class___tuple, 8, 0, 0);
code_objects_b5bc6a7e492d4a3a940e77211267ba7c = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__on_mouse_scroll_down, mod_consts.const_str_digest_f03b3ef73632ae8f0d62aeedc5153b5e, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple, NULL, 2, 0, 0);
code_objects_fc44560d979ffbafa44d0129906ed992 = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__on_mouse_scroll_up, mod_consts.const_str_digest_9ff9fe4f840ab8cf93835a4d07a63aea, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple, NULL, 2, 0, 0);
code_objects_e583b5239d04d906c98072451ed14e5c = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__watch_compact, mod_consts.const_str_digest_91e45bb575fab1fef81cf59990913884, mod_consts.const_tuple_str_plain_self_str_plain_compact_tuple, NULL, 2, 0, 0);
code_objects_30902815ed5d4535f075ffa936a41b1d = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_bindings_changed, mod_consts.const_str_digest_05c95f9ffb59286aafad09c087efa036, mod_consts.const_tuple_str_plain_self_str_plain_screen_tuple, NULL, 2, 0, 0);
code_objects_5394481e0eb880ad4fedf3b9fb6d5518 = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_compose, mod_consts.const_str_digest_1c9c17fd06a6595bb36f1869114ca3c0, mod_consts.const_tuple_5a00085d864881842962cb10ab620761_tuple, NULL, 1, 0, 0);
code_objects_ccea132894c46e58b502967099e3f2f2 = MAKE_CODE_OBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_on_mount, mod_consts.const_str_digest_39b84962e89c3fd74241250a1e85905f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_539095ba103fc53728f6705568359ed4 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_on_mouse_down, mod_consts.const_str_digest_e888244c6e69fcdd320c393bc236192d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_cb3114f8326098d190908e6abc8bd8ca = MAKE_CODE_OBJECT(module_filename_obj, 332, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_on_unmount, mod_consts.const_str_digest_607d903bb81f3f5f9b079b7a943c7e19, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_58335330832ba8968473054572a8e226 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render, mod_consts.const_str_digest_45af2dd9f5a778b428de120e186ec899, mod_consts.const_tuple_2aa9fccdc4d197ff869371426e5ac79c_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__10_on_mount(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__11_on_unmount(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__2_render(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__3_on_mouse_down(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__4__watch_compact(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__5___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__6_compose(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__7_bindings_changed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__8__on_mouse_scroll_down(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__9__on_mouse_scroll_up(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$widgets$_footer$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_key_display = python_pars[2];
PyObject *par_description = python_pars[3];
PyObject *par_action = python_pars[4];
PyObject *par_disabled = python_pars[5];
PyObject *par_tooltip = python_pars[6];
PyObject *par_classes = python_pars[7];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_footer$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$widgets$_footer$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_footer$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_footer$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_footer$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2fc6562fe940240df42ae014842b8827, module_textual$widgets$_footer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_footer$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$widgets$_footer$$$function__1___init__ = cache_frame_frame_textual$widgets$_footer$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_key);
tmp_assattr_value_1 = par_key;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_key, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_key_display);
tmp_assattr_value_2 = par_key_display;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_key_display, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_description);
tmp_assattr_value_3 = par_description;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_description, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_action);
tmp_assattr_value_4 = par_action;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_action, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_disabled);
tmp_assattr_value_5 = par_disabled;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__disabled, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_disabled);
tmp_truth_name_1 = CHECK_IF_TRUE(par_disabled);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooc";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(par_classes);
tmp_iadd_expr_left_1 = par_classes;
tmp_iadd_expr_right_1 = mod_consts.const_str_digest_80104042f61777325a37fcc7b45a7a96;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = tmp_iadd_expr_left_1;
par_classes = tmp_assign_source_1;

}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 99;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_textual$widgets$_footer, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_classes);
tmp_kw_call_value_0_1 = par_classes;
frame_frame_textual$widgets$_footer$$$function__1___init__->m_frame.f_lineno = 99;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_classes_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooc";
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


exception_lineno = 100;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_textual$widgets$_footer$Widget(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Widget);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 100;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_shrink);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 100;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = Py_False;
frame_frame_textual$widgets$_footer$$$function__1___init__->m_frame.f_lineno = 100;
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


exception_lineno = 100;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_tooltip);
tmp_truth_name_2 = CHECK_IF_TRUE(par_tooltip);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_tooltip);
tmp_assattr_value_6 = par_tooltip;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_tooltip, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_footer$$$function__1___init__,
    type_description_1,
    par_self,
    par_key,
    par_key_display,
    par_description,
    par_action,
    par_disabled,
    par_tooltip,
    par_classes,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_footer$$$function__1___init__ == cache_frame_frame_textual$widgets$_footer$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_footer$$$function__1___init__);
    cache_frame_frame_textual$widgets$_footer$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_footer$$$function__1___init__);

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
CHECK_OBJECT(par_classes);
CHECK_OBJECT(par_classes);
Py_DECREF(par_classes);
par_classes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_classes);
par_classes = NULL;
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
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_key_display);
Py_DECREF(par_key_display);
CHECK_OBJECT(par_description);
Py_DECREF(par_description);
CHECK_OBJECT(par_action);
Py_DECREF(par_action);
CHECK_OBJECT(par_disabled);
Py_DECREF(par_disabled);
CHECK_OBJECT(par_tooltip);
Py_DECREF(par_tooltip);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_key_display);
Py_DECREF(par_key_display);
CHECK_OBJECT(par_description);
Py_DECREF(par_description);
CHECK_OBJECT(par_action);
Py_DECREF(par_action);
CHECK_OBJECT(par_disabled);
Py_DECREF(par_disabled);
CHECK_OBJECT(par_tooltip);
Py_DECREF(par_tooltip);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_footer$$$function__2_render(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_key_style = NULL;
PyObject *var_description_style = NULL;
PyObject *var_key_display = NULL;
PyObject *var_key_padding = NULL;
PyObject *var_description_padding = NULL;
PyObject *var_description = NULL;
PyObject *var_label_text = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer$$$function__2_render;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_footer$$$function__2_render = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$widgets$_footer$$$function__2_render)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_footer$$$function__2_render);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_footer$$$function__2_render == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_footer$$$function__2_render = MAKE_FUNCTION_FRAME(tstate, code_objects_58335330832ba8968473054572a8e226, module_textual$widgets$_footer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_footer$$$function__2_render->m_type_description == NULL);
frame_frame_textual$widgets$_footer$$$function__2_render = cache_frame_frame_textual$widgets$_footer$$$function__2_render;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer$$$function__2_render);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer$$$function__2_render) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$widgets$_footer$$$function__2_render->m_frame.f_lineno = 105;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_get_component_rich_style,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_896944f022a792a34ed1f6085038bc98_tuple, 0)
);

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_key_style == NULL);
var_key_style = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_textual$widgets$_footer$$$function__2_render->m_frame.f_lineno = 106;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_get_component_rich_style,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_326f15d458560280b444515536d8293b_tuple, 0)
);

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_description_style == NULL);
var_description_style = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_key_display);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_key_display == NULL);
var_key_display = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
frame_frame_textual$widgets$_footer$$$function__2_render->m_frame.f_lineno = 108;
tmp_expression_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_get_component_styles,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_896944f022a792a34ed1f6085038bc98_tuple, 0)
);

if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_padding);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_key_padding == NULL);
var_key_padding = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
frame_frame_textual$widgets$_footer$$$function__2_render->m_frame.f_lineno = 109;
tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_get_component_styles,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_326f15d458560280b444515536d8293b_tuple, 0)
);

if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_padding);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_description_padding == NULL);
var_description_padding = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_description);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_description == NULL);
var_description = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_description);
tmp_truth_name_1 = CHECK_IF_TRUE(var_description);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_9;
tmp_expression_value_5 = module_var_accessor_textual$widgets$_footer$Text(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_assemble);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = mod_consts.const_str_space;
CHECK_OBJECT(var_key_padding);
tmp_expression_value_6 = var_key_padding;
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_left);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_key_display);
tmp_add_expr_right_2 = var_key_display;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_2 = mod_consts.const_str_space;
CHECK_OBJECT(var_key_padding);
tmp_expression_value_7 = var_key_padding;
tmp_mult_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_right);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_args_element_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_key_style);
tmp_tuple_element_1 = var_key_style;
PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
tmp_mult_expr_left_3 = mod_consts.const_str_space;
CHECK_OBJECT(var_description_padding);
tmp_expression_value_8 = var_description_padding;
tmp_mult_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_left);
if (tmp_mult_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 121;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 121;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_description);
tmp_add_expr_right_4 = var_description;
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 122;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_4 = mod_consts.const_str_space;
CHECK_OBJECT(var_description_padding);
tmp_expression_value_9 = var_description_padding;
tmp_mult_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_right);
if (tmp_mult_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 123;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_right_4);
Py_DECREF(tmp_mult_expr_right_4);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 123;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 123;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_args_element_value_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_description_style);
tmp_tuple_element_2 = var_description_style;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_2);
frame_frame_textual$widgets$_footer$$$function__2_render->m_frame.f_lineno = 115;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_label_text == NULL);
var_label_text = tmp_assign_source_7;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_tuple_element_3;
tmp_called_instance_5 = module_var_accessor_textual$widgets$_footer$Text(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Text);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_key_display);
tmp_tuple_element_3 = var_key_display;
tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_key_style);
tmp_tuple_element_3 = var_key_style;
PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_3);
frame_frame_textual$widgets$_footer$$$function__2_render->m_frame.f_lineno = 128;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_assemble, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_label_text == NULL);
var_label_text = tmp_assign_source_8;
}
branch_end_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_label_text);
tmp_expression_value_10 = var_label_text;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_stylize_before);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_rich_style);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 130;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_footer$$$function__2_render->m_frame.f_lineno = 130;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer$$$function__2_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer$$$function__2_render->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer$$$function__2_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_footer$$$function__2_render,
    type_description_1,
    par_self,
    var_key_style,
    var_description_style,
    var_key_display,
    var_key_padding,
    var_description_padding,
    var_description,
    var_label_text
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_footer$$$function__2_render == cache_frame_frame_textual$widgets$_footer$$$function__2_render) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_footer$$$function__2_render);
    cache_frame_frame_textual$widgets$_footer$$$function__2_render = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_footer$$$function__2_render);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_label_text);
tmp_return_value = var_label_text;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_key_style);
CHECK_OBJECT(var_key_style);
Py_DECREF(var_key_style);
var_key_style = NULL;
CHECK_OBJECT(var_description_style);
CHECK_OBJECT(var_description_style);
Py_DECREF(var_description_style);
var_description_style = NULL;
CHECK_OBJECT(var_key_display);
CHECK_OBJECT(var_key_display);
Py_DECREF(var_key_display);
var_key_display = NULL;
CHECK_OBJECT(var_key_padding);
CHECK_OBJECT(var_key_padding);
Py_DECREF(var_key_padding);
var_key_padding = NULL;
CHECK_OBJECT(var_description_padding);
CHECK_OBJECT(var_description_padding);
Py_DECREF(var_description_padding);
var_description_padding = NULL;
CHECK_OBJECT(var_description);
CHECK_OBJECT(var_description);
Py_DECREF(var_description);
var_description = NULL;
CHECK_OBJECT(var_label_text);
CHECK_OBJECT(var_label_text);
Py_DECREF(var_label_text);
var_label_text = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_key_style);
var_key_style = NULL;
Py_XDECREF(var_description_style);
var_description_style = NULL;
Py_XDECREF(var_key_display);
var_key_display = NULL;
Py_XDECREF(var_key_padding);
var_key_padding = NULL;
Py_XDECREF(var_description_padding);
var_description_padding = NULL;
Py_XDECREF(var_description);
var_description = NULL;
Py_XDECREF(var_label_text);
var_label_text = NULL;
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


static PyObject *impl_textual$widgets$_footer$$$function__3_on_mouse_down(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down = MAKE_FUNCTION_FRAME(tstate, code_objects_539095ba103fc53728f6705568359ed4, module_textual$widgets$_footer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down->m_type_description == NULL);
frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down = cache_frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__disabled);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 134;
type_description_1 = "o";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_app);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down->m_frame.f_lineno = 135;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_bell);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_app);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_simulate_key);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_key);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 137;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down->m_frame.f_lineno = 137;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down == cache_frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down);
    cache_frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_footer$$$function__3_on_mouse_down);

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


static PyObject *impl_textual$widgets$_footer$$$function__4__watch_compact(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_compact = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer$$$function__4__watch_compact;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_footer$$$function__4__watch_compact = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_footer$$$function__4__watch_compact)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_footer$$$function__4__watch_compact);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_footer$$$function__4__watch_compact == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_footer$$$function__4__watch_compact = MAKE_FUNCTION_FRAME(tstate, code_objects_e583b5239d04d906c98072451ed14e5c, module_textual$widgets$_footer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_footer$$$function__4__watch_compact->m_type_description == NULL);
frame_frame_textual$widgets$_footer$$$function__4__watch_compact = cache_frame_frame_textual$widgets$_footer$$$function__4__watch_compact;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer$$$function__4__watch_compact);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer$$$function__4__watch_compact) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_compact);
tmp_args_element_value_1 = par_compact;
tmp_args_element_value_2 = mod_consts.const_str_digest_39af7a8d6bb104a15b8654559750d449;
frame_frame_textual$widgets$_footer$$$function__4__watch_compact->m_frame.f_lineno = 140;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_set_class,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer$$$function__4__watch_compact, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer$$$function__4__watch_compact->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer$$$function__4__watch_compact, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_footer$$$function__4__watch_compact,
    type_description_1,
    par_self,
    par_compact
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_footer$$$function__4__watch_compact == cache_frame_frame_textual$widgets$_footer$$$function__4__watch_compact) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_footer$$$function__4__watch_compact);
    cache_frame_frame_textual$widgets$_footer$$$function__4__watch_compact = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_footer$$$function__4__watch_compact);

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
CHECK_OBJECT(par_compact);
Py_DECREF(par_compact);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_compact);
Py_DECREF(par_compact);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_footer$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_id = python_pars[2];
PyObject *par_classes = python_pars[3];
PyObject *par_disabled = python_pars[4];
PyObject *par_show_command_palette = python_pars[5];
PyObject *par_compact = python_pars[6];
PyObject *par_children = python_pars[7];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_footer$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_footer$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_footer$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_footer$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_footer$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4bab7f6948371a6a7b7053c21924a3d1, module_textual$widgets$_footer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_footer$$$function__5___init__->m_type_description == NULL);
frame_frame_textual$widgets$_footer$$$function__5___init__ = cache_frame_frame_textual$widgets$_footer$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer$$$function__5___init__);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 233;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_textual$widgets$_footer, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_children);
tmp_direct_call_arg2_1 = par_children;
tmp_dict_key_1 = const_str_plain_name;
CHECK_OBJECT(par_name);
tmp_dict_value_1 = par_name;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_id;
CHECK_OBJECT(par_id);
tmp_dict_value_1 = par_id;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_classes;
CHECK_OBJECT(par_classes);
tmp_dict_value_1 = par_classes;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_disabled;
CHECK_OBJECT(par_disabled);
tmp_dict_value_1 = par_disabled;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_keywords_star_list(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_set_reactive);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_textual$widgets$_footer$Footer(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Footer);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 240;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_show_command_palette);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 240;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_show_command_palette);
tmp_args_element_value_2 = par_show_command_palette;
frame_frame_textual$widgets$_footer$$$function__5___init__->m_frame.f_lineno = 240;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_set_reactive);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_textual$widgets$_footer$Footer(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Footer);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 241;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_compact);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 241;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_compact);
tmp_args_element_value_4 = par_compact;
frame_frame_textual$widgets$_footer$$$function__5___init__->m_frame.f_lineno = 241;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_set_class);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_compact);
tmp_tuple_element_1 = par_compact;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_39af7a8d6bb104a15b8654559750d449;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_559b761e51b85341313b24c0bbe5cacd);
frame_frame_textual$widgets$_footer$$$function__5___init__->m_frame.f_lineno = 242;
tmp_call_result_4 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_footer$$$function__5___init__,
    type_description_1,
    par_self,
    par_name,
    par_id,
    par_classes,
    par_disabled,
    par_show_command_palette,
    par_compact,
    par_children,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_footer$$$function__5___init__ == cache_frame_frame_textual$widgets$_footer$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_footer$$$function__5___init__);
    cache_frame_frame_textual$widgets$_footer$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_footer$$$function__5___init__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_id);
Py_DECREF(par_id);
CHECK_OBJECT(par_classes);
Py_DECREF(par_classes);
CHECK_OBJECT(par_disabled);
Py_DECREF(par_disabled);
CHECK_OBJECT(par_show_command_palette);
Py_DECREF(par_show_command_palette);
CHECK_OBJECT(par_compact);
Py_DECREF(par_compact);
CHECK_OBJECT(par_children);
Py_DECREF(par_children);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_id);
Py_DECREF(par_id);
CHECK_OBJECT(par_classes);
Py_DECREF(par_classes);
CHECK_OBJECT(par_disabled);
Py_DECREF(par_disabled);
CHECK_OBJECT(par_show_command_palette);
Py_DECREF(par_show_command_palette);
CHECK_OBJECT(par_compact);
Py_DECREF(par_compact);
CHECK_OBJECT(par_children);
Py_DECREF(par_children);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_footer$$$function__6_compose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose(tstate, tmp_closure_1);

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
struct textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose_locals {
PyObject *var_action_to_bindings;
PyObject *var_active_bindings;
PyObject *var_bindings;
PyObject *var_binding;
PyObject *var_enabled;
PyObject *var_tooltip;
PyObject *var_group;
PyObject *var_multi_bindings_iterable;
PyObject *var_multi_bindings;
PyObject *var__node;
PyObject *outline_0_var__;
PyObject *outline_0_var_binding;
PyObject *outline_0_var_enabled;
PyObject *outline_0_var_tooltip;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
PyObject *tmp_for_loop_3__for_iterator;
PyObject *tmp_for_loop_3__iter_value;
PyObject *tmp_for_loop_4__for_iterator;
PyObject *tmp_for_loop_4__iter_value;
PyObject *tmp_listcomp$tuple_unpack_1__element_1;
PyObject *tmp_listcomp$tuple_unpack_1__element_2;
PyObject *tmp_listcomp$tuple_unpack_1__element_3;
PyObject *tmp_listcomp$tuple_unpack_1__element_4;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter;
PyObject *tmp_listcomp_1__$0;
PyObject *tmp_listcomp_1__contraction;
PyObject *tmp_listcomp_1__iter_value_0;
nuitka_bool tmp_try_except_1__unhandled_indicator;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__element_3;
PyObject *tmp_tuple_unpack_1__source_iter;
PyObject *tmp_tuple_unpack_2__element_1;
PyObject *tmp_tuple_unpack_2__element_2;
PyObject *tmp_tuple_unpack_2__source_iter;
PyObject *tmp_tuple_unpack_3__element_1;
PyObject *tmp_tuple_unpack_3__element_2;
PyObject *tmp_tuple_unpack_3__element_3;
PyObject *tmp_tuple_unpack_3__source_iter;
PyObject *tmp_tuple_unpack_4__element_1;
PyObject *tmp_tuple_unpack_4__element_2;
PyObject *tmp_tuple_unpack_4__element_3;
PyObject *tmp_tuple_unpack_4__source_iter;
PyObject *tmp_tuple_unpack_5__element_1;
PyObject *tmp_tuple_unpack_5__element_2;
PyObject *tmp_tuple_unpack_5__element_3;
PyObject *tmp_tuple_unpack_5__element_4;
PyObject *tmp_tuple_unpack_5__source_iter;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
int exception_keeper_lineno_11;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
int exception_keeper_lineno_13;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
int exception_keeper_lineno_23;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
int exception_keeper_lineno_25;
};
#endif

static PyObject *textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose_locals *generator_heap = (struct textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose_locals *)generator->m_heap_storage;
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
generator_heap->var_action_to_bindings = NULL;
generator_heap->var_active_bindings = NULL;
generator_heap->var_bindings = NULL;
generator_heap->var_binding = NULL;
generator_heap->var_enabled = NULL;
generator_heap->var_tooltip = NULL;
generator_heap->var_group = NULL;
generator_heap->var_multi_bindings_iterable = NULL;
generator_heap->var_multi_bindings = NULL;
generator_heap->var__node = NULL;
generator_heap->outline_0_var__ = NULL;
generator_heap->outline_0_var_binding = NULL;
generator_heap->outline_0_var_enabled = NULL;
generator_heap->outline_0_var_tooltip = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_for_loop_2__iter_value = NULL;
generator_heap->tmp_for_loop_3__for_iterator = NULL;
generator_heap->tmp_for_loop_3__iter_value = NULL;
generator_heap->tmp_for_loop_4__for_iterator = NULL;
generator_heap->tmp_for_loop_4__iter_value = NULL;
generator_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_listcomp$tuple_unpack_1__element_3 = NULL;
generator_heap->tmp_listcomp$tuple_unpack_1__element_4 = NULL;
generator_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
generator_heap->tmp_listcomp_1__$0 = NULL;
generator_heap->tmp_listcomp_1__contraction = NULL;
generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
generator_heap->tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
generator_heap->tmp_tuple_unpack_3__element_1 = NULL;
generator_heap->tmp_tuple_unpack_3__element_2 = NULL;
generator_heap->tmp_tuple_unpack_3__element_3 = NULL;
generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
generator_heap->tmp_tuple_unpack_4__element_1 = NULL;
generator_heap->tmp_tuple_unpack_4__element_2 = NULL;
generator_heap->tmp_tuple_unpack_4__element_3 = NULL;
generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
generator_heap->tmp_tuple_unpack_5__element_1 = NULL;
generator_heap->tmp_tuple_unpack_5__element_2 = NULL;
generator_heap->tmp_tuple_unpack_5__element_3 = NULL;
generator_heap->tmp_tuple_unpack_5__element_4 = NULL;
generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
generator_heap->tmp_with_1__enter = NULL;
generator_heap->tmp_with_1__exit = NULL;
generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_1__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5394481e0eb880ad4fedf3b9fb6d5518, module_textual$widgets$_footer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 245;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__bindings_ready);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 245;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 245;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
generator_heap->tmp_return_value = Py_None;
Py_INCREF(generator_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 247;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_screen);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 247;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_active_bindings);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 247;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_active_bindings == NULL);
generator_heap->var_active_bindings = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(generator_heap->var_active_bindings);
tmp_expression_value_4 = generator_heap->var_active_bindings;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_values);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 250;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 250;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 250;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 250;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_listcomp_1__$0 == NULL);
generator_heap->tmp_listcomp_1__$0 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(generator_heap->tmp_listcomp_1__contraction == NULL);
generator_heap->tmp_listcomp_1__contraction = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
tmp_next_source_1 = generator_heap->tmp_listcomp_1__$0;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "coooooooooo";
generator_heap->exception_lineno = 248;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = generator_heap->tmp_listcomp_1__iter_value_0;
    generator_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__iter_value_0);
tmp_iter_arg_2 = generator_heap->tmp_listcomp_1__iter_value_0;
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 250;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
    generator_heap->tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 250;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_1__element_1;
    generator_heap->tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 250;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_1__element_2;
    generator_heap->tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_3 = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 2, 4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 250;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_1__element_3;
    generator_heap->tmp_listcomp$tuple_unpack_1__element_3 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_4;
CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_4 = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_4, 3, 4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 250;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_1__element_4;
    generator_heap->tmp_listcomp$tuple_unpack_1__element_4 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 4);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 250;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
generator_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_1);
generator_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_2);
generator_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;
Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_3);
generator_heap->tmp_listcomp$tuple_unpack_1__element_3 = NULL;
Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_4);
generator_heap->tmp_listcomp$tuple_unpack_1__element_4 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
generator_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_11 = generator_heap->tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->outline_0_var__;
    generator_heap->outline_0_var__ = tmp_assign_source_11;
    Py_INCREF(generator_heap->outline_0_var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_1);
generator_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_12 = generator_heap->tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->outline_0_var_binding;
    generator_heap->outline_0_var_binding = tmp_assign_source_12;
    Py_INCREF(generator_heap->outline_0_var_binding);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_2);
generator_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__element_3);
tmp_assign_source_13 = generator_heap->tmp_listcomp$tuple_unpack_1__element_3;
{
    PyObject *old = generator_heap->outline_0_var_enabled;
    generator_heap->outline_0_var_enabled = tmp_assign_source_13;
    Py_INCREF(generator_heap->outline_0_var_enabled);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_3);
generator_heap->tmp_listcomp$tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__element_4);
tmp_assign_source_14 = generator_heap->tmp_listcomp$tuple_unpack_1__element_4;
{
    PyObject *old = generator_heap->outline_0_var_tooltip;
    generator_heap->outline_0_var_tooltip = tmp_assign_source_14;
    Py_INCREF(generator_heap->outline_0_var_tooltip);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_4);
generator_heap->tmp_listcomp$tuple_unpack_1__element_4 = NULL;

{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->outline_0_var_binding);
tmp_expression_value_5 = generator_heap->outline_0_var_binding;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_show);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 251;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

generator_heap->exception_lineno = 251;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
tmp_append_list_1 = generator_heap->tmp_listcomp_1__contraction;
CHECK_OBJECT(generator_heap->outline_0_var_binding);
tmp_tuple_element_1 = generator_heap->outline_0_var_binding;
tmp_append_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->outline_0_var_enabled);
tmp_tuple_element_1 = generator_heap->outline_0_var_enabled;
PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->outline_0_var_tooltip);
tmp_tuple_element_1 = generator_heap->outline_0_var_tooltip;
PyTuple_SET_ITEM0(tmp_append_value_1, 2, tmp_tuple_element_1);
generator_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_3;
}
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 248;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
tmp_assign_source_2 = generator_heap->tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_2);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
Py_DECREF(generator_heap->tmp_listcomp_1__$0);
generator_heap->tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
Py_DECREF(generator_heap->tmp_listcomp_1__contraction);
generator_heap->tmp_listcomp_1__contraction = NULL;
Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_0);
generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
Py_DECREF(generator_heap->tmp_listcomp_1__$0);
generator_heap->tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
Py_DECREF(generator_heap->tmp_listcomp_1__contraction);
generator_heap->tmp_listcomp_1__contraction = NULL;
Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_0);
generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(generator_heap->outline_0_var__);
generator_heap->outline_0_var__ = NULL;
Py_XDECREF(generator_heap->outline_0_var_binding);
generator_heap->outline_0_var_binding = NULL;
Py_XDECREF(generator_heap->outline_0_var_enabled);
generator_heap->outline_0_var_enabled = NULL;
Py_XDECREF(generator_heap->outline_0_var_tooltip);
generator_heap->outline_0_var_tooltip = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->outline_0_var__);
generator_heap->outline_0_var__ = NULL;
Py_XDECREF(generator_heap->outline_0_var_binding);
generator_heap->outline_0_var_binding = NULL;
Py_XDECREF(generator_heap->outline_0_var_enabled);
generator_heap->outline_0_var_enabled = NULL;
Py_XDECREF(generator_heap->outline_0_var_tooltip);
generator_heap->outline_0_var_tooltip = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
generator_heap->exception_lineno = 248;
goto frame_exception_exit_1;
outline_result_1:;
assert(generator_heap->var_bindings == NULL);
generator_heap->var_bindings = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_textual$widgets$_footer$defaultdict(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_defaultdict);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 254;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 254;
tmp_assign_source_15 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_type_list_tuple);

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 254;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_action_to_bindings == NULL);
generator_heap->var_action_to_bindings = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(generator_heap->var_bindings);
tmp_iter_arg_3 = generator_heap->var_bindings;
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_16;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_2 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "coooooooooo";
generator_heap->exception_lineno = 255;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_iter_arg_4 = generator_heap->tmp_for_loop_1__iter_value;
tmp_assign_source_18 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_5 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_5, 0, 3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_6 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_6, 1, 3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_7;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_7 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_7, 2, 3);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_3;
    generator_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_2, 3);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_8;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_8:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto try_except_handler_7;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto try_except_handler_6;
// End of try:
try_end_4:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_22 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_binding;
    generator_heap->var_binding = tmp_assign_source_22;
    Py_INCREF(generator_heap->var_binding);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_23 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_enabled;
    generator_heap->var_enabled = tmp_assign_source_23;
    Py_INCREF(generator_heap->var_enabled);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_3);
tmp_assign_source_24 = generator_heap->tmp_tuple_unpack_1__element_3;
{
    PyObject *old = generator_heap->var_tooltip;
    generator_heap->var_tooltip = tmp_assign_source_24;
    Py_INCREF(generator_heap->var_tooltip);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(generator_heap->var_action_to_bindings);
tmp_expression_value_7 = generator_heap->var_action_to_bindings;
CHECK_OBJECT(generator_heap->var_binding);
tmp_expression_value_8 = generator_heap->var_binding;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_action);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_6;
}
tmp_expression_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_6;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(generator_heap->var_binding);
tmp_tuple_element_2 = generator_heap->var_binding;
tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(generator_heap->var_enabled);
tmp_tuple_element_2 = generator_heap->var_enabled;
PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(generator_heap->var_tooltip);
tmp_tuple_element_2 = generator_heap->var_tooltip;
PyTuple_SET_ITEM0(tmp_args_element_value_1, 2, tmp_tuple_element_2);
generator->m_frame->m_frame.f_lineno = 256;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_6;
}
goto loop_start_2;
loop_end_2:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_assattr_target_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(generator_heap->var_action_to_bindings);
tmp_len_arg_1 = generator_heap->var_action_to_bindings;
tmp_assattr_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 258;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 258;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_styles);
if (tmp_assattr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_assattr_value_1);

generator_heap->exception_lineno = 258;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_grid_size_columns, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_target_1);
Py_DECREF(tmp_assattr_target_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 258;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_iter_arg_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = module_var_accessor_textual$widgets$_footer$groupby(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_groupby);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_action_to_bindings);
tmp_expression_value_10 = generator_heap->var_action_to_bindings;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_values);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 261;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 261;
tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 261;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = MAKE_FUNCTION_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda(tstate);

generator->m_frame->m_frame.f_lineno = 260;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_25 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_2__for_iterator == NULL);
generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_25;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_26;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_3 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_26 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "coooooooooo";
generator_heap->exception_lineno = 260;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_iter_arg_6 = generator_heap->tmp_for_loop_2__iter_value;
tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__source_iter;
    generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_unpack_8;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_8 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_28 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_8, 0, 2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__element_1;
    generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_unpack_9;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_9 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_29 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_9, 1, 2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__element_2;
    generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_3 = generator_heap->tmp_tuple_unpack_2__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_3, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_11;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_11:;
generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_8 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_8;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

goto try_except_handler_10;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_10:;
generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_9 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_9;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

goto try_except_handler_9;
// End of try:
try_end_7:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_30;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
tmp_assign_source_30 = generator_heap->tmp_tuple_unpack_2__element_1;
{
    PyObject *old = generator_heap->var_group;
    generator_heap->var_group = tmp_assign_source_30;
    Py_INCREF(generator_heap->var_group);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_31;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_2);
tmp_assign_source_31 = generator_heap->tmp_tuple_unpack_2__element_2;
{
    PyObject *old = generator_heap->var_multi_bindings_iterable;
    generator_heap->var_multi_bindings_iterable = tmp_assign_source_31;
    Py_INCREF(generator_heap->var_multi_bindings_iterable);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_32;
PyObject *tmp_list_arg_1;
CHECK_OBJECT(generator_heap->var_multi_bindings_iterable);
tmp_list_arg_1 = generator_heap->var_multi_bindings_iterable;
tmp_assign_source_32 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 264;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = generator_heap->var_multi_bindings;
    generator_heap->var_multi_bindings = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(generator_heap->var_group);
tmp_cmp_expr_left_1 = generator_heap->var_group;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(generator_heap->var_multi_bindings);
tmp_len_arg_2 = generator_heap->var_multi_bindings;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
assert(!(tmp_cmp_expr_left_2 == NULL));
tmp_cmp_expr_right_2 = 1;
tmp_and_right_value_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_1;
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
tmp_called_value_6 = module_var_accessor_textual$widgets$_footer$KeyGroup(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_KeyGroup);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(generator_heap->var_group);
tmp_expression_value_11 = generator_heap->var_group;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_compact);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_12;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_2);

generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_12;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_kw_call_value_0_1 = mod_consts.const_str_digest_39af7a8d6bb104a15b8654559750d449;
goto condexpr_end_1;
condexpr_false_1:;
tmp_kw_call_value_0_1 = const_str_empty;
condexpr_end_1:;
generator->m_frame->m_frame.f_lineno = 266;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_33 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_classes_tuple);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = generator_heap->tmp_with_1__source;
    generator_heap->tmp_with_1__source = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_12 = generator_heap->tmp_with_1__source;
tmp_called_value_7 = LOOKUP_SPECIAL(tstate, tmp_expression_value_12, const_str_plain___enter__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_12;
}
generator->m_frame->m_frame.f_lineno = 266;
tmp_assign_source_34 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = generator_heap->tmp_with_1__enter;
    generator_heap->tmp_with_1__enter = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_13 = generator_heap->tmp_with_1__source;
tmp_assign_source_35 = LOOKUP_SPECIAL(tstate, tmp_expression_value_13, const_str_plain___exit__);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = generator_heap->tmp_with_1__exit;
    generator_heap->tmp_with_1__exit = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_36;
tmp_assign_source_36 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_36;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_37;
PyObject *tmp_iter_arg_7;
CHECK_OBJECT(generator_heap->var_multi_bindings);
tmp_iter_arg_7 = generator_heap->var_multi_bindings;
tmp_assign_source_37 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 267;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = generator_heap->tmp_for_loop_3__for_iterator;
    generator_heap->tmp_for_loop_3__for_iterator = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_38;
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
tmp_next_source_4 = generator_heap->tmp_for_loop_3__for_iterator;
tmp_assign_source_38 = ITERATOR_NEXT_ITERATOR(tmp_next_source_4);
if (tmp_assign_source_38 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "coooooooooo";
generator_heap->exception_lineno = 267;
        goto try_except_handler_15;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_3__iter_value;
    generator_heap->tmp_for_loop_3__iter_value = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_39;
CHECK_OBJECT(generator_heap->tmp_for_loop_3__iter_value);
tmp_assign_source_39 = generator_heap->tmp_for_loop_3__iter_value;
{
    PyObject *old = generator_heap->var_multi_bindings;
    generator_heap->var_multi_bindings = tmp_assign_source_39;
    Py_INCREF(generator_heap->var_multi_bindings);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_iter_arg_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(generator_heap->var_multi_bindings);
tmp_expression_value_14 = generator_heap->var_multi_bindings;
tmp_subscript_value_2 = const_int_0;
tmp_iter_arg_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_2, 0);
if (tmp_iter_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_16;
}
tmp_assign_source_40 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
CHECK_OBJECT(tmp_iter_arg_8);
Py_DECREF(tmp_iter_arg_8);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_16;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_3__source_iter;
    generator_heap->tmp_tuple_unpack_3__source_iter = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_unpack_10;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
tmp_unpack_10 = generator_heap->tmp_tuple_unpack_3__source_iter;
tmp_assign_source_41 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_10, 0, 3);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_17;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_3__element_1;
    generator_heap->tmp_tuple_unpack_3__element_1 = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_unpack_11;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
tmp_unpack_11 = generator_heap->tmp_tuple_unpack_3__source_iter;
tmp_assign_source_42 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_11, 1, 3);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_17;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_3__element_2;
    generator_heap->tmp_tuple_unpack_3__element_2 = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_unpack_12;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
tmp_unpack_12 = generator_heap->tmp_tuple_unpack_3__source_iter;
tmp_assign_source_43 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_12, 2, 3);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_17;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_3__element_3;
    generator_heap->tmp_tuple_unpack_3__element_3 = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_4 = generator_heap->tmp_tuple_unpack_3__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_4, 3);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_17;
}
}
goto try_end_8;
// Exception handler code:
try_except_handler_17:;
generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_10 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_3__source_iter);
generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_10;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

goto try_except_handler_16;
// End of try:
try_end_8:;
goto try_end_9;
// Exception handler code:
try_except_handler_16:;
generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_11 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_1);
generator_heap->tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_2);
generator_heap->tmp_tuple_unpack_3__element_2 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_3);
generator_heap->tmp_tuple_unpack_3__element_3 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_11;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

goto try_except_handler_15;
// End of try:
try_end_9:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_3__source_iter);
generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_44;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_1);
tmp_assign_source_44 = generator_heap->tmp_tuple_unpack_3__element_1;
{
    PyObject *old = generator_heap->var_binding;
    generator_heap->var_binding = tmp_assign_source_44;
    Py_INCREF(generator_heap->var_binding);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_1);
generator_heap->tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_45;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_2);
tmp_assign_source_45 = generator_heap->tmp_tuple_unpack_3__element_2;
{
    PyObject *old = generator_heap->var_enabled;
    generator_heap->var_enabled = tmp_assign_source_45;
    Py_INCREF(generator_heap->var_enabled);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_2);
generator_heap->tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_46;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_3);
tmp_assign_source_46 = generator_heap->tmp_tuple_unpack_3__element_3;
{
    PyObject *old = generator_heap->var_tooltip;
    generator_heap->var_tooltip = tmp_assign_source_46;
    Py_INCREF(generator_heap->var_tooltip);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_3);
generator_heap->tmp_tuple_unpack_3__element_3 = NULL;

{
PyObject *tmp_expression_value_15;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_16;
PyObject *tmp_called_value_9;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_expression_value_19;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_kw_call_dict_value_1_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_20;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_expression_value_21;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_9 = module_var_accessor_textual$widgets$_footer$FooterKey(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_FooterKey);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 269;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(generator_heap->var_binding);
tmp_expression_value_17 = generator_heap->var_binding;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_key);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 270;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 271;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}

tmp_expression_value_18 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_app);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);

generator_heap->exception_lineno = 271;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(generator_heap->var_binding);
tmp_args_element_value_4 = generator_heap->var_binding;
generator->m_frame->m_frame.f_lineno = 271;
tmp_kw_call_arg_value_1_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_key_display, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);

generator_heap->exception_lineno = 271;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
tmp_kw_call_arg_value_2_1 = const_str_empty;
CHECK_OBJECT(generator_heap->var_binding);
tmp_expression_value_19 = generator_heap->var_binding;
tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_action);
if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);

generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(generator_heap->var_enabled);
tmp_operand_value_2 = generator_heap->var_enabled;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);

generator_heap->exception_lineno = 274;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
tmp_kw_call_dict_value_0_1 = (generator_heap->tmp_res == 0) ? Py_True : Py_False;
CHECK_OBJECT(generator_heap->var_tooltip);
tmp_or_left_value_1 = generator_heap->var_tooltip;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);

generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(generator_heap->var_binding);
tmp_expression_value_20 = generator_heap->var_binding;
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_description);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);

generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
tmp_kw_call_dict_value_1_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_kw_call_dict_value_1_1 = tmp_or_left_value_1;
or_end_1:;
tmp_kw_call_dict_value_2_1 = mod_consts.const_str_digest_aaa5a679342823057b4ff4a0e59f94bf;
generator->m_frame->m_frame.f_lineno = 269;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_expression_value_16 = CALL_FUNCTION_WITH_ARGS4_KW_SPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts.const_tuple_str_plain_disabled_str_plain_tooltip_str_plain_classes_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 269;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_data_bind);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 269;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
tmp_expression_value_21 = module_var_accessor_textual$widgets$_footer$Footer(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Footer);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_8);

generator_heap->exception_lineno = 277;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_compact);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_8);

generator_heap->exception_lineno = 277;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
generator->m_frame->m_frame.f_lineno = 269;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_expression_value_15 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts.const_tuple_str_plain_compact_tuple);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 269;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_8, sizeof(PyObject *), &tmp_expression_value_16, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_18, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_2_1, sizeof(PyObject *), &tmp_kw_call_arg_value_3_1, sizeof(PyObject *), &tmp_expression_value_19, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_operand_value_2, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(PyObject *), &tmp_or_right_value_1, sizeof(PyObject *), &tmp_expression_value_20, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_expression_value_21, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_15;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_8, sizeof(PyObject *), &tmp_expression_value_16, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_18, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_2_1, sizeof(PyObject *), &tmp_kw_call_arg_value_3_1, sizeof(PyObject *), &tmp_expression_value_19, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_operand_value_2, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(PyObject *), &tmp_or_right_value_1, sizeof(PyObject *), &tmp_expression_value_20, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_value_0_2, sizeof(PyObject *), &tmp_expression_value_21, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 269;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 267;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_15;
}
goto loop_start_4;
loop_end_4:;
goto try_end_10;
// Exception handler code:
try_except_handler_15:;
generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_12 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
generator_heap->tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
generator_heap->tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_12;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_12;

goto try_except_handler_14;
// End of try:
try_end_10:;
Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
generator_heap->tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
generator_heap->tmp_for_loop_3__for_iterator = NULL;
goto try_end_11;
// Exception handler code:
try_except_handler_14:;
generator_heap->exception_keeper_lineno_13 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_13 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_13);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_13, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_13 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_13, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_13);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_BaseException;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_5 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_assign_source_47;
tmp_assign_source_47 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_47;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_10 = generator_heap->tmp_with_1__exit;
tmp_args_element_value_5 = EXC_TYPE(tstate);
tmp_args_element_value_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_6); 
tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_7 == NULL) {
    tmp_args_element_value_7 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 266;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_18;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_18;
}
tmp_condition_result_6 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 266;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "coooooooooo";
goto try_except_handler_18;
branch_no_5:;
goto branch_end_4;
branch_no_4:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 266;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "coooooooooo";
goto try_except_handler_18;
branch_end_4:;
goto try_end_12;
// Exception handler code:
try_except_handler_18:;
generator_heap->exception_keeper_lineno_14 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_14 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_14;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_14;

goto try_except_handler_13;
// End of try:
try_end_12:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_11;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_11:;
goto try_end_13;
// Exception handler code:
try_except_handler_13:;
generator_heap->exception_keeper_lineno_15 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_15 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_2;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_11 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 266;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_15);

generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_6:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_15;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_15;

goto try_except_handler_12;
// End of try:
try_end_13:;
{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_3;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_12 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 266;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_7:;
goto try_end_14;
// Exception handler code:
try_except_handler_12:;
generator_heap->exception_keeper_lineno_16 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_16 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
Py_XDECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_16;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_16;

goto try_except_handler_9;
// End of try:
try_end_14:;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
CHECK_OBJECT(generator_heap->tmp_with_1__source);
Py_DECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
Py_DECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
Py_DECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
{
PyObject *tmp_expression_value_22;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_23;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
tmp_called_value_13 = module_var_accessor_textual$widgets$_footer$FooterLabel(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_FooterLabel);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 278;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(generator_heap->var_group);
tmp_expression_value_23 = generator_heap->var_group;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_description);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 278;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_9;
}
generator->m_frame->m_frame.f_lineno = 278;
tmp_expression_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 278;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_9;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_13, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_expression_value_23, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_22;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_13, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_expression_value_23, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 278;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_9;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_iter_arg_9;
CHECK_OBJECT(generator_heap->var_multi_bindings);
tmp_iter_arg_9 = generator_heap->var_multi_bindings;
tmp_assign_source_48 = MAKE_ITERATOR(tstate, tmp_iter_arg_9);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = generator_heap->tmp_for_loop_4__for_iterator;
    generator_heap->tmp_for_loop_4__for_iterator = tmp_assign_source_48;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_49;
CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
tmp_next_source_5 = generator_heap->tmp_for_loop_4__for_iterator;
tmp_assign_source_49 = ITERATOR_NEXT_ITERATOR(tmp_next_source_5);
if (tmp_assign_source_49 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "coooooooooo";
generator_heap->exception_lineno = 280;
        goto try_except_handler_19;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_4__iter_value;
    generator_heap->tmp_for_loop_4__iter_value = tmp_assign_source_49;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_50;
CHECK_OBJECT(generator_heap->tmp_for_loop_4__iter_value);
tmp_assign_source_50 = generator_heap->tmp_for_loop_4__iter_value;
{
    PyObject *old = generator_heap->var_multi_bindings;
    generator_heap->var_multi_bindings = tmp_assign_source_50;
    Py_INCREF(generator_heap->var_multi_bindings);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_51;
PyObject *tmp_iter_arg_10;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(generator_heap->var_multi_bindings);
tmp_expression_value_24 = generator_heap->var_multi_bindings;
tmp_subscript_value_3 = const_int_0;
tmp_iter_arg_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_3, 0);
if (tmp_iter_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 281;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_20;
}
tmp_assign_source_51 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
CHECK_OBJECT(tmp_iter_arg_10);
Py_DECREF(tmp_iter_arg_10);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 281;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_20;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_4__source_iter;
    generator_heap->tmp_tuple_unpack_4__source_iter = tmp_assign_source_51;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_52;
PyObject *tmp_unpack_13;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
tmp_unpack_13 = generator_heap->tmp_tuple_unpack_4__source_iter;
tmp_assign_source_52 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_13, 0, 3);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 281;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_21;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_4__element_1;
    generator_heap->tmp_tuple_unpack_4__element_1 = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_unpack_14;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
tmp_unpack_14 = generator_heap->tmp_tuple_unpack_4__source_iter;
tmp_assign_source_53 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_14, 1, 3);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 281;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_21;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_4__element_2;
    generator_heap->tmp_tuple_unpack_4__element_2 = tmp_assign_source_53;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_unpack_15;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
tmp_unpack_15 = generator_heap->tmp_tuple_unpack_4__source_iter;
tmp_assign_source_54 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_15, 2, 3);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 281;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_21;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_4__element_3;
    generator_heap->tmp_tuple_unpack_4__element_3 = tmp_assign_source_54;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
tmp_iterator_name_5 = generator_heap->tmp_tuple_unpack_4__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_5, 3);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 281;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_21;
}
}
goto try_end_15;
// Exception handler code:
try_except_handler_21:;
generator_heap->exception_keeper_lineno_17 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_17 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_4__source_iter);
generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_17;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_17;

goto try_except_handler_20;
// End of try:
try_end_15:;
goto try_end_16;
// Exception handler code:
try_except_handler_20:;
generator_heap->exception_keeper_lineno_18 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_18 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_1);
generator_heap->tmp_tuple_unpack_4__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_2);
generator_heap->tmp_tuple_unpack_4__element_2 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_3);
generator_heap->tmp_tuple_unpack_4__element_3 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_18;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
try_end_16:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_4__source_iter);
generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
{
PyObject *tmp_assign_source_55;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__element_1);
tmp_assign_source_55 = generator_heap->tmp_tuple_unpack_4__element_1;
{
    PyObject *old = generator_heap->var_binding;
    generator_heap->var_binding = tmp_assign_source_55;
    Py_INCREF(generator_heap->var_binding);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_1);
generator_heap->tmp_tuple_unpack_4__element_1 = NULL;

{
PyObject *tmp_assign_source_56;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__element_2);
tmp_assign_source_56 = generator_heap->tmp_tuple_unpack_4__element_2;
{
    PyObject *old = generator_heap->var_enabled;
    generator_heap->var_enabled = tmp_assign_source_56;
    Py_INCREF(generator_heap->var_enabled);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_2);
generator_heap->tmp_tuple_unpack_4__element_2 = NULL;

{
PyObject *tmp_assign_source_57;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__element_3);
tmp_assign_source_57 = generator_heap->tmp_tuple_unpack_4__element_3;
{
    PyObject *old = generator_heap->var_tooltip;
    generator_heap->var_tooltip = tmp_assign_source_57;
    Py_INCREF(generator_heap->var_tooltip);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_3);
generator_heap->tmp_tuple_unpack_4__element_3 = NULL;

{
PyObject *tmp_expression_value_25;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_26;
PyObject *tmp_called_value_15;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_expression_value_27;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_element_value_9;
PyObject *tmp_kw_call_arg_value_2_2;
PyObject *tmp_expression_value_29;
PyObject *tmp_kw_call_arg_value_3_2;
PyObject *tmp_expression_value_30;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_expression_value_31;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
tmp_called_value_15 = module_var_accessor_textual$widgets$_footer$FooterKey(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_FooterKey);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 282;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}
CHECK_OBJECT(generator_heap->var_binding);
tmp_expression_value_27 = generator_heap->var_binding;
tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_key);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 283;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 284;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}

tmp_expression_value_28 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_app);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_2);

generator_heap->exception_lineno = 284;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}
CHECK_OBJECT(generator_heap->var_binding);
tmp_args_element_value_9 = generator_heap->var_binding;
generator->m_frame->m_frame.f_lineno = 284;
tmp_kw_call_arg_value_1_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_key_display, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_2);

generator_heap->exception_lineno = 284;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}
CHECK_OBJECT(generator_heap->var_binding);
tmp_expression_value_29 = generator_heap->var_binding;
tmp_kw_call_arg_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_description);
if (tmp_kw_call_arg_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);

generator_heap->exception_lineno = 285;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}
CHECK_OBJECT(generator_heap->var_binding);
tmp_expression_value_30 = generator_heap->var_binding;
tmp_kw_call_arg_value_3_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_action);
if (tmp_kw_call_arg_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_2_2);

generator_heap->exception_lineno = 286;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}
CHECK_OBJECT(generator_heap->var_enabled);
tmp_operand_value_4 = generator_heap->var_enabled;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_2_2);
Py_DECREF(tmp_kw_call_arg_value_3_2);

generator_heap->exception_lineno = 287;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}
tmp_kw_call_dict_value_0_2 = (generator_heap->tmp_res == 0) ? Py_True : Py_False;
CHECK_OBJECT(generator_heap->var_tooltip);
tmp_kw_call_dict_value_1_2 = generator_heap->var_tooltip;
generator->m_frame->m_frame.f_lineno = 282;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_expression_value_26 = CALL_FUNCTION_WITH_ARGS4_KW_SPLIT(tstate, tmp_called_value_15, args, kw_values, mod_consts.const_tuple_str_plain_disabled_str_plain_tooltip_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
CHECK_OBJECT(tmp_kw_call_arg_value_2_2);
Py_DECREF(tmp_kw_call_arg_value_2_2);
CHECK_OBJECT(tmp_kw_call_arg_value_3_2);
Py_DECREF(tmp_kw_call_arg_value_3_2);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 282;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_data_bind);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 282;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}
tmp_expression_value_31 = module_var_accessor_textual$widgets$_footer$Footer(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Footer);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_14);

generator_heap->exception_lineno = 289;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}
tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_compact);
if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_14);

generator_heap->exception_lineno = 289;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}
generator->m_frame->m_frame.f_lineno = 282;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

    tmp_expression_value_25 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_14, kw_values, mod_consts.const_tuple_str_plain_compact_tuple);
}

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 282;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_14, sizeof(PyObject *), &tmp_expression_value_26, sizeof(PyObject *), &tmp_called_value_15, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_expression_value_27, sizeof(PyObject *), &tmp_kw_call_arg_value_1_2, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_28, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_kw_call_arg_value_2_2, sizeof(PyObject *), &tmp_expression_value_29, sizeof(PyObject *), &tmp_kw_call_arg_value_3_2, sizeof(PyObject *), &tmp_expression_value_30, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), &tmp_operand_value_4, sizeof(PyObject *), &tmp_kw_call_dict_value_1_2, sizeof(PyObject *), &tmp_kw_call_value_0_3, sizeof(PyObject *), &tmp_expression_value_31, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 3;
return tmp_expression_value_25;
yield_return_3:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_14, sizeof(PyObject *), &tmp_expression_value_26, sizeof(PyObject *), &tmp_called_value_15, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_expression_value_27, sizeof(PyObject *), &tmp_kw_call_arg_value_1_2, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_28, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_kw_call_arg_value_2_2, sizeof(PyObject *), &tmp_expression_value_29, sizeof(PyObject *), &tmp_kw_call_arg_value_3_2, sizeof(PyObject *), &tmp_expression_value_30, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), &tmp_operand_value_4, sizeof(PyObject *), &tmp_kw_call_dict_value_1_2, sizeof(PyObject *), &tmp_kw_call_value_0_3, sizeof(PyObject *), &tmp_expression_value_31, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 282;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}
tmp_yield_result_3 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_3);
Py_DECREF(tmp_yield_result_3);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_19;
}
goto loop_start_5;
loop_end_5:;
goto try_end_17;
// Exception handler code:
try_except_handler_19:;
generator_heap->exception_keeper_lineno_19 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_19 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
generator_heap->tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
generator_heap->tmp_for_loop_4__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_19;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_19;

goto try_except_handler_9;
// End of try:
try_end_17:;
Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
generator_heap->tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
generator_heap->tmp_for_loop_4__for_iterator = NULL;
branch_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_9;
}
goto loop_start_3;
loop_end_3:;
goto try_end_18;
// Exception handler code:
try_except_handler_9:;
generator_heap->exception_keeper_lineno_20 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_20 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_20;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_20;

goto frame_exception_exit_1;
// End of try:
try_end_18:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_9;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_32;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_attribute_value_4;
int tmp_truth_name_4;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_32 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_show_command_palette);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_3);

generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_34 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_app);
if (tmp_expression_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_ENABLE_COMMAND_PALETTE);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_attribute_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_4);

generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_4);
Py_DECREF(tmp_attribute_value_4);
tmp_condition_result_9 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_9 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
nuitka_bool tmp_assign_source_58;
tmp_assign_source_58 = NUITKA_BOOL_TRUE;
generator_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_58;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_59;
PyObject *tmp_iter_arg_11;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
CHECK_OBJECT(generator_heap->var_active_bindings);
tmp_expression_value_35 = generator_heap->var_active_bindings;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 293;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_23;
}

tmp_expression_value_37 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_app);
if (tmp_expression_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 293;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_23;
}
tmp_subscript_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_COMMAND_PALETTE_BINDING);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_subscript_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 293;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_23;
}
tmp_iter_arg_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_iter_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 293;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_23;
}
tmp_assign_source_59 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
CHECK_OBJECT(tmp_iter_arg_11);
Py_DECREF(tmp_iter_arg_11);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 292;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_23;
}
assert(generator_heap->tmp_tuple_unpack_5__source_iter == NULL);
generator_heap->tmp_tuple_unpack_5__source_iter = tmp_assign_source_59;
}
// Tried code:
{
PyObject *tmp_assign_source_60;
PyObject *tmp_unpack_16;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
tmp_unpack_16 = generator_heap->tmp_tuple_unpack_5__source_iter;
tmp_assign_source_60 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_16, 0, 4);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 292;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_24;
}
assert(generator_heap->tmp_tuple_unpack_5__element_1 == NULL);
generator_heap->tmp_tuple_unpack_5__element_1 = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_unpack_17;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
tmp_unpack_17 = generator_heap->tmp_tuple_unpack_5__source_iter;
tmp_assign_source_61 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_17, 1, 4);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 292;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_24;
}
assert(generator_heap->tmp_tuple_unpack_5__element_2 == NULL);
generator_heap->tmp_tuple_unpack_5__element_2 = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_unpack_18;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
tmp_unpack_18 = generator_heap->tmp_tuple_unpack_5__source_iter;
tmp_assign_source_62 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_18, 2, 4);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 292;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_24;
}
assert(generator_heap->tmp_tuple_unpack_5__element_3 == NULL);
generator_heap->tmp_tuple_unpack_5__element_3 = tmp_assign_source_62;
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_unpack_19;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
tmp_unpack_19 = generator_heap->tmp_tuple_unpack_5__source_iter;
tmp_assign_source_63 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_19, 3, 4);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 292;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_24;
}
assert(generator_heap->tmp_tuple_unpack_5__element_4 == NULL);
generator_heap->tmp_tuple_unpack_5__element_4 = tmp_assign_source_63;
}
{
PyObject *tmp_iterator_name_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
tmp_iterator_name_6 = generator_heap->tmp_tuple_unpack_5__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_6, 4);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 292;
generator_heap->type_description_1 = "coooooooooo";
    goto try_except_handler_24;
}
}
goto try_end_19;
// Exception handler code:
try_except_handler_24:;
generator_heap->exception_keeper_lineno_21 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_21 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_5__source_iter);
generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_21;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_21;

goto try_except_handler_23;
// End of try:
try_end_19:;
goto try_end_20;
// Exception handler code:
try_except_handler_23:;
generator_heap->exception_keeper_lineno_22 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_22 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_1);
generator_heap->tmp_tuple_unpack_5__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_2);
generator_heap->tmp_tuple_unpack_5__element_2 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_3);
generator_heap->tmp_tuple_unpack_5__element_3 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_4);
generator_heap->tmp_tuple_unpack_5__element_4 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_22;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_22;

goto try_except_handler_22;
// End of try:
try_end_20:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_5__source_iter);
generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
{
PyObject *tmp_assign_source_64;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__element_1);
tmp_assign_source_64 = generator_heap->tmp_tuple_unpack_5__element_1;
assert(generator_heap->var__node == NULL);
Py_INCREF(tmp_assign_source_64);
generator_heap->var__node = tmp_assign_source_64;
}
Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_1);
generator_heap->tmp_tuple_unpack_5__element_1 = NULL;

{
PyObject *tmp_assign_source_65;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__element_2);
tmp_assign_source_65 = generator_heap->tmp_tuple_unpack_5__element_2;
{
    PyObject *old = generator_heap->var_binding;
    generator_heap->var_binding = tmp_assign_source_65;
    Py_INCREF(generator_heap->var_binding);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_2);
generator_heap->tmp_tuple_unpack_5__element_2 = NULL;

{
PyObject *tmp_assign_source_66;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__element_3);
tmp_assign_source_66 = generator_heap->tmp_tuple_unpack_5__element_3;
{
    PyObject *old = generator_heap->var_enabled;
    generator_heap->var_enabled = tmp_assign_source_66;
    Py_INCREF(generator_heap->var_enabled);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_3);
generator_heap->tmp_tuple_unpack_5__element_3 = NULL;

{
PyObject *tmp_assign_source_67;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__element_4);
tmp_assign_source_67 = generator_heap->tmp_tuple_unpack_5__element_4;
{
    PyObject *old = generator_heap->var_tooltip;
    generator_heap->var_tooltip = tmp_assign_source_67;
    Py_INCREF(generator_heap->var_tooltip);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_4);
generator_heap->tmp_tuple_unpack_5__element_4 = NULL;

goto try_end_21;
// Exception handler code:
try_except_handler_22:;
generator_heap->exception_keeper_lineno_23 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_23 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
nuitka_bool tmp_assign_source_68;
tmp_assign_source_68 = NUITKA_BOOL_FALSE;
generator_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_68;
}
// Preserve existing published exception id 2.
generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_23);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_23);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_23, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_23 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_23);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_23, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_23);
// Tried code:
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_KeyError;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_10 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 291;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "coooooooooo";
goto try_except_handler_25;
branch_no_9:;
goto try_end_22;
// Exception handler code:
try_except_handler_25:;
generator_heap->exception_keeper_lineno_24 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_24 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_24;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_24;

goto frame_exception_exit_1;
// End of try:
try_end_22:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

goto try_end_21;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_21:;
{
bool tmp_condition_result_11;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(generator_heap->tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = generator_heap->tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_11 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_expression_value_38;
PyObject *tmp_called_value_16;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_expression_value_39;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_40;
PyObject *tmp_expression_value_41;
PyObject *tmp_args_element_value_10;
PyObject *tmp_kw_call_arg_value_2_3;
PyObject *tmp_expression_value_42;
PyObject *tmp_kw_call_arg_value_3_3;
PyObject *tmp_expression_value_43;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_3;
PyObject *tmp_operand_value_5;
PyObject *tmp_kw_call_dict_value_2_2;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_4;
tmp_called_value_16 = module_var_accessor_textual$widgets$_footer$FooterKey(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_FooterKey);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 298;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
if (generator_heap->var_binding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_binding);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 299;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_39 = generator_heap->var_binding;
tmp_kw_call_arg_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_key);
if (tmp_kw_call_arg_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 299;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 300;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_41 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_app);
if (tmp_expression_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_3);

generator_heap->exception_lineno = 300;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_get_key_display);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_3);

generator_heap->exception_lineno = 300;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
if (generator_heap->var_binding == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_called_value_17);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_binding);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 300;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_10 = generator_heap->var_binding;
generator->m_frame->m_frame.f_lineno = 300;
tmp_kw_call_arg_value_1_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
if (tmp_kw_call_arg_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_3);

generator_heap->exception_lineno = 300;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
if (generator_heap->var_binding == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_binding);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 301;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_42 = generator_heap->var_binding;
tmp_kw_call_arg_value_2_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_description);
if (tmp_kw_call_arg_value_2_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);

generator_heap->exception_lineno = 301;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
if (generator_heap->var_binding == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_2_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_binding);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 302;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_43 = generator_heap->var_binding;
tmp_kw_call_arg_value_3_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_action);
if (tmp_kw_call_arg_value_3_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_2_3);

generator_heap->exception_lineno = 302;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_3 = mod_consts.const_str_digest_c6b386b08e59d813672dab26f54cae7c;
if (generator_heap->var_enabled == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_2_3);
Py_DECREF(tmp_kw_call_arg_value_3_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_enabled);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 304;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_5 = generator_heap->var_enabled;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_2_3);
Py_DECREF(tmp_kw_call_arg_value_3_3);

generator_heap->exception_lineno = 304;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_3 = (generator_heap->tmp_res == 0) ? Py_True : Py_False;
if (generator_heap->var_binding == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_2_3);
Py_DECREF(tmp_kw_call_arg_value_3_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_binding);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 305;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_44 = generator_heap->var_binding;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_tooltip);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_2_3);
Py_DECREF(tmp_kw_call_arg_value_3_3);

generator_heap->exception_lineno = 305;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_2_3);
Py_DECREF(tmp_kw_call_arg_value_3_3);
Py_DECREF(tmp_or_left_value_2);

generator_heap->exception_lineno = 305;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
if (generator_heap->var_binding == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_2_3);
Py_DECREF(tmp_kw_call_arg_value_3_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_binding);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 305;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_45 = generator_heap->var_binding;
tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_description);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_2_3);
Py_DECREF(tmp_kw_call_arg_value_3_3);

generator_heap->exception_lineno = 305;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_2 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_kw_call_dict_value_2_2 = tmp_or_left_value_2;
or_end_2:;
generator->m_frame->m_frame.f_lineno = 298;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_3, tmp_kw_call_arg_value_3_3};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_2};
    tmp_expression_value_38 = CALL_FUNCTION_WITH_ARGS4_KW_SPLIT(tstate, tmp_called_value_16, args, kw_values, mod_consts.const_tuple_str_plain_classes_str_plain_disabled_str_plain_tooltip_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_0_3);
CHECK_OBJECT(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);
CHECK_OBJECT(tmp_kw_call_arg_value_2_3);
Py_DECREF(tmp_kw_call_arg_value_2_3);
CHECK_OBJECT(tmp_kw_call_arg_value_3_3);
Py_DECREF(tmp_kw_call_arg_value_3_3);
CHECK_OBJECT(tmp_kw_call_dict_value_2_2);
Py_DECREF(tmp_kw_call_dict_value_2_2);
if (tmp_expression_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 298;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_16, sizeof(PyObject *), &tmp_kw_call_arg_value_0_3, sizeof(PyObject *), &tmp_expression_value_39, sizeof(PyObject *), &tmp_kw_call_arg_value_1_3, sizeof(PyObject *), &tmp_called_value_17, sizeof(PyObject *), &tmp_expression_value_40, sizeof(PyObject *), &tmp_expression_value_41, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), &tmp_kw_call_arg_value_2_3, sizeof(PyObject *), &tmp_expression_value_42, sizeof(PyObject *), &tmp_kw_call_arg_value_3_3, sizeof(PyObject *), &tmp_expression_value_43, sizeof(PyObject *), &tmp_kw_call_dict_value_0_3, sizeof(PyObject *), &tmp_kw_call_dict_value_1_3, sizeof(PyObject *), &tmp_operand_value_5, sizeof(PyObject *), &tmp_kw_call_dict_value_2_2, sizeof(PyObject *), &tmp_or_left_truth_2, sizeof(int), &tmp_or_left_value_2, sizeof(PyObject *), &tmp_or_right_value_2, sizeof(PyObject *), &tmp_expression_value_44, sizeof(PyObject *), &tmp_expression_value_45, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 4;
return tmp_expression_value_38;
yield_return_4:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_16, sizeof(PyObject *), &tmp_kw_call_arg_value_0_3, sizeof(PyObject *), &tmp_expression_value_39, sizeof(PyObject *), &tmp_kw_call_arg_value_1_3, sizeof(PyObject *), &tmp_called_value_17, sizeof(PyObject *), &tmp_expression_value_40, sizeof(PyObject *), &tmp_expression_value_41, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), &tmp_kw_call_arg_value_2_3, sizeof(PyObject *), &tmp_expression_value_42, sizeof(PyObject *), &tmp_kw_call_arg_value_3_3, sizeof(PyObject *), &tmp_expression_value_43, sizeof(PyObject *), &tmp_kw_call_dict_value_0_3, sizeof(PyObject *), &tmp_kw_call_dict_value_1_3, sizeof(PyObject *), &tmp_operand_value_5, sizeof(PyObject *), &tmp_kw_call_dict_value_2_2, sizeof(PyObject *), &tmp_or_left_truth_2, sizeof(int), &tmp_or_left_value_2, sizeof(PyObject *), &tmp_or_right_value_2, sizeof(PyObject *), &tmp_expression_value_44, sizeof(PyObject *), &tmp_expression_value_45, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 298;
generator_heap->type_description_1 = "coooooooooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_4 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_4);
Py_DECREF(tmp_yield_result_4);
}
branch_no_10:;
branch_no_8:;

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

goto function_return_exit;

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
    generator_heap->var_action_to_bindings,
    generator_heap->var_active_bindings,
    generator_heap->var_bindings,
    generator_heap->var_binding,
    generator_heap->var_enabled,
    generator_heap->var_tooltip,
    generator_heap->var_group,
    generator_heap->var_multi_bindings_iterable,
    generator_heap->var_multi_bindings,
    generator_heap->var__node
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
goto try_end_23;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_25 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_25 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_action_to_bindings);
generator_heap->var_action_to_bindings = NULL;
Py_XDECREF(generator_heap->var_active_bindings);
generator_heap->var_active_bindings = NULL;
Py_XDECREF(generator_heap->var_bindings);
generator_heap->var_bindings = NULL;
Py_XDECREF(generator_heap->var_binding);
generator_heap->var_binding = NULL;
Py_XDECREF(generator_heap->var_enabled);
generator_heap->var_enabled = NULL;
Py_XDECREF(generator_heap->var_tooltip);
generator_heap->var_tooltip = NULL;
Py_XDECREF(generator_heap->var_group);
generator_heap->var_group = NULL;
Py_XDECREF(generator_heap->var_multi_bindings_iterable);
generator_heap->var_multi_bindings_iterable = NULL;
Py_XDECREF(generator_heap->var_multi_bindings);
generator_heap->var_multi_bindings = NULL;
Py_XDECREF(generator_heap->var__node);
generator_heap->var__node = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_25;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_25;

goto function_exception_exit;
// End of try:
try_end_23:;
CHECK_OBJECT(generator_heap->var_action_to_bindings);
CHECK_OBJECT(generator_heap->var_action_to_bindings);
Py_DECREF(generator_heap->var_action_to_bindings);
generator_heap->var_action_to_bindings = NULL;
CHECK_OBJECT(generator_heap->var_active_bindings);
CHECK_OBJECT(generator_heap->var_active_bindings);
Py_DECREF(generator_heap->var_active_bindings);
generator_heap->var_active_bindings = NULL;
CHECK_OBJECT(generator_heap->var_bindings);
CHECK_OBJECT(generator_heap->var_bindings);
Py_DECREF(generator_heap->var_bindings);
generator_heap->var_bindings = NULL;
Py_XDECREF(generator_heap->var_binding);
generator_heap->var_binding = NULL;
Py_XDECREF(generator_heap->var_enabled);
generator_heap->var_enabled = NULL;
Py_XDECREF(generator_heap->var_tooltip);
generator_heap->var_tooltip = NULL;
Py_XDECREF(generator_heap->var_group);
generator_heap->var_group = NULL;
Py_XDECREF(generator_heap->var_multi_bindings_iterable);
generator_heap->var_multi_bindings_iterable = NULL;
Py_XDECREF(generator_heap->var_multi_bindings);
generator_heap->var_multi_bindings = NULL;
Py_XDECREF(generator_heap->var__node);
generator_heap->var__node = NULL;


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

static PyObject *MAKE_GENERATOR_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose_context,
        module_textual$widgets$_footer,
        mod_consts.const_str_plain_compose,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_1c9c17fd06a6595bb36f1869114ca3c0,
#endif
        code_objects_5394481e0eb880ad4fedf3b9fb6d5518,
        closure,
        1,
#if 1
        sizeof(struct textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_multi_bindings_ = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_e7e8d167b16634dd39d6dd2250e6640a, module_textual$widgets$_footer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda->m_type_description == NULL);
frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda = cache_frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_multi_bindings_);
tmp_expression_value_3 = par_multi_bindings_;
tmp_subscript_value_1 = const_int_0;
tmp_expression_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_0;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_group);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda,
    type_description_1,
    par_multi_bindings_
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda == cache_frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda);
    cache_frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_multi_bindings_);
Py_DECREF(par_multi_bindings_);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_multi_bindings_);
Py_DECREF(par_multi_bindings_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_footer$$$function__7_bindings_changed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_screen = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer$$$function__7_bindings_changed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_footer$$$function__7_bindings_changed = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_footer$$$function__7_bindings_changed)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_footer$$$function__7_bindings_changed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_footer$$$function__7_bindings_changed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_footer$$$function__7_bindings_changed = MAKE_FUNCTION_FRAME(tstate, code_objects_30902815ed5d4535f075ffa936a41b1d, module_textual$widgets$_footer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_footer$$$function__7_bindings_changed->m_type_description == NULL);
frame_frame_textual$widgets$_footer$$$function__7_bindings_changed = cache_frame_frame_textual$widgets$_footer$$$function__7_bindings_changed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer$$$function__7_bindings_changed);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer$$$function__7_bindings_changed) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__bindings_ready, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_screen);
tmp_expression_value_2 = par_screen;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_app);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_app_focus);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
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
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_is_attached);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 312;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_screen);
tmp_cmp_expr_left_1 = par_screen;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_screen);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_call_after_refresh);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_recompose);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 313;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_footer$$$function__7_bindings_changed->m_frame.f_lineno = 313;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer$$$function__7_bindings_changed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer$$$function__7_bindings_changed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer$$$function__7_bindings_changed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_footer$$$function__7_bindings_changed,
    type_description_1,
    par_self,
    par_screen
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_footer$$$function__7_bindings_changed == cache_frame_frame_textual$widgets$_footer$$$function__7_bindings_changed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_footer$$$function__7_bindings_changed);
    cache_frame_frame_textual$widgets$_footer$$$function__7_bindings_changed = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_footer$$$function__7_bindings_changed);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_screen);
Py_DECREF(par_screen);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_footer$$$function__8__on_mouse_scroll_down(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_event = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down = MAKE_FUNCTION_FRAME(tstate, code_objects_b5bc6a7e492d4a3a940e77211267ba7c, module_textual$widgets$_footer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down->m_type_description == NULL);
frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down = cache_frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_allow_horizontal_scroll);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 316;
type_description_1 = "oo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down->m_frame.f_lineno = 317;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_release_anchor);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__scroll_right_for_pointer);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down->m_frame.f_lineno = 318;
tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_animate_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 318;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_event);
tmp_called_instance_2 = par_event;
frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down->m_frame.f_lineno = 319;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_stop);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_4;
CHECK_OBJECT(par_event);
tmp_called_instance_3 = par_event;
frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down->m_frame.f_lineno = 320;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_prevent_default);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_2:;
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down,
    type_description_1,
    par_self,
    par_event
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down == cache_frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down);
    cache_frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_footer$$$function__8__on_mouse_scroll_down);

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
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_footer$$$function__9__on_mouse_scroll_up(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_event = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up = MAKE_FUNCTION_FRAME(tstate, code_objects_fc44560d979ffbafa44d0129906ed992, module_textual$widgets$_footer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up->m_type_description == NULL);
frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up = cache_frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_allow_horizontal_scroll);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 323;
type_description_1 = "oo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up->m_frame.f_lineno = 324;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_release_anchor);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__scroll_left_for_pointer);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up->m_frame.f_lineno = 325;
tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_animate_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 325;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_event);
tmp_called_instance_2 = par_event;
frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up->m_frame.f_lineno = 326;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_stop);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_4;
CHECK_OBJECT(par_event);
tmp_called_instance_3 = par_event;
frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up->m_frame.f_lineno = 327;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_prevent_default);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_2:;
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up,
    type_description_1,
    par_self,
    par_event
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up == cache_frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up);
    cache_frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_footer$$$function__9__on_mouse_scroll_up);

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
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_footer$$$function__10_on_mount(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer$$$function__10_on_mount;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_footer$$$function__10_on_mount = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_footer$$$function__10_on_mount)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_footer$$$function__10_on_mount);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_footer$$$function__10_on_mount == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_footer$$$function__10_on_mount = MAKE_FUNCTION_FRAME(tstate, code_objects_ccea132894c46e58b502967099e3f2f2, module_textual$widgets$_footer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_footer$$$function__10_on_mount->m_type_description == NULL);
frame_frame_textual$widgets$_footer$$$function__10_on_mount = cache_frame_frame_textual$widgets$_footer$$$function__10_on_mount;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer$$$function__10_on_mount);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer$$$function__10_on_mount) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_screen);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_bindings_updated_signal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_subscribe);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_bindings_changed);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 330;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_footer$$$function__10_on_mount->m_frame.f_lineno = 330;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer$$$function__10_on_mount, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer$$$function__10_on_mount->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer$$$function__10_on_mount, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_footer$$$function__10_on_mount,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_footer$$$function__10_on_mount == cache_frame_frame_textual$widgets$_footer$$$function__10_on_mount) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_footer$$$function__10_on_mount);
    cache_frame_frame_textual$widgets$_footer$$$function__10_on_mount = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_footer$$$function__10_on_mount);

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


static PyObject *impl_textual$widgets$_footer$$$function__11_on_unmount(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer$$$function__11_on_unmount;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_footer$$$function__11_on_unmount = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_footer$$$function__11_on_unmount)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_footer$$$function__11_on_unmount);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_footer$$$function__11_on_unmount == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_footer$$$function__11_on_unmount = MAKE_FUNCTION_FRAME(tstate, code_objects_cb3114f8326098d190908e6abc8bd8ca, module_textual$widgets$_footer, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_footer$$$function__11_on_unmount->m_type_description == NULL);
frame_frame_textual$widgets$_footer$$$function__11_on_unmount = cache_frame_frame_textual$widgets$_footer$$$function__11_on_unmount;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer$$$function__11_on_unmount);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer$$$function__11_on_unmount) == 2);

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


exception_lineno = 333;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_bindings_updated_signal);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_textual$widgets$_footer$$$function__11_on_unmount->m_frame.f_lineno = 333;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_unsubscribe, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer$$$function__11_on_unmount, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer$$$function__11_on_unmount->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer$$$function__11_on_unmount, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_footer$$$function__11_on_unmount,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_footer$$$function__11_on_unmount == cache_frame_frame_textual$widgets$_footer$$$function__11_on_unmount) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_footer$$$function__11_on_unmount);
    cache_frame_frame_textual$widgets$_footer$$$function__11_on_unmount = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_footer$$$function__11_on_unmount);

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



static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__10_on_mount(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_footer$$$function__10_on_mount,
        mod_consts.const_str_plain_on_mount,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_39b84962e89c3fd74241250a1e85905f,
#endif
        code_objects_ccea132894c46e58b502967099e3f2f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_footer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__11_on_unmount(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_footer$$$function__11_on_unmount,
        mod_consts.const_str_plain_on_unmount,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_607d903bb81f3f5f9b079b7a943c7e19,
#endif
        code_objects_cb3114f8326098d190908e6abc8bd8ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_footer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_footer$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8c120c045ec60e40706536d35f400fc3,
#endif
        code_objects_2fc6562fe940240df42ae014842b8827,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_footer,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__2_render(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_footer$$$function__2_render,
        mod_consts.const_str_plain_render,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_45af2dd9f5a778b428de120e186ec899,
#endif
        code_objects_58335330832ba8968473054572a8e226,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_footer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__3_on_mouse_down(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_footer$$$function__3_on_mouse_down,
        mod_consts.const_str_plain_on_mouse_down,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e888244c6e69fcdd320c393bc236192d,
#endif
        code_objects_539095ba103fc53728f6705568359ed4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_footer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__4__watch_compact(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_footer$$$function__4__watch_compact,
        mod_consts.const_str_plain__watch_compact,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_91e45bb575fab1fef81cf59990913884,
#endif
        code_objects_e583b5239d04d906c98072451ed14e5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_footer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__5___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_footer$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7a0145b3eb2b2869033806c544546fd4,
#endif
        code_objects_4bab7f6948371a6a7b7053c21924a3d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_textual$widgets$_footer,
        mod_consts.const_str_digest_17f80252000ab54f00a451ceeb10d592,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__6_compose(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_footer$$$function__6_compose,
        mod_consts.const_str_plain_compose,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1c9c17fd06a6595bb36f1869114ca3c0,
#endif
        code_objects_5394481e0eb880ad4fedf3b9fb6d5518,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_footer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_40225ebe140bf63911238c814e64d2bd,
#endif
        code_objects_e7e8d167b16634dd39d6dd2250e6640a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_textual$widgets$_footer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__7_bindings_changed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_footer$$$function__7_bindings_changed,
        mod_consts.const_str_plain_bindings_changed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_05c95f9ffb59286aafad09c087efa036,
#endif
        code_objects_30902815ed5d4535f075ffa936a41b1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_footer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__8__on_mouse_scroll_down(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_footer$$$function__8__on_mouse_scroll_down,
        mod_consts.const_str_plain__on_mouse_scroll_down,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f03b3ef73632ae8f0d62aeedc5153b5e,
#endif
        code_objects_b5bc6a7e492d4a3a940e77211267ba7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_footer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_footer$$$function__9__on_mouse_scroll_up(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_footer$$$function__9__on_mouse_scroll_up,
        mod_consts.const_str_plain__on_mouse_scroll_up,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9ff9fe4f840ab8cf93835a4d07a63aea,
#endif
        code_objects_fc44560d979ffbafa44d0129906ed992,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_footer,
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

static function_impl_code const function_table_textual$widgets$_footer[] = {
impl_textual$widgets$_footer$$$function__6_compose$$$genobj__1_compose$$$function__1_lambda,
impl_textual$widgets$_footer$$$function__1___init__,
impl_textual$widgets$_footer$$$function__2_render,
impl_textual$widgets$_footer$$$function__3_on_mouse_down,
impl_textual$widgets$_footer$$$function__4__watch_compact,
impl_textual$widgets$_footer$$$function__5___init__,
impl_textual$widgets$_footer$$$function__6_compose,
impl_textual$widgets$_footer$$$function__7_bindings_changed,
impl_textual$widgets$_footer$$$function__8__on_mouse_scroll_down,
impl_textual$widgets$_footer$$$function__9__on_mouse_scroll_up,
impl_textual$widgets$_footer$$$function__10_on_mount,
impl_textual$widgets$_footer$$$function__11_on_unmount,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$widgets$_footer);
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
        module_textual$widgets$_footer,
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
        function_table_textual$widgets$_footer,
        sizeof(function_table_textual$widgets$_footer) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.widgets._footer";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$widgets$_footer(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$widgets$_footer");

    // Store the module for future use.
    module_textual$widgets$_footer = module;

    moduledict_textual$widgets$_footer = MODULE_DICT(module_textual$widgets$_footer);

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
        PRINT_STRING("textual$widgets$_footer: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$widgets$_footer: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$widgets$_footer: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.widgets._footer" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$widgets$_footer\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$widgets$_footer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$widgets$_footer,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$widgets$_footer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$widgets$_footer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$widgets$_footer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$widgets$_footer);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$widgets$_footer);
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

        UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
struct Nuitka_CellObject *outline_3_var___class__ = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_textual$widgets$_footer$$$class__1_KeyGroup_23 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer$$$class__1_KeyGroup_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_textual$widgets$_footer$$$class__2_FooterKey_32 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer$$$class__2_FooterKey_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_textual$widgets$_footer$$$class__3_FooterLabel_143 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_textual$widgets$_footer$$$class__4_Footer_148 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_footer$$$class__4_Footer_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$widgets$_footer = MAKE_MODULE_FRAME(code_objects_f8d7159a84db71a23867381d08539a1a, module_textual$widgets$_footer);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$widgets$_footer$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$widgets$_footer$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
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
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$widgets$_footer;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_defaultdict_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 3;
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
        (PyObject *)moduledict_textual$widgets$_footer,
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
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_defaultdict, tmp_assign_source_5);
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
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$widgets$_footer;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_groupby_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 4;
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
        (PyObject *)moduledict_textual$widgets$_footer,
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
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_groupby, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$widgets$_footer;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 7;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_rich, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_0d91c6ec9ef50a11f3b56cd85a224a7e;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$widgets$_footer;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Text_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 8;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$widgets$_footer,
        mod_consts.const_str_plain_Text,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Text);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Text, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_textual;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$widgets$_footer;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_events_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 10;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$widgets$_footer,
        mod_consts.const_str_plain_events,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_events);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_events, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_4b198d212d9a0bf540e5157dbac1b8bd;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$widgets$_footer;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_ComposeResult_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 11;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$widgets$_footer,
        mod_consts.const_str_plain_ComposeResult,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ComposeResult);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_ComposeResult, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_d2a246f6e260a2c4ad9692789d633ead;
tmp_globals_arg_value_7 = (PyObject *)moduledict_textual$widgets$_footer;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_Binding_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 12;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$widgets$_footer,
        mod_consts.const_str_plain_Binding,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Binding);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Binding, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_45837af94bae6220963db538704d20ea;
tmp_globals_arg_value_8 = (PyObject *)moduledict_textual$widgets$_footer;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_HorizontalGroup_str_plain_ScrollableContainer_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 13;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$widgets$_footer,
        mod_consts.const_str_plain_HorizontalGroup,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_HorizontalGroup);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_HorizontalGroup, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$widgets$_footer,
        mod_consts.const_str_plain_ScrollableContainer,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ScrollableContainer);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_ScrollableContainer, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_4979ed38fe8de6337e942bbe079bf23b;
tmp_globals_arg_value_9 = (PyObject *)moduledict_textual$widgets$_footer;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_reactive_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 14;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_textual$widgets$_footer,
        mod_consts.const_str_plain_reactive,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_reactive);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_reactive, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_cedd216d41d29545a37269a9a7f4ddc6;
tmp_globals_arg_value_10 = (PyObject *)moduledict_textual$widgets$_footer;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_Widget_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 15;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_textual$widgets$_footer,
        mod_consts.const_str_plain_Widget,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Widget);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Widget, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_09eff8b7f8b8176140fd165775b873cd;
tmp_globals_arg_value_11 = (PyObject *)moduledict_textual$widgets$_footer;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_Label_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 16;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_textual$widgets$_footer,
        mod_consts.const_str_plain_Label,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Label);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Label, tmp_assign_source_18);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_textual$widgets$_footer$HorizontalGroup(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HorizontalGroup);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto try_except_handler_2;
}
tmp_assign_source_19 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_19, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_20 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
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


exception_lineno = 23;

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


exception_lineno = 23;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_22 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_22;
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


exception_lineno = 23;

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
PyObject *tmp_assign_source_23;
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


exception_lineno = 23;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_KeyGroup;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 23;
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_23;
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


exception_lineno = 23;

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
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_12, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

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


exception_lineno = 23;

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


exception_lineno = 23;

    goto try_except_handler_2;
}
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 23;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 23;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_24;
}
branch_end_1:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_1;
tmp_expression_value_7 = module_var_accessor_textual$widgets$_footer$rich(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rich);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto try_except_handler_2;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_repr);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_2;
}
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$widgets$_footer$$$class__1_KeyGroup_23 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fd2b06f27e0a4918f8f421882a0ed013;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__1_KeyGroup_23, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_KeyGroup;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__1_KeyGroup_23, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_23;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__1_KeyGroup_23, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_4;
}
frame_frame_textual$widgets$_footer$$$class__1_KeyGroup_2 = MAKE_CLASS_FRAME(tstate, code_objects_8009e0f60fe936e15030409457ac26b5, module_textual$widgets$_footer, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer$$$class__1_KeyGroup_2);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer$$$class__1_KeyGroup_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_digest_89aabc9f743967cefdaa852bce6366c3;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__1_KeyGroup_23, mod_consts.const_str_plain_DEFAULT_CSS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer$$$class__1_KeyGroup_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer$$$class__1_KeyGroup_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer$$$class__1_KeyGroup_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_footer$$$class__1_KeyGroup_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$widgets$_footer$$$class__1_KeyGroup_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__1_KeyGroup_23, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

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


exception_lineno = 23;

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
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__1_KeyGroup_23, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_KeyGroup;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_textual$widgets$_footer$$$class__1_KeyGroup_23;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 23;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_26;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_args_element_value_1 = outline_0_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_textual$widgets$_footer$$$class__1_KeyGroup_23);
locals_textual$widgets$_footer$$$class__1_KeyGroup_23 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_footer$$$class__1_KeyGroup_23);
locals_textual$widgets$_footer$$$class__1_KeyGroup_23 = NULL;
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
exception_lineno = 23;
goto try_except_handler_2;
outline_result_2:;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 22;
tmp_assign_source_25 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_auto, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_KeyGroup, tmp_assign_source_25);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_textual$widgets$_footer$Widget(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Widget);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto try_except_handler_5;
}
tmp_assign_source_27 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_28 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_8 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_30 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_30;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_FooterKey;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 32;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_31;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
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
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_13, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_5;
}
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 32;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 32;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_32;
}
branch_end_4:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_2;
tmp_expression_value_14 = module_var_accessor_textual$widgets$_footer$rich(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rich);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto try_except_handler_5;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_repr);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_5;
}
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_textual$widgets$_footer$$$class__2_FooterKey_32 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fd2b06f27e0a4918f8f421882a0ed013;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__2_FooterKey_32, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_FooterKey;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__2_FooterKey_32, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__2_FooterKey_32, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_7;
}
frame_frame_textual$widgets$_footer$$$class__2_FooterKey_3 = MAKE_CLASS_FRAME(tstate, code_objects_fe8b86b358381486921fa0c316ed8c7b, module_textual$widgets$_footer, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer$$$class__2_FooterKey_3);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer$$$class__2_FooterKey_3) == 2);

// Framed code:
tmp_dictset_value = Py_False;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__2_FooterKey_32, mod_consts.const_str_plain_ALLOW_SELECT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_dictset_value = PySet_New(mod_consts.const_set_661a02ebc516a841d575b299571e3d19);
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__2_FooterKey_32, mod_consts.const_str_plain_COMPONENT_CLASSES, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_str_digest_ed42f43e676428786324f6fb1747ae84;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__2_FooterKey_32, mod_consts.const_str_plain_DEFAULT_CSS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_called_value_4;
tmp_called_value_4 = PyObject_GetItem(locals_textual$widgets$_footer$$$class__2_FooterKey_32, mod_consts.const_str_plain_reactive);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = module_var_accessor_textual$widgets$_footer$reactive(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reactive);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_textual$widgets$_footer$$$class__2_FooterKey_3->m_frame.f_lineno = 79;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_true_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__2_FooterKey_32, mod_consts.const_str_plain_compact, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_1 = mod_consts.const_tuple_false_str_empty_str_empty_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_fb214f5a855238ae5d17f13ed2bd7643);
Py_INCREF(tmp_defaults_1);
tmp_closure_1[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_footer$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__2_FooterKey_32, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_b685ac1c87f5b6bdc8e585e42b7efba4);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_footer$$$function__2_render(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__2_FooterKey_32, mod_consts.const_str_plain_render, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_footer$$$function__3_on_mouse_down(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__2_FooterKey_32, mod_consts.const_str_plain_on_mouse_down, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_7ba3d157564a998922a2db3616078943);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_footer$$$function__4__watch_compact(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__2_FooterKey_32, mod_consts.const_str_plain__watch_compact, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer$$$class__2_FooterKey_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer$$$class__2_FooterKey_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer$$$class__2_FooterKey_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_footer$$$class__2_FooterKey_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_textual$widgets$_footer$$$class__2_FooterKey_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_a1134fd80f88197e984c087e30683d3d_tuple;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__2_FooterKey_32, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_7;
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


exception_lineno = 32;

    goto try_except_handler_7;
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
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__2_FooterKey_32, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_FooterKey;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_textual$widgets$_footer$$$class__2_FooterKey_32;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 32;
tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_7;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_34);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_args_element_value_2 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_args_element_value_2);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_textual$widgets$_footer$$$class__2_FooterKey_32);
locals_textual$widgets$_footer$$$class__2_FooterKey_32 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_footer$$$class__2_FooterKey_32);
locals_textual$widgets$_footer$$$class__2_FooterKey_32 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 32;
goto try_except_handler_5;
outline_result_4:;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 31;
tmp_assign_source_33 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_auto, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_FooterKey, tmp_assign_source_33);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_35;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_textual$widgets$_footer$Label(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Label);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;

    goto try_except_handler_8;
}
tmp_assign_source_35 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_36 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_8;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_15 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_8;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_8;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_38 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_38;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_8;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_8;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_FooterLabel;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 143;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_39;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_18 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_8;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_19;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_19, tmp_name_value_14, tmp_default_value_3);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_20 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_8;
}
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 143;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 143;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_40;
}
branch_end_7:;
{
PyObject *tmp_assign_source_41;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_textual$widgets$_footer$$$class__3_FooterLabel_143 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fd2b06f27e0a4918f8f421882a0ed013;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__3_FooterLabel_143, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_digest_983d2ff8313f2b28e7cea36d66b1103c;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__3_FooterLabel_143, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_FooterLabel;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__3_FooterLabel_143, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_143;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__3_FooterLabel_143, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_10;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__3_FooterLabel_143, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_10;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_10;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__3_FooterLabel_143, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_10;
}
branch_no_9:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_12 = mod_consts.const_str_plain_FooterLabel;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_textual$widgets$_footer$$$class__3_FooterLabel_143;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 143;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;

    goto try_except_handler_10;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_42;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_41 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_41);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_textual$widgets$_footer$$$class__3_FooterLabel_143);
locals_textual$widgets$_footer$$$class__3_FooterLabel_143 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_footer$$$class__3_FooterLabel_143);
locals_textual$widgets$_footer$$$class__3_FooterLabel_143 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 143;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_FooterLabel, tmp_assign_source_41);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_43;
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = module_var_accessor_textual$widgets$_footer$ScrollableContainer(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ScrollableContainer);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;

    goto try_except_handler_11;
}
tmp_assign_source_43 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_43, 0, tmp_tuple_element_13);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_44 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = DICT_COPY(tstate, mod_consts.const_dict_829a2f090deec102e0b943e994a79ba5);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_11;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_21 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_11;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_11;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_46 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_46;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_11;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_11;
}
tmp_tuple_element_14 = mod_consts.const_str_plain_Footer;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 148;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_47;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_24 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_11;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_25;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_25, tmp_name_value_15, tmp_default_value_4);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_11;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_26;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_26 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_26 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_11;
}
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 148;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 148;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_48;
}
branch_end_10:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_element_value_3;
tmp_expression_value_27 = module_var_accessor_textual$widgets$_footer$rich(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rich);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;

    goto try_except_handler_11;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain_repr);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_11;
}
outline_3_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_textual$widgets$_footer$$$class__4_Footer_148 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fd2b06f27e0a4918f8f421882a0ed013;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_Footer;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_148;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_13;
}
frame_frame_textual$widgets$_footer$$$class__4_Footer_4 = MAKE_CLASS_FRAME(tstate, code_objects_ecbcb1a2198c503672e7c58e06d89683, module_textual$widgets$_footer, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_footer$$$class__4_Footer_4);
assert(Py_REFCNT(frame_frame_textual$widgets$_footer$$$class__4_Footer_4) == 2);

// Framed code:
tmp_dictset_value = Py_False;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain_ALLOW_SELECT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_str_digest_6dfeca71f5096f6bbb877d85f270c47b;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain_DEFAULT_CSS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_called_value_9;
tmp_called_value_9 = PyObject_GetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain_reactive);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = module_var_accessor_textual$widgets$_footer$reactive(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reactive);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

frame_frame_textual$widgets$_footer$$$class__4_Footer_4->m_frame.f_lineno = 203;
tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_str_digest_39af7a8d6bb104a15b8654559750d449_tuple, 0), mod_consts.const_tuple_str_plain_toggle_class_tuple);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain_compact, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_10;
tmp_called_value_10 = PyObject_GetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain_reactive);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = module_var_accessor_textual$widgets$_footer$reactive(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reactive);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

frame_frame_textual$widgets$_footer$$$class__4_Footer_4->m_frame.f_lineno = 205;
tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_false_tuple, 0), mod_consts.const_tuple_str_plain_repaint_tuple);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain__bindings_ready, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_11;
tmp_called_value_11 = PyObject_GetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain_reactive);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = module_var_accessor_textual$widgets$_footer$reactive(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reactive);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

frame_frame_textual$widgets$_footer$$$class__4_Footer_4->m_frame.f_lineno = 207;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_true_tuple);

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain_show_command_palette, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_12;
tmp_called_value_12 = PyObject_GetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain_reactive);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = module_var_accessor_textual$widgets$_footer$reactive(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reactive);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

frame_frame_textual$widgets$_footer$$$class__4_Footer_4->m_frame.f_lineno = 209;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_true_tuple);

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain_combine_groups, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_5;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_5d1988ae173ebe1e89bf94930c7e4ffe);
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_db63ed5e4f63364a9df7ae85ee304bcc);
tmp_closure_2[0] = outline_3_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_footer$$$function__5___init__(tstate, tmp_kw_defaults_1, tmp_annotations_5, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_45f8252a11e5e4152cf13f146844ebd3);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_footer$$$function__6_compose(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain_compose, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_e314a0d832df76a7335d922207e90ad6);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_footer$$$function__7_bindings_changed(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain_bindings_changed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_3b7322adfaccc121004acd48996db02b);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_footer$$$function__8__on_mouse_scroll_down(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain__on_mouse_scroll_down, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_faad7c44485929a585811ff86815f796);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_footer$$$function__9__on_mouse_scroll_up(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain__on_mouse_scroll_up, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_footer$$$function__10_on_mount(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain_on_mount, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_footer$$$function__11_on_unmount(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain_on_unmount, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer$$$class__4_Footer_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer$$$class__4_Footer_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer$$$class__4_Footer_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_footer$$$class__4_Footer_4,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_textual$widgets$_footer$$$class__4_Footer_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_13;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__bindings_ready_tuple;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_13;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$widgets$_footer$$$class__4_Footer_148, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_13;
}
branch_no_12:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_16 = mod_consts.const_str_plain_Footer;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
tmp_tuple_element_16 = locals_textual$widgets$_footer$$$class__4_Footer_148;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 148;
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto try_except_handler_13;
}
assert(Nuitka_Cell_GET(outline_3_var___class__) == NULL);
Nuitka_Cell_SET(outline_3_var___class__, tmp_assign_source_50);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_3_var___class__));
tmp_args_element_value_3 = Nuitka_Cell_GET(outline_3_var___class__);
Py_INCREF(tmp_args_element_value_3);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_textual$widgets$_footer$$$class__4_Footer_148);
locals_textual$widgets$_footer$$$class__4_Footer_148 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_footer$$$class__4_Footer_148);
locals_textual$widgets$_footer$$$class__4_Footer_148 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 148;
goto try_except_handler_11;
outline_result_8:;
frame_frame_textual$widgets$_footer->m_frame.f_lineno = 147;
tmp_assign_source_49 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_auto, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)mod_consts.const_str_plain_Footer, tmp_assign_source_49);
}
goto try_end_5;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
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
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_footer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_footer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_footer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$widgets$_footer);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$widgets$_footer", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.widgets._footer" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$widgets$_footer);
    return module_textual$widgets$_footer;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_footer, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$widgets$_footer", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'textual$widgets$_selection_list'
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



/* The "module_textual$widgets$_selection_list" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$widgets$_selection_list;
PyDictObject *moduledict_textual$widgets$_selection_list;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Content;
PyObject *const_str_plain_from_text;
PyObject *const_str_plain__value;
PyObject *const_str_plain__initial_state;
PyObject *const_str_digest_28fc37b1736feb58cac448e4f9fa2fff;
PyObject *const_str_digest_746b4eeac417fc31ccc5f4bc224f1886;
PyObject *const_str_digest_484951df2203ffe46821bc50be855702;
PyObject *const_str_plain_selection_list;
PyObject *const_str_plain_get_option_at_index;
PyObject *const_str_plain_selection;
PyObject *const_str_plain_selection_index;
PyObject *const_str_digest_b1da54b9c38e693d453ae42ae38a2271;
PyObject *const_str_digest_8987d5ef5a77bdeec0c786019f2b79bc;
PyObject *const_str_plain_self;
PyObject *const_str_plain___rich_repr__;
PyObject *const_str_digest_a9953b000bee76c1567a86cd1372607e;
PyObject *const_str_digest_23694382e68fe779a17faa2fde3dc600;
PyObject *const_str_plain__selected;
PyObject *const_str_plain__send_messages;
PyObject *const_str_plain__make_selection;
PyObject *const_str_plain_value;
PyObject *const_str_plain__values;
PyObject *const_str_plain_id;
PyObject *const_str_plain_classes;
PyObject *const_str_plain_disabled;
PyObject *const_str_plain_compact;
PyObject *const_str_digest_4fa5ca04c72d49a87b4196d048623233;
PyObject *const_str_digest_75930ec1118db8556615a2468fa4c71d;
PyObject *const_str_digest_cece19643a893fd7c82d67c40b2f1804;
PyObject *const_str_plain_post_message;
PyObject *const_str_plain_SelectedChanged;
PyObject *const_str_plain_set_sender;
PyObject *const_str_digest_5809c6f4b4561d76cc72d34f2cbc5c6c;
PyObject *const_str_plain_SelectionToggled;
PyObject *const_str_digest_7232c4579d321ea7302d5c8f283f45ae;
PyObject *const_str_plain_prevent;
PyObject *const_str_plain__options;
PyObject *const_str_plain_state_change;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_Selection;
PyObject *const_str_plain_SelectionType;
PyObject *const_str_plain_changed;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain__message_changed;
PyObject *const_str_plain_refresh;
PyObject *const_str_digest_20736b0f615b70a9a80751d000b33563;
PyObject *const_str_digest_771e6537e0c4eec13f7e9de56bf55e36;
PyObject *const_str_plain__select;
PyObject *const_str_digest_a4f4c38c6ff25fcd32b194b101b4cf9a;
PyObject *const_str_plain__apply_to_all;
PyObject *const_str_digest_55355053a87abf7b0d1b37d5fd339f02;
PyObject *const_str_digest_355faf8ae6e687509d21bc73e256ff03;
PyObject *const_str_plain__deselect;
PyObject *const_str_digest_0d91193a6d94c5dca0d0673ab030fb03;
PyObject *const_str_digest_62922fa3f6c2836f091fa9fa049eaf62;
PyObject *const_str_plain__message_toggled;
PyObject *const_str_digest_5e41416f397dfd50e5c806485c2205a3;
PyObject *const_str_plain__toggle;
PyObject *const_str_digest_32e3f245fe49001f1e854a80295ec007;
PyObject *const_str_digest_c08c49ab5c9e2faff8a896ee8b4f484b;
PyObject *const_str_digest_667b160a46b0083e00d251f3d8e3a81b;
PyObject *const_tuple_false_tuple;
PyObject *const_str_plain_SelectionError;
PyObject *const_str_digest_21e3faef5c6c5baf969ee8f592817945;
PyObject *const_str_plain_initial_state;
PyObject *const_str_digest_38ca710d1b67aa1948d6d5bcbbfcd5a3;
PyObject *const_str_plain_highlighted;
PyObject *const_str_plain_toggle;
PyObject *const_str_digest_1367c717d6899aaa872703861dfccd69;
PyObject *const_str_plain_ToggleButton;
PyObject *const_str_plain_BUTTON_LEFT;
PyObject *const_str_plain_BUTTON_INNER;
PyObject *const_str_plain_BUTTON_RIGHT;
PyObject *const_str_space;
PyObject *const_str_digest_fb27717acf4f04df83f1fa524f225e57;
PyObject *const_str_plain_render_line;
PyObject *const_str_plain_scroll_offset;
PyObject *const_str_plain_OptionDoesNotExist;
PyObject *const_str_digest_5c02f47a45391768f3c50a0062480bfe;
PyObject *const_str_digest_2f9cdca6dcd614329ba638c14c433df4;
PyObject *const_str_digest_643e2a2b65f0613c970767a295e34dc0;
PyObject *const_str_plain_style;
PyObject *const_str_plain_rich_style;
PyObject *const_str_plain_get_component_rich_style;
PyObject *const_str_plain_Style;
PyObject *const_str_plain_from_color;
PyObject *const_str_plain_bgcolor;
PyObject *const_str_plain_option;
PyObject *const_tuple_str_plain_meta_tuple;
PyObject *const_str_plain_Strip;
PyObject *const_str_plain_Segment;
PyObject *const_tuple_str_plain_style_tuple;
PyObject *const_tuple_str_space_tuple;
PyObject *const_str_digest_c4af502f97fb8f08c4ffb79495a25916;
PyObject *const_str_plain_stop;
PyObject *const_str_plain_SelectionHighlighted;
PyObject *const_str_plain_option_index;
PyObject *const_str_digest_9ae9983e109f596bc97c00922f8919d8;
PyObject *const_str_plain__toggle_highlighted_selection;
PyObject *const_str_digest_ab05a82b6c3b388513b2f895e6c74339;
PyObject *const_str_digest_0873a33fda239868c590fd6253f203b6;
PyObject *const_str_digest_b718572b55684920a9eb57e92b5b8741;
PyObject *const_str_plain_get_option;
PyObject *const_str_digest_ba1fe48e4fb920d90ea58b0d3caa0c23;
PyObject *const_str_plain_items;
PyObject *const_str_digest_ceca0059245fe3bb32469bd971c70796;
PyObject *const_str_plain_cleaned_options;
PyObject *const_str_digest_ea49902805673956d643db5da0d2511f;
PyObject *const_tuple_str_digest_94cb6559c8bca0ba29e5eeff1c4d785c_tuple;
PyObject *const_str_plain_update;
PyObject *const_str_plain_option_count;
PyObject *const_tuple_str_plain_start_tuple;
PyObject *const_str_plain_add_options;
PyObject *const_str_digest_6a884b053b624ace62c0939c771b2feb;
PyObject *const_str_digest_31b63c3b68f67ee44198e0b884c6d852;
PyObject *const_str_plain_clear;
PyObject *const_str_plain_clear_options;
PyObject *const_str_digest_47c650029dc299083c1b263ba8ff4bd3;
PyObject *const_str_digest_1b8df182f3fe85ac64eea44c3b999a88;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_dataclasses;
PyObject *const_tuple_str_plain_dataclass_tuple;
PyObject *const_str_plain_dataclass;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_ClassVar;
PyObject *const_str_plain_Generic;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_digest_0266ac3c468cbbaf99b230132943e04e;
PyObject *const_tuple_str_plain_Result_tuple;
PyObject *const_str_plain_Result;
PyObject *const_str_digest_6ade9fb5040f26ac50721029664cef54;
PyObject *const_tuple_str_plain_Segment_tuple;
PyObject *const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5;
PyObject *const_tuple_str_plain_Style_tuple;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Self_tuple;
PyObject *const_str_plain_Self;
PyObject *const_str_plain_textual;
PyObject *const_tuple_str_plain_events_tuple;
PyObject *const_str_plain_events;
PyObject *const_str_digest_d2a246f6e260a2c4ad9692789d633ead;
PyObject *const_tuple_str_plain_Binding_tuple;
PyObject *const_str_plain_Binding;
PyObject *const_str_digest_ee92707a8e73d51481db58a75e3dd4cb;
PyObject *const_tuple_str_plain_Content_str_plain_ContentText_tuple;
PyObject *const_str_plain_ContentText;
PyObject *const_str_digest_72b648868ed1bbb5234f85e7f2803b8f;
PyObject *const_tuple_str_plain_Message_tuple;
PyObject *const_str_plain_Message;
PyObject *const_str_digest_ffbdc977fd7566d9981a709ea52c386e;
PyObject *const_tuple_str_plain_Strip_tuple;
PyObject *const_str_digest_e9da353d62873b67e2e0848bcc0edd5a;
PyObject *const_tuple_548e0905ce7060a67b3b9d1347862278_tuple;
PyObject *const_str_plain_Option;
PyObject *const_str_plain_OptionList;
PyObject *const_str_plain_OptionListContent;
PyObject *const_str_digest_836075f74069272fc05479c9bf04f14a;
PyObject *const_tuple_str_plain_ToggleButton_tuple;
PyObject *const_tuple_str_plain_SelectionType_tuple;
PyObject *const_tuple_str_plain_MessageSelectionType_tuple;
PyObject *const_str_plain_MessageSelectionType;
PyObject *const_tuple_type_TypeError_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_4c10d2f363db233817ad7e5890939a7d;
PyObject *const_str_digest_2541ddced8f6a486206ca95fc0c84d6a;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_33;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_3ec7c83441daabc758796c2f611b3f08;
PyObject *const_int_pos_37;
PyObject *const_tuple_false_none_false_tuple;
PyObject *const_dict_0ebaa384836f13fd14864c0195a0b79f;
PyObject *const_str_digest_569461a68676478145b510f549375e71;
PyObject *const_str_plain_property;
PyObject *const_dict_6f9ceb6c52748f0207ec218dac77a88c;
PyObject *const_str_digest_421e489ea564f6d7ec340f502d2a9696;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_90bcae480b1a8400e871c6bb2de54414;
PyObject *const_tuple_str_plain__value_str_plain__initial_state_tuple;
PyObject *const_str_plain_SelectionList;
PyObject *const_str_digest_72245f9f298a12202d11de657c416edf;
PyObject *const_int_pos_76;
PyObject *const_tuple_0b1055f287e6781d1ad4493066d55fb0_tuple;
PyObject *const_tuple_str_plain_show_tuple;
PyObject *const_str_plain_BINDINGS;
PyObject *const_set_841291e8b0739240b3e4cdd2036f1b80;
PyObject *const_str_plain_COMPONENT_CLASSES;
PyObject *const_str_digest_b3b23e90fdff5ae31e0cecb5d43aca9e;
PyObject *const_str_digest_4c0abc3fd2b99b7af3a11cfa2fddac89;
PyObject *const_str_plain_DEFAULT_CSS;
PyObject *const_str_plain_SelectionMessage;
PyObject *const_str_digest_c188eaf9d1d435f70e62ce6ccb5aa840;
PyObject *const_str_digest_55863c9a863afe8c36b358d426a5a5b2;
PyObject *const_int_pos_130;
PyObject *const_dict_945378ea034647e37c20c31ac28d08f7;
PyObject *const_str_digest_2fbaa8b168f7fa7ffe48e2d2745f8a04;
PyObject *const_dict_e98c9c41aaf5fe23282b4e9a389040bd;
PyObject *const_str_plain_control;
PyObject *const_str_digest_d6995b67d25ab5d4a74c460f7adb5de2;
PyObject *const_dict_3f7886012e9a24885cc6d004a27612fa;
PyObject *const_tuple_3d8b103162dc98dafe93097961a54d1e_tuple;
PyObject *const_str_digest_5d515257fe2173e5ae3baacf8b1029f0;
PyObject *const_str_digest_be90cce2430e1eadb9285d57f7021189;
PyObject *const_int_pos_167;
PyObject *const_str_digest_eb4ce86a0da72e1849c5c3f18466d321;
PyObject *const_str_digest_b50a413fdd321cc95c48ab836112fa2b;
PyObject *const_int_pos_174;
PyObject *const_str_digest_9b6d081c961d7399765d72f0aafd397f;
PyObject *const_str_digest_32df657dc7629c7341e28f59907ed818;
PyObject *const_int_pos_192;
PyObject *const_str_digest_6a1c16ec95343cf6b78b8bfedf32b161;
PyObject *const_dict_983a3b043e2caf2cca9c35b999da442a;
PyObject *const_str_digest_7837fece023eb48041aba658cca161b2;
PyObject *const_dict_ef53f54f3b1dc08760884b33770aaf0b;
PyObject *const_dict_851deee1d5ada623b6143a3449ccaad9;
PyObject *const_str_digest_a4bfd16cb935cc312624e1ba99fda500;
PyObject *const_dict_c3e9579dc1dec536f207f7b69cc4737b;
PyObject *const_str_plain_selected;
PyObject *const_str_digest_352b567f29ad070be6aaa010e209a3bf;
PyObject *const_dict_6930d105e413efbde0ae5885ce162200;
PyObject *const_str_plain__on_mount;
PyObject *const_str_digest_7380e2c80afaa9d2da8b85e0112c0cad;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_2cb832206a8efc311fa1a512b1b7fc1c;
PyObject *const_dict_5eb119f45f6232f5e8219b6a05f7112e;
PyObject *const_str_digest_7f78850244ae8984aa67ba5bb13b3b68;
PyObject *const_dict_734a171d662b48de0c494a768faf5bdd;
PyObject *const_str_digest_56500b61da006c1f8055b92ae3144204;
PyObject *const_dict_c34255821857de6c8e5617fcff4f61ff;
PyObject *const_str_digest_1b42e2ff8a331ed0a9bd3c535c5fa0fa;
PyObject *const_dict_b2580dd523d8989da8005b550f7e78f0;
PyObject *const_str_plain_select;
PyObject *const_str_digest_29da6b68c597949b1b0b0320166fa9ea;
PyObject *const_dict_71adc2ba5737c82f5bb97b4d3b034ead;
PyObject *const_str_plain_select_all;
PyObject *const_str_digest_a04652210e8653b93897057f2818022a;
PyObject *const_str_digest_53272d02b2b3d33e110b9c33f96cc568;
PyObject *const_str_plain_deselect;
PyObject *const_str_digest_b90accf54ee4c95ba1ffd5abf1c1aa1e;
PyObject *const_str_plain_deselect_all;
PyObject *const_str_digest_aa230fe2d840d01767c02932031e7cfc;
PyObject *const_str_digest_6e3ed4f4e4e9162c0414d1a82d28d9d6;
PyObject *const_str_digest_3154e55f0055508539fac1596bee8894;
PyObject *const_str_plain_toggle_all;
PyObject *const_str_digest_3369e845fdf445d7fa07a0de09249397;
PyObject *const_dict_a229a71afee3a9afd8d4fbef89fb6790;
PyObject *const_str_digest_b0e295f937c6ef5c8800589ecc8fe5d8;
PyObject *const_str_digest_e3801afff4a0ea8fdaaeb2c17ad02a99;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_plain__get_left_gutter_width;
PyObject *const_str_digest_b557b2fd599042f7ce52bcce5c2002b4;
PyObject *const_dict_a6322218cfb66cfbc32cafdbbe71e5c1;
PyObject *const_str_digest_a932f139558b89ecdd4d6d55cee260a5;
PyObject *const_dict_430658d3c8f9299829ad88ef68e5a71e;
PyObject *const_str_plain__on_option_list_option_highlighted;
PyObject *const_str_digest_e6c24b825c2c0152339f32bb4210aebe;
PyObject *const_dict_126c938c0a1784cf7355686c26d58009;
PyObject *const_str_plain__on_option_list_option_selected;
PyObject *const_str_digest_7e1765c9ee13b8cf65aee2ac15a371a1;
PyObject *const_dict_209b0d5f3437eed66370177f1800fe39;
PyObject *const_str_digest_783c06e1555fab5573be65060a704932;
PyObject *const_dict_fa07e504fbcba4ec0fbf84851f414dde;
PyObject *const_str_digest_d690797ac00a088368a746dfe0602bd2;
PyObject *const_dict_492736cc9534029beb06b38d25b49293;
PyObject *const_str_plain__pre_remove_option;
PyObject *const_str_digest_94c663a1484131d947a9086ecbe41243;
PyObject *const_dict_71db7c1a486fac83d1afae7d84a81317;
PyObject *const_str_digest_52e8cb22df674d7942c0203e26bff60c;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_fd0f356c9a413b5e2e31a017fce350ec;
PyObject *const_str_plain_add_option;
PyObject *const_str_digest_8e96f4c5829b3ce89a90618ded2ab016;
PyObject *const_str_digest_b35dd6358536b15ff4176538e4f1b2e2;
PyObject *const_tuple_dd0a82629facdc8027fac2736f0a594c_tuple;
PyObject *const_str_digest_74fd4f984e5fe263f9c5b69345e3e785;
PyObject *const_str_digest_892fd785f0da19992e4ebeb7aa300e19;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_25aed75320cc046d2ad1829017e10042_tuple;
PyObject *const_tuple_72b89e075dd9e8cd2e0e733e6a9063ce_tuple;
PyObject *const_tuple_ebbfb292b696be62e7b3d0f0019daecf_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_2a809ee7f38fbe9abeaee663a3445f03_tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
PyObject *const_tuple_str_plain_self_str_plain_selection_tuple;
PyObject *const_tuple_str_plain_self_str_plain_option_index_tuple;
PyObject *const_tuple_str_plain_self_str_plain__event_tuple;
PyObject *const_tuple_str_plain_self_str_plain_event_tuple;
PyObject *const_tuple_str_plain_self_str_plain_option_str_plain_index_tuple;
PyObject *const_tuple_str_plain_self_str_plain_item_tuple;
PyObject *const_tuple_42a5df549aa72df57251fe73b3b757b7_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_option_id_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_index_str_plain___class___tuple;
PyObject *const_tuple_8caf396a88b4adf6a7b632e194920611_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[302];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.widgets._selection_list"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Content);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_text);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__value);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__initial_state);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_28fc37b1736feb58cac448e4f9fa2fff);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_746b4eeac417fc31ccc5f4bc224f1886);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_484951df2203ffe46821bc50be855702);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_selection_list);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_option_at_index);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_selection);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_selection_index);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1da54b9c38e693d453ae42ae38a2271);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_8987d5ef5a77bdeec0c786019f2b79bc);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain___rich_repr__);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9953b000bee76c1567a86cd1372607e);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_23694382e68fe779a17faa2fde3dc600);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__selected);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__send_messages);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__make_selection);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__values);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_classes);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_disabled);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_compact);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_4fa5ca04c72d49a87b4196d048623233);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_75930ec1118db8556615a2468fa4c71d);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_cece19643a893fd7c82d67c40b2f1804);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_post_message);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_SelectedChanged);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_sender);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_5809c6f4b4561d76cc72d34f2cbc5c6c);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_SelectionToggled);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_7232c4579d321ea7302d5c8f283f45ae);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_prevent);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__options);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_state_change);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_Selection);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_SelectionType);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_changed);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__message_changed);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_20736b0f615b70a9a80751d000b33563);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_771e6537e0c4eec13f7e9de56bf55e36);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__select);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4f4c38c6ff25fcd32b194b101b4cf9a);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__apply_to_all);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_55355053a87abf7b0d1b37d5fd339f02);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_355faf8ae6e687509d21bc73e256ff03);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__deselect);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d91193a6d94c5dca0d0673ab030fb03);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_62922fa3f6c2836f091fa9fa049eaf62);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__message_toggled);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e41416f397dfd50e5c806485c2205a3);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain__toggle);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_32e3f245fe49001f1e854a80295ec007);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_c08c49ab5c9e2faff8a896ee8b4f484b);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_667b160a46b0083e00d251f3d8e3a81b);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_SelectionError);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_21e3faef5c6c5baf969ee8f592817945);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_initial_state);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_38ca710d1b67aa1948d6d5bcbbfcd5a3);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_highlighted);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_toggle);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_1367c717d6899aaa872703861dfccd69);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_ToggleButton);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_BUTTON_LEFT);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_BUTTON_INNER);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_BUTTON_RIGHT);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb27717acf4f04df83f1fa524f225e57);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_render_line);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_scroll_offset);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_OptionDoesNotExist);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c02f47a45391768f3c50a0062480bfe);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f9cdca6dcd614329ba638c14c433df4);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_643e2a2b65f0613c970767a295e34dc0);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_style);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich_style);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_component_rich_style);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_Style);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_color);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_bgcolor);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_option);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_meta_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_Strip);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_Segment);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_style_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_space_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4af502f97fb8f08c4ffb79495a25916);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_SelectionHighlighted);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_option_index);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ae9983e109f596bc97c00922f8919d8);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain__toggle_highlighted_selection);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab05a82b6c3b388513b2f895e6c74339);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_0873a33fda239868c590fd6253f203b6);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_b718572b55684920a9eb57e92b5b8741);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_option);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba1fe48e4fb920d90ea58b0d3caa0c23);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_ceca0059245fe3bb32469bd971c70796);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_cleaned_options);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea49902805673956d643db5da0d2511f);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_94cb6559c8bca0ba29e5eeff1c4d785c_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_option_count);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_start_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_options);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a884b053b624ace62c0939c771b2feb);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_31b63c3b68f67ee44198e0b884c6d852);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear_options);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_47c650029dc299083c1b263ba8ff4bd3);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b8df182f3fe85ac64eea44c3b999a88);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClassVar);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generic);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Result_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_Result);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Segment_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Self_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_Self);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_textual);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_events_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_events);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2a246f6e260a2c4ad9692789d633ead);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Binding_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_Binding);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee92707a8e73d51481db58a75e3dd4cb);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Content_str_plain_ContentText_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContentText);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_72b648868ed1bbb5234f85e7f2803b8f);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Message_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_Message);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_ffbdc977fd7566d9981a709ea52c386e);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Strip_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9da353d62873b67e2e0848bcc0edd5a);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_548e0905ce7060a67b3b9d1347862278_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_Option);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_OptionList);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_OptionListContent);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_836075f74069272fc05479c9bf04f14a);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ToggleButton_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SelectionType_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageSelectionType_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_MessageSelectionType);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c10d2f363db233817ad7e5890939a7d);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_2541ddced8f6a486206ca95fc0c84d6a);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_int_pos_33);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ec7c83441daabc758796c2f611b3f08);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_int_pos_37);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_false_none_false_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_0ebaa384836f13fd14864c0195a0b79f);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_569461a68676478145b510f549375e71);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_dict_6f9ceb6c52748f0207ec218dac77a88c);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_421e489ea564f6d7ec340f502d2a9696);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_90bcae480b1a8400e871c6bb2de54414);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__value_str_plain__initial_state_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_SelectionList);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_72245f9f298a12202d11de657c416edf);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_int_pos_76);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_0b1055f287e6781d1ad4493066d55fb0_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_show_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_BINDINGS);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_set_841291e8b0739240b3e4cdd2036f1b80);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_COMPONENT_CLASSES);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_b3b23e90fdff5ae31e0cecb5d43aca9e);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c0abc3fd2b99b7af3a11cfa2fddac89);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CSS);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_SelectionMessage);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_c188eaf9d1d435f70e62ce6ccb5aa840);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_digest_55863c9a863afe8c36b358d426a5a5b2);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_int_pos_130);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_dict_945378ea034647e37c20c31ac28d08f7);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fbaa8b168f7fa7ffe48e2d2745f8a04);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_dict_e98c9c41aaf5fe23282b4e9a389040bd);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_control);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_d6995b67d25ab5d4a74c460f7adb5de2);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_dict_3f7886012e9a24885cc6d004a27612fa);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_3d8b103162dc98dafe93097961a54d1e_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d515257fe2173e5ae3baacf8b1029f0);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_be90cce2430e1eadb9285d57f7021189);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_int_pos_167);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb4ce86a0da72e1849c5c3f18466d321);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_b50a413fdd321cc95c48ab836112fa2b);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_int_pos_174);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b6d081c961d7399765d72f0aafd397f);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_digest_32df657dc7629c7341e28f59907ed818);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_int_pos_192);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a1c16ec95343cf6b78b8bfedf32b161);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_dict_983a3b043e2caf2cca9c35b999da442a);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_digest_7837fece023eb48041aba658cca161b2);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_dict_ef53f54f3b1dc08760884b33770aaf0b);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_dict_851deee1d5ada623b6143a3449ccaad9);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4bfd16cb935cc312624e1ba99fda500);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_dict_c3e9579dc1dec536f207f7b69cc4737b);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_plain_selected);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_digest_352b567f29ad070be6aaa010e209a3bf);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_dict_6930d105e413efbde0ae5885ce162200);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_plain__on_mount);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_digest_7380e2c80afaa9d2da8b85e0112c0cad);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_digest_2cb832206a8efc311fa1a512b1b7fc1c);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_dict_5eb119f45f6232f5e8219b6a05f7112e);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f78850244ae8984aa67ba5bb13b3b68);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_dict_734a171d662b48de0c494a768faf5bdd);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_digest_56500b61da006c1f8055b92ae3144204);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_dict_c34255821857de6c8e5617fcff4f61ff);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b42e2ff8a331ed0a9bd3c535c5fa0fa);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_dict_b2580dd523d8989da8005b550f7e78f0);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_plain_select);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_str_digest_29da6b68c597949b1b0b0320166fa9ea);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_plain_select_all);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_str_digest_a04652210e8653b93897057f2818022a);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_digest_53272d02b2b3d33e110b9c33f96cc568);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_str_plain_deselect);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_str_digest_b90accf54ee4c95ba1ffd5abf1c1aa1e);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_str_plain_deselect_all);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa230fe2d840d01767c02932031e7cfc);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e3ed4f4e4e9162c0414d1a82d28d9d6);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_str_digest_3154e55f0055508539fac1596bee8894);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_str_plain_toggle_all);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_str_digest_3369e845fdf445d7fa07a0de09249397);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_dict_a229a71afee3a9afd8d4fbef89fb6790);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0e295f937c6ef5c8800589ecc8fe5d8);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_str_digest_e3801afff4a0ea8fdaaeb2c17ad02a99);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_left_gutter_width);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_str_digest_b557b2fd599042f7ce52bcce5c2002b4);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_dict_a6322218cfb66cfbc32cafdbbe71e5c1);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_str_digest_a932f139558b89ecdd4d6d55cee260a5);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_dict_430658d3c8f9299829ad88ef68e5a71e);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_str_plain__on_option_list_option_highlighted);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6c24b825c2c0152339f32bb4210aebe);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_dict_126c938c0a1784cf7355686c26d58009);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_str_plain__on_option_list_option_selected);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e1765c9ee13b8cf65aee2ac15a371a1);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_dict_209b0d5f3437eed66370177f1800fe39);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_str_digest_783c06e1555fab5573be65060a704932);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_dict_fa07e504fbcba4ec0fbf84851f414dde);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_str_digest_d690797ac00a088368a746dfe0602bd2);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_dict_492736cc9534029beb06b38d25b49293);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_str_plain__pre_remove_option);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_str_digest_94c663a1484131d947a9086ecbe41243);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_dict_71db7c1a486fac83d1afae7d84a81317);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_str_digest_52e8cb22df674d7942c0203e26bff60c);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_dict_fd0f356c9a413b5e2e31a017fce350ec);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_option);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e96f4c5829b3ce89a90618ded2ab016);
mod_consts_hash[280] = DEEP_HASH(tstate, mod_consts.const_str_digest_b35dd6358536b15ff4176538e4f1b2e2);
mod_consts_hash[281] = DEEP_HASH(tstate, mod_consts.const_tuple_dd0a82629facdc8027fac2736f0a594c_tuple);
mod_consts_hash[282] = DEEP_HASH(tstate, mod_consts.const_str_digest_74fd4f984e5fe263f9c5b69345e3e785);
mod_consts_hash[283] = DEEP_HASH(tstate, mod_consts.const_str_digest_892fd785f0da19992e4ebeb7aa300e19);
mod_consts_hash[284] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[285] = DEEP_HASH(tstate, mod_consts.const_tuple_25aed75320cc046d2ad1829017e10042_tuple);
mod_consts_hash[286] = DEEP_HASH(tstate, mod_consts.const_tuple_72b89e075dd9e8cd2e0e733e6a9063ce_tuple);
mod_consts_hash[287] = DEEP_HASH(tstate, mod_consts.const_tuple_ebbfb292b696be62e7b3d0f0019daecf_tuple);
mod_consts_hash[288] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[289] = DEEP_HASH(tstate, mod_consts.const_tuple_2a809ee7f38fbe9abeaee663a3445f03_tuple);
mod_consts_hash[290] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
mod_consts_hash[291] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_selection_tuple);
mod_consts_hash[292] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_option_index_tuple);
mod_consts_hash[293] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__event_tuple);
mod_consts_hash[294] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple);
mod_consts_hash[295] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_option_str_plain_index_tuple);
mod_consts_hash[296] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_item_tuple);
mod_consts_hash[297] = DEEP_HASH(tstate, mod_consts.const_tuple_42a5df549aa72df57251fe73b3b757b7_tuple);
mod_consts_hash[298] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[299] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_option_id_str_plain___class___tuple);
mod_consts_hash[300] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_index_str_plain___class___tuple);
mod_consts_hash[301] = DEEP_HASH(tstate, mod_consts.const_tuple_8caf396a88b4adf6a7b632e194920611_tuple);
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
void checkModuleConstants_textual$widgets$_selection_list(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Content);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_text);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__value);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__initial_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__initial_state);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_28fc37b1736feb58cac448e4f9fa2fff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28fc37b1736feb58cac448e4f9fa2fff);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_746b4eeac417fc31ccc5f4bc224f1886));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_746b4eeac417fc31ccc5f4bc224f1886);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_484951df2203ffe46821bc50be855702));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_484951df2203ffe46821bc50be855702);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_selection_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selection_list);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_option_at_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_option_at_index);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_selection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selection);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_selection_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selection_index);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1da54b9c38e693d453ae42ae38a2271));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1da54b9c38e693d453ae42ae38a2271);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_8987d5ef5a77bdeec0c786019f2b79bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8987d5ef5a77bdeec0c786019f2b79bc);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain___rich_repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rich_repr__);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9953b000bee76c1567a86cd1372607e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9953b000bee76c1567a86cd1372607e);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_23694382e68fe779a17faa2fde3dc600));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_23694382e68fe779a17faa2fde3dc600);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__selected));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__selected);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__send_messages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__send_messages);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__make_selection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__make_selection);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__values);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_classes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_classes);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_disabled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_disabled);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_compact));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_compact);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_4fa5ca04c72d49a87b4196d048623233));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4fa5ca04c72d49a87b4196d048623233);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_75930ec1118db8556615a2468fa4c71d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75930ec1118db8556615a2468fa4c71d);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_cece19643a893fd7c82d67c40b2f1804));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cece19643a893fd7c82d67c40b2f1804);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_post_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_post_message);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_SelectedChanged));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SelectedChanged);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_sender));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_sender);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_5809c6f4b4561d76cc72d34f2cbc5c6c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5809c6f4b4561d76cc72d34f2cbc5c6c);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_SelectionToggled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SelectionToggled);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_7232c4579d321ea7302d5c8f283f45ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7232c4579d321ea7302d5c8f283f45ae);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_prevent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prevent);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__options);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_state_change));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state_change);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_Selection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Selection);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_SelectionType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SelectionType);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_changed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_changed);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__message_changed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__message_changed);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_20736b0f615b70a9a80751d000b33563));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20736b0f615b70a9a80751d000b33563);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_771e6537e0c4eec13f7e9de56bf55e36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_771e6537e0c4eec13f7e9de56bf55e36);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__select));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__select);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4f4c38c6ff25fcd32b194b101b4cf9a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4f4c38c6ff25fcd32b194b101b4cf9a);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__apply_to_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__apply_to_all);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_55355053a87abf7b0d1b37d5fd339f02));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_55355053a87abf7b0d1b37d5fd339f02);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_355faf8ae6e687509d21bc73e256ff03));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_355faf8ae6e687509d21bc73e256ff03);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__deselect));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__deselect);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d91193a6d94c5dca0d0673ab030fb03));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d91193a6d94c5dca0d0673ab030fb03);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_62922fa3f6c2836f091fa9fa049eaf62));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62922fa3f6c2836f091fa9fa049eaf62);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__message_toggled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__message_toggled);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e41416f397dfd50e5c806485c2205a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e41416f397dfd50e5c806485c2205a3);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain__toggle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__toggle);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_32e3f245fe49001f1e854a80295ec007));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_32e3f245fe49001f1e854a80295ec007);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_c08c49ab5c9e2faff8a896ee8b4f484b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c08c49ab5c9e2faff8a896ee8b4f484b);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_667b160a46b0083e00d251f3d8e3a81b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_667b160a46b0083e00d251f3d8e3a81b);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_SelectionError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SelectionError);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_21e3faef5c6c5baf969ee8f592817945));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21e3faef5c6c5baf969ee8f592817945);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_initial_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_initial_state);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_38ca710d1b67aa1948d6d5bcbbfcd5a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_38ca710d1b67aa1948d6d5bcbbfcd5a3);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_highlighted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_highlighted);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_toggle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_toggle);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_1367c717d6899aaa872703861dfccd69));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1367c717d6899aaa872703861dfccd69);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_ToggleButton));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ToggleButton);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_BUTTON_LEFT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BUTTON_LEFT);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_BUTTON_INNER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BUTTON_INNER);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_BUTTON_RIGHT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BUTTON_RIGHT);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb27717acf4f04df83f1fa524f225e57));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb27717acf4f04df83f1fa524f225e57);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_render_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render_line);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_scroll_offset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scroll_offset);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_OptionDoesNotExist));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OptionDoesNotExist);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c02f47a45391768f3c50a0062480bfe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c02f47a45391768f3c50a0062480bfe);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f9cdca6dcd614329ba638c14c433df4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f9cdca6dcd614329ba638c14c433df4);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_643e2a2b65f0613c970767a295e34dc0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_643e2a2b65f0613c970767a295e34dc0);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_style);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich_style);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_component_rich_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_component_rich_style);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_Style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Style);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_color);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_bgcolor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bgcolor);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_option));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_option);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_meta_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_meta_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_Strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Strip);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_Segment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Segment);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_style_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_space_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_space_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4af502f97fb8f08c4ffb79495a25916));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4af502f97fb8f08c4ffb79495a25916);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_SelectionHighlighted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SelectionHighlighted);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_option_index));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_option_index);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ae9983e109f596bc97c00922f8919d8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ae9983e109f596bc97c00922f8919d8);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain__toggle_highlighted_selection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__toggle_highlighted_selection);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab05a82b6c3b388513b2f895e6c74339));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab05a82b6c3b388513b2f895e6c74339);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_0873a33fda239868c590fd6253f203b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0873a33fda239868c590fd6253f203b6);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_b718572b55684920a9eb57e92b5b8741));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b718572b55684920a9eb57e92b5b8741);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_option));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_option);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba1fe48e4fb920d90ea58b0d3caa0c23));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba1fe48e4fb920d90ea58b0d3caa0c23);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_ceca0059245fe3bb32469bd971c70796));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ceca0059245fe3bb32469bd971c70796);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_cleaned_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cleaned_options);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea49902805673956d643db5da0d2511f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea49902805673956d643db5da0d2511f);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_94cb6559c8bca0ba29e5eeff1c4d785c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_94cb6559c8bca0ba29e5eeff1c4d785c_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_option_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_option_count);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_start_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_start_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_options);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a884b053b624ace62c0939c771b2feb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a884b053b624ace62c0939c771b2feb);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_31b63c3b68f67ee44198e0b884c6d852));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31b63c3b68f67ee44198e0b884c6d852);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear_options);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_47c650029dc299083c1b263ba8ff4bd3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_47c650029dc299083c1b263ba8ff4bd3);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b8df182f3fe85ac64eea44c3b999a88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b8df182f3fe85ac64eea44c3b999a88);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dataclass_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClassVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClassVar);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generic);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Result_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Result_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_Result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Result);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Segment_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Segment_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Style_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Style_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Self_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_Self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Self);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_textual));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_textual);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_events_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_events_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_events);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2a246f6e260a2c4ad9692789d633ead));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d2a246f6e260a2c4ad9692789d633ead);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Binding_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Binding_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_Binding));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Binding);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee92707a8e73d51481db58a75e3dd4cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee92707a8e73d51481db58a75e3dd4cb);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Content_str_plain_ContentText_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Content_str_plain_ContentText_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContentText));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContentText);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_72b648868ed1bbb5234f85e7f2803b8f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72b648868ed1bbb5234f85e7f2803b8f);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Message_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_Message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Message);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_ffbdc977fd7566d9981a709ea52c386e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ffbdc977fd7566d9981a709ea52c386e);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Strip_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Strip_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9da353d62873b67e2e0848bcc0edd5a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9da353d62873b67e2e0848bcc0edd5a);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_548e0905ce7060a67b3b9d1347862278_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_548e0905ce7060a67b3b9d1347862278_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_Option));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Option);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_OptionList));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OptionList);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_OptionListContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OptionListContent);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_836075f74069272fc05479c9bf04f14a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_836075f74069272fc05479c9bf04f14a);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ToggleButton_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ToggleButton_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SelectionType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SelectionType_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MessageSelectionType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MessageSelectionType_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_MessageSelectionType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MessageSelectionType);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_TypeError_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c10d2f363db233817ad7e5890939a7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c10d2f363db233817ad7e5890939a7d);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_2541ddced8f6a486206ca95fc0c84d6a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2541ddced8f6a486206ca95fc0c84d6a);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_int_pos_33));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_33);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ec7c83441daabc758796c2f611b3f08));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3ec7c83441daabc758796c2f611b3f08);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_int_pos_37));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_37);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_false_none_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_none_false_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_0ebaa384836f13fd14864c0195a0b79f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0ebaa384836f13fd14864c0195a0b79f);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_569461a68676478145b510f549375e71));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_569461a68676478145b510f549375e71);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_dict_6f9ceb6c52748f0207ec218dac77a88c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6f9ceb6c52748f0207ec218dac77a88c);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_421e489ea564f6d7ec340f502d2a9696));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_421e489ea564f6d7ec340f502d2a9696);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_90bcae480b1a8400e871c6bb2de54414));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_90bcae480b1a8400e871c6bb2de54414);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__value_str_plain__initial_state_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__value_str_plain__initial_state_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_SelectionList));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SelectionList);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_72245f9f298a12202d11de657c416edf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72245f9f298a12202d11de657c416edf);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_int_pos_76));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_76);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_0b1055f287e6781d1ad4493066d55fb0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0b1055f287e6781d1ad4493066d55fb0_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_show_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_show_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_BINDINGS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BINDINGS);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_set_841291e8b0739240b3e4cdd2036f1b80));
CHECK_OBJECT_DEEP(mod_consts.const_set_841291e8b0739240b3e4cdd2036f1b80);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_COMPONENT_CLASSES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_COMPONENT_CLASSES);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_b3b23e90fdff5ae31e0cecb5d43aca9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b3b23e90fdff5ae31e0cecb5d43aca9e);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c0abc3fd2b99b7af3a11cfa2fddac89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c0abc3fd2b99b7af3a11cfa2fddac89);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CSS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_CSS);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_SelectionMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SelectionMessage);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_c188eaf9d1d435f70e62ce6ccb5aa840));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c188eaf9d1d435f70e62ce6ccb5aa840);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_digest_55863c9a863afe8c36b358d426a5a5b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_55863c9a863afe8c36b358d426a5a5b2);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_int_pos_130));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_130);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_dict_945378ea034647e37c20c31ac28d08f7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_945378ea034647e37c20c31ac28d08f7);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fbaa8b168f7fa7ffe48e2d2745f8a04));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2fbaa8b168f7fa7ffe48e2d2745f8a04);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_dict_e98c9c41aaf5fe23282b4e9a389040bd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e98c9c41aaf5fe23282b4e9a389040bd);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_control));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_control);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_d6995b67d25ab5d4a74c460f7adb5de2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d6995b67d25ab5d4a74c460f7adb5de2);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_dict_3f7886012e9a24885cc6d004a27612fa));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3f7886012e9a24885cc6d004a27612fa);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_3d8b103162dc98dafe93097961a54d1e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3d8b103162dc98dafe93097961a54d1e_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d515257fe2173e5ae3baacf8b1029f0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d515257fe2173e5ae3baacf8b1029f0);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_be90cce2430e1eadb9285d57f7021189));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be90cce2430e1eadb9285d57f7021189);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_int_pos_167));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_167);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb4ce86a0da72e1849c5c3f18466d321));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb4ce86a0da72e1849c5c3f18466d321);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_b50a413fdd321cc95c48ab836112fa2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b50a413fdd321cc95c48ab836112fa2b);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_int_pos_174));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_174);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b6d081c961d7399765d72f0aafd397f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b6d081c961d7399765d72f0aafd397f);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_digest_32df657dc7629c7341e28f59907ed818));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_32df657dc7629c7341e28f59907ed818);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_int_pos_192));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_192);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a1c16ec95343cf6b78b8bfedf32b161));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a1c16ec95343cf6b78b8bfedf32b161);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_dict_983a3b043e2caf2cca9c35b999da442a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_983a3b043e2caf2cca9c35b999da442a);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_digest_7837fece023eb48041aba658cca161b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7837fece023eb48041aba658cca161b2);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_dict_ef53f54f3b1dc08760884b33770aaf0b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ef53f54f3b1dc08760884b33770aaf0b);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_dict_851deee1d5ada623b6143a3449ccaad9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_851deee1d5ada623b6143a3449ccaad9);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4bfd16cb935cc312624e1ba99fda500));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4bfd16cb935cc312624e1ba99fda500);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_dict_c3e9579dc1dec536f207f7b69cc4737b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c3e9579dc1dec536f207f7b69cc4737b);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_plain_selected));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selected);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_digest_352b567f29ad070be6aaa010e209a3bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_352b567f29ad070be6aaa010e209a3bf);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_dict_6930d105e413efbde0ae5885ce162200));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6930d105e413efbde0ae5885ce162200);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_plain__on_mount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__on_mount);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_digest_7380e2c80afaa9d2da8b85e0112c0cad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7380e2c80afaa9d2da8b85e0112c0cad);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_digest_2cb832206a8efc311fa1a512b1b7fc1c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2cb832206a8efc311fa1a512b1b7fc1c);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_dict_5eb119f45f6232f5e8219b6a05f7112e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5eb119f45f6232f5e8219b6a05f7112e);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f78850244ae8984aa67ba5bb13b3b68));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7f78850244ae8984aa67ba5bb13b3b68);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_dict_734a171d662b48de0c494a768faf5bdd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_734a171d662b48de0c494a768faf5bdd);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_digest_56500b61da006c1f8055b92ae3144204));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_56500b61da006c1f8055b92ae3144204);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_dict_c34255821857de6c8e5617fcff4f61ff));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c34255821857de6c8e5617fcff4f61ff);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b42e2ff8a331ed0a9bd3c535c5fa0fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b42e2ff8a331ed0a9bd3c535c5fa0fa);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_dict_b2580dd523d8989da8005b550f7e78f0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b2580dd523d8989da8005b550f7e78f0);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_plain_select));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_select);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_str_digest_29da6b68c597949b1b0b0320166fa9ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_29da6b68c597949b1b0b0320166fa9ea);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead));
CHECK_OBJECT_DEEP(mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_plain_select_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_select_all);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_str_digest_a04652210e8653b93897057f2818022a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a04652210e8653b93897057f2818022a);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_digest_53272d02b2b3d33e110b9c33f96cc568));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53272d02b2b3d33e110b9c33f96cc568);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_str_plain_deselect));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deselect);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_str_digest_b90accf54ee4c95ba1ffd5abf1c1aa1e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b90accf54ee4c95ba1ffd5abf1c1aa1e);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_str_plain_deselect_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deselect_all);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa230fe2d840d01767c02932031e7cfc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aa230fe2d840d01767c02932031e7cfc);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e3ed4f4e4e9162c0414d1a82d28d9d6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e3ed4f4e4e9162c0414d1a82d28d9d6);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_str_digest_3154e55f0055508539fac1596bee8894));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3154e55f0055508539fac1596bee8894);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_str_plain_toggle_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_toggle_all);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_str_digest_3369e845fdf445d7fa07a0de09249397));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3369e845fdf445d7fa07a0de09249397);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_dict_a229a71afee3a9afd8d4fbef89fb6790));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a229a71afee3a9afd8d4fbef89fb6790);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0e295f937c6ef5c8800589ecc8fe5d8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0e295f937c6ef5c8800589ecc8fe5d8);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_str_digest_e3801afff4a0ea8fdaaeb2c17ad02a99));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e3801afff4a0ea8fdaaeb2c17ad02a99);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_left_gutter_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_left_gutter_width);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_str_digest_b557b2fd599042f7ce52bcce5c2002b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b557b2fd599042f7ce52bcce5c2002b4);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_dict_a6322218cfb66cfbc32cafdbbe71e5c1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a6322218cfb66cfbc32cafdbbe71e5c1);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_str_digest_a932f139558b89ecdd4d6d55cee260a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a932f139558b89ecdd4d6d55cee260a5);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_dict_430658d3c8f9299829ad88ef68e5a71e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_430658d3c8f9299829ad88ef68e5a71e);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_str_plain__on_option_list_option_highlighted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__on_option_list_option_highlighted);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6c24b825c2c0152339f32bb4210aebe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e6c24b825c2c0152339f32bb4210aebe);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_dict_126c938c0a1784cf7355686c26d58009));
CHECK_OBJECT_DEEP(mod_consts.const_dict_126c938c0a1784cf7355686c26d58009);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_str_plain__on_option_list_option_selected));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__on_option_list_option_selected);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e1765c9ee13b8cf65aee2ac15a371a1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e1765c9ee13b8cf65aee2ac15a371a1);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_dict_209b0d5f3437eed66370177f1800fe39));
CHECK_OBJECT_DEEP(mod_consts.const_dict_209b0d5f3437eed66370177f1800fe39);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_str_digest_783c06e1555fab5573be65060a704932));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_783c06e1555fab5573be65060a704932);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_dict_fa07e504fbcba4ec0fbf84851f414dde));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fa07e504fbcba4ec0fbf84851f414dde);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_str_digest_d690797ac00a088368a746dfe0602bd2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d690797ac00a088368a746dfe0602bd2);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_dict_492736cc9534029beb06b38d25b49293));
CHECK_OBJECT_DEEP(mod_consts.const_dict_492736cc9534029beb06b38d25b49293);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_str_plain__pre_remove_option));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pre_remove_option);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_str_digest_94c663a1484131d947a9086ecbe41243));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_94c663a1484131d947a9086ecbe41243);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_dict_71db7c1a486fac83d1afae7d84a81317));
CHECK_OBJECT_DEEP(mod_consts.const_dict_71db7c1a486fac83d1afae7d84a81317);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_str_digest_52e8cb22df674d7942c0203e26bff60c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_52e8cb22df674d7942c0203e26bff60c);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_dict_fd0f356c9a413b5e2e31a017fce350ec));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fd0f356c9a413b5e2e31a017fce350ec);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_option));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_option);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e96f4c5829b3ce89a90618ded2ab016));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e96f4c5829b3ce89a90618ded2ab016);
assert(mod_consts_hash[280] == DEEP_HASH(tstate, mod_consts.const_str_digest_b35dd6358536b15ff4176538e4f1b2e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b35dd6358536b15ff4176538e4f1b2e2);
assert(mod_consts_hash[281] == DEEP_HASH(tstate, mod_consts.const_tuple_dd0a82629facdc8027fac2736f0a594c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dd0a82629facdc8027fac2736f0a594c_tuple);
assert(mod_consts_hash[282] == DEEP_HASH(tstate, mod_consts.const_str_digest_74fd4f984e5fe263f9c5b69345e3e785));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74fd4f984e5fe263f9c5b69345e3e785);
assert(mod_consts_hash[283] == DEEP_HASH(tstate, mod_consts.const_str_digest_892fd785f0da19992e4ebeb7aa300e19));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_892fd785f0da19992e4ebeb7aa300e19);
assert(mod_consts_hash[284] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[285] == DEEP_HASH(tstate, mod_consts.const_tuple_25aed75320cc046d2ad1829017e10042_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_25aed75320cc046d2ad1829017e10042_tuple);
assert(mod_consts_hash[286] == DEEP_HASH(tstate, mod_consts.const_tuple_72b89e075dd9e8cd2e0e733e6a9063ce_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_72b89e075dd9e8cd2e0e733e6a9063ce_tuple);
assert(mod_consts_hash[287] == DEEP_HASH(tstate, mod_consts.const_tuple_ebbfb292b696be62e7b3d0f0019daecf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ebbfb292b696be62e7b3d0f0019daecf_tuple);
assert(mod_consts_hash[288] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[289] == DEEP_HASH(tstate, mod_consts.const_tuple_2a809ee7f38fbe9abeaee663a3445f03_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2a809ee7f38fbe9abeaee663a3445f03_tuple);
assert(mod_consts_hash[290] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
assert(mod_consts_hash[291] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_selection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_selection_tuple);
assert(mod_consts_hash[292] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_option_index_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_option_index_tuple);
assert(mod_consts_hash[293] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__event_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain__event_tuple);
assert(mod_consts_hash[294] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_event_tuple);
assert(mod_consts_hash[295] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_option_str_plain_index_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_option_str_plain_index_tuple);
assert(mod_consts_hash[296] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_item_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_item_tuple);
assert(mod_consts_hash[297] == DEEP_HASH(tstate, mod_consts.const_tuple_42a5df549aa72df57251fe73b3b757b7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_42a5df549aa72df57251fe73b3b757b7_tuple);
assert(mod_consts_hash[298] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[299] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_option_id_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_option_id_str_plain___class___tuple);
assert(mod_consts_hash[300] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_index_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_index_str_plain___class___tuple);
assert(mod_consts_hash[301] == DEEP_HASH(tstate, mod_consts.const_tuple_8caf396a88b4adf6a7b632e194920611_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8caf396a88b4adf6a7b632e194920611_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 19
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
static PyObject *module_var_accessor_textual$widgets$_selection_list$Binding(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Binding);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Binding);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Binding, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Binding);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Binding, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Binding);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Binding);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Binding);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$Content(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Content);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Content);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Content, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Content);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Content, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Content);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Content);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Content);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$Generic(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Generic);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Generic, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Generic);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Generic, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$Message(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Message);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Message, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Message);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Message, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$MessageSelectionType(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageSelectionType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MessageSelectionType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MessageSelectionType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MessageSelectionType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MessageSelectionType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageSelectionType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageSelectionType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageSelectionType);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$Option(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Option);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Option);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Option, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Option);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Option, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Option);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Option);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Option);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$OptionDoesNotExist(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_OptionDoesNotExist);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OptionDoesNotExist);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OptionDoesNotExist, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OptionDoesNotExist);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OptionDoesNotExist, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_OptionDoesNotExist);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_OptionDoesNotExist);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OptionDoesNotExist);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$OptionList(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_OptionList);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OptionList);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OptionList, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OptionList);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OptionList, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_OptionList);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_OptionList);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OptionList);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$Segment(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$Selection(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Selection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Selection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Selection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Selection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Selection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Selection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Selection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Selection);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$SelectionError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectionError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SelectionError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SelectionError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SelectionError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SelectionError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectionError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectionError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectionError);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$SelectionType(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectionType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SelectionType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SelectionType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SelectionType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SelectionType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectionType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectionType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectionType);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$Strip(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Strip);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Strip, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Strip);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Strip, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$Style(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Style);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$ToggleButton(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_ToggleButton);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ToggleButton);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ToggleButton, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ToggleButton);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ToggleButton, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_ToggleButton);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_ToggleButton);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ToggleButton);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_textual$widgets$_selection_list$dataclass(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$widgets$_selection_list->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$widgets$_selection_list->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$widgets$_selection_list->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e49461d15f3389e5a4afa2385a85ee07;
static PyCodeObject *code_objects_b43821e2eac58e1f52dfb340b3938f5d;
static PyCodeObject *code_objects_de2e881c554781f6932a8990180e02aa;
static PyCodeObject *code_objects_139b2a186303fbf10bd3cfd7a51fa794;
static PyCodeObject *code_objects_ab1f12cd8eba2fbec3b56691f0463626;
static PyCodeObject *code_objects_42d28db255f71acb397a7d7201117fdd;
static PyCodeObject *code_objects_28bca6507b12d173f22e695eb8ca5d1c;
static PyCodeObject *code_objects_51fb0da158c052704cad73da45141bd6;
static PyCodeObject *code_objects_54df90caef78d444e4e77f09296e8fb1;
static PyCodeObject *code_objects_45e238b031528c08ea01f0b55eb612ec;
static PyCodeObject *code_objects_6f49ea963e245e4420752d24b490078d;
static PyCodeObject *code_objects_785d65874b3cdc09f6e6ff89875e2377;
static PyCodeObject *code_objects_8ebf9a0a7baf01b7545e0d63c34c6cf1;
static PyCodeObject *code_objects_61f0e959ceda9ee6b0ca380bcf40e2aa;
static PyCodeObject *code_objects_91fe3f3d4a5bc777fd5da952ce808dcd;
static PyCodeObject *code_objects_ce23e727156169602c48a00f74981499;
static PyCodeObject *code_objects_c0fba0e6fe98df9677fcc40be9aa1bec;
static PyCodeObject *code_objects_afc19d8eb2720836aeffeecd8be393db;
static PyCodeObject *code_objects_33f4ec27bb8193728f20b202744c0cc5;
static PyCodeObject *code_objects_dda4c94473e71b81454257457562f540;
static PyCodeObject *code_objects_822dfdff029f945f393563da21a9745f;
static PyCodeObject *code_objects_5b93fc957c615cc0c318481a3a11da0b;
static PyCodeObject *code_objects_2fabdb4c08bd337da9073c06c852fbbe;
static PyCodeObject *code_objects_375b9f57685c008b61cad10ae6b34820;
static PyCodeObject *code_objects_b2e37b1d352e4220ed8eb50985c15ae6;
static PyCodeObject *code_objects_f5e3dda837f9a14e3eaf10cae936521d;
static PyCodeObject *code_objects_47a9a9ebfd1526f21de19dfcc45b1923;
static PyCodeObject *code_objects_b06de3d78fcb1ab2e857c6a129ffa82c;
static PyCodeObject *code_objects_548bc38b42881a586311f70bb9a10835;
static PyCodeObject *code_objects_3d5b73cdc25f118608c954fb6f46f7d6;
static PyCodeObject *code_objects_69a3633638553292fddfeee6546d085a;
static PyCodeObject *code_objects_bf58764d300f910bfb801a5ff6fc96c5;
static PyCodeObject *code_objects_878047f688a36db1f0aaa01e372ca6a2;
static PyCodeObject *code_objects_97335ffae70cf7a60e7ac4667bf5cac4;
static PyCodeObject *code_objects_2e691c42dd60dec9f0f524f9a23126f0;
static PyCodeObject *code_objects_554737d8708b4f8da28f73cb0ad506a2;
static PyCodeObject *code_objects_d619d3211a39bbaf4536754959cc3e2c;
static PyCodeObject *code_objects_df91ab10ff8d0fd5dedaf435521fd0c0;
static PyCodeObject *code_objects_b0469e8fd7fb5582edcf87173e31b682;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_74fd4f984e5fe263f9c5b69345e3e785); CHECK_OBJECT(module_filename_obj);
code_objects_e49461d15f3389e5a4afa2385a85ee07 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_892fd785f0da19992e4ebeb7aa300e19, mod_consts.const_str_digest_892fd785f0da19992e4ebeb7aa300e19, NULL, NULL, 0, 0, 0);
code_objects_b43821e2eac58e1f52dfb340b3938f5d = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SelectedChanged, mod_consts.const_str_digest_32df657dc7629c7341e28f59907ed818, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_de2e881c554781f6932a8990180e02aa = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Selection, mod_consts.const_str_plain_Selection, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_139b2a186303fbf10bd3cfd7a51fa794 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SelectionList, mod_consts.const_str_plain_SelectionList, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ab1f12cd8eba2fbec3b56691f0463626 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SelectionMessage, mod_consts.const_str_digest_55863c9a863afe8c36b358d426a5a5b2, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_42d28db255f71acb397a7d7201117fdd = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_569461a68676478145b510f549375e71, mod_consts.const_tuple_25aed75320cc046d2ad1829017e10042_tuple, mod_consts.const_tuple_str_plain___class___tuple, 6, 0, 0);
code_objects_28bca6507b12d173f22e695eb8ca5d1c = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_2fbaa8b168f7fa7ffe48e2d2745f8a04, mod_consts.const_tuple_72b89e075dd9e8cd2e0e733e6a9063ce_tuple, mod_consts.const_tuple_str_plain___class___tuple, 3, 0, 0);
code_objects_51fb0da158c052704cad73da45141bd6 = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_a4bfd16cb935cc312624e1ba99fda500, mod_consts.const_tuple_ebbfb292b696be62e7b3d0f0019daecf_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 5, 0);
code_objects_54df90caef78d444e4e77f09296e8fb1 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rich_repr__, mod_consts.const_str_digest_a9953b000bee76c1567a86cd1372607e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_45e238b031528c08ea01f0b55eb612ec = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__apply_to_all, mod_consts.const_str_digest_56500b61da006c1f8055b92ae3144204, mod_consts.const_tuple_2a809ee7f38fbe9abeaee663a3445f03_tuple, NULL, 2, 0, 0);
code_objects_6f49ea963e245e4420752d24b490078d = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__deselect, mod_consts.const_str_digest_53272d02b2b3d33e110b9c33f96cc568, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_785d65874b3cdc09f6e6ff89875e2377 = MAKE_CODE_OBJECT(module_filename_obj, 493, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_left_gutter_width, mod_consts.const_str_digest_b557b2fd599042f7ce52bcce5c2002b4, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8ebf9a0a7baf01b7545e0d63c34c6cf1 = MAKE_CODE_OBJECT(module_filename_obj, 444, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__make_selection, mod_consts.const_str_digest_b0e295f937c6ef5c8800589ecc8fe5d8, mod_consts.const_tuple_str_plain_self_str_plain_selection_tuple, NULL, 2, 0, 0);
code_objects_61f0e959ceda9ee6b0ca380bcf40e2aa = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__message_changed, mod_consts.const_str_digest_2cb832206a8efc311fa1a512b1b7fc1c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_91fe3f3d4a5bc777fd5da952ce808dcd = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__message_toggled, mod_consts.const_str_digest_7f78850244ae8984aa67ba5bb13b3b68, mod_consts.const_tuple_str_plain_self_str_plain_option_index_tuple, NULL, 2, 0, 0);
code_objects_ce23e727156169602c48a00f74981499 = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__on_mount, mod_consts.const_str_digest_7380e2c80afaa9d2da8b85e0112c0cad, mod_consts.const_tuple_str_plain_self_str_plain__event_tuple, NULL, 2, 0, 0);
code_objects_c0fba0e6fe98df9677fcc40be9aa1bec = MAKE_CODE_OBJECT(module_filename_obj, 569, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__on_option_list_option_highlighted, mod_consts.const_str_digest_e6c24b825c2c0152339f32bb4210aebe, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple, NULL, 2, 0, 0);
code_objects_afc19d8eb2720836aeffeecd8be393db = MAKE_CODE_OBJECT(module_filename_obj, 580, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__on_option_list_option_selected, mod_consts.const_str_digest_7e1765c9ee13b8cf65aee2ac15a371a1, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple, NULL, 2, 0, 0);
code_objects_33f4ec27bb8193728f20b202744c0cc5 = MAKE_CODE_OBJECT(module_filename_obj, 617, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__pre_remove_option, mod_consts.const_str_digest_94c663a1484131d947a9086ecbe41243, mod_consts.const_tuple_str_plain_self_str_plain_option_str_plain_index_tuple, NULL, 3, 0, 0);
code_objects_dda4c94473e71b81454257457562f540 = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__select, mod_consts.const_str_digest_1b42e2ff8a331ed0a9bd3c535c5fa0fa, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_822dfdff029f945f393563da21a9745f = MAKE_CODE_OBJECT(module_filename_obj, 403, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__toggle, mod_consts.const_str_digest_6e3ed4f4e4e9162c0414d1a82d28d9d6, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_5b93fc957c615cc0c318481a3a11da0b = MAKE_CODE_OBJECT(module_filename_obj, 485, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__toggle_highlighted_selection, mod_consts.const_str_digest_e3801afff4a0ea8fdaaeb2c17ad02a99, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2fabdb4c08bd337da9073c06c852fbbe = MAKE_CODE_OBJECT(module_filename_obj, 684, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_add_option, mod_consts.const_str_digest_8e96f4c5829b3ce89a90618ded2ab016, mod_consts.const_tuple_str_plain_self_str_plain_item_tuple, NULL, 2, 0, 0);
code_objects_375b9f57685c008b61cad10ae6b34820 = MAKE_CODE_OBJECT(module_filename_obj, 629, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_add_options, mod_consts.const_str_digest_52e8cb22df674d7942c0203e26bff60c, mod_consts.const_tuple_42a5df549aa72df57251fe73b3b757b7_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_b2e37b1d352e4220ed8eb50985c15ae6 = MAKE_CODE_OBJECT(module_filename_obj, 707, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_clear_options, mod_consts.const_str_digest_b35dd6358536b15ff4176538e4f1b2e2, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_f5e3dda837f9a14e3eaf10cae936521d = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_control, mod_consts.const_str_digest_7837fece023eb48041aba658cca161b2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_47a9a9ebfd1526f21de19dfcc45b1923 = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_control, mod_consts.const_str_digest_d6995b67d25ab5d4a74c460f7adb5de2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b06de3d78fcb1ab2e857c6a129ffa82c = MAKE_CODE_OBJECT(module_filename_obj, 378, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_deselect, mod_consts.const_str_digest_b90accf54ee4c95ba1ffd5abf1c1aa1e, mod_consts.const_tuple_str_plain_self_str_plain_selection_tuple, NULL, 2, 0, 0);
code_objects_548bc38b42881a586311f70bb9a10835 = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_deselect_all, mod_consts.const_str_digest_aa230fe2d840d01767c02932031e7cfc, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3d5b73cdc25f118608c954fb6f46f7d6 = MAKE_CODE_OBJECT(module_filename_obj, 603, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_option, mod_consts.const_str_digest_d690797ac00a088368a746dfe0602bd2, mod_consts.const_tuple_str_plain_self_str_plain_option_id_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_69a3633638553292fddfeee6546d085a = MAKE_CODE_OBJECT(module_filename_obj, 589, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_option_at_index, mod_consts.const_str_digest_783c06e1555fab5573be65060a704932, mod_consts.const_tuple_str_plain_self_str_plain_index_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_bf58764d300f910bfb801a5ff6fc96c5 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_initial_state, mod_consts.const_str_digest_90bcae480b1a8400e871c6bb2de54414, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_878047f688a36db1f0aaa01e372ca6a2 = MAKE_CODE_OBJECT(module_filename_obj, 506, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render_line, mod_consts.const_str_digest_a932f139558b89ecdd4d6d55cee260a5, mod_consts.const_tuple_8caf396a88b4adf6a7b632e194920611_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_97335ffae70cf7a60e7ac4667bf5cac4 = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_select, mod_consts.const_str_digest_29da6b68c597949b1b0b0320166fa9ea, mod_consts.const_tuple_str_plain_self_str_plain_selection_tuple, NULL, 2, 0, 0);
code_objects_2e691c42dd60dec9f0f524f9a23126f0 = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_select_all, mod_consts.const_str_digest_a04652210e8653b93897057f2818022a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_554737d8708b4f8da28f73cb0ad506a2 = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_selected, mod_consts.const_str_digest_352b567f29ad070be6aaa010e209a3bf, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d619d3211a39bbaf4536754959cc3e2c = MAKE_CODE_OBJECT(module_filename_obj, 419, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_toggle, mod_consts.const_str_digest_3154e55f0055508539fac1596bee8894, mod_consts.const_tuple_str_plain_self_str_plain_selection_tuple, NULL, 2, 0, 0);
code_objects_df91ab10ff8d0fd5dedaf435521fd0c0 = MAKE_CODE_OBJECT(module_filename_obj, 436, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_toggle_all, mod_consts.const_str_digest_3369e845fdf445d7fa07a0de09249397, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b0469e8fd7fb5582edcf87173e31b682 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_value, mod_consts.const_str_digest_421e489ea564f6d7ec340f502d2a9696, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$widgets$_selection_list$$$function__6___rich_repr__$$$genobj__1___rich_repr__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__10__on_mount(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__11__message_changed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__12__message_toggled(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__13__apply_to_all(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__14__select(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__15_select(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__16_select_all(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__17__deselect(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__18_deselect(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__19_deselect_all(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__20__toggle(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__21_toggle(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__22_toggle_all(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__23__make_selection(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__25__get_left_gutter_width(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__26_render_line(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__29_get_option_at_index(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__2_value(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__30_get_option(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__31__pre_remove_option(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__32_add_options(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__33_add_option(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__34_clear_options(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__3_initial_state(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__4___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__5_control(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__6___rich_repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__7_control(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__8___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__9_selected(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$widgets$_selection_list$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_prompt = python_pars[1];
PyObject *par_value = python_pars[2];
PyObject *par_initial_state = python_pars[3];
PyObject *par_id = python_pars[4];
PyObject *par_disabled = python_pars[5];
PyObject *var_selection_prompt = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_42d28db255f71acb397a7d7201117fdd, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__1___init__ = cache_frame_frame_textual$widgets$_selection_list$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_textual$widgets$_selection_list$Content(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Content);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_prompt);
tmp_args_element_value_1 = par_prompt;
frame_frame_textual$widgets$_selection_list$$$function__1___init__->m_frame.f_lineno = 58;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_from_text, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
assert(var_selection_prompt == NULL);
var_selection_prompt = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 59;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_textual$widgets$_selection_list, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_selection_prompt);
tmp_expression_value_3 = var_selection_prompt;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_split);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 59;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__1___init__->m_frame.f_lineno = 59;
tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 59;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 59;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_id);
tmp_args_element_value_3 = par_id;
CHECK_OBJECT(par_disabled);
tmp_args_element_value_4 = par_disabled;
frame_frame_textual$widgets$_selection_list$$$function__1___init__->m_frame.f_lineno = 59;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_value);
tmp_assattr_value_1 = par_value;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__value, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_initial_state);
tmp_assattr_value_2 = par_initial_state;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__initial_state, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__1___init__,
    type_description_1,
    par_self,
    par_prompt,
    par_value,
    par_initial_state,
    par_id,
    par_disabled,
    var_selection_prompt,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__1___init__ == cache_frame_frame_textual$widgets$_selection_list$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__1___init__);
    cache_frame_frame_textual$widgets$_selection_list$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__1___init__);

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
CHECK_OBJECT(var_selection_prompt);
CHECK_OBJECT(var_selection_prompt);
Py_DECREF(var_selection_prompt);
var_selection_prompt = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_selection_prompt);
var_selection_prompt = NULL;
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
CHECK_OBJECT(par_prompt);
Py_DECREF(par_prompt);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_initial_state);
Py_DECREF(par_initial_state);
CHECK_OBJECT(par_id);
Py_DECREF(par_id);
CHECK_OBJECT(par_disabled);
Py_DECREF(par_disabled);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_prompt);
Py_DECREF(par_prompt);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_initial_state);
Py_DECREF(par_initial_state);
CHECK_OBJECT(par_id);
Py_DECREF(par_id);
CHECK_OBJECT(par_disabled);
Py_DECREF(par_disabled);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__2_value(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__2_value;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__2_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__2_value)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__2_value);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__2_value == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__2_value = MAKE_FUNCTION_FRAME(tstate, code_objects_b0469e8fd7fb5582edcf87173e31b682, module_textual$widgets$_selection_list, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__2_value->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__2_value = cache_frame_frame_textual$widgets$_selection_list$$$function__2_value;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__2_value);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__2_value) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__2_value, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__2_value->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__2_value, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__2_value,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__2_value == cache_frame_frame_textual$widgets$_selection_list$$$function__2_value) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__2_value);
    cache_frame_frame_textual$widgets$_selection_list$$$function__2_value = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__2_value);

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


static PyObject *impl_textual$widgets$_selection_list$$$function__3_initial_state(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__3_initial_state;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__3_initial_state = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__3_initial_state)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__3_initial_state);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__3_initial_state == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__3_initial_state = MAKE_FUNCTION_FRAME(tstate, code_objects_bf58764d300f910bfb801a5ff6fc96c5, module_textual$widgets$_selection_list, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__3_initial_state->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__3_initial_state = cache_frame_frame_textual$widgets$_selection_list$$$function__3_initial_state;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__3_initial_state);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__3_initial_state) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__initial_state);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__3_initial_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__3_initial_state->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__3_initial_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__3_initial_state,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__3_initial_state == cache_frame_frame_textual$widgets$_selection_list$$$function__3_initial_state) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__3_initial_state);
    cache_frame_frame_textual$widgets$_selection_list$$$function__3_initial_state = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__3_initial_state);

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


static PyObject *impl_textual$widgets$_selection_list$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_selection_list = python_pars[1];
PyObject *par_index = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_28bca6507b12d173f22e695eb8ca5d1c, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__4___init__->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__4___init__ = cache_frame_frame_textual$widgets$_selection_list$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__4___init__);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 142;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_textual$widgets$_selection_list, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__4___init__->m_frame.f_lineno = 142;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_selection_list);
tmp_assattr_value_1 = par_selection_list;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_selection_list, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_selection_list);
tmp_called_instance_2 = par_selection_list;
CHECK_OBJECT(par_index);
tmp_args_element_value_1 = par_index;
frame_frame_textual$widgets$_selection_list$$$function__4___init__->m_frame.f_lineno = 146;
tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_option_at_index, tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_selection, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_index);
tmp_assattr_value_3 = par_index;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_selection_index, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__4___init__,
    type_description_1,
    par_self,
    par_selection_list,
    par_index,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__4___init__ == cache_frame_frame_textual$widgets$_selection_list$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__4___init__);
    cache_frame_frame_textual$widgets$_selection_list$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__4___init__);

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
CHECK_OBJECT(par_selection_list);
Py_DECREF(par_selection_list);
CHECK_OBJECT(par_index);
Py_DECREF(par_index);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_selection_list);
Py_DECREF(par_selection_list);
CHECK_OBJECT(par_index);
Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__5_control(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__5_control;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__5_control = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__5_control)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__5_control);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__5_control == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__5_control = MAKE_FUNCTION_FRAME(tstate, code_objects_47a9a9ebfd1526f21de19dfcc45b1923, module_textual$widgets$_selection_list, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__5_control->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__5_control = cache_frame_frame_textual$widgets$_selection_list$$$function__5_control;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__5_control);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__5_control) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_selection_list);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__5_control, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__5_control->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__5_control, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__5_control,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__5_control == cache_frame_frame_textual$widgets$_selection_list$$$function__5_control) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__5_control);
    cache_frame_frame_textual$widgets$_selection_list$$$function__5_control = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__5_control);

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


static PyObject *impl_textual$widgets$_selection_list$$$function__6___rich_repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_textual$widgets$_selection_list$$$function__6___rich_repr__$$$genobj__1___rich_repr__(tstate, tmp_closure_1);

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
struct textual$widgets$_selection_list$$$function__6___rich_repr__$$$genobj__1___rich_repr___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *textual$widgets$_selection_list$$$function__6___rich_repr__$$$genobj__1___rich_repr___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$widgets$_selection_list$$$function__6___rich_repr__$$$genobj__1___rich_repr___locals *generator_heap = (struct textual$widgets$_selection_list$$$function__6___rich_repr__$$$genobj__1___rich_repr___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_54df90caef78d444e4e77f09296e8fb1, module_textual$widgets$_selection_list, sizeof(void *));
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
PyObject *tmp_tuple_element_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_tuple_element_1 = mod_consts.const_str_plain_selection_list;
tmp_expression_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM0(tmp_expression_value_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 163;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_selection_list);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 163;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_expression_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
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
{
PyObject *tmp_expression_value_3;
PyObject *tmp_tuple_element_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
tmp_tuple_element_2 = mod_consts.const_str_plain_selection;
tmp_expression_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM0(tmp_expression_value_3, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_2;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_selection);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_expression_value_3, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_3;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
{
PyObject *tmp_expression_value_5;
PyObject *tmp_tuple_element_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
tmp_tuple_element_3 = mod_consts.const_str_plain_selection_index;
tmp_expression_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyTuple_SET_ITEM0(tmp_expression_value_5, 0, tmp_tuple_element_3);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 165;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_3;
}

tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_selection_index);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 165;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_expression_value_5, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_expression_value_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 3;
return tmp_expression_value_5;
yield_return_3:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 165;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_3 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_3);
Py_DECREF(tmp_yield_result_3);
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

static PyObject *MAKE_GENERATOR_textual$widgets$_selection_list$$$function__6___rich_repr__$$$genobj__1___rich_repr__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$widgets$_selection_list$$$function__6___rich_repr__$$$genobj__1___rich_repr___context,
        module_textual$widgets$_selection_list,
        mod_consts.const_str_plain___rich_repr__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_a9953b000bee76c1567a86cd1372607e,
#endif
        code_objects_54df90caef78d444e4e77f09296e8fb1,
        closure,
        1,
#if 1
        sizeof(struct textual$widgets$_selection_list$$$function__6___rich_repr__$$$genobj__1___rich_repr___locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$widgets$_selection_list$$$function__7_control(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__7_control;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__7_control = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__7_control)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__7_control);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__7_control == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__7_control = MAKE_FUNCTION_FRAME(tstate, code_objects_f5e3dda837f9a14e3eaf10cae936521d, module_textual$widgets$_selection_list, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__7_control->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__7_control = cache_frame_frame_textual$widgets$_selection_list$$$function__7_control;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__7_control);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__7_control) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_selection_list);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__7_control, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__7_control->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__7_control, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__7_control,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__7_control == cache_frame_frame_textual$widgets$_selection_list$$$function__7_control) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__7_control);
    cache_frame_frame_textual$widgets$_selection_list$$$function__7_control = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__7_control);

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


static PyObject *impl_textual$widgets$_selection_list$$$function__8___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
PyObject *par_compact = python_pars[5];
PyObject *par_selections = python_pars[6];
PyObject *var_options = NULL;
PyObject *outline_0_var_selection = NULL;
PyObject *outline_1_var_index = NULL;
PyObject *outline_1_var_option = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__8___init__;
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
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__8___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__8___init__)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__8___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__8___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__8___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_51fb0da158c052704cad73da45141bd6, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__8___init__->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__8___init__ = cache_frame_frame_textual$widgets$_selection_list$$$function__8___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__8___init__);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__8___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__selected, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__send_messages, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_selections);
tmp_iter_arg_1 = par_selections;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooc";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooc";
exception_lineno = 240;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_selection;
    outline_0_var_selection = tmp_assign_source_5;
    Py_INCREF(outline_0_var_selection);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
if (par_self == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 240;
type_description_1 = "ooooooooc";
    goto try_except_handler_3;
}

tmp_called_instance_1 = par_self;
CHECK_OBJECT(outline_0_var_selection);
tmp_args_element_value_1 = outline_0_var_selection;
frame_frame_textual$widgets$_selection_list$$$function__8___init__->m_frame.f_lineno = 240;
tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__make_selection, tmp_args_element_value_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooc";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooc";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooc";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_1);
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
Py_XDECREF(outline_0_var_selection);
outline_0_var_selection = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_selection);
outline_0_var_selection = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 240;
goto frame_exception_exit_1;
outline_result_1:;
assert(var_options == NULL);
var_options = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(var_options);
tmp_args_element_value_2 = var_options;
frame_frame_textual$widgets$_selection_list$$$function__8___init__->m_frame.f_lineno = 242;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooc";
    goto try_except_handler_4;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooc";
    goto try_except_handler_4;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_7;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_2 = tmp_dictcontraction_1__$0;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooc";
exception_lineno = 241;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_3 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooc";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "ooooooooc";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "ooooooooc";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "ooooooooc";
    goto try_except_handler_7;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_6;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_12 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_1_var_index;
    outline_1_var_index = tmp_assign_source_12;
    Py_INCREF(outline_1_var_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_13 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_1_var_option;
    outline_1_var_option = tmp_assign_source_13;
    Py_INCREF(outline_1_var_option);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_1_var_option);
tmp_expression_value_1 = outline_1_var_option;
tmp_dictset38_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_value);
if (tmp_dictset38_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooc";
    goto try_except_handler_5;
}
CHECK_OBJECT(outline_1_var_index);
tmp_dictset38_value_1 = outline_1_var_index;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_key_1);
Py_DECREF(tmp_dictset38_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooc";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooc";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_assattr_value_3 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_assattr_value_3);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_1_var_index);
outline_1_var_index = NULL;
Py_XDECREF(outline_1_var_option);
outline_1_var_option = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_index);
outline_1_var_index = NULL;
Py_XDECREF(outline_1_var_option);
outline_1_var_option = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 241;
goto frame_exception_exit_1;
outline_result_2:;
if (par_self == NULL) {
Py_DECREF(tmp_assattr_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 241;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}

tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__values, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
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

exception_lineno = 245;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 245;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}

tmp_object_arg_value_1 = par_self;
tmp_expression_value_2 = BUILTIN_SUPER0(tstate, moduledict_textual$widgets$_selection_list, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_options);
tmp_direct_call_arg2_1 = var_options;
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


exception_lineno = 245;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_compact);
tmp_assattr_value_4 = par_compact;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 246;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}

tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_compact, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__8___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__8___init__,
    type_description_1,
    par_self,
    par_name,
    par_id,
    par_classes,
    par_disabled,
    par_compact,
    par_selections,
    var_options,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__8___init__ == cache_frame_frame_textual$widgets$_selection_list$$$function__8___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__8___init__);
    cache_frame_frame_textual$widgets$_selection_list$$$function__8___init__ = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__8___init__);

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
CHECK_OBJECT(var_options);
CHECK_OBJECT(var_options);
Py_DECREF(var_options);
var_options = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_options);
var_options = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

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
CHECK_OBJECT(par_compact);
Py_DECREF(par_compact);
CHECK_OBJECT(par_selections);
Py_DECREF(par_selections);
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
CHECK_OBJECT(par_compact);
Py_DECREF(par_compact);
CHECK_OBJECT(par_selections);
Py_DECREF(par_selections);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__9_selected(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__9_selected;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__9_selected = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__9_selected)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__9_selected);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__9_selected == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__9_selected = MAKE_FUNCTION_FRAME(tstate, code_objects_554737d8708b4f8da28f73cb0ad506a2, module_textual$widgets$_selection_list, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__9_selected->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__9_selected = cache_frame_frame_textual$widgets$_selection_list$$$function__9_selected;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__9_selected);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__9_selected) == 2);

// Framed code:
{
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__selected);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__9_selected->m_frame.f_lineno = 257;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__9_selected, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__9_selected->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__9_selected, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__9_selected,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__9_selected == cache_frame_frame_textual$widgets$_selection_list$$$function__9_selected) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__9_selected);
    cache_frame_frame_textual$widgets$_selection_list$$$function__9_selected = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__9_selected);

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


static PyObject *impl_textual$widgets$_selection_list$$$function__10__on_mount(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par__event = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__10__on_mount;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__10__on_mount = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__10__on_mount)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__10__on_mount);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__10__on_mount == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__10__on_mount = MAKE_FUNCTION_FRAME(tstate, code_objects_ce23e727156169602c48a00f74981499, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__10__on_mount->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__10__on_mount = cache_frame_frame_textual$widgets$_selection_list$$$function__10__on_mount;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__10__on_mount);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__10__on_mount) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__send_messages, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__10__on_mount, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__10__on_mount->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__10__on_mount, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__10__on_mount,
    type_description_1,
    par_self,
    par__event
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__10__on_mount == cache_frame_frame_textual$widgets$_selection_list$$$function__10__on_mount) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__10__on_mount);
    cache_frame_frame_textual$widgets$_selection_list$$$function__10__on_mount = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__10__on_mount);

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
CHECK_OBJECT(par__event);
Py_DECREF(par__event);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par__event);
Py_DECREF(par__event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__11__message_changed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__11__message_changed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__11__message_changed = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__11__message_changed)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__11__message_changed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__11__message_changed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__11__message_changed = MAKE_FUNCTION_FRAME(tstate, code_objects_61f0e959ceda9ee6b0ca380bcf40e2aa, module_textual$widgets$_selection_list, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__11__message_changed->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__11__message_changed = cache_frame_frame_textual$widgets$_selection_list$$$function__11__message_changed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__11__message_changed);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__11__message_changed) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__send_messages);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 271;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_post_message);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
frame_frame_textual$widgets$_selection_list$$$function__11__message_changed->m_frame.f_lineno = 272;
tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_SelectedChanged, tmp_args_element_value_2);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 272;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
frame_frame_textual$widgets$_selection_list$$$function__11__message_changed->m_frame.f_lineno = 272;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_set_sender, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 272;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__11__message_changed->m_frame.f_lineno = 272;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__11__message_changed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__11__message_changed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__11__message_changed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__11__message_changed,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__11__message_changed == cache_frame_frame_textual$widgets$_selection_list$$$function__11__message_changed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__11__message_changed);
    cache_frame_frame_textual$widgets$_selection_list$$$function__11__message_changed = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__11__message_changed);

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


static PyObject *impl_textual$widgets$_selection_list$$$function__12__message_toggled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_option_index = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled = MAKE_FUNCTION_FRAME(tstate, code_objects_91fe3f3d4a5bc777fd5da952ce808dcd, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled = cache_frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__send_messages);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 282;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_post_message);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_option_index);
tmp_args_element_value_3 = par_option_index;
frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled->m_frame.f_lineno = 284;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_SelectionToggled,
        call_args
    );
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 284;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_4 = par_self;
frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled->m_frame.f_lineno = 284;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_set_sender, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 284;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled->m_frame.f_lineno = 283;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled,
    type_description_1,
    par_self,
    par_option_index
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled == cache_frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled);
    cache_frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__12__message_toggled);

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
CHECK_OBJECT(par_option_index);
Py_DECREF(par_option_index);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_option_index);
Py_DECREF(par_option_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__13__apply_to_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_state_change = python_pars[1];
PyObject *var_changed = NULL;
PyObject *var_selection = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_False;
assert(var_changed == NULL);
Py_INCREF(tmp_assign_source_1);
var_changed = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all = MAKE_FUNCTION_FRAME(tstate, code_objects_45e238b031528c08ea01f0b55eb612ec, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all = cache_frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_prevent);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_SelectedChanged);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 308;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_frame.f_lineno = 308;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_frame.f_lineno = 308;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___exit__);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_4;
}
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__options);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_6;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 309;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_8 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_selection;
    var_selection = tmp_assign_source_8;
    Py_INCREF(var_selection);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_4;
if (par_state_change == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state_change);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 311;
type_description_1 = "oooo";
    goto try_except_handler_5;
}

tmp_called_value_3 = par_state_change;
tmp_called_value_4 = module_var_accessor_textual$widgets$_selection_list$cast(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_expression_value_7 = module_var_accessor_textual$widgets$_selection_list$Selection(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Selection);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_subscript_value_1 = module_var_accessor_textual$widgets$_selection_list$SelectionType(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectionType);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_selection);
tmp_args_element_value_4 = var_selection;
frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_frame.f_lineno = 311;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_expression_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_frame.f_lineno = 311;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 311;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
if (var_changed == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_changed);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 312;
type_description_1 = "oooo";
    goto try_except_handler_5;
}

tmp_or_right_value_1 = var_changed;
Py_INCREF(tmp_or_right_value_1);
tmp_assign_source_9 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_9 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = var_changed;
    var_changed = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_10;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
tmp_args_element_value_5 = EXC_TYPE(tstate);
tmp_args_element_value_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_6); 
tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_7 == NULL) {
    tmp_args_element_value_7 = Py_None;
}
frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_frame.f_lineno = 308;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 308;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_frame)) {
        frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_6;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 308;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_frame)) {
        frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_6;
branch_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_frame.f_lineno = 308;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_4);

exception_lineno = 308;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_frame.f_lineno = 308;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_with_1__source);
CHECK_OBJECT(tmp_with_1__source);
Py_DECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
CHECK_OBJECT(tmp_with_1__enter);
CHECK_OBJECT(tmp_with_1__enter);
Py_DECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
CHECK_OBJECT(tmp_with_1__exit);
CHECK_OBJECT(tmp_with_1__exit);
Py_DECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_1;
if (var_changed == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_changed);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 316;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_changed);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_frame.f_lineno = 317;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__message_changed);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_5:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_4;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_frame.f_lineno = 319;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_refresh);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all,
    type_description_1,
    par_self,
    par_state_change,
    var_changed,
    var_selection
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all == cache_frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all);
    cache_frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__13__apply_to_all);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_changed);
var_changed = NULL;
Py_XDECREF(var_selection);
var_selection = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_changed);
var_changed = NULL;
Py_XDECREF(var_selection);
var_selection = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_state_change);
Py_DECREF(par_state_change);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_state_change);
Py_DECREF(par_state_change);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__14__select(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__14__select;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__14__select = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__14__select)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__14__select);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__14__select == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__14__select = MAKE_FUNCTION_FRAME(tstate, code_objects_dda4c94473e71b81454257457562f540, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__14__select->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__14__select = cache_frame_frame_textual$widgets$_selection_list$$$function__14__select;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__14__select);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__14__select) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__selected);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
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
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__selected);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_ass_subscript_1 = par_value;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$widgets$_selection_list$$$function__14__select->m_frame.f_lineno = 333;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__message_changed);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__14__select, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__14__select->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__14__select, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__14__select,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__14__select == cache_frame_frame_textual$widgets$_selection_list$$$function__14__select) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__14__select);
    cache_frame_frame_textual$widgets$_selection_list$$$function__14__select = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__14__select);

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
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__15_select(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_selection = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__15_select;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__15_select = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__15_select)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__15_select);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__15_select == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__15_select = MAKE_FUNCTION_FRAME(tstate, code_objects_97335ffae70cf7a60e7ac4667bf5cac4, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__15_select->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__15_select = cache_frame_frame_textual$widgets$_selection_list$$$function__15_select;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__15_select);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__15_select) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__select);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_selection);
tmp_isinstance_inst_1 = par_selection;
tmp_isinstance_cls_1 = module_var_accessor_textual$widgets$_selection_list$Selection(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Selection);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 348;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 348;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_selection);
tmp_expression_value_2 = par_selection;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_value);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 347;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_value_2 = module_var_accessor_textual$widgets$_selection_list$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 349;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_textual$widgets$_selection_list$SelectionType(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectionType);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 349;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_selection);
tmp_args_element_value_3 = par_selection;
frame_frame_textual$widgets$_selection_list$$$function__15_select->m_frame.f_lineno = 349;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 349;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
frame_frame_textual$widgets$_selection_list$$$function__15_select->m_frame.f_lineno = 346;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 346;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$widgets$_selection_list$$$function__15_select->m_frame.f_lineno = 351;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_refresh);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__15_select, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__15_select->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__15_select, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__15_select,
    type_description_1,
    par_self,
    par_selection
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__15_select == cache_frame_frame_textual$widgets$_selection_list$$$function__15_select) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__15_select);
    cache_frame_frame_textual$widgets$_selection_list$$$function__15_select = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__15_select);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_selection);
Py_DECREF(par_selection);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_selection);
Py_DECREF(par_selection);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__16_select_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__16_select_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__16_select_all = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__16_select_all)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__16_select_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__16_select_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__16_select_all = MAKE_FUNCTION_FRAME(tstate, code_objects_2e691c42dd60dec9f0f524f9a23126f0, module_textual$widgets$_selection_list, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__16_select_all->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__16_select_all = cache_frame_frame_textual$widgets$_selection_list$$$function__16_select_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__16_select_all);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__16_select_all) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__apply_to_all);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__select);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 360;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__16_select_all->m_frame.f_lineno = 360;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__16_select_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__16_select_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__16_select_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__16_select_all,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__16_select_all == cache_frame_frame_textual$widgets$_selection_list$$$function__16_select_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__16_select_all);
    cache_frame_frame_textual$widgets$_selection_list$$$function__16_select_all = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__16_select_all);

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


static PyObject *impl_textual$widgets$_selection_list$$$function__17__deselect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__17__deselect;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__17__deselect = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__17__deselect)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__17__deselect);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__17__deselect == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__17__deselect = MAKE_FUNCTION_FRAME(tstate, code_objects_6f49ea963e245e4420752d24b490078d, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__17__deselect->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__17__deselect = cache_frame_frame_textual$widgets$_selection_list$$$function__17__deselect;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__17__deselect);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__17__deselect) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_delsubscr_subscript_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__selected);
if (tmp_delsubscr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_value);
tmp_delsubscr_subscript_1 = par_value;
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
CHECK_OBJECT(tmp_delsubscr_target_1);
Py_DECREF(tmp_delsubscr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__17__deselect, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__17__deselect, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 371;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$widgets$_selection_list$$$function__17__deselect->m_frame)) {
        frame_frame_textual$widgets$_selection_list$$$function__17__deselect->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$widgets$_selection_list$$$function__17__deselect->m_frame.f_lineno = 375;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__message_changed);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__17__deselect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__17__deselect->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__17__deselect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__17__deselect,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__17__deselect == cache_frame_frame_textual$widgets$_selection_list$$$function__17__deselect) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__17__deselect);
    cache_frame_frame_textual$widgets$_selection_list$$$function__17__deselect = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__17__deselect);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__18_deselect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_selection = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__18_deselect;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__18_deselect = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__18_deselect)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__18_deselect);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__18_deselect == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__18_deselect = MAKE_FUNCTION_FRAME(tstate, code_objects_b06de3d78fcb1ab2e857c6a129ffa82c, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__18_deselect->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__18_deselect = cache_frame_frame_textual$widgets$_selection_list$$$function__18_deselect;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__18_deselect);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__18_deselect) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__deselect);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_selection);
tmp_isinstance_inst_1 = par_selection;
tmp_isinstance_cls_1 = module_var_accessor_textual$widgets$_selection_list$Selection(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Selection);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 389;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 389;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_selection);
tmp_expression_value_2 = par_selection;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_value);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 388;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_value_2 = module_var_accessor_textual$widgets$_selection_list$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 390;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_textual$widgets$_selection_list$SelectionType(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectionType);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 390;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_selection);
tmp_args_element_value_3 = par_selection;
frame_frame_textual$widgets$_selection_list$$$function__18_deselect->m_frame.f_lineno = 390;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 390;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
frame_frame_textual$widgets$_selection_list$$$function__18_deselect->m_frame.f_lineno = 387;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 387;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$widgets$_selection_list$$$function__18_deselect->m_frame.f_lineno = 392;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_refresh);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__18_deselect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__18_deselect->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__18_deselect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__18_deselect,
    type_description_1,
    par_self,
    par_selection
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__18_deselect == cache_frame_frame_textual$widgets$_selection_list$$$function__18_deselect) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__18_deselect);
    cache_frame_frame_textual$widgets$_selection_list$$$function__18_deselect = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__18_deselect);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_selection);
Py_DECREF(par_selection);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_selection);
Py_DECREF(par_selection);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__19_deselect_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all = MAKE_FUNCTION_FRAME(tstate, code_objects_548bc38b42881a586311f70bb9a10835, module_textual$widgets$_selection_list, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all = cache_frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__apply_to_all);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__deselect);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 401;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all->m_frame.f_lineno = 401;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all == cache_frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all);
    cache_frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__19_deselect_all);

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


static PyObject *impl_textual$widgets$_selection_list$$$function__20__toggle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__20__toggle;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__20__toggle = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__20__toggle)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__20__toggle);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__20__toggle == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__20__toggle = MAKE_FUNCTION_FRAME(tstate, code_objects_822dfdff029f945f393563da21a9745f, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__20__toggle->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__20__toggle = cache_frame_frame_textual$widgets$_selection_list$$$function__20__toggle;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__20__toggle);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__20__toggle) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__selected);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_textual$widgets$_selection_list$$$function__20__toggle->m_frame.f_lineno = 413;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__deselect, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_value);
tmp_args_element_value_2 = par_value;
frame_frame_textual$widgets$_selection_list$$$function__20__toggle->m_frame.f_lineno = 415;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__select, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__message_toggled);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__values);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 416;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_subscript_value_1 = par_value;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 416;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__20__toggle->m_frame.f_lineno = 416;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__20__toggle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__20__toggle->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__20__toggle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__20__toggle,
    type_description_1,
    par_self,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__20__toggle == cache_frame_frame_textual$widgets$_selection_list$$$function__20__toggle) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__20__toggle);
    cache_frame_frame_textual$widgets$_selection_list$$$function__20__toggle = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__20__toggle);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__21_toggle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_selection = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__21_toggle;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__21_toggle = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__21_toggle)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__21_toggle);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__21_toggle == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__21_toggle = MAKE_FUNCTION_FRAME(tstate, code_objects_d619d3211a39bbaf4536754959cc3e2c, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__21_toggle->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__21_toggle = cache_frame_frame_textual$widgets$_selection_list$$$function__21_toggle;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__21_toggle);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__21_toggle) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__toggle);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_selection);
tmp_isinstance_inst_1 = par_selection;
tmp_isinstance_cls_1 = module_var_accessor_textual$widgets$_selection_list$Selection(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Selection);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 430;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 430;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_selection);
tmp_expression_value_2 = par_selection;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_value);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 429;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_value_2 = module_var_accessor_textual$widgets$_selection_list$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 431;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_textual$widgets$_selection_list$SelectionType(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectionType);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 431;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_selection);
tmp_args_element_value_3 = par_selection;
frame_frame_textual$widgets$_selection_list$$$function__21_toggle->m_frame.f_lineno = 431;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 431;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
frame_frame_textual$widgets$_selection_list$$$function__21_toggle->m_frame.f_lineno = 428;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$widgets$_selection_list$$$function__21_toggle->m_frame.f_lineno = 433;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_refresh);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__21_toggle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__21_toggle->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__21_toggle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__21_toggle,
    type_description_1,
    par_self,
    par_selection
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__21_toggle == cache_frame_frame_textual$widgets$_selection_list$$$function__21_toggle) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__21_toggle);
    cache_frame_frame_textual$widgets$_selection_list$$$function__21_toggle = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__21_toggle);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_selection);
Py_DECREF(par_selection);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_selection);
Py_DECREF(par_selection);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__22_toggle_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all = MAKE_FUNCTION_FRAME(tstate, code_objects_df91ab10ff8d0fd5dedaf435521fd0c0, module_textual$widgets$_selection_list, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all = cache_frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__apply_to_all);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__toggle);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 442;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all->m_frame.f_lineno = 442;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all == cache_frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all);
    cache_frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__22_toggle_all);

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


static PyObject *impl_textual$widgets$_selection_list$$$function__23__make_selection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_selection = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__23__make_selection;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__23__make_selection = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__23__make_selection)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__23__make_selection);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__23__make_selection == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__23__make_selection = MAKE_FUNCTION_FRAME(tstate, code_objects_8ebf9a0a7baf01b7545e0d63c34c6cf1, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__23__make_selection->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__23__make_selection = cache_frame_frame_textual$widgets$_selection_list$$$function__23__make_selection;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__23__make_selection);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__23__make_selection) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_selection);
tmp_isinstance_inst_1 = par_selection;
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_selection);
tmp_len_arg_1 = par_selection;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 2;
tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_textual$widgets$_selection_list$cast(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 468;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_667b160a46b0083e00d251f3d8e3a81b;
CHECK_OBJECT(par_selection);
tmp_tuple_element_1 = par_selection;
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_tuple_false_tuple;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_arg_1 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
}
if (tmp_tuple_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__23__make_selection->m_frame.f_lineno = 468;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_selection;
    assert(old != NULL);
    par_selection = tmp_assign_source_1;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(par_selection);
tmp_len_arg_2 = par_selection;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 3;
tmp_condition_result_3 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
tmp_called_value_2 = module_var_accessor_textual$widgets$_selection_list$SelectionError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectionError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 472;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_21e3faef5c6c5baf969ee8f592817945;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_len_arg_3;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_selection);
tmp_len_arg_3 = par_selection;
tmp_format_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_3 == NULL));
frame_frame_textual$widgets$_selection_list$$$function__23__make_selection->m_frame.f_lineno = 472;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 472;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_3:;
branch_end_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_direct_call_arg2_1;
tmp_expression_value_1 = module_var_accessor_textual$widgets$_selection_list$Selection(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Selection);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 473;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = module_var_accessor_textual$widgets$_selection_list$SelectionType(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectionType);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 473;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (par_selection == NULL) {
Py_DECREF(tmp_direct_call_arg1_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_selection);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 473;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg2_1 = par_selection;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_1};
    tmp_assign_source_2 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_selection;
    par_selection = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_selection);
tmp_isinstance_inst_2 = par_selection;
tmp_isinstance_cls_2 = module_var_accessor_textual$widgets$_selection_list$Selection(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Selection);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 476;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
frame_frame_textual$widgets$_selection_list$$$function__23__make_selection->m_frame.f_lineno = 476;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 476;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_selection);
tmp_expression_value_2 = par_selection;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_initial_state);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 480;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__select);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_selection);
tmp_expression_value_4 = par_selection;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_value);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 481;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__23__make_selection->m_frame.f_lineno = 481;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__23__make_selection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__23__make_selection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__23__make_selection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__23__make_selection,
    type_description_1,
    par_self,
    par_selection
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__23__make_selection == cache_frame_frame_textual$widgets$_selection_list$$$function__23__make_selection) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__23__make_selection);
    cache_frame_frame_textual$widgets$_selection_list$$$function__23__make_selection = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__23__make_selection);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_selection);
tmp_return_value = par_selection;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_selection);
CHECK_OBJECT(par_selection);
Py_DECREF(par_selection);
par_selection = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_selection);
par_selection = NULL;
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


static PyObject *impl_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection = MAKE_FUNCTION_FRAME(tstate, code_objects_5b93fc957c615cc0c318481a3a11da0b, module_textual$widgets$_selection_list, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection = cache_frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_highlighted);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_toggle);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_get_option_at_index);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 491;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_highlighted);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 491;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection->m_frame.f_lineno = 491;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 491;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection->m_frame.f_lineno = 491;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection == cache_frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection);
    cache_frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection);

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


static PyObject *impl_textual$widgets$_selection_list$$$function__25__get_left_gutter_width(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width = MAKE_FUNCTION_FRAME(tstate, code_objects_785d65874b3cdc09f6e6ff89875e2377, module_textual$widgets$_selection_list, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width = cache_frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width) == 2);

// Framed code:
{
PyObject *tmp_len_arg_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = module_var_accessor_textual$widgets$_selection_list$ToggleButton(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ToggleButton);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 500;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_BUTTON_LEFT);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_textual$widgets$_selection_list$ToggleButton(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ToggleButton);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 501;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_BUTTON_INNER);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 501;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_textual$widgets$_selection_list$ToggleButton(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ToggleButton);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 502;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_BUTTON_RIGHT);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 502;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_space;
tmp_len_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width == cache_frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width);
    cache_frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__25__get_left_gutter_width);

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


static PyObject *impl_textual$widgets$_selection_list$$$function__26_render_line(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_y = python_pars[1];
PyObject *var_line = NULL;
PyObject *var__ = NULL;
PyObject *var_scroll_y = NULL;
PyObject *var_selection_index = NULL;
PyObject *var_selection = NULL;
PyObject *var_component_style = NULL;
PyObject *var_underlying_style = NULL;
PyObject *var_button_style = NULL;
PyObject *var_side_style = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__26_render_line;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__26_render_line = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__26_render_line)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__26_render_line);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__26_render_line == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__26_render_line = MAKE_FUNCTION_FRAME(tstate, code_objects_878047f688a36db1f0aaa01e372ca6a2, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__26_render_line = cache_frame_frame_textual$widgets$_selection_list$$$function__26_render_line;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__26_render_line);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__26_render_line) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 519;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_textual$widgets$_selection_list, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_y);
tmp_args_element_value_1 = par_y;
frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame.f_lineno = 519;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_render_line, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
assert(var_line == NULL);
var_line = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_scroll_offset);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooooooooooc";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooooooooooc";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 524;
type_description_1 = "oooooooooooc";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 524;
type_description_1 = "oooooooooooc";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 524;
type_description_1 = "oooooooooooc";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_5);
var__ = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_scroll_y == NULL);
Py_INCREF(tmp_assign_source_6);
var_scroll_y = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_scroll_y);
tmp_add_expr_left_1 = var_scroll_y;
CHECK_OBJECT(par_y);
tmp_add_expr_right_1 = par_y;
tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
assert(var_selection_index == NULL);
var_selection_index = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_selection_index);
tmp_args_element_value_2 = var_selection_index;
frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame.f_lineno = 527;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_option_at_index, tmp_args_element_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooc";
    goto try_except_handler_4;
}
assert(var_selection == NULL);
var_selection = tmp_assign_source_8;
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__26_render_line, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__26_render_line, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = module_var_accessor_textual$widgets$_selection_list$OptionDoesNotExist(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OptionDoesNotExist);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 528;
type_description_1 = "oooooooooooc";
    goto try_except_handler_5;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "oooooooooooc";
    goto try_except_handler_5;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(var_line);
tmp_return_value = var_line;
Py_INCREF(tmp_return_value);
goto try_return_handler_5;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 526;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame)) {
        frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooc";
goto try_except_handler_5;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_str_digest_5c02f47a45391768f3c50a0062480bfe;
assert(var_component_style == NULL);
Py_INCREF(tmp_assign_source_9);
var_component_style = tmp_assign_source_9;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_selection);
tmp_expression_value_2 = var_selection;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_value);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__selected);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 534;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(var_component_style);
tmp_iadd_expr_left_1 = var_component_style;
tmp_iadd_expr_right_1 = mod_consts.const_str_digest_2f9cdca6dcd614329ba638c14c433df4;
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_10 = tmp_iadd_expr_left_1;
var_component_style = tmp_assign_source_10;

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_highlighted);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_selection_index);
tmp_cmp_expr_right_3 = var_selection_index;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_1 = "oooooooooooc";
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
PyObject *tmp_assign_source_11;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
CHECK_OBJECT(var_component_style);
tmp_iadd_expr_left_2 = var_component_style;
tmp_iadd_expr_right_2 = mod_consts.const_str_digest_643e2a2b65f0613c970767a295e34dc0;
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
assert(!(tmp_result == false));
tmp_assign_source_11 = tmp_iadd_expr_left_2;
var_component_style = tmp_assign_source_11;

}
branch_no_3:;
{
PyObject *tmp_assign_source_12;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_value_value_1;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_line);
tmp_iter_arg_2 = var_line;
tmp_value_value_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_expression_value_5 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 541;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_style);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 541;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_rich_style);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_12 = tmp_or_left_value_1;
or_end_1:;
assert(var_underlying_style == NULL);
var_underlying_style = tmp_assign_source_12;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_underlying_style);
tmp_cmp_expr_left_4 = var_underlying_style;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_1;
frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame.f_lineno = 542;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 542;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooc";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(var_component_style);
tmp_args_element_value_3 = var_component_style;
frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame.f_lineno = 545;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_get_component_rich_style, tmp_args_element_value_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 545;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
assert(var_button_style == NULL);
var_button_style = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_9;
tmp_expression_value_7 = module_var_accessor_textual$widgets$_selection_list$Style(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 550;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_from_color);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 550;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_button_style);
tmp_expression_value_8 = var_button_style;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_bgcolor);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 550;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_underlying_style);
tmp_expression_value_9 = var_underlying_style;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_bgcolor);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 550;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame.f_lineno = 550;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 550;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
assert(var_side_style == NULL);
var_side_style = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
CHECK_OBJECT(var_side_style);
tmp_iadd_expr_left_3 = var_side_style;
tmp_called_value_2 = module_var_accessor_textual$widgets$_selection_list$Style(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 554;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_option;
CHECK_OBJECT(var_selection_index);
tmp_dict_value_1 = var_selection_index;
tmp_kw_call_value_0_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_kw_call_value_0_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame.f_lineno = 554;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_iadd_expr_right_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_meta_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_iadd_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_assign_source_15 = tmp_iadd_expr_left_3;
var_side_style = tmp_assign_source_15;

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iadd_expr_left_4;
PyObject *tmp_iadd_expr_right_4;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
CHECK_OBJECT(var_button_style);
tmp_iadd_expr_left_4 = var_button_style;
tmp_called_value_3 = module_var_accessor_textual$widgets$_selection_list$Style(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Style);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 555;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_dict_key_2 = mod_consts.const_str_plain_option;
CHECK_OBJECT(var_selection_index);
tmp_dict_value_2 = var_selection_index;
tmp_kw_call_value_0_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_kw_call_value_0_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame.f_lineno = 555;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_iadd_expr_right_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_meta_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_iadd_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
CHECK_OBJECT(tmp_iadd_expr_right_4);
Py_DECREF(tmp_iadd_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = tmp_iadd_expr_left_4;
var_button_style = tmp_assign_source_16;

}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_4 = module_var_accessor_textual$widgets$_selection_list$Strip(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Strip);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 559;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_textual$widgets$_selection_list$Segment(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 561;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_10 = module_var_accessor_textual$widgets$_selection_list$ToggleButton(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ToggleButton);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 561;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_BUTTON_LEFT);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_side_style);
tmp_kw_call_dict_value_0_1 = var_side_style;
frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame.f_lineno = 561;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_style_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_tuple_element_3;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_called_value_7;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_value_0_3;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
tmp_called_value_6 = module_var_accessor_textual$widgets$_selection_list$Segment(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 562;
type_description_1 = "oooooooooooc";
    goto tuple_build_exception_1;
}
tmp_expression_value_11 = module_var_accessor_textual$widgets$_selection_list$ToggleButton(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ToggleButton);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 562;
type_description_1 = "oooooooooooc";
    goto tuple_build_exception_1;
}
tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_BUTTON_INNER);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
type_description_1 = "oooooooooooc";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_button_style);
tmp_kw_call_dict_value_0_2 = var_button_style;
frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame.f_lineno = 562;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_style_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
type_description_1 = "oooooooooooc";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_3);
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
tmp_called_value_7 = module_var_accessor_textual$widgets$_selection_list$Segment(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 563;
type_description_1 = "oooooooooooc";
    goto tuple_build_exception_1;
}
tmp_expression_value_12 = module_var_accessor_textual$widgets$_selection_list$ToggleButton(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ToggleButton);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 563;
type_description_1 = "oooooooooooc";
    goto tuple_build_exception_1;
}
tmp_kw_call_arg_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_BUTTON_RIGHT);
if (tmp_kw_call_arg_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "oooooooooooc";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_side_style);
tmp_kw_call_dict_value_0_3 = var_side_style;
frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame.f_lineno = 563;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
    tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_style_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_0_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "oooooooooooc";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_4);
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 2, tmp_tuple_element_1);
tmp_called_value_8 = module_var_accessor_textual$widgets$_selection_list$Segment(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Segment);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 564;
type_description_1 = "oooooooooooc";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_underlying_style);
tmp_kw_call_value_0_3 = var_underlying_style;
frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame.f_lineno = 564;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
    tmp_tuple_element_5 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_8, mod_consts.const_tuple_str_space_tuple, kw_values, mod_consts.const_tuple_str_plain_style_tuple);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 564;
type_description_1 = "oooooooooooc";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_5);
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(var_line);
tmp_tuple_element_1 = var_line;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_args_element_value_6 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
}
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame.f_lineno = 559;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
type_description_1 = "oooooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__26_render_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__26_render_line->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__26_render_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__26_render_line,
    type_description_1,
    par_self,
    par_y,
    var_line,
    var__,
    var_scroll_y,
    var_selection_index,
    var_selection,
    var_component_style,
    var_underlying_style,
    var_button_style,
    var_side_style,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__26_render_line == cache_frame_frame_textual$widgets$_selection_list$$$function__26_render_line) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__26_render_line);
    cache_frame_frame_textual$widgets$_selection_list$$$function__26_render_line = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__26_render_line);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_line);
CHECK_OBJECT(var_line);
Py_DECREF(var_line);
var_line = NULL;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
CHECK_OBJECT(var_scroll_y);
CHECK_OBJECT(var_scroll_y);
Py_DECREF(var_scroll_y);
var_scroll_y = NULL;
CHECK_OBJECT(var_selection_index);
CHECK_OBJECT(var_selection_index);
Py_DECREF(var_selection_index);
var_selection_index = NULL;
Py_XDECREF(var_selection);
var_selection = NULL;
Py_XDECREF(var_component_style);
var_component_style = NULL;
Py_XDECREF(var_underlying_style);
var_underlying_style = NULL;
Py_XDECREF(var_button_style);
var_button_style = NULL;
Py_XDECREF(var_side_style);
var_side_style = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_line);
var_line = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_scroll_y);
var_scroll_y = NULL;
Py_XDECREF(var_selection_index);
var_selection_index = NULL;
Py_XDECREF(var_selection);
var_selection = NULL;
Py_XDECREF(var_component_style);
var_component_style = NULL;
Py_XDECREF(var_underlying_style);
var_underlying_style = NULL;
Py_XDECREF(var_button_style);
var_button_style = NULL;
Py_XDECREF(var_side_style);
var_side_style = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_event = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted = MAKE_FUNCTION_FRAME(tstate, code_objects_c0fba0e6fe98df9677fcc40be9aa1bec, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted = cache_frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_event);
tmp_called_instance_1 = par_event;
frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted->m_frame.f_lineno = 577;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_stop);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 577;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_post_message);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 578;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_SelectionHighlighted);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 578;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_event);
tmp_expression_value_3 = par_event;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_option_index);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 578;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted->m_frame.f_lineno = 578;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 578;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted->m_frame.f_lineno = 578;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 578;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted,
    type_description_1,
    par_self,
    par_event
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted == cache_frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted);
    cache_frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted);

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


static PyObject *impl_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_event = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected = MAKE_FUNCTION_FRAME(tstate, code_objects_afc19d8eb2720836aeffeecd8be393db, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected = cache_frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_event);
tmp_called_instance_1 = par_event;
frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected->m_frame.f_lineno = 586;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_stop);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 586;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected->m_frame.f_lineno = 587;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__toggle_highlighted_selection);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected,
    type_description_1,
    par_self,
    par_event
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected == cache_frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected);
    cache_frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected);

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


static PyObject *impl_textual$widgets$_selection_list$$$function__29_get_option_at_index(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_index = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index = MAKE_FUNCTION_FRAME(tstate, code_objects_69a3633638553292fddfeee6546d085a, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index = cache_frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_textual$widgets$_selection_list$cast(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 601;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_0873a33fda239868c590fd6253f203b6;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 601;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_textual$widgets$_selection_list, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 601;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_index);
tmp_args_element_value_3 = par_index;
frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index->m_frame.f_lineno = 601;
tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_option_at_index, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 601;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index->m_frame.f_lineno = 601;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 601;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index,
    type_description_1,
    par_self,
    par_index,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index == cache_frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index);
    cache_frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__29_get_option_at_index);

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
CHECK_OBJECT(par_index);
Py_DECREF(par_index);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_index);
Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__30_get_option(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_option_id = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__30_get_option;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__30_get_option = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__30_get_option)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__30_get_option);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__30_get_option == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__30_get_option = MAKE_FUNCTION_FRAME(tstate, code_objects_3d5b73cdc25f118608c954fb6f46f7d6, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__30_get_option->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__30_get_option = cache_frame_frame_textual$widgets$_selection_list$$$function__30_get_option;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__30_get_option);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__30_get_option) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_textual$widgets$_selection_list$cast(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 615;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_0873a33fda239868c590fd6253f203b6;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 615;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_textual$widgets$_selection_list, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 615;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_option_id);
tmp_args_element_value_3 = par_option_id;
frame_frame_textual$widgets$_selection_list$$$function__30_get_option->m_frame.f_lineno = 615;
tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_option, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 615;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__30_get_option->m_frame.f_lineno = 615;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 615;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__30_get_option, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__30_get_option->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__30_get_option, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__30_get_option,
    type_description_1,
    par_self,
    par_option_id,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__30_get_option == cache_frame_frame_textual$widgets$_selection_list$$$function__30_get_option) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__30_get_option);
    cache_frame_frame_textual$widgets$_selection_list$$$function__30_get_option = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__30_get_option);

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
CHECK_OBJECT(par_option_id);
Py_DECREF(par_option_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_option_id);
Py_DECREF(par_option_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__31__pre_remove_option(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_option = python_pars[1];
PyObject *par_index = python_pars[2];
PyObject *outline_0_var_option_value = NULL;
PyObject *outline_0_var_option_index = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option = MAKE_FUNCTION_FRAME(tstate, code_objects_33f4ec27bb8193728f20b202744c0cc5, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option = cache_frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_option);
tmp_isinstance_inst_1 = par_option;
tmp_isinstance_cls_1 = module_var_accessor_textual$widgets$_selection_list$Selection(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Selection);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 619;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 619;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 619;
type_description_1 = "ooo";
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
{
PyObject *tmp_raise_type_1;
frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option->m_frame.f_lineno = 619;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 619;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__deselect);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_option);
tmp_expression_value_2 = par_option;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_value);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 620;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option->m_frame.f_lineno = 620;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_delsubscr_subscript_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__values);
if (tmp_delsubscr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 621;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_option);
tmp_expression_value_4 = par_option;
tmp_delsubscr_subscript_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_value);
if (tmp_delsubscr_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_delsubscr_target_1);

exception_lineno = 621;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
CHECK_OBJECT(tmp_delsubscr_target_1);
Py_DECREF(tmp_delsubscr_target_1);
CHECK_OBJECT(tmp_delsubscr_subscript_1);
Py_DECREF(tmp_delsubscr_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 621;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__values);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option->m_frame.f_lineno = 626;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 624;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 626;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 626;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 626;
type_description_1 = "ooo";
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

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
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

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_option_value;
    outline_0_var_option_value = tmp_assign_source_7;
    Py_INCREF(outline_0_var_option_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_option_index;
    outline_0_var_option_index = tmp_assign_source_8;
    Py_INCREF(outline_0_var_option_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_option_value);
tmp_dictset38_key_1 = outline_0_var_option_value;
CHECK_OBJECT(outline_0_var_option_index);
tmp_cmp_expr_left_1 = outline_0_var_option_index;
CHECK_OBJECT(par_index);
tmp_cmp_expr_right_1 = par_index;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(outline_0_var_option_index);
tmp_sub_expr_left_1 = outline_0_var_option_index;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_dictset38_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_dictset38_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(outline_0_var_option_index);
tmp_dictset38_value_1 = outline_0_var_option_index;
Py_INCREF(tmp_dictset38_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_value_1);
Py_DECREF(tmp_dictset38_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 624;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 624;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_assattr_value_1 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_assattr_value_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(outline_0_var_option_value);
outline_0_var_option_value = NULL;
Py_XDECREF(outline_0_var_option_index);
outline_0_var_option_index = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_option_value);
outline_0_var_option_value = NULL;
Py_XDECREF(outline_0_var_option_index);
outline_0_var_option_index = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 624;
goto frame_exception_exit_1;
outline_result_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__values, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 624;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option,
    type_description_1,
    par_self,
    par_option,
    par_index
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option == cache_frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option);
    cache_frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__31__pre_remove_option);

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
CHECK_OBJECT(par_option);
Py_DECREF(par_option);
CHECK_OBJECT(par_index);
Py_DECREF(par_index);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_option);
Py_DECREF(par_option);
CHECK_OBJECT(par_index);
Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__32_add_options(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_items = python_pars[1];
PyObject *var_cleaned_options = NULL;
PyObject *var_item = NULL;
PyObject *outline_0_var_index = NULL;
PyObject *outline_0_var_option = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__32_add_options;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__32_add_options = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_cleaned_options == NULL);
var_cleaned_options = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__32_add_options)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__32_add_options);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__32_add_options == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__32_add_options = MAKE_FUNCTION_FRAME(tstate, code_objects_375b9f57685c008b61cad10ae6b34820, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__32_add_options->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__32_add_options = cache_frame_frame_textual$widgets$_selection_list$$$function__32_add_options;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__32_add_options);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__32_add_options) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_items);
tmp_iter_arg_1 = par_items;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooc";
exception_lineno = 657;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_4 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_item;
    var_item = tmp_assign_source_4;
    Py_INCREF(var_item);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_item);
tmp_isinstance_inst_1 = var_item;
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 658;
type_description_1 = "ooooc";
    goto try_except_handler_2;
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (var_cleaned_options == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cleaned_options);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 659;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_cleaned_options;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 660;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}

tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__make_selection);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
tmp_called_value_2 = module_var_accessor_textual$widgets$_selection_list$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 661;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
tmp_args_element_value_2 = mod_consts.const_str_digest_ea49902805673956d643db5da0d2511f;
CHECK_OBJECT(var_item);
tmp_args_element_value_3 = var_item;
frame_frame_textual$widgets$_selection_list$$$function__32_add_options->m_frame.f_lineno = 661;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 661;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
frame_frame_textual$widgets$_selection_list$$$function__32_add_options->m_frame.f_lineno = 660;
tmp_item_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(var_item);
tmp_isinstance_inst_2 = var_item;
tmp_isinstance_cls_2 = module_var_accessor_textual$widgets$_selection_list$Selection(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Selection);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 667;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
if (var_cleaned_options == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cleaned_options);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 668;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_cleaned_options;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 668;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}

tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_item);
tmp_args_element_value_4 = var_item;
frame_frame_textual$widgets$_selection_list$$$function__32_add_options->m_frame.f_lineno = 668;
tmp_item_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__make_selection, tmp_args_element_value_4);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_textual$widgets$_selection_list$SelectionError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectionError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 670;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
frame_frame_textual$widgets$_selection_list$$$function__32_add_options->m_frame.f_lineno = 670;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_94cb6559c8bca0ba29e5eeff1c4d785c_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 670;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 670;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 670;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooc";
goto try_except_handler_2;
}
branch_end_2:;
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 675;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__values);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 675;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_update);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 675;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_4;
tmp_called_value_5 = (PyObject *)&PyEnum_Type;
if (var_cleaned_options == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cleaned_options);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 678;
type_description_1 = "ooooc";
    goto try_except_handler_3;
}

tmp_kw_call_arg_value_0_1 = var_cleaned_options;
if (par_self == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 678;
type_description_1 = "ooooc";
    goto try_except_handler_3;
}

tmp_expression_value_4 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_option_count);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 678;
type_description_1 = "ooooc";
    goto try_except_handler_3;
}
frame_frame_textual$widgets$_selection_list$$$function__32_add_options->m_frame.f_lineno = 678;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_start_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 678;
type_description_1 = "ooooc";
    goto try_except_handler_3;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 678;
type_description_1 = "ooooc";
    goto try_except_handler_3;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_6;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_2 = tmp_dictcontraction_1__$0;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooc";
exception_lineno = 676;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_3 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 678;
type_description_1 = "ooooc";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 678;
type_description_1 = "ooooc";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 678;
type_description_1 = "ooooc";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 678;
type_description_1 = "ooooc";
    goto try_except_handler_6;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_5;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_11 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_index;
    outline_0_var_index = tmp_assign_source_11;
    Py_INCREF(outline_0_var_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_12 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_option;
    outline_0_var_option = tmp_assign_source_12;
    Py_INCREF(outline_0_var_option);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_option);
tmp_expression_value_5 = outline_0_var_option;
tmp_dictset38_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_value);
if (tmp_dictset38_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 677;
type_description_1 = "ooooc";
    goto try_except_handler_4;
}
CHECK_OBJECT(outline_0_var_index);
tmp_dictset38_value_1 = outline_0_var_index;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_key_1);
Py_DECREF(tmp_dictset38_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 676;
type_description_1 = "ooooc";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 676;
type_description_1 = "ooooc";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_args_element_value_5 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_args_element_value_5);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_0_var_index);
outline_0_var_index = NULL;
Py_XDECREF(outline_0_var_option);
outline_0_var_option = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_index);
outline_0_var_index = NULL;
Py_XDECREF(outline_0_var_option);
outline_0_var_option = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 676;
goto frame_exception_exit_1;
outline_result_1:;
frame_frame_textual$widgets$_selection_list$$$function__32_add_options->m_frame.f_lineno = 675;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 675;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_6;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 682;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 682;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_object_arg_value_1 = par_self;
tmp_expression_value_6 = BUILTIN_SUPER0(tstate, moduledict_textual$widgets$_selection_list, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 682;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_add_options);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 682;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
if (var_cleaned_options == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cleaned_options);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 682;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = var_cleaned_options;
frame_frame_textual$widgets$_selection_list$$$function__32_add_options->m_frame.f_lineno = 682;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 682;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__32_add_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__32_add_options->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__32_add_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__32_add_options,
    type_description_1,
    par_self,
    par_items,
    var_cleaned_options,
    var_item,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__32_add_options == cache_frame_frame_textual$widgets$_selection_list$$$function__32_add_options) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__32_add_options);
    cache_frame_frame_textual$widgets$_selection_list$$$function__32_add_options = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__32_add_options);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_cleaned_options);
var_cleaned_options = NULL;
Py_XDECREF(var_item);
var_item = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cleaned_options);
var_cleaned_options = NULL;
Py_XDECREF(var_item);
var_item = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_items);
Py_DECREF(par_items);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_items);
Py_DECREF(par_items);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__33_add_option(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_item = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__33_add_option;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__33_add_option = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__33_add_option)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__33_add_option);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__33_add_option == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__33_add_option = MAKE_FUNCTION_FRAME(tstate, code_objects_2fabdb4c08bd337da9073c06c852fbbe, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__33_add_option->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__33_add_option = cache_frame_frame_textual$widgets$_selection_list$$$function__33_add_option;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__33_add_option);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__33_add_option) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_list_element_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_item);
tmp_list_element_1 = par_item;
tmp_args_element_value_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
frame_frame_textual$widgets$_selection_list$$$function__33_add_option->m_frame.f_lineno = 705;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_add_options, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 705;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__33_add_option, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__33_add_option->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__33_add_option, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__33_add_option,
    type_description_1,
    par_self,
    par_item
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__33_add_option == cache_frame_frame_textual$widgets$_selection_list$$$function__33_add_option) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__33_add_option);
    cache_frame_frame_textual$widgets$_selection_list$$$function__33_add_option = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__33_add_option);

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
CHECK_OBJECT(par_item);
Py_DECREF(par_item);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_item);
Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$widgets$_selection_list$$$function__34_clear_options(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$function__34_clear_options;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$widgets$_selection_list$$$function__34_clear_options = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$widgets$_selection_list$$$function__34_clear_options)) {
    Py_XDECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__34_clear_options);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$widgets$_selection_list$$$function__34_clear_options == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$widgets$_selection_list$$$function__34_clear_options = MAKE_FUNCTION_FRAME(tstate, code_objects_b2e37b1d352e4220ed8eb50985c15ae6, module_textual$widgets$_selection_list, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$widgets$_selection_list$$$function__34_clear_options->m_type_description == NULL);
frame_frame_textual$widgets$_selection_list$$$function__34_clear_options = cache_frame_frame_textual$widgets$_selection_list$$$function__34_clear_options;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$function__34_clear_options);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$function__34_clear_options) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__selected);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 713;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_clear);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 713;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__34_clear_options->m_frame.f_lineno = 713;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 713;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__values);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 714;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_clear);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 714;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__34_clear_options->m_frame.f_lineno = 714;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 714;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 715;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_textual$widgets$_selection_list, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 715;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list$$$function__34_clear_options->m_frame.f_lineno = 715;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_clear_options);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 715;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$function__34_clear_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$function__34_clear_options->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$function__34_clear_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$function__34_clear_options,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$widgets$_selection_list$$$function__34_clear_options == cache_frame_frame_textual$widgets$_selection_list$$$function__34_clear_options) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$widgets$_selection_list$$$function__34_clear_options);
    cache_frame_frame_textual$widgets$_selection_list$$$function__34_clear_options = NULL;
}

assertFrameObject(frame_frame_textual$widgets$_selection_list$$$function__34_clear_options);

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



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__10__on_mount(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__10__on_mount,
        mod_consts.const_str_plain__on_mount,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7380e2c80afaa9d2da8b85e0112c0cad,
#endif
        code_objects_ce23e727156169602c48a00f74981499,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_cece19643a893fd7c82d67c40b2f1804,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__11__message_changed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__11__message_changed,
        mod_consts.const_str_plain__message_changed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2cb832206a8efc311fa1a512b1b7fc1c,
#endif
        code_objects_61f0e959ceda9ee6b0ca380bcf40e2aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_5809c6f4b4561d76cc72d34f2cbc5c6c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__12__message_toggled(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__12__message_toggled,
        mod_consts.const_str_plain__message_toggled,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7f78850244ae8984aa67ba5bb13b3b68,
#endif
        code_objects_91fe3f3d4a5bc777fd5da952ce808dcd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_7232c4579d321ea7302d5c8f283f45ae,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__13__apply_to_all(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__13__apply_to_all,
        mod_consts.const_str_plain__apply_to_all,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_56500b61da006c1f8055b92ae3144204,
#endif
        code_objects_45e238b031528c08ea01f0b55eb612ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_20736b0f615b70a9a80751d000b33563,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__14__select(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__14__select,
        mod_consts.const_str_plain__select,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1b42e2ff8a331ed0a9bd3c535c5fa0fa,
#endif
        code_objects_dda4c94473e71b81454257457562f540,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_771e6537e0c4eec13f7e9de56bf55e36,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__15_select(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__15_select,
        mod_consts.const_str_plain_select,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_29da6b68c597949b1b0b0320166fa9ea,
#endif
        code_objects_97335ffae70cf7a60e7ac4667bf5cac4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_a4f4c38c6ff25fcd32b194b101b4cf9a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__16_select_all(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__16_select_all,
        mod_consts.const_str_plain_select_all,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a04652210e8653b93897057f2818022a,
#endif
        code_objects_2e691c42dd60dec9f0f524f9a23126f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_55355053a87abf7b0d1b37d5fd339f02,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__17__deselect(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__17__deselect,
        mod_consts.const_str_plain__deselect,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_53272d02b2b3d33e110b9c33f96cc568,
#endif
        code_objects_6f49ea963e245e4420752d24b490078d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_355faf8ae6e687509d21bc73e256ff03,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__18_deselect(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__18_deselect,
        mod_consts.const_str_plain_deselect,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b90accf54ee4c95ba1ffd5abf1c1aa1e,
#endif
        code_objects_b06de3d78fcb1ab2e857c6a129ffa82c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_0d91193a6d94c5dca0d0673ab030fb03,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__19_deselect_all(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__19_deselect_all,
        mod_consts.const_str_plain_deselect_all,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aa230fe2d840d01767c02932031e7cfc,
#endif
        code_objects_548bc38b42881a586311f70bb9a10835,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_62922fa3f6c2836f091fa9fa049eaf62,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_569461a68676478145b510f549375e71,
#endif
        code_objects_42d28db255f71acb397a7d7201117fdd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_28fc37b1736feb58cac448e4f9fa2fff,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__20__toggle(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__20__toggle,
        mod_consts.const_str_plain__toggle,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6e3ed4f4e4e9162c0414d1a82d28d9d6,
#endif
        code_objects_822dfdff029f945f393563da21a9745f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_5e41416f397dfd50e5c806485c2205a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__21_toggle(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__21_toggle,
        mod_consts.const_str_plain_toggle,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3154e55f0055508539fac1596bee8894,
#endif
        code_objects_d619d3211a39bbaf4536754959cc3e2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_32e3f245fe49001f1e854a80295ec007,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__22_toggle_all(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__22_toggle_all,
        mod_consts.const_str_plain_toggle_all,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3369e845fdf445d7fa07a0de09249397,
#endif
        code_objects_df91ab10ff8d0fd5dedaf435521fd0c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_c08c49ab5c9e2faff8a896ee8b4f484b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__23__make_selection(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__23__make_selection,
        mod_consts.const_str_plain__make_selection,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b0e295f937c6ef5c8800589ecc8fe5d8,
#endif
        code_objects_8ebf9a0a7baf01b7545e0d63c34c6cf1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_38ca710d1b67aa1948d6d5bcbbfcd5a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection,
        mod_consts.const_str_plain__toggle_highlighted_selection,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e3801afff4a0ea8fdaaeb2c17ad02a99,
#endif
        code_objects_5b93fc957c615cc0c318481a3a11da0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_1367c717d6899aaa872703861dfccd69,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__25__get_left_gutter_width(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__25__get_left_gutter_width,
        mod_consts.const_str_plain__get_left_gutter_width,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b557b2fd599042f7ce52bcce5c2002b4,
#endif
        code_objects_785d65874b3cdc09f6e6ff89875e2377,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_fb27717acf4f04df83f1fa524f225e57,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__26_render_line(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__26_render_line,
        mod_consts.const_str_plain_render_line,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a932f139558b89ecdd4d6d55cee260a5,
#endif
        code_objects_878047f688a36db1f0aaa01e372ca6a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_c4af502f97fb8f08c4ffb79495a25916,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted,
        mod_consts.const_str_plain__on_option_list_option_highlighted,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e6c24b825c2c0152339f32bb4210aebe,
#endif
        code_objects_c0fba0e6fe98df9677fcc40be9aa1bec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_9ae9983e109f596bc97c00922f8919d8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected,
        mod_consts.const_str_plain__on_option_list_option_selected,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7e1765c9ee13b8cf65aee2ac15a371a1,
#endif
        code_objects_afc19d8eb2720836aeffeecd8be393db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_ab05a82b6c3b388513b2f895e6c74339,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__29_get_option_at_index(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__29_get_option_at_index,
        mod_consts.const_str_plain_get_option_at_index,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_783c06e1555fab5573be65060a704932,
#endif
        code_objects_69a3633638553292fddfeee6546d085a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_b718572b55684920a9eb57e92b5b8741,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__2_value(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__2_value,
        mod_consts.const_str_plain_value,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_421e489ea564f6d7ec340f502d2a9696,
#endif
        code_objects_b0469e8fd7fb5582edcf87173e31b682,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_746b4eeac417fc31ccc5f4bc224f1886,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__30_get_option(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__30_get_option,
        mod_consts.const_str_plain_get_option,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d690797ac00a088368a746dfe0602bd2,
#endif
        code_objects_3d5b73cdc25f118608c954fb6f46f7d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_ba1fe48e4fb920d90ea58b0d3caa0c23,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__31__pre_remove_option(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__31__pre_remove_option,
        mod_consts.const_str_plain__pre_remove_option,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_94c663a1484131d947a9086ecbe41243,
#endif
        code_objects_33f4ec27bb8193728f20b202744c0cc5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_ceca0059245fe3bb32469bd971c70796,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__32_add_options(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__32_add_options,
        mod_consts.const_str_plain_add_options,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_52e8cb22df674d7942c0203e26bff60c,
#endif
        code_objects_375b9f57685c008b61cad10ae6b34820,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_6a884b053b624ace62c0939c771b2feb,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__33_add_option(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__33_add_option,
        mod_consts.const_str_plain_add_option,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8e96f4c5829b3ce89a90618ded2ab016,
#endif
        code_objects_2fabdb4c08bd337da9073c06c852fbbe,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_31b63c3b68f67ee44198e0b884c6d852,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__34_clear_options(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__34_clear_options,
        mod_consts.const_str_plain_clear_options,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b35dd6358536b15ff4176538e4f1b2e2,
#endif
        code_objects_b2e37b1d352e4220ed8eb50985c15ae6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_47c650029dc299083c1b263ba8ff4bd3,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__3_initial_state(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__3_initial_state,
        mod_consts.const_str_plain_initial_state,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_90bcae480b1a8400e871c6bb2de54414,
#endif
        code_objects_bf58764d300f910bfb801a5ff6fc96c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_484951df2203ffe46821bc50be855702,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__4___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2fbaa8b168f7fa7ffe48e2d2745f8a04,
#endif
        code_objects_28bca6507b12d173f22e695eb8ca5d1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_b1da54b9c38e693d453ae42ae38a2271,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__5_control(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__5_control,
        mod_consts.const_str_plain_control,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d6995b67d25ab5d4a74c460f7adb5de2,
#endif
        code_objects_47a9a9ebfd1526f21de19dfcc45b1923,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_8987d5ef5a77bdeec0c786019f2b79bc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__6___rich_repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__6___rich_repr__,
        mod_consts.const_str_plain___rich_repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a9953b000bee76c1567a86cd1372607e,
#endif
        code_objects_54df90caef78d444e4e77f09296e8fb1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__7_control(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__7_control,
        mod_consts.const_str_plain_control,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7837fece023eb48041aba658cca161b2,
#endif
        code_objects_f5e3dda837f9a14e3eaf10cae936521d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_23694382e68fe779a17faa2fde3dc600,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__8___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a4bfd16cb935cc312624e1ba99fda500,
#endif
        code_objects_51fb0da158c052704cad73da45141bd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_4fa5ca04c72d49a87b4196d048623233,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$widgets$_selection_list$$$function__9_selected(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$widgets$_selection_list$$$function__9_selected,
        mod_consts.const_str_plain_selected,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_352b567f29ad070be6aaa010e209a3bf,
#endif
        code_objects_554737d8708b4f8da28f73cb0ad506a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$widgets$_selection_list,
        mod_consts.const_str_digest_75930ec1118db8556615a2468fa4c71d,
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

static function_impl_code const function_table_textual$widgets$_selection_list[] = {
impl_textual$widgets$_selection_list$$$function__1___init__,
impl_textual$widgets$_selection_list$$$function__2_value,
impl_textual$widgets$_selection_list$$$function__3_initial_state,
impl_textual$widgets$_selection_list$$$function__4___init__,
impl_textual$widgets$_selection_list$$$function__5_control,
impl_textual$widgets$_selection_list$$$function__6___rich_repr__,
impl_textual$widgets$_selection_list$$$function__7_control,
impl_textual$widgets$_selection_list$$$function__8___init__,
impl_textual$widgets$_selection_list$$$function__9_selected,
impl_textual$widgets$_selection_list$$$function__10__on_mount,
impl_textual$widgets$_selection_list$$$function__11__message_changed,
impl_textual$widgets$_selection_list$$$function__12__message_toggled,
impl_textual$widgets$_selection_list$$$function__13__apply_to_all,
impl_textual$widgets$_selection_list$$$function__14__select,
impl_textual$widgets$_selection_list$$$function__15_select,
impl_textual$widgets$_selection_list$$$function__16_select_all,
impl_textual$widgets$_selection_list$$$function__17__deselect,
impl_textual$widgets$_selection_list$$$function__18_deselect,
impl_textual$widgets$_selection_list$$$function__19_deselect_all,
impl_textual$widgets$_selection_list$$$function__20__toggle,
impl_textual$widgets$_selection_list$$$function__21_toggle,
impl_textual$widgets$_selection_list$$$function__22_toggle_all,
impl_textual$widgets$_selection_list$$$function__23__make_selection,
impl_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection,
impl_textual$widgets$_selection_list$$$function__25__get_left_gutter_width,
impl_textual$widgets$_selection_list$$$function__26_render_line,
impl_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted,
impl_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected,
impl_textual$widgets$_selection_list$$$function__29_get_option_at_index,
impl_textual$widgets$_selection_list$$$function__30_get_option,
impl_textual$widgets$_selection_list$$$function__31__pre_remove_option,
impl_textual$widgets$_selection_list$$$function__32_add_options,
impl_textual$widgets$_selection_list$$$function__33_add_option,
impl_textual$widgets$_selection_list$$$function__34_clear_options,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$widgets$_selection_list);
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
        module_textual$widgets$_selection_list,
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
        function_table_textual$widgets$_selection_list,
        sizeof(function_table_textual$widgets$_selection_list) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.widgets._selection_list";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$widgets$_selection_list(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$widgets$_selection_list");

    // Store the module for future use.
    module_textual$widgets$_selection_list = module;

    moduledict_textual$widgets$_selection_list = MODULE_DICT(module_textual$widgets$_selection_list);

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
        PRINT_STRING("textual$widgets$_selection_list: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$widgets$_selection_list: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$widgets$_selection_list: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.widgets._selection_list" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$widgets$_selection_list\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$widgets$_selection_list,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$widgets$_selection_list,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$widgets$_selection_list,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$widgets$_selection_list,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$widgets$_selection_list,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$widgets$_selection_list);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$widgets$_selection_list);
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

        UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
struct Nuitka_CellObject *outline_2_var___class__ = NULL;
struct Nuitka_CellObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_1__bases = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_1__prepared = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_2__bases = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_2__prepared = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_3__bases = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_3__prepared = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_4__bases = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_SelectionList$class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list;
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
PyObject *locals_textual$widgets$_selection_list$$$class__1_SelectionError_33 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_textual$widgets$_selection_list$$$class__2_Selection_37 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$class__2_Selection_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_textual$widgets$_selection_list$$$class__3_SelectionList_76 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
PyObject *locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$class__4_SelectionMessage_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_textual$widgets$_selection_list$$$class__5_SelectionHighlighted_167 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_textual$widgets$_selection_list$$$class__6_SelectionToggled_174 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$widgets$_selection_list$$$class__7_SelectedChanged_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_1b8df182f3fe85ac64eea44c3b999a88;
UPDATE_STRING_DICT0(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$widgets$_selection_list = MAKE_MODULE_FRAME(code_objects_e49461d15f3389e5a4afa2385a85ee07, module_textual$widgets$_selection_list);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$widgets$_selection_list$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$widgets$_selection_list$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$widgets$_selection_list;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_dataclass_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 5;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_dataclass,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_dataclass);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_ClassVar,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ClassVar);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassVar, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_Generic,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Generic);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_11);
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
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_12);
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
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$widgets$_selection_list;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Result_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 8;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_Result,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Result);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Result, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_6ade9fb5040f26ac50721029664cef54;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$widgets$_selection_list;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Segment_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 9;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_Segment,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Segment);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Segment, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_0e0eeb0581cf26ca1e6d4fca58f18db5;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$widgets$_selection_list;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Style_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 10;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_Style,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Style);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Style, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$widgets$_selection_list;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Self_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 11;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_Self,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Self);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Self, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_textual;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$widgets$_selection_list;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_events_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 13;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_events,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_events);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_events, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_d2a246f6e260a2c4ad9692789d633ead;
tmp_globals_arg_value_7 = (PyObject *)moduledict_textual$widgets$_selection_list;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_Binding_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 14;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_Binding,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_Binding);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Binding, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_ee92707a8e73d51481db58a75e3dd4cb;
tmp_globals_arg_value_8 = (PyObject *)moduledict_textual$widgets$_selection_list;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_Content_str_plain_ContentText_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 15;
tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_14 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_Content,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Content);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Content, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_15 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_ContentText,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_ContentText);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_ContentText, tmp_assign_source_21);
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
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_72b648868ed1bbb5234f85e7f2803b8f;
tmp_globals_arg_value_9 = (PyObject *)moduledict_textual$widgets$_selection_list;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_Message_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 16;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_Message,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_Message);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Message, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_ffbdc977fd7566d9981a709ea52c386e;
tmp_globals_arg_value_10 = (PyObject *)moduledict_textual$widgets$_selection_list;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_Strip_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 17;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_Strip,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_Strip);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Strip, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_e9da353d62873b67e2e0848bcc0edd5a;
tmp_globals_arg_value_11 = (PyObject *)moduledict_textual$widgets$_selection_list;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_548e0905ce7060a67b3b9d1347862278_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 18;
tmp_assign_source_24 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_18 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_Option,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_Option);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Option, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_19 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_OptionDoesNotExist,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_OptionDoesNotExist);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_OptionDoesNotExist, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_20 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_OptionList,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_OptionList);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_OptionList, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_21 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_OptionListContent,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_OptionListContent);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_OptionListContent, tmp_assign_source_28);
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
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_836075f74069272fc05479c9bf04f14a;
tmp_globals_arg_value_12 = (PyObject *)moduledict_textual$widgets$_selection_list;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_ToggleButton_tuple;
tmp_level_value_12 = const_int_0;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 24;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_textual$widgets$_selection_list,
        mod_consts.const_str_plain_ToggleButton,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_ToggleButton);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_ToggleButton, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_textual$widgets$_selection_list$TypeVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 26;
tmp_assign_source_30 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_SelectionType_tuple);

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectionType, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_textual$widgets$_selection_list$TypeVar(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 29;
tmp_assign_source_31 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_MessageSelectionType_tuple);

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_MessageSelectionType, tmp_assign_source_31);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_TypeError_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_32 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
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


exception_lineno = 33;

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


exception_lineno = 33;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_34 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_34;
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


exception_lineno = 33;

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
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_SelectionError;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 33;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_35;
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


exception_lineno = 33;

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
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_13, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_4;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
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


exception_lineno = 33;

    goto try_except_handler_4;
}
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 33;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 33;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_36;
}
branch_end_1:;
{
PyObject *tmp_assign_source_37;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$widgets$_selection_list$$$class__1_SelectionError_33 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4c10d2f363db233817ad7e5890939a7d;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__1_SelectionError_33, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_2541ddced8f6a486206ca95fc0c84d6a;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__1_SelectionError_33, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_SelectionError;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__1_SelectionError_33, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_33;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__1_SelectionError_33, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__1_SelectionError_33, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_TypeError_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_TypeError_tuple;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__1_SelectionError_33, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
branch_no_3:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_3 = mod_consts.const_str_plain_SelectionError;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_textual$widgets$_selection_list$$$class__1_SelectionError_33;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 33;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_6;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_38;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_37 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_37);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_textual$widgets$_selection_list$$$class__1_SelectionError_33);
locals_textual$widgets$_selection_list$$$class__1_SelectionError_33 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_selection_list$$$class__1_SelectionError_33);
locals_textual$widgets$_selection_list$$$class__1_SelectionError_33 = NULL;
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
exception_lineno = 33;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectionError, tmp_assign_source_37);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_39;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
tmp_expression_value_7 = module_var_accessor_textual$widgets$_selection_list$Generic(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto try_except_handler_7;
}
tmp_subscript_value_2 = module_var_accessor_textual$widgets$_selection_list$SelectionType(tstate);
if (unlikely(tmp_subscript_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectionType);
}

if (tmp_subscript_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto try_except_handler_7;
}
tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_7;
}
tmp_assign_source_39 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_39, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_textual$widgets$_selection_list$Option(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Option);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_assign_source_39, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assign_source_39);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_40 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_7;
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
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_3, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_7;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_7;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_42 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_42;
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


exception_lineno = 37;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_7;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_Selection;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 37;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_43;
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


exception_lineno = 37;

    goto try_except_handler_7;
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
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_14, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_7;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_7;
}
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 37;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 37;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_44;
}
branch_end_4:;
{
PyObject *tmp_assign_source_45;
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_textual$widgets$_selection_list$$$class__2_Selection_37 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4c10d2f363db233817ad7e5890939a7d;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__2_Selection_37, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_3ec7c83441daabc758796c2f611b3f08;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__2_Selection_37, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_Selection;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__2_Selection_37, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_37;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__2_Selection_37, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_9;
}
frame_frame_textual$widgets$_selection_list$$$class__2_Selection_2 = MAKE_CLASS_FRAME(tstate, code_objects_de2e881c554781f6932a8990180e02aa, module_textual$widgets$_selection_list, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$class__2_Selection_2);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$class__2_Selection_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_1 = mod_consts.const_tuple_false_none_false_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0ebaa384836f13fd14864c0195a0b79f);
Py_INCREF(tmp_defaults_1);
tmp_closure_1[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__2_Selection_37, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_2;
tmp_called_value_6 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__2_Selection_37, mod_consts.const_str_plain_property);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_6f9ceb6c52748f0207ec218dac77a88c);

tmp_args_element_value_1 = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__2_value(tstate, tmp_annotations_2);

frame_frame_textual$widgets$_selection_list$$$class__2_Selection_2->m_frame.f_lineno = 65;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__2_Selection_37, mod_consts.const_str_plain_value, tmp_dictset_value);
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
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_3;
tmp_called_value_7 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__2_Selection_37, mod_consts.const_str_plain_property);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_2 = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__3_initial_state(tstate, tmp_annotations_3);

frame_frame_textual$widgets$_selection_list$$$class__2_Selection_2->m_frame.f_lineno = 70;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__2_Selection_37, mod_consts.const_str_plain_initial_state, tmp_dictset_value);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$class__2_Selection_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$class__2_Selection_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$class__2_Selection_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$class__2_Selection_2,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_textual$widgets$_selection_list$$$class__2_Selection_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_9;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__value_str_plain__initial_state_tuple;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__2_Selection_37, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_9;
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


exception_lineno = 37;

    goto try_except_handler_9;
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
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__2_Selection_37, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_9;
}
branch_no_6:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_7 = mod_consts.const_str_plain_Selection;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = locals_textual$widgets$_selection_list$$$class__2_Selection_37;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 37;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_9;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_46);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_assign_source_45 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_assign_source_45);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_textual$widgets$_selection_list$$$class__2_Selection_37);
locals_textual$widgets$_selection_list$$$class__2_Selection_37 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_selection_list$$$class__2_Selection_37);
locals_textual$widgets$_selection_list$$$class__2_Selection_37 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 37;
goto try_except_handler_7;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_Selection, tmp_assign_source_45);
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_47;
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_4;
tmp_expression_value_14 = module_var_accessor_textual$widgets$_selection_list$Generic(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;

    goto try_except_handler_10;
}
tmp_subscript_value_4 = module_var_accessor_textual$widgets$_selection_list$SelectionType(tstate);
if (unlikely(tmp_subscript_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectionType);
}

if (tmp_subscript_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;

    goto try_except_handler_10;
}
tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_4);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_10;
}
tmp_assign_source_47 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_47, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = module_var_accessor_textual$widgets$_selection_list$OptionList(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OptionList);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM0(tmp_assign_source_47, 1, tmp_tuple_element_8);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_assign_source_47);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_48 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_10;
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
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_5, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_10;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_10;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_50;
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


exception_lineno = 76;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_10;
}
tmp_tuple_element_9 = mod_consts.const_str_plain_SelectionList;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 76;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_51;
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


exception_lineno = 76;

    goto try_except_handler_10;
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
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_19;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_19, tmp_name_value_15, tmp_default_value_3);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_10;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_20 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_10);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_10;
}
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 76;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 76;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_52;
}
branch_end_7:;
{
PyObject *tmp_assign_source_53;
outline_2_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_textual$widgets$_selection_list$$$class__3_SelectionList_76 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4c10d2f363db233817ad7e5890939a7d;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_72245f9f298a12202d11de657c416edf;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_SelectionList;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_76;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_12;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_12;
}
frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3 = MAKE_CLASS_FRAME(tstate, code_objects_139b2a186303fbf10bd3cfd7a51fa794, module_textual$widgets$_selection_list, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3) == 2);

// Framed code:
{
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_10;
tmp_called_value_10 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_Binding);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = module_var_accessor_textual$widgets$_selection_list$Binding(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Binding);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 79;
tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS3_VECTORCALL(tstate, tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts.const_tuple_0b1055f287e6781d1ad4493066d55fb0_tuple, 0), mod_consts.const_tuple_str_plain_show_tuple);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_BINDINGS, tmp_dictset_value);
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
tmp_dictset_value = PySet_New(mod_consts.const_set_841291e8b0739240b3e4cdd2036f1b80);
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_COMPONENT_CLASSES, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_b3b23e90fdff5ae31e0cecb5d43aca9e;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 86;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_COMPONENT_CLASSES;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
tmp_dictset_value = mod_consts.const_str_digest_4c0abc3fd2b99b7af3a11cfa2fddac89;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_DEFAULT_CSS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_54;
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_6;
tmp_expression_value_21 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_Generic);

if (tmp_expression_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_21 = module_var_accessor_textual$widgets$_selection_list$Generic(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
        Py_INCREF(tmp_expression_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_13;
    }
}

tmp_subscript_value_6 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_MessageSelectionType);

if (tmp_subscript_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_6 = module_var_accessor_textual$widgets$_selection_list$MessageSelectionType(tstate);
if (unlikely(tmp_subscript_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MessageSelectionType);
}

if (tmp_subscript_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_21);

exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
        Py_INCREF(tmp_subscript_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_13;
    }
}

tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
tmp_assign_source_54 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_54, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_Message);

if (tmp_tuple_element_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_11 = module_var_accessor_textual$widgets$_selection_list$Message(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Message);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_2 = "c";
    goto tuple_build_exception_6;
}
        Py_INCREF(tmp_tuple_element_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_6;
    }
}

PyTuple_SET_ITEM(tmp_assign_source_54, 1, tmp_tuple_element_11);
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_assign_source_54);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
assert(tmp_SelectionList$class_container$class_creation_1__bases_orig == NULL);
tmp_SelectionList$class_container$class_creation_1__bases_orig = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_4 = tmp_SelectionList$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_55 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
assert(tmp_SelectionList$class_container$class_creation_1__bases == NULL);
tmp_SelectionList$class_container$class_creation_1__bases = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = MAKE_DICT_EMPTY(tstate);
assert(tmp_SelectionList$class_container$class_creation_1__class_decl_dict == NULL);
tmp_SelectionList$class_container$class_creation_1__class_decl_dict = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_12;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_SelectionList$class_container$class_creation_1__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
tmp_condition_result_12 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__bases);
tmp_expression_value_22 = tmp_SelectionList$class_container$class_creation_1__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_7, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__bases);
tmp_bases_value_4 = tmp_SelectionList$class_container$class_creation_1__bases;
tmp_assign_source_57 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
assert(tmp_SelectionList$class_container$class_creation_1__metaclass == NULL);
tmp_SelectionList$class_container$class_creation_1__metaclass = tmp_assign_source_57;
}
{
bool tmp_condition_result_13;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__metaclass);
tmp_expression_value_23 = tmp_SelectionList$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
tmp_condition_result_13 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__metaclass);
tmp_expression_value_24 = tmp_SelectionList$class_container$class_creation_1__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_SelectionMessage;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__bases);
tmp_tuple_element_12 = tmp_SelectionList$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_6 = tmp_SelectionList$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 130;
tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
assert(tmp_SelectionList$class_container$class_creation_1__prepared == NULL);
tmp_SelectionList$class_container$class_creation_1__prepared = tmp_assign_source_58;
}
{
bool tmp_condition_result_14;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__prepared);
tmp_expression_value_25 = tmp_SelectionList$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_14 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_26;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__metaclass);
tmp_expression_value_26 = tmp_SelectionList$class_container$class_creation_1__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_26, tmp_name_value_16, tmp_default_value_4);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_27;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__prepared);
tmp_type_arg_8 = tmp_SelectionList$class_container$class_creation_1__prepared;
tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_27 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 130;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 130;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_13;
}
branch_no_10:;
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = MAKE_DICT_EMPTY(tstate);
assert(tmp_SelectionList$class_container$class_creation_1__prepared == NULL);
tmp_SelectionList$class_container$class_creation_1__prepared = tmp_assign_source_59;
}
branch_end_9:;
outline_3_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__prepared);
tmp_set_locals_4 = tmp_SelectionList$class_container$class_creation_1__prepared;
locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4c10d2f363db233817ad7e5890939a7d;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_c188eaf9d1d435f70e62ce6ccb5aa840;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_55863c9a863afe8c36b358d426a5a5b2;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_130;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_15;
}
frame_frame_textual$widgets$_selection_list$$$class__4_SelectionMessage_4 = MAKE_CLASS_FRAME(tstate, code_objects_ab1f12cd8eba2fbec3b56691f0463626, module_textual$widgets$_selection_list, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$class__4_SelectionMessage_4);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$class__4_SelectionMessage_4) == 2);

// Framed code:
{
PyObject *tmp_annotations_4;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_945378ea034647e37c20c31ac28d08f7);
tmp_closure_2[0] = outline_3_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__4___init__(tstate, tmp_annotations_4, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_3 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_5;
tmp_called_value_12 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130, mod_consts.const_str_plain_property);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e98c9c41aaf5fe23282b4e9a389040bd);

tmp_args_element_value_3 = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__5_control(tstate, tmp_annotations_5);

frame_frame_textual$widgets$_selection_list$$$class__4_SelectionMessage_4->m_frame.f_lineno = 152;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_3 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130, mod_consts.const_str_plain_control, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_3 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_3f7886012e9a24885cc6d004a27612fa);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__6___rich_repr__(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130, mod_consts.const_str_plain___rich_repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_3 = "c";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$class__4_SelectionMessage_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$class__4_SelectionMessage_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$class__4_SelectionMessage_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$class__4_SelectionMessage_4,
    type_description_3,
    outline_3_var___class__
);



assertFrameObject(frame_frame_textual$widgets$_selection_list$$$class__4_SelectionMessage_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_3:;
type_description_2 = "c";
goto try_except_handler_15;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_3d8b103162dc98dafe93097961a54d1e_tuple;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_15;
}
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__bases);
tmp_cmp_expr_left_3 = tmp_SelectionList$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_3 = tmp_SelectionList$class_container$class_creation_1__bases_orig;
tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_15;
}
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_SelectionList$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_15;
}
branch_no_11:;
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__metaclass);
tmp_called_value_13 = tmp_SelectionList$class_container$class_creation_1__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_SelectionMessage;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__bases);
tmp_tuple_element_14 = tmp_SelectionList$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_7 = tmp_SelectionList$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 130;
tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_15;
}
assert(Nuitka_Cell_GET(outline_3_var___class__) == NULL);
Nuitka_Cell_SET(outline_3_var___class__, tmp_assign_source_60);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_3_var___class__));
tmp_dictset_value = Nuitka_Cell_GET(outline_3_var___class__);
Py_INCREF(tmp_dictset_value);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130);
locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130);
locals_textual$widgets$_selection_list$$$class__4_SelectionMessage_130 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_14:;
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
exception_lineno = 130;
goto try_except_handler_13;
outline_result_8:;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_SelectionMessage, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_2 = "c";
    goto try_except_handler_13;
}
goto try_end_6;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_SelectionList$class_container$class_creation_1__bases_orig);
tmp_SelectionList$class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_1__bases);
tmp_SelectionList$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_1__class_decl_dict);
tmp_SelectionList$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_1__metaclass);
tmp_SelectionList$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_1__prepared);
tmp_SelectionList$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_3;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_SelectionList$class_container$class_creation_1__bases_orig);
tmp_SelectionList$class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__bases);
Py_DECREF(tmp_SelectionList$class_container$class_creation_1__bases);
tmp_SelectionList$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_SelectionList$class_container$class_creation_1__class_decl_dict);
tmp_SelectionList$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_SelectionList$class_container$class_creation_1__metaclass);
tmp_SelectionList$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_1__prepared);
Py_DECREF(tmp_SelectionList$class_container$class_creation_1__prepared);
tmp_SelectionList$class_container$class_creation_1__prepared = NULL;
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
PyObject *tmp_assign_source_61;
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_8;
tmp_expression_value_28 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_SelectionMessage);

if (unlikely(tmp_expression_value_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectionMessage);

exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_subscript_value_8 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_MessageSelectionType);

if (tmp_subscript_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_8 = module_var_accessor_textual$widgets$_selection_list$MessageSelectionType(tstate);
if (unlikely(tmp_subscript_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MessageSelectionType);
}

if (tmp_subscript_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_28);

exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
        Py_INCREF(tmp_subscript_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_16;
    }
}

tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_8);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_assign_source_61 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_61, 0, tmp_tuple_element_15);
assert(tmp_SelectionList$class_container$class_creation_2__bases_orig == NULL);
tmp_SelectionList$class_container$class_creation_2__bases_orig = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_5 = tmp_SelectionList$class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_62 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
assert(tmp_SelectionList$class_container$class_creation_2__bases == NULL);
tmp_SelectionList$class_container$class_creation_2__bases = tmp_assign_source_62;
}
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = MAKE_DICT_EMPTY(tstate);
assert(tmp_SelectionList$class_container$class_creation_2__class_decl_dict == NULL);
tmp_SelectionList$class_container$class_creation_2__class_decl_dict = tmp_assign_source_63;
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_16;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_SelectionList$class_container$class_creation_2__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_condition_result_16 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__bases);
tmp_expression_value_29 = tmp_SelectionList$class_container$class_creation_2__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_9, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__bases);
tmp_bases_value_5 = tmp_SelectionList$class_container$class_creation_2__bases;
tmp_assign_source_64 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
assert(tmp_SelectionList$class_container$class_creation_2__metaclass == NULL);
tmp_SelectionList$class_container$class_creation_2__metaclass = tmp_assign_source_64;
}
{
bool tmp_condition_result_17;
PyObject *tmp_expression_value_30;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__metaclass);
tmp_expression_value_30 = tmp_SelectionList$class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_condition_result_17 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_65;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__metaclass);
tmp_expression_value_31 = tmp_SelectionList$class_container$class_creation_2__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_tuple_element_16 = mod_consts.const_str_plain_SelectionHighlighted;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__bases);
tmp_tuple_element_16 = tmp_SelectionList$class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_8 = tmp_SelectionList$class_container$class_creation_2__class_decl_dict;
frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 167;
tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
assert(tmp_SelectionList$class_container$class_creation_2__prepared == NULL);
tmp_SelectionList$class_container$class_creation_2__prepared = tmp_assign_source_65;
}
{
bool tmp_condition_result_18;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__prepared);
tmp_expression_value_32 = tmp_SelectionList$class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_18 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_33;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__metaclass);
tmp_expression_value_33 = tmp_SelectionList$class_container$class_creation_2__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_33, tmp_name_value_17, tmp_default_value_5);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_34;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__prepared);
tmp_type_arg_10 = tmp_SelectionList$class_container$class_creation_2__prepared;
tmp_expression_value_34 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_34 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_17);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 167;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 167;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_16;
}
branch_no_13:;
goto branch_end_12;
branch_no_12:;
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = MAKE_DICT_EMPTY(tstate);
assert(tmp_SelectionList$class_container$class_creation_2__prepared == NULL);
tmp_SelectionList$class_container$class_creation_2__prepared = tmp_assign_source_66;
}
branch_end_12:;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__prepared);
tmp_set_locals_5 = tmp_SelectionList$class_container$class_creation_2__prepared;
locals_textual$widgets$_selection_list$$$class__5_SelectionHighlighted_167 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4c10d2f363db233817ad7e5890939a7d;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__5_SelectionHighlighted_167, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_5d515257fe2173e5ae3baacf8b1029f0;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__5_SelectionHighlighted_167, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_be90cce2430e1eadb9285d57f7021189;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__5_SelectionHighlighted_167, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_167;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__5_SelectionHighlighted_167, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_18;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__5_SelectionHighlighted_167, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_18;
}
{
nuitka_bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__bases);
tmp_cmp_expr_left_4 = tmp_SelectionList$class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_4 = tmp_SelectionList$class_container$class_creation_2__bases_orig;
tmp_condition_result_19 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_18;
}
if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_SelectionList$class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__5_SelectionHighlighted_167, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_18;
}
branch_no_14:;
{
PyObject *tmp_assign_source_67;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__metaclass);
tmp_called_value_15 = tmp_SelectionList$class_container$class_creation_2__metaclass;
tmp_tuple_element_18 = mod_consts.const_str_plain_SelectionHighlighted;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__bases);
tmp_tuple_element_18 = tmp_SelectionList$class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
tmp_tuple_element_18 = locals_textual$widgets$_selection_list$$$class__5_SelectionHighlighted_167;
PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_18);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_9 = tmp_SelectionList$class_container$class_creation_2__class_decl_dict;
frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 167;
tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_18;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_67;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_dictset_value = outline_4_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_textual$widgets$_selection_list$$$class__5_SelectionHighlighted_167);
locals_textual$widgets$_selection_list$$$class__5_SelectionHighlighted_167 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_selection_list$$$class__5_SelectionHighlighted_167);
locals_textual$widgets$_selection_list$$$class__5_SelectionHighlighted_167 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_17:;
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
exception_lineno = 167;
goto try_except_handler_16;
outline_result_10:;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_SelectionHighlighted, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto try_except_handler_16;
}
goto try_end_7;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_SelectionList$class_container$class_creation_2__bases_orig);
tmp_SelectionList$class_container$class_creation_2__bases_orig = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_2__bases);
tmp_SelectionList$class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_2__class_decl_dict);
tmp_SelectionList$class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_2__metaclass);
tmp_SelectionList$class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_2__prepared);
tmp_SelectionList$class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_3;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_SelectionList$class_container$class_creation_2__bases_orig);
tmp_SelectionList$class_container$class_creation_2__bases_orig = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__bases);
Py_DECREF(tmp_SelectionList$class_container$class_creation_2__bases);
tmp_SelectionList$class_container$class_creation_2__bases = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_SelectionList$class_container$class_creation_2__class_decl_dict);
tmp_SelectionList$class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__metaclass);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__metaclass);
Py_DECREF(tmp_SelectionList$class_container$class_creation_2__metaclass);
tmp_SelectionList$class_container$class_creation_2__metaclass = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_2__prepared);
Py_DECREF(tmp_SelectionList$class_container$class_creation_2__prepared);
tmp_SelectionList$class_container$class_creation_2__prepared = NULL;
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
PyObject *tmp_assign_source_68;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_10;
tmp_expression_value_35 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_SelectionMessage);

if (unlikely(tmp_expression_value_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SelectionMessage);

exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
tmp_subscript_value_10 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_MessageSelectionType);

if (tmp_subscript_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_10 = module_var_accessor_textual$widgets$_selection_list$MessageSelectionType(tstate);
if (unlikely(tmp_subscript_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MessageSelectionType);
}

if (tmp_subscript_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_35);

exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
        Py_INCREF(tmp_subscript_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_19;
    }
}

tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_10);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
tmp_assign_source_68 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_68, 0, tmp_tuple_element_19);
assert(tmp_SelectionList$class_container$class_creation_3__bases_orig == NULL);
tmp_SelectionList$class_container$class_creation_3__bases_orig = tmp_assign_source_68;
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_6 = tmp_SelectionList$class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_69 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
assert(tmp_SelectionList$class_container$class_creation_3__bases == NULL);
tmp_SelectionList$class_container$class_creation_3__bases = tmp_assign_source_69;
}
{
PyObject *tmp_assign_source_70;
tmp_assign_source_70 = MAKE_DICT_EMPTY(tstate);
assert(tmp_SelectionList$class_container$class_creation_3__class_decl_dict == NULL);
tmp_SelectionList$class_container$class_creation_3__class_decl_dict = tmp_assign_source_70;
}
{
PyObject *tmp_assign_source_71;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_20;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_SelectionList$class_container$class_creation_3__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
tmp_condition_result_20 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__bases);
tmp_expression_value_36 = tmp_SelectionList$class_container$class_creation_3__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_36, tmp_subscript_value_11, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__bases);
tmp_bases_value_6 = tmp_SelectionList$class_container$class_creation_3__bases;
tmp_assign_source_71 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
assert(tmp_SelectionList$class_container$class_creation_3__metaclass == NULL);
tmp_SelectionList$class_container$class_creation_3__metaclass = tmp_assign_source_71;
}
{
bool tmp_condition_result_21;
PyObject *tmp_expression_value_37;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__metaclass);
tmp_expression_value_37 = tmp_SelectionList$class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_37, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
tmp_condition_result_21 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_72;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_38;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__metaclass);
tmp_expression_value_38 = tmp_SelectionList$class_container$class_creation_3__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
tmp_tuple_element_20 = mod_consts.const_str_plain_SelectionToggled;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__bases);
tmp_tuple_element_20 = tmp_SelectionList$class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_10 = tmp_SelectionList$class_container$class_creation_3__class_decl_dict;
frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 174;
tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
assert(tmp_SelectionList$class_container$class_creation_3__prepared == NULL);
tmp_SelectionList$class_container$class_creation_3__prepared = tmp_assign_source_72;
}
{
bool tmp_condition_result_22;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_39;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__prepared);
tmp_expression_value_39 = tmp_SelectionList$class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_39, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_22 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_40;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__metaclass);
tmp_expression_value_40 = tmp_SelectionList$class_container$class_creation_3__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_40, tmp_name_value_18, tmp_default_value_6);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_41;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__prepared);
tmp_type_arg_12 = tmp_SelectionList$class_container$class_creation_3__prepared;
tmp_expression_value_41 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_41 == NULL));
tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_41);
Py_DECREF(tmp_expression_value_41);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_21);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_19;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 174;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 174;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_19;
}
branch_no_16:;
goto branch_end_15;
branch_no_15:;
{
PyObject *tmp_assign_source_73;
tmp_assign_source_73 = MAKE_DICT_EMPTY(tstate);
assert(tmp_SelectionList$class_container$class_creation_3__prepared == NULL);
tmp_SelectionList$class_container$class_creation_3__prepared = tmp_assign_source_73;
}
branch_end_15:;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__prepared);
tmp_set_locals_6 = tmp_SelectionList$class_container$class_creation_3__prepared;
locals_textual$widgets$_selection_list$$$class__6_SelectionToggled_174 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4c10d2f363db233817ad7e5890939a7d;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__6_SelectionToggled_174, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_digest_eb4ce86a0da72e1849c5c3f18466d321;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__6_SelectionToggled_174, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_digest_b50a413fdd321cc95c48ab836112fa2b;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__6_SelectionToggled_174, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_int_pos_174;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__6_SelectionToggled_174, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_21;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__6_SelectionToggled_174, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_21;
}
{
nuitka_bool tmp_condition_result_23;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__bases);
tmp_cmp_expr_left_5 = tmp_SelectionList$class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_5 = tmp_SelectionList$class_container$class_creation_3__bases_orig;
tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_21;
}
if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_SelectionList$class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__6_SelectionToggled_174, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_21;
}
branch_no_17:;
{
PyObject *tmp_assign_source_74;
PyObject *tmp_called_value_17;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__metaclass);
tmp_called_value_17 = tmp_SelectionList$class_container$class_creation_3__metaclass;
tmp_tuple_element_22 = mod_consts.const_str_plain_SelectionToggled;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__bases);
tmp_tuple_element_22 = tmp_SelectionList$class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
tmp_tuple_element_22 = locals_textual$widgets$_selection_list$$$class__6_SelectionToggled_174;
PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_22);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_11 = tmp_SelectionList$class_container$class_creation_3__class_decl_dict;
frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 174;
tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_21;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_74;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_dictset_value = outline_5_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
Py_DECREF(locals_textual$widgets$_selection_list$$$class__6_SelectionToggled_174);
locals_textual$widgets$_selection_list$$$class__6_SelectionToggled_174 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_selection_list$$$class__6_SelectionToggled_174);
locals_textual$widgets$_selection_list$$$class__6_SelectionToggled_174 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_20;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_20:;
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
exception_lineno = 174;
goto try_except_handler_19;
outline_result_12:;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_SelectionToggled, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto try_except_handler_19;
}
goto try_end_8;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_SelectionList$class_container$class_creation_3__bases_orig);
tmp_SelectionList$class_container$class_creation_3__bases_orig = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_3__bases);
tmp_SelectionList$class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_3__class_decl_dict);
tmp_SelectionList$class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_3__metaclass);
tmp_SelectionList$class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_3__prepared);
tmp_SelectionList$class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_3;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_SelectionList$class_container$class_creation_3__bases_orig);
tmp_SelectionList$class_container$class_creation_3__bases_orig = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__bases);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__bases);
Py_DECREF(tmp_SelectionList$class_container$class_creation_3__bases);
tmp_SelectionList$class_container$class_creation_3__bases = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_SelectionList$class_container$class_creation_3__class_decl_dict);
tmp_SelectionList$class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__metaclass);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__metaclass);
Py_DECREF(tmp_SelectionList$class_container$class_creation_3__metaclass);
tmp_SelectionList$class_container$class_creation_3__metaclass = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_3__prepared);
Py_DECREF(tmp_SelectionList$class_container$class_creation_3__prepared);
tmp_SelectionList$class_container$class_creation_3__prepared = NULL;
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
PyObject *tmp_assign_source_75;
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_12;
tmp_expression_value_42 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_Generic);

if (tmp_expression_value_42 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_42 = module_var_accessor_textual$widgets$_selection_list$Generic(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
        Py_INCREF(tmp_expression_value_42);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_22;
    }
}

tmp_subscript_value_12 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_MessageSelectionType);

if (tmp_subscript_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_12 = module_var_accessor_textual$widgets$_selection_list$MessageSelectionType(tstate);
if (unlikely(tmp_subscript_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MessageSelectionType);
}

if (tmp_subscript_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_42);

exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
        Py_INCREF(tmp_subscript_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_22;
    }
}

tmp_tuple_element_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_12);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
tmp_assign_source_75 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_75, 0, tmp_tuple_element_23);
tmp_tuple_element_23 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_Message);

if (tmp_tuple_element_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_23 = module_var_accessor_textual$widgets$_selection_list$Message(tstate);
if (unlikely(tmp_tuple_element_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Message);
}

if (tmp_tuple_element_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_2 = "c";
    goto tuple_build_exception_10;
}
        Py_INCREF(tmp_tuple_element_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_10;
    }
}

PyTuple_SET_ITEM(tmp_assign_source_75, 1, tmp_tuple_element_23);
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_assign_source_75);
goto try_except_handler_22;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
assert(tmp_SelectionList$class_container$class_creation_4__bases_orig == NULL);
tmp_SelectionList$class_container$class_creation_4__bases_orig = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_7 = tmp_SelectionList$class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_76 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
assert(tmp_SelectionList$class_container$class_creation_4__bases == NULL);
tmp_SelectionList$class_container$class_creation_4__bases = tmp_assign_source_76;
}
{
PyObject *tmp_assign_source_77;
tmp_assign_source_77 = MAKE_DICT_EMPTY(tstate);
assert(tmp_SelectionList$class_container$class_creation_4__class_decl_dict == NULL);
tmp_SelectionList$class_container$class_creation_4__class_decl_dict = tmp_assign_source_77;
}
{
PyObject *tmp_assign_source_78;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_24;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_13;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_SelectionList$class_container$class_creation_4__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
tmp_condition_result_24 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__bases);
tmp_expression_value_43 = tmp_SelectionList$class_container$class_creation_4__bases;
tmp_subscript_value_13 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_13, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__bases);
tmp_bases_value_7 = tmp_SelectionList$class_container$class_creation_4__bases;
tmp_assign_source_78 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
assert(tmp_SelectionList$class_container$class_creation_4__metaclass == NULL);
tmp_SelectionList$class_container$class_creation_4__metaclass = tmp_assign_source_78;
}
{
bool tmp_condition_result_25;
PyObject *tmp_expression_value_44;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__metaclass);
tmp_expression_value_44 = tmp_SelectionList$class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
tmp_condition_result_25 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_25 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_assign_source_79;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_45;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_24;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__metaclass);
tmp_expression_value_45 = tmp_SelectionList$class_container$class_creation_4__metaclass;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
tmp_tuple_element_24 = mod_consts.const_str_plain_SelectedChanged;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__bases);
tmp_tuple_element_24 = tmp_SelectionList$class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_12 = tmp_SelectionList$class_container$class_creation_4__class_decl_dict;
frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 192;
tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
assert(tmp_SelectionList$class_container$class_creation_4__prepared == NULL);
tmp_SelectionList$class_container$class_creation_4__prepared = tmp_assign_source_79;
}
{
bool tmp_condition_result_26;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_46;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__prepared);
tmp_expression_value_46 = tmp_SelectionList$class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_26 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_26 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_mod_expr_left_7;
PyObject *tmp_mod_expr_right_7;
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_47;
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__metaclass);
tmp_expression_value_47 = tmp_SelectionList$class_container$class_creation_4__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_25 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_19, tmp_default_value_7);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_48;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__prepared);
tmp_type_arg_14 = tmp_SelectionList$class_container$class_creation_4__prepared;
tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_48 == NULL));
tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_25);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_22;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 192;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 192;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "c";
goto try_except_handler_22;
}
branch_no_19:;
goto branch_end_18;
branch_no_18:;
{
PyObject *tmp_assign_source_80;
tmp_assign_source_80 = MAKE_DICT_EMPTY(tstate);
assert(tmp_SelectionList$class_container$class_creation_4__prepared == NULL);
tmp_SelectionList$class_container$class_creation_4__prepared = tmp_assign_source_80;
}
branch_end_18:;
{
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_4;
tmp_called_value_19 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_dataclass);

if (tmp_called_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_19 = module_var_accessor_textual$widgets$_selection_list$dataclass(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_2 = "c";
    goto try_except_handler_22;
}
        Py_INCREF(tmp_called_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_22;
    }
}

{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__prepared);
tmp_set_locals_7 = tmp_SelectionList$class_container$class_creation_4__prepared;
locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_4c10d2f363db233817ad7e5890939a7d;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_digest_9b6d081c961d7399765d72f0aafd397f;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_digest_32df657dc7629c7341e28f59907ed818;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_int_pos_192;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_24;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_24;
}
frame_frame_textual$widgets$_selection_list$$$class__7_SelectedChanged_5 = MAKE_CLASS_FRAME(tstate, code_objects_b43821e2eac58e1f52dfb340b3938f5d, module_textual$widgets$_selection_list, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$widgets$_selection_list$$$class__7_SelectedChanged_5);
assert(Py_REFCNT(frame_frame_textual$widgets$_selection_list$$$class__7_SelectedChanged_5) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_6a1c16ec95343cf6b78b8bfedf32b161;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 206;
type_description_3 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_3 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_selection_list;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_3 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_7;
tmp_called_value_20 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192, mod_consts.const_str_plain_property);

if (tmp_called_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_20 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_983a3b043e2caf2cca9c35b999da442a);

tmp_args_element_value_5 = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__7_control(tstate, tmp_annotations_7);

frame_frame_textual$widgets$_selection_list$$$class__7_SelectedChanged_5->m_frame.f_lineno = 209;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_3 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192, mod_consts.const_str_plain_control, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_3 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$class__7_SelectedChanged_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$class__7_SelectedChanged_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$class__7_SelectedChanged_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$class__7_SelectedChanged_5,
    type_description_3,
    outline_6_var___class__
);



assertFrameObject(frame_frame_textual$widgets$_selection_list$$$class__7_SelectedChanged_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_4:;
type_description_2 = "c";
goto try_except_handler_24;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_24;
}
{
nuitka_bool tmp_condition_result_27;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__bases);
tmp_cmp_expr_left_6 = tmp_SelectionList$class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_6 = tmp_SelectionList$class_container$class_creation_4__bases_orig;
tmp_condition_result_27 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_24;
}
if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_SelectionList$class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_24;
}
branch_no_20:;
{
PyObject *tmp_assign_source_81;
PyObject *tmp_called_value_21;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_26;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__metaclass);
tmp_called_value_21 = tmp_SelectionList$class_container$class_creation_4__metaclass;
tmp_tuple_element_26 = mod_consts.const_str_plain_SelectedChanged;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__bases);
tmp_tuple_element_26 = tmp_SelectionList$class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_26);
tmp_tuple_element_26 = locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192;
PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_26);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_13 = tmp_SelectionList$class_container$class_creation_4__class_decl_dict;
frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 192;
tmp_assign_source_81 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_24;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_81;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_args_element_value_4 = outline_6_var___class__;
Py_INCREF(tmp_args_element_value_4);
goto try_return_handler_24;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
Py_DECREF(locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192);
locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192);
locals_textual$widgets$_selection_list$$$class__7_SelectedChanged_192 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_23;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_23:;
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
exception_lineno = 192;
goto try_except_handler_22;
outline_result_14:;
frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 191;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "c";
    goto try_except_handler_22;
}
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_SelectedChanged, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto try_except_handler_22;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_SelectionList$class_container$class_creation_4__bases_orig);
tmp_SelectionList$class_container$class_creation_4__bases_orig = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_4__bases);
tmp_SelectionList$class_container$class_creation_4__bases = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_4__class_decl_dict);
tmp_SelectionList$class_container$class_creation_4__class_decl_dict = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_4__metaclass);
tmp_SelectionList$class_container$class_creation_4__metaclass = NULL;
Py_XDECREF(tmp_SelectionList$class_container$class_creation_4__prepared);
tmp_SelectionList$class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto frame_exception_exit_3;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__bases_orig);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__bases_orig);
Py_DECREF(tmp_SelectionList$class_container$class_creation_4__bases_orig);
tmp_SelectionList$class_container$class_creation_4__bases_orig = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__bases);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__bases);
Py_DECREF(tmp_SelectionList$class_container$class_creation_4__bases);
tmp_SelectionList$class_container$class_creation_4__bases = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_SelectionList$class_container$class_creation_4__class_decl_dict);
tmp_SelectionList$class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__metaclass);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__metaclass);
Py_DECREF(tmp_SelectionList$class_container$class_creation_4__metaclass);
tmp_SelectionList$class_container$class_creation_4__metaclass = NULL;
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_SelectionList$class_container$class_creation_4__prepared);
Py_DECREF(tmp_SelectionList$class_container$class_creation_4__prepared);
tmp_SelectionList$class_container$class_creation_4__prepared = NULL;
tmp_outline_return_value_7 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_7);
goto outline_result_13;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_13:;
CHECK_OBJECT(tmp_outline_return_value_7);
Py_DECREF(tmp_outline_return_value_7);
}
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_8;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_ef53f54f3b1dc08760884b33770aaf0b);
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_851deee1d5ada623b6143a3449ccaad9);
tmp_closure_3[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_3[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__8___init__(tstate, tmp_kw_defaults_1, tmp_annotations_8, tmp_closure_3);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_9;
tmp_called_value_22 = PyObject_GetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_property);

if (tmp_called_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_22 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_c3e9579dc1dec536f207f7b69cc4737b);

tmp_args_element_value_6 = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__9_selected(tstate, tmp_annotations_9);

frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame.f_lineno = 248;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_selected, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_6930d105e413efbde0ae5885ce162200);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__10__on_mount(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain__on_mount, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__11__message_changed(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain__message_changed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_5eb119f45f6232f5e8219b6a05f7112e);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__12__message_toggled(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain__message_toggled, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_734a171d662b48de0c494a768faf5bdd);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__13__apply_to_all(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain__apply_to_all, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_c34255821857de6c8e5617fcff4f61ff);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__14__select(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain__select, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_b2580dd523d8989da8005b550f7e78f0);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__15_select(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_select, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__16_select_all(tstate, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_select_all, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_c34255821857de6c8e5617fcff4f61ff);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__17__deselect(tstate, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain__deselect, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_b2580dd523d8989da8005b550f7e78f0);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__18_deselect(tstate, tmp_annotations_18);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_deselect, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__19_deselect_all(tstate, tmp_annotations_19);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_deselect_all, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_c34255821857de6c8e5617fcff4f61ff);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__20__toggle(tstate, tmp_annotations_20);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain__toggle, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_b2580dd523d8989da8005b550f7e78f0);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__21_toggle(tstate, tmp_annotations_21);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_toggle, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__22_toggle_all(tstate, tmp_annotations_22);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_toggle_all, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_a229a71afee3a9afd8d4fbef89fb6790);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__23__make_selection(tstate, tmp_annotations_23);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain__make_selection, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__24__toggle_highlighted_selection(tstate, tmp_annotations_24);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain__toggle_highlighted_selection, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__25__get_left_gutter_width(tstate, tmp_annotations_25);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain__get_left_gutter_width, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_26;
struct Nuitka_CellObject *tmp_closure_4[1];
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_a6322218cfb66cfbc32cafdbbe71e5c1);
tmp_closure_4[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_4[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__26_render_line(tstate, tmp_annotations_26, tmp_closure_4);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_render_line, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_430658d3c8f9299829ad88ef68e5a71e);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__27__on_option_list_option_highlighted(tstate, tmp_annotations_27);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain__on_option_list_option_highlighted, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 569;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_28;
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_126c938c0a1784cf7355686c26d58009);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__28__on_option_list_option_selected(tstate, tmp_annotations_28);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain__on_option_list_option_selected, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_29;
struct Nuitka_CellObject *tmp_closure_5[1];
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_209b0d5f3437eed66370177f1800fe39);
tmp_closure_5[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_5[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__29_get_option_at_index(tstate, tmp_annotations_29, tmp_closure_5);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_get_option_at_index, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_30;
struct Nuitka_CellObject *tmp_closure_6[1];
tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_fa07e504fbcba4ec0fbf84851f414dde);
tmp_closure_6[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_6[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__30_get_option(tstate, tmp_annotations_30, tmp_closure_6);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_get_option, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 603;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_31;
tmp_annotations_31 = DICT_COPY(tstate, mod_consts.const_dict_492736cc9534029beb06b38d25b49293);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__31__pre_remove_option(tstate, tmp_annotations_31);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain__pre_remove_option, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_32;
struct Nuitka_CellObject *tmp_closure_7[1];
tmp_annotations_32 = DICT_COPY(tstate, mod_consts.const_dict_71db7c1a486fac83d1afae7d84a81317);
tmp_closure_7[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_7[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__32_add_options(tstate, tmp_annotations_32, tmp_closure_7);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_add_options, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 629;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_33;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_33 = DICT_COPY(tstate, mod_consts.const_dict_fd0f356c9a413b5e2e31a017fce350ec);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__33_add_option(tstate, tmp_defaults_2, tmp_annotations_33);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_add_option, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 684;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_34;
struct Nuitka_CellObject *tmp_closure_8[1];
tmp_annotations_34 = DICT_COPY(tstate, mod_consts.const_dict_71adc2ba5737c82f5bb97b4d3b034ead);
tmp_closure_8[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_8[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$widgets$_selection_list$$$function__34_clear_options(tstate, tmp_annotations_34, tmp_closure_8);

tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain_clear_options, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 707;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_textual$widgets$_selection_list$$$class__3_SelectionList_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_2:;

goto try_except_handler_12;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_dd0a82629facdc8027fac2736f0a594c_tuple;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_12;
}
{
nuitka_bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_12;
}
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_12;
}
branch_no_21:;
{
PyObject *tmp_assign_source_82;
PyObject *tmp_called_value_23;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_23 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_27 = mod_consts.const_str_plain_SelectionList;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_27 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_27);
tmp_tuple_element_27 = locals_textual$widgets$_selection_list$$$class__3_SelectionList_76;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$widgets$_selection_list->m_frame.f_lineno = 76;
tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto try_except_handler_12;
}
assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
Nuitka_Cell_SET(outline_2_var___class__, tmp_assign_source_82);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
tmp_assign_source_53 = Nuitka_Cell_GET(outline_2_var___class__);
Py_INCREF(tmp_assign_source_53);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76);
locals_textual$widgets$_selection_list$$$class__3_SelectionList_76 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$widgets$_selection_list$$$class__3_SelectionList_76);
locals_textual$widgets$_selection_list$$$class__3_SelectionList_76 = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 76;
goto try_except_handler_10;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectionList, tmp_assign_source_53);
}
goto try_end_10;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
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
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$widgets$_selection_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$widgets$_selection_list->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$widgets$_selection_list, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$widgets$_selection_list);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$widgets$_selection_list", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.widgets._selection_list" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$widgets$_selection_list);
    return module_textual$widgets$_selection_list;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$widgets$_selection_list, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$widgets$_selection_list", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

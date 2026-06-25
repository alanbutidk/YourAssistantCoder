/* Generated code for Python module 'textual$scroll_view'
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



/* The "module_textual$scroll_view" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$scroll_view;
PyDictObject *moduledict_textual$scroll_view;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_show_horizontal_scrollbar;
PyObject *const_str_plain_horizontal_scrollbar;
PyObject *const_str_plain_position;
PyObject *const_str_plain_round;
PyObject *const_str_plain_refresh;
PyObject *const_str_plain_size;
PyObject *const_str_plain_region;
PyObject *const_str_plain_show_vertical_scrollbar;
PyObject *const_str_plain_vertical_scrollbar;
PyObject *const_str_plain__refresh_scrollbars;
PyObject *const_str_plain_virtual_size;
PyObject *const_str_plain_width;
PyObject *const_str_digest_b8b26411e95916b18c706f658e883581;
PyObject *const_str_plain_height;
PyObject *const_str_digest_5d962beef7043612b43debc44d05377c;
PyObject *const_str_plain__size;
PyObject *const_str_plain__set_dirty;
PyObject *const_str_plain_container_size;
PyObject *const_str_plain__scrollbar_changes;
PyObject *const_str_plain_clear;
PyObject *const_str_plain_styles;
PyObject *const_str_plain_gutter;
PyObject *const_str_plain_totals;
PyObject *const_str_plain__container_size;
PyObject *const_str_plain__scroll_update;
PyObject *const_str_digest_3015fa876fc95068b5136e93c2673d63;
PyObject *const_str_digest_732155067944c45306e79906bf400a89;
PyObject *const_tuple_str_plain_Panel_tuple;
PyObject *const_str_plain_Panel;
PyObject *const_str_plain_scroll_offset;
PyObject *const_str_space;
PyObject *const_str_digest_ddb801b40c03c9a48e06420b47e6ce1b;
PyObject *const_str_plain__scroll_to;
PyObject *const_tuple_1a0225fc0f3a166e93efe881bf05cfcb_tuple;
PyObject *const_str_digest_661f1ae52372bd23268f4a8c487074de;
PyObject *const_str_plain_Region;
PyObject *const_str_plain_y;
PyObject *const_str_plain_max;
PyObject *const_str_digest_f573e352649df86ca9367a9386a91346;
PyObject *const_str_digest_95d660748e6fb3127b3d7ef3109bdf40;
PyObject *const_str_digest_275632f26242892df9797b15042f3370;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e;
PyObject *const_tuple_str_plain_RenderableType_tuple;
PyObject *const_str_plain_RenderableType;
PyObject *const_str_digest_525a71d7d6542dd74dc8c938339082dd;
PyObject *const_tuple_str_plain_EasingFunction_tuple;
PyObject *const_str_plain_EasingFunction;
PyObject *const_str_digest_c32863e446b1799beb3ada226b376daf;
PyObject *const_tuple_str_plain_AnimationLevel_str_plain_CallbackType_tuple;
PyObject *const_str_plain_AnimationLevel;
PyObject *const_str_plain_CallbackType;
PyObject *const_str_digest_45837af94bae6220963db538704d20ea;
PyObject *const_tuple_str_plain_ScrollableContainer_tuple;
PyObject *const_str_plain_ScrollableContainer;
PyObject *const_str_digest_8b449230fefb53e14684626fc331fc25;
PyObject *const_tuple_str_plain_Region_str_plain_Size_tuple;
PyObject *const_str_plain_Size;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_ScrollView;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_9849c2785dae3777bc8c7b7f22ab3867;
PyObject *const_str_digest_d4f98580b256232986cbe84215fc897f;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_15;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_ALLOW_MAXIMIZE;
PyObject *const_str_digest_6103894bf6b6116a9e24b6d81013f8ab;
PyObject *const_str_plain_DEFAULT_CSS;
PyObject *const_str_plain_property;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_483ca9075adee5493e2cfab7c33a6191;
PyObject *const_str_plain_is_scrollable;
PyObject *const_str_digest_d71011574a99182c4f98f5a92b3d982b;
PyObject *const_str_digest_f328e730491d463bfcb445921b6514ea;
PyObject *const_str_plain_is_container;
PyObject *const_str_digest_c44b16170aa3b86dda0a5a37f98e826d;
PyObject *const_dict_eaa82ec189ca75b6a747b2fcf4eaa41e;
PyObject *const_str_plain_watch_scroll_x;
PyObject *const_str_digest_2d05e05f4a688d2c60617a417dde5c16;
PyObject *const_str_plain_watch_scroll_y;
PyObject *const_str_digest_415184f9a019a0d99c5f60cc76addf0a;
PyObject *const_str_plain_on_mount;
PyObject *const_str_digest_173b8089ce558a02f5c66abef25c9d7d;
PyObject *const_dict_8aed5d723b495161e0bd988142b51e17;
PyObject *const_str_plain_get_content_width;
PyObject *const_str_digest_270fde2d34c3a0444857e957b26c8144;
PyObject *const_dict_13fdd51c9bb7ca6186d89d0e12b3d0aa;
PyObject *const_str_plain_get_content_height;
PyObject *const_str_digest_9bd30771e6579bebe5619a0915914dd0;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_27d0cbc063d668e527af57868a7595a8;
PyObject *const_str_plain__size_updated;
PyObject *const_str_digest_9d7e5efb38780ac4eb000b8eefef6aa6;
PyObject *const_dict_728d476e3446b6cf4e7a088fd2261a29;
PyObject *const_str_plain_render;
PyObject *const_str_digest_df57b0a0c355d833d9b7f1e4de34c114;
PyObject *const_tuple_none_none_tuple;
PyObject *const_dict_67855391eace15d07c57d394a1387344;
PyObject *const_dict_bd14f6dc0e567abd42f1da72bf7e498d;
PyObject *const_str_plain_scroll_to;
PyObject *const_str_digest_d31d32d9865505afb1d6d2b63ba9d01c;
PyObject *const_dict_6bb13b2f6fc8fb13f583b5d479897da1;
PyObject *const_str_plain_refresh_line;
PyObject *const_str_digest_e155136eb2cbea09fe3a24df4ffc1106;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_dict_7890a079633d7b19c605abee9ce3214d;
PyObject *const_str_plain_refresh_lines;
PyObject *const_str_digest_b1a9791cbb37f5f0b8167291202bdad7;
PyObject *const_tuple_str_plain__size_str_plain__container_size_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_beaa71fbe00c2ef0bf3fb269cd911fdf;
PyObject *const_str_digest_93da7ba0b58a05154d11479561a7fabe;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_970dc24057580b552469358bf0c6e4ea_tuple;
PyObject *const_tuple_2624eaea1cd59a1f12e59e6907e9c9c0_tuple;
PyObject *const_tuple_str_plain_self_str_plain_container_str_plain_viewport_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_y_tuple;
PyObject *const_tuple_37aa0db040788dd5c269fec56901f47c_tuple;
PyObject *const_tuple_str_plain_self_str_plain_Panel_tuple;
PyObject *const_tuple_38a3bf6b9655949005c9f0733d939ebf_tuple;
PyObject *const_tuple_str_plain_self_str_plain_old_value_str_plain_new_value_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[128];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.scroll_view"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_show_horizontal_scrollbar);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_horizontal_scrollbar);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_position);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_round);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_region);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_show_vertical_scrollbar);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_vertical_scrollbar);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_scrollbars);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_virtual_size);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_width);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8b26411e95916b18c706f658e883581);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_height);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d962beef7043612b43debc44d05377c);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__size);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__set_dirty);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_container_size);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__scrollbar_changes);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_styles);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_gutter);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_totals);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__container_size);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__scroll_update);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_3015fa876fc95068b5136e93c2673d63);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_732155067944c45306e79906bf400a89);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Panel_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_Panel);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_scroll_offset);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_ddb801b40c03c9a48e06420b47e6ce1b);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__scroll_to);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_1a0225fc0f3a166e93efe881bf05cfcb_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_661f1ae52372bd23268f4a8c487074de);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_Region);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_y);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_f573e352649df86ca9367a9386a91346);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_95d660748e6fb3127b3d7ef3109bdf40);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_275632f26242892df9797b15042f3370);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RenderableType_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_RenderableType);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_525a71d7d6542dd74dc8c938339082dd);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EasingFunction_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_EasingFunction);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnimationLevel_str_plain_CallbackType_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnimationLevel);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_CallbackType);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_45837af94bae6220963db538704d20ea);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ScrollableContainer_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_ScrollableContainer);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Region_str_plain_Size_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_Size);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_ScrollView);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_9849c2785dae3777bc8c7b7f22ab3867);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4f98580b256232986cbe84215fc897f);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_int_pos_15);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_ALLOW_MAXIMIZE);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_6103894bf6b6116a9e24b6d81013f8ab);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CSS);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_483ca9075adee5493e2cfab7c33a6191);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_scrollable);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_d71011574a99182c4f98f5a92b3d982b);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_f328e730491d463bfcb445921b6514ea);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_container);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_c44b16170aa3b86dda0a5a37f98e826d);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_dict_eaa82ec189ca75b6a747b2fcf4eaa41e);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_watch_scroll_x);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d05e05f4a688d2c60617a417dde5c16);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_watch_scroll_y);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_415184f9a019a0d99c5f60cc76addf0a);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_mount);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_173b8089ce558a02f5c66abef25c9d7d);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_dict_8aed5d723b495161e0bd988142b51e17);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_content_width);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_270fde2d34c3a0444857e957b26c8144);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_dict_13fdd51c9bb7ca6186d89d0e12b3d0aa);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_content_height);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_9bd30771e6579bebe5619a0915914dd0);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_dict_27d0cbc063d668e527af57868a7595a8);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain__size_updated);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d7e5efb38780ac4eb000b8eefef6aa6);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_dict_728d476e3446b6cf4e7a088fd2261a29);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_render);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_df57b0a0c355d833d9b7f1e4de34c114);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_dict_67855391eace15d07c57d394a1387344);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_dict_bd14f6dc0e567abd42f1da72bf7e498d);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_scroll_to);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_d31d32d9865505afb1d6d2b63ba9d01c);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_dict_6bb13b2f6fc8fb13f583b5d479897da1);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_line);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_e155136eb2cbea09fe3a24df4ffc1106);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_dict_7890a079633d7b19c605abee9ce3214d);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_lines);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1a9791cbb37f5f0b8167291202bdad7);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__size_str_plain__container_size_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_beaa71fbe00c2ef0bf3fb269cd911fdf);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_93da7ba0b58a05154d11479561a7fabe);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_970dc24057580b552469358bf0c6e4ea_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_2624eaea1cd59a1f12e59e6907e9c9c0_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_container_str_plain_viewport_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_y_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_37aa0db040788dd5c269fec56901f47c_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_Panel_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_38a3bf6b9655949005c9f0733d939ebf_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_old_value_str_plain_new_value_tuple);
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
void checkModuleConstants_textual$scroll_view(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_show_horizontal_scrollbar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_show_horizontal_scrollbar);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_horizontal_scrollbar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_horizontal_scrollbar);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_position));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_position);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_round));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_round);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_region));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_region);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_show_vertical_scrollbar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_show_vertical_scrollbar);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_vertical_scrollbar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vertical_scrollbar);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_scrollbars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__refresh_scrollbars);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_virtual_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_virtual_size);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_width);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8b26411e95916b18c706f658e883581));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8b26411e95916b18c706f658e883581);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_height));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_height);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d962beef7043612b43debc44d05377c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d962beef7043612b43debc44d05377c);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__size);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__set_dirty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__set_dirty);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_container_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_container_size);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__scrollbar_changes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__scrollbar_changes);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_styles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_styles);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_gutter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gutter);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_totals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_totals);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__container_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__container_size);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__scroll_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__scroll_update);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_3015fa876fc95068b5136e93c2673d63));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3015fa876fc95068b5136e93c2673d63);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_732155067944c45306e79906bf400a89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_732155067944c45306e79906bf400a89);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Panel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Panel_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_Panel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Panel);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_scroll_offset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scroll_offset);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_ddb801b40c03c9a48e06420b47e6ce1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ddb801b40c03c9a48e06420b47e6ce1b);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__scroll_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__scroll_to);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_1a0225fc0f3a166e93efe881bf05cfcb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1a0225fc0f3a166e93efe881bf05cfcb_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_661f1ae52372bd23268f4a8c487074de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_661f1ae52372bd23268f4a8c487074de);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_Region));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Region);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_y));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_y);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_f573e352649df86ca9367a9386a91346));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f573e352649df86ca9367a9386a91346);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_95d660748e6fb3127b3d7ef3109bdf40));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_95d660748e6fb3127b3d7ef3109bdf40);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_275632f26242892df9797b15042f3370));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_275632f26242892df9797b15042f3370);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RenderableType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_RenderableType_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_RenderableType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RenderableType);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_525a71d7d6542dd74dc8c938339082dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_525a71d7d6542dd74dc8c938339082dd);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EasingFunction_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EasingFunction_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_EasingFunction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EasingFunction);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnimationLevel_str_plain_CallbackType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnimationLevel_str_plain_CallbackType_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnimationLevel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnimationLevel);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_CallbackType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CallbackType);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_45837af94bae6220963db538704d20ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45837af94bae6220963db538704d20ea);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ScrollableContainer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ScrollableContainer_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_ScrollableContainer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ScrollableContainer);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Region_str_plain_Size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Region_str_plain_Size_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_Size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Size);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_ScrollView));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ScrollView);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_9849c2785dae3777bc8c7b7f22ab3867));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9849c2785dae3777bc8c7b7f22ab3867);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4f98580b256232986cbe84215fc897f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d4f98580b256232986cbe84215fc897f);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_int_pos_15));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_15);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_ALLOW_MAXIMIZE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ALLOW_MAXIMIZE);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_6103894bf6b6116a9e24b6d81013f8ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6103894bf6b6116a9e24b6d81013f8ab);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CSS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_CSS);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_483ca9075adee5493e2cfab7c33a6191));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_483ca9075adee5493e2cfab7c33a6191);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_scrollable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_scrollable);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_d71011574a99182c4f98f5a92b3d982b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d71011574a99182c4f98f5a92b3d982b);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_f328e730491d463bfcb445921b6514ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f328e730491d463bfcb445921b6514ea);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_container));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_container);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_c44b16170aa3b86dda0a5a37f98e826d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c44b16170aa3b86dda0a5a37f98e826d);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_dict_eaa82ec189ca75b6a747b2fcf4eaa41e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_eaa82ec189ca75b6a747b2fcf4eaa41e);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_watch_scroll_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_watch_scroll_x);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d05e05f4a688d2c60617a417dde5c16));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d05e05f4a688d2c60617a417dde5c16);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_watch_scroll_y));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_watch_scroll_y);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_415184f9a019a0d99c5f60cc76addf0a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_415184f9a019a0d99c5f60cc76addf0a);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_mount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_on_mount);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_173b8089ce558a02f5c66abef25c9d7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_173b8089ce558a02f5c66abef25c9d7d);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_dict_8aed5d723b495161e0bd988142b51e17));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8aed5d723b495161e0bd988142b51e17);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_content_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_content_width);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_270fde2d34c3a0444857e957b26c8144));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_270fde2d34c3a0444857e957b26c8144);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_dict_13fdd51c9bb7ca6186d89d0e12b3d0aa));
CHECK_OBJECT_DEEP(mod_consts.const_dict_13fdd51c9bb7ca6186d89d0e12b3d0aa);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_content_height));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_content_height);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_9bd30771e6579bebe5619a0915914dd0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9bd30771e6579bebe5619a0915914dd0);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_dict_27d0cbc063d668e527af57868a7595a8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_27d0cbc063d668e527af57868a7595a8);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain__size_updated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__size_updated);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d7e5efb38780ac4eb000b8eefef6aa6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d7e5efb38780ac4eb000b8eefef6aa6);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_dict_728d476e3446b6cf4e7a088fd2261a29));
CHECK_OBJECT_DEEP(mod_consts.const_dict_728d476e3446b6cf4e7a088fd2261a29);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_render));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_df57b0a0c355d833d9b7f1e4de34c114));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_df57b0a0c355d833d9b7f1e4de34c114);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_dict_67855391eace15d07c57d394a1387344));
CHECK_OBJECT_DEEP(mod_consts.const_dict_67855391eace15d07c57d394a1387344);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_dict_bd14f6dc0e567abd42f1da72bf7e498d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bd14f6dc0e567abd42f1da72bf7e498d);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_scroll_to));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scroll_to);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_d31d32d9865505afb1d6d2b63ba9d01c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d31d32d9865505afb1d6d2b63ba9d01c);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_dict_6bb13b2f6fc8fb13f583b5d479897da1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6bb13b2f6fc8fb13f583b5d479897da1);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh_line);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_e155136eb2cbea09fe3a24df4ffc1106));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e155136eb2cbea09fe3a24df4ffc1106);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_dict_7890a079633d7b19c605abee9ce3214d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7890a079633d7b19c605abee9ce3214d);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_lines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh_lines);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1a9791cbb37f5f0b8167291202bdad7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1a9791cbb37f5f0b8167291202bdad7);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__size_str_plain__container_size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__size_str_plain__container_size_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_beaa71fbe00c2ef0bf3fb269cd911fdf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_beaa71fbe00c2ef0bf3fb269cd911fdf);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_93da7ba0b58a05154d11479561a7fabe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93da7ba0b58a05154d11479561a7fabe);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_970dc24057580b552469358bf0c6e4ea_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_970dc24057580b552469358bf0c6e4ea_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_2624eaea1cd59a1f12e59e6907e9c9c0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2624eaea1cd59a1f12e59e6907e9c9c0_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_container_str_plain_viewport_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_container_str_plain_viewport_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_y_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_y_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_37aa0db040788dd5c269fec56901f47c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_37aa0db040788dd5c269fec56901f47c_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_Panel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_Panel_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_38a3bf6b9655949005c9f0733d939ebf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_38a3bf6b9655949005c9f0733d939ebf_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_old_value_str_plain_new_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_old_value_str_plain_new_value_tuple);
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
static PyObject *module_var_accessor_textual$scroll_view$Region(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$scroll_view->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$scroll_view->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_Region);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$scroll_view->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_Region);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_Region);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Region);
    }

    return result;
}

static PyObject *module_var_accessor_textual$scroll_view$ScrollableContainer(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$scroll_view->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$scroll_view->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_ScrollableContainer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$scroll_view->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_ScrollableContainer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_ScrollableContainer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ScrollableContainer);
    }

    return result;
}

static PyObject *module_var_accessor_textual$scroll_view$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$scroll_view->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$scroll_view->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$scroll_view->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_424f16620179fc1f6dd25e0ada70d934;
static PyCodeObject *code_objects_09208519794428a10c9f9feb2b1be4d7;
static PyCodeObject *code_objects_1fdc6755cccd60792afd97ab5444fcc9;
static PyCodeObject *code_objects_426585e8845ff693035f421d4240fd09;
static PyCodeObject *code_objects_f3fee04a1a5ffdae79e9a77b6daff3e8;
static PyCodeObject *code_objects_3ef4ce66305633594c66862a72c81507;
static PyCodeObject *code_objects_ecd4a28299235cd668bbd0385e944dbb;
static PyCodeObject *code_objects_7b68fa258501a74049e4d38e1c5e0617;
static PyCodeObject *code_objects_63a036c95ba2c809695c2020578bfbf4;
static PyCodeObject *code_objects_bd563246cb607349d95c51a64fedd109;
static PyCodeObject *code_objects_21b3d52e1f933206fdd40b5a4897aa21;
static PyCodeObject *code_objects_000b5ad8d47d1a379442fcbdcd533489;
static PyCodeObject *code_objects_07c981ab759fd140ff3c61f5acc91397;
static PyCodeObject *code_objects_e92a8a7d462d5fe7c8ee35ee7ef00494;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_beaa71fbe00c2ef0bf3fb269cd911fdf); CHECK_OBJECT(module_filename_obj);
code_objects_424f16620179fc1f6dd25e0ada70d934 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_93da7ba0b58a05154d11479561a7fabe, mod_consts.const_str_digest_93da7ba0b58a05154d11479561a7fabe, NULL, NULL, 0, 0, 0);
code_objects_09208519794428a10c9f9feb2b1be4d7 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ScrollView, mod_consts.const_str_plain_ScrollView, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_1fdc6755cccd60792afd97ab5444fcc9 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__size_updated, mod_consts.const_str_digest_9d7e5efb38780ac4eb000b8eefef6aa6, mod_consts.const_tuple_970dc24057580b552469358bf0c6e4ea_tuple, NULL, 5, 0, 0);
code_objects_426585e8845ff693035f421d4240fd09 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_content_height, mod_consts.const_str_digest_9bd30771e6579bebe5619a0915914dd0, mod_consts.const_tuple_2624eaea1cd59a1f12e59e6907e9c9c0_tuple, NULL, 4, 0, 0);
code_objects_f3fee04a1a5ffdae79e9a77b6daff3e8 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_content_width, mod_consts.const_str_digest_270fde2d34c3a0444857e957b26c8144, mod_consts.const_tuple_str_plain_self_str_plain_container_str_plain_viewport_tuple, NULL, 3, 0, 0);
code_objects_3ef4ce66305633594c66862a72c81507 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_container, mod_consts.const_str_digest_c44b16170aa3b86dda0a5a37f98e826d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ecd4a28299235cd668bbd0385e944dbb = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_scrollable, mod_consts.const_str_digest_d71011574a99182c4f98f5a92b3d982b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7b68fa258501a74049e4d38e1c5e0617 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_on_mount, mod_consts.const_str_digest_173b8089ce558a02f5c66abef25c9d7d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_63a036c95ba2c809695c2020578bfbf4 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_refresh_line, mod_consts.const_str_digest_e155136eb2cbea09fe3a24df4ffc1106, mod_consts.const_tuple_str_plain_self_str_plain_y_tuple, NULL, 2, 0, 0);
code_objects_bd563246cb607349d95c51a64fedd109 = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_refresh_lines, mod_consts.const_str_digest_b1a9791cbb37f5f0b8167291202bdad7, mod_consts.const_tuple_37aa0db040788dd5c269fec56901f47c_tuple, NULL, 3, 0, 0);
code_objects_21b3d52e1f933206fdd40b5a4897aa21 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render, mod_consts.const_str_digest_df57b0a0c355d833d9b7f1e4de34c114, mod_consts.const_tuple_str_plain_self_str_plain_Panel_tuple, NULL, 1, 0, 0);
code_objects_000b5ad8d47d1a379442fcbdcd533489 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_scroll_to, mod_consts.const_str_digest_d31d32d9865505afb1d6d2b63ba9d01c, mod_consts.const_tuple_38a3bf6b9655949005c9f0733d939ebf_tuple, NULL, 3, 8, 0);
code_objects_07c981ab759fd140ff3c61f5acc91397 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_watch_scroll_x, mod_consts.const_str_digest_2d05e05f4a688d2c60617a417dde5c16, mod_consts.const_tuple_str_plain_self_str_plain_old_value_str_plain_new_value_tuple, NULL, 3, 0, 0);
code_objects_e92a8a7d462d5fe7c8ee35ee7ef00494 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_watch_scroll_y, mod_consts.const_str_digest_415184f9a019a0d99c5f60cc76addf0a, mod_consts.const_tuple_str_plain_self_str_plain_old_value_str_plain_new_value_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__10_scroll_to(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__11_refresh_line(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__12_refresh_lines(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__1_is_scrollable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__2_is_container(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__3_watch_scroll_x(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__4_watch_scroll_y(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__5_on_mount(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__6_get_content_width(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__7_get_content_height(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__8__size_updated(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__9_render(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$scroll_view$$$function__3_watch_scroll_x(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_old_value = python_pars[1];
PyObject *par_new_value = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$scroll_view$$$function__3_watch_scroll_x;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$scroll_view$$$function__3_watch_scroll_x = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$scroll_view$$$function__3_watch_scroll_x)) {
    Py_XDECREF(cache_frame_frame_textual$scroll_view$$$function__3_watch_scroll_x);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$scroll_view$$$function__3_watch_scroll_x == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$scroll_view$$$function__3_watch_scroll_x = MAKE_FUNCTION_FRAME(tstate, code_objects_07c981ab759fd140ff3c61f5acc91397, module_textual$scroll_view, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$scroll_view$$$function__3_watch_scroll_x->m_type_description == NULL);
frame_frame_textual$scroll_view$$$function__3_watch_scroll_x = cache_frame_frame_textual$scroll_view$$$function__3_watch_scroll_x;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$scroll_view$$$function__3_watch_scroll_x);
assert(Py_REFCNT(frame_frame_textual$scroll_view$$$function__3_watch_scroll_x) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_show_horizontal_scrollbar);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 47;
type_description_1 = "ooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_new_value);
tmp_assattr_value_1 = par_new_value;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_horizontal_scrollbar);
if (tmp_assattr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_position, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_target_1);
Py_DECREF(tmp_assattr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_old_value);
tmp_args_element_value_1 = par_old_value;
frame_frame_textual$scroll_view$$$function__3_watch_scroll_x->m_frame.f_lineno = 49;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_2 != NULL);
CHECK_OBJECT(par_new_value);
tmp_args_element_value_2 = par_new_value;
frame_frame_textual$scroll_view$$$function__3_watch_scroll_x->m_frame.f_lineno = 49;
tmp_cmp_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 49;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_refresh);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_size);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 50;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_region);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 50;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$scroll_view$$$function__3_watch_scroll_x->m_frame.f_lineno = 50;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$scroll_view$$$function__3_watch_scroll_x, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$scroll_view$$$function__3_watch_scroll_x->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$scroll_view$$$function__3_watch_scroll_x, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$scroll_view$$$function__3_watch_scroll_x,
    type_description_1,
    par_self,
    par_old_value,
    par_new_value
);


// Release cached frame if used for exception.
if (frame_frame_textual$scroll_view$$$function__3_watch_scroll_x == cache_frame_frame_textual$scroll_view$$$function__3_watch_scroll_x) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$scroll_view$$$function__3_watch_scroll_x);
    cache_frame_frame_textual$scroll_view$$$function__3_watch_scroll_x = NULL;
}

assertFrameObject(frame_frame_textual$scroll_view$$$function__3_watch_scroll_x);

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
CHECK_OBJECT(par_old_value);
Py_DECREF(par_old_value);
CHECK_OBJECT(par_new_value);
Py_DECREF(par_new_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_old_value);
Py_DECREF(par_old_value);
CHECK_OBJECT(par_new_value);
Py_DECREF(par_new_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$scroll_view$$$function__4_watch_scroll_y(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_old_value = python_pars[1];
PyObject *par_new_value = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$scroll_view$$$function__4_watch_scroll_y;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$scroll_view$$$function__4_watch_scroll_y = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$scroll_view$$$function__4_watch_scroll_y)) {
    Py_XDECREF(cache_frame_frame_textual$scroll_view$$$function__4_watch_scroll_y);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$scroll_view$$$function__4_watch_scroll_y == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$scroll_view$$$function__4_watch_scroll_y = MAKE_FUNCTION_FRAME(tstate, code_objects_e92a8a7d462d5fe7c8ee35ee7ef00494, module_textual$scroll_view, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$scroll_view$$$function__4_watch_scroll_y->m_type_description == NULL);
frame_frame_textual$scroll_view$$$function__4_watch_scroll_y = cache_frame_frame_textual$scroll_view$$$function__4_watch_scroll_y;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$scroll_view$$$function__4_watch_scroll_y);
assert(Py_REFCNT(frame_frame_textual$scroll_view$$$function__4_watch_scroll_y) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_show_vertical_scrollbar);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 53;
type_description_1 = "ooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_new_value);
tmp_assattr_value_1 = par_new_value;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_vertical_scrollbar);
if (tmp_assattr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_position, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_target_1);
Py_DECREF(tmp_assattr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_old_value);
tmp_args_element_value_1 = par_old_value;
frame_frame_textual$scroll_view$$$function__4_watch_scroll_y->m_frame.f_lineno = 55;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_2 != NULL);
CHECK_OBJECT(par_new_value);
tmp_args_element_value_2 = par_new_value;
frame_frame_textual$scroll_view$$$function__4_watch_scroll_y->m_frame.f_lineno = 55;
tmp_cmp_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 55;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_refresh);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_size);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 56;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_region);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 56;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$scroll_view$$$function__4_watch_scroll_y->m_frame.f_lineno = 56;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$scroll_view$$$function__4_watch_scroll_y, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$scroll_view$$$function__4_watch_scroll_y->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$scroll_view$$$function__4_watch_scroll_y, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$scroll_view$$$function__4_watch_scroll_y,
    type_description_1,
    par_self,
    par_old_value,
    par_new_value
);


// Release cached frame if used for exception.
if (frame_frame_textual$scroll_view$$$function__4_watch_scroll_y == cache_frame_frame_textual$scroll_view$$$function__4_watch_scroll_y) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$scroll_view$$$function__4_watch_scroll_y);
    cache_frame_frame_textual$scroll_view$$$function__4_watch_scroll_y = NULL;
}

assertFrameObject(frame_frame_textual$scroll_view$$$function__4_watch_scroll_y);

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
CHECK_OBJECT(par_old_value);
Py_DECREF(par_old_value);
CHECK_OBJECT(par_new_value);
Py_DECREF(par_new_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_old_value);
Py_DECREF(par_old_value);
CHECK_OBJECT(par_new_value);
Py_DECREF(par_new_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$scroll_view$$$function__5_on_mount(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$scroll_view$$$function__5_on_mount;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$scroll_view$$$function__5_on_mount = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$scroll_view$$$function__5_on_mount)) {
    Py_XDECREF(cache_frame_frame_textual$scroll_view$$$function__5_on_mount);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$scroll_view$$$function__5_on_mount == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$scroll_view$$$function__5_on_mount = MAKE_FUNCTION_FRAME(tstate, code_objects_7b68fa258501a74049e4d38e1c5e0617, module_textual$scroll_view, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$scroll_view$$$function__5_on_mount->m_type_description == NULL);
frame_frame_textual$scroll_view$$$function__5_on_mount = cache_frame_frame_textual$scroll_view$$$function__5_on_mount;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$scroll_view$$$function__5_on_mount);
assert(Py_REFCNT(frame_frame_textual$scroll_view$$$function__5_on_mount) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$scroll_view$$$function__5_on_mount->m_frame.f_lineno = 59;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__refresh_scrollbars);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$scroll_view$$$function__5_on_mount, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$scroll_view$$$function__5_on_mount->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$scroll_view$$$function__5_on_mount, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$scroll_view$$$function__5_on_mount,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$scroll_view$$$function__5_on_mount == cache_frame_frame_textual$scroll_view$$$function__5_on_mount) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$scroll_view$$$function__5_on_mount);
    cache_frame_frame_textual$scroll_view$$$function__5_on_mount = NULL;
}

assertFrameObject(frame_frame_textual$scroll_view$$$function__5_on_mount);

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


static PyObject *impl_textual$scroll_view$$$function__6_get_content_width(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_container = python_pars[1];
PyObject *par_viewport = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$scroll_view$$$function__6_get_content_width;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$scroll_view$$$function__6_get_content_width = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$scroll_view$$$function__6_get_content_width)) {
    Py_XDECREF(cache_frame_frame_textual$scroll_view$$$function__6_get_content_width);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$scroll_view$$$function__6_get_content_width == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$scroll_view$$$function__6_get_content_width = MAKE_FUNCTION_FRAME(tstate, code_objects_f3fee04a1a5ffdae79e9a77b6daff3e8, module_textual$scroll_view, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$scroll_view$$$function__6_get_content_width->m_type_description == NULL);
frame_frame_textual$scroll_view$$$function__6_get_content_width = cache_frame_frame_textual$scroll_view$$$function__6_get_content_width;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$scroll_view$$$function__6_get_content_width);
assert(Py_REFCNT(frame_frame_textual$scroll_view$$$function__6_get_content_width) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_virtual_size);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_width);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$scroll_view$$$function__6_get_content_width, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$scroll_view$$$function__6_get_content_width->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$scroll_view$$$function__6_get_content_width, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$scroll_view$$$function__6_get_content_width,
    type_description_1,
    par_self,
    par_container,
    par_viewport
);


// Release cached frame if used for exception.
if (frame_frame_textual$scroll_view$$$function__6_get_content_width == cache_frame_frame_textual$scroll_view$$$function__6_get_content_width) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$scroll_view$$$function__6_get_content_width);
    cache_frame_frame_textual$scroll_view$$$function__6_get_content_width = NULL;
}

assertFrameObject(frame_frame_textual$scroll_view$$$function__6_get_content_width);

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
CHECK_OBJECT(par_container);
Py_DECREF(par_container);
CHECK_OBJECT(par_viewport);
Py_DECREF(par_viewport);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_container);
Py_DECREF(par_container);
CHECK_OBJECT(par_viewport);
Py_DECREF(par_viewport);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$scroll_view$$$function__7_get_content_height(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_container = python_pars[1];
PyObject *par_viewport = python_pars[2];
PyObject *par_width = python_pars[3];
struct Nuitka_FrameObject *frame_frame_textual$scroll_view$$$function__7_get_content_height;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$scroll_view$$$function__7_get_content_height = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$scroll_view$$$function__7_get_content_height)) {
    Py_XDECREF(cache_frame_frame_textual$scroll_view$$$function__7_get_content_height);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$scroll_view$$$function__7_get_content_height == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$scroll_view$$$function__7_get_content_height = MAKE_FUNCTION_FRAME(tstate, code_objects_426585e8845ff693035f421d4240fd09, module_textual$scroll_view, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$scroll_view$$$function__7_get_content_height->m_type_description == NULL);
frame_frame_textual$scroll_view$$$function__7_get_content_height = cache_frame_frame_textual$scroll_view$$$function__7_get_content_height;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$scroll_view$$$function__7_get_content_height);
assert(Py_REFCNT(frame_frame_textual$scroll_view$$$function__7_get_content_height) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_virtual_size);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_height);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$scroll_view$$$function__7_get_content_height, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$scroll_view$$$function__7_get_content_height->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$scroll_view$$$function__7_get_content_height, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$scroll_view$$$function__7_get_content_height,
    type_description_1,
    par_self,
    par_container,
    par_viewport,
    par_width
);


// Release cached frame if used for exception.
if (frame_frame_textual$scroll_view$$$function__7_get_content_height == cache_frame_frame_textual$scroll_view$$$function__7_get_content_height) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$scroll_view$$$function__7_get_content_height);
    cache_frame_frame_textual$scroll_view$$$function__7_get_content_height = NULL;
}

assertFrameObject(frame_frame_textual$scroll_view$$$function__7_get_content_height);

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
CHECK_OBJECT(par_container);
Py_DECREF(par_container);
CHECK_OBJECT(par_viewport);
Py_DECREF(par_viewport);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_container);
Py_DECREF(par_container);
CHECK_OBJECT(par_viewport);
Py_DECREF(par_viewport);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$scroll_view$$$function__8__size_updated(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_size = python_pars[1];
PyObject *par_virtual_size = python_pars[2];
PyObject *par_container_size = python_pars[3];
PyObject *par_layout = python_pars[4];
PyObject *var_size_changed = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_textual$scroll_view$$$function__8__size_updated;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$scroll_view$$$function__8__size_updated = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$scroll_view$$$function__8__size_updated)) {
    Py_XDECREF(cache_frame_frame_textual$scroll_view$$$function__8__size_updated);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$scroll_view$$$function__8__size_updated == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$scroll_view$$$function__8__size_updated = MAKE_FUNCTION_FRAME(tstate, code_objects_1fdc6755cccd60792afd97ab5444fcc9, module_textual$scroll_view, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$scroll_view$$$function__8__size_updated->m_type_description == NULL);
frame_frame_textual$scroll_view$$$function__8__size_updated = cache_frame_frame_textual$scroll_view$$$function__8__size_updated;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$scroll_view$$$function__8__size_updated);
assert(Py_REFCNT(frame_frame_textual$scroll_view$$$function__8__size_updated) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_size);
tmp_cmp_expr_right_1 = par_size;
tmp_assign_source_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_assignment_expr_1__value == NULL);
tmp_assignment_expr_1__value = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_2 = tmp_assignment_expr_1__value;
assert(var_size_changed == NULL);
Py_INCREF(tmp_assign_source_2);
var_size_changed = tmp_assign_source_2;
}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_outline_return_value_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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

exception_lineno = 100;
type_description_1 = "oooooo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$scroll_view$$$function__8__size_updated->m_frame.f_lineno = 101;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__set_dirty);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_truth_name_2;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_size_changed);
tmp_truth_name_2 = CHECK_IF_TRUE(var_size_changed);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_virtual_size);
tmp_cmp_expr_left_2 = par_virtual_size;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_virtual_size);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_container_size);
tmp_cmp_expr_left_3 = par_container_size;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_container_size);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__scrollbar_changes);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_clear);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$scroll_view$$$function__8__size_updated->m_frame.f_lineno = 107;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_size);
tmp_assattr_value_1 = par_size;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__size, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_virtual_size);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_virtual_size;
    assert(old != NULL);
    par_virtual_size = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_size);
tmp_sub_expr_left_1 = par_size;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_styles);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_gutter);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_totals);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__container_size, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_virtual_size);
tmp_args_element_value_1 = par_virtual_size;
frame_frame_textual$scroll_view$$$function__8__size_updated->m_frame.f_lineno = 111;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__scroll_update, tmp_args_element_value_1);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_2:;
{
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_size_changed);
tmp_or_left_value_3 = var_size_changed;
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__container_size);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_container_size);
tmp_cmp_expr_right_4 = par_container_size;
tmp_or_right_value_3 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_or_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
Py_INCREF(tmp_or_left_value_3);
tmp_return_value = tmp_or_left_value_3;
or_end_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$scroll_view$$$function__8__size_updated, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$scroll_view$$$function__8__size_updated->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$scroll_view$$$function__8__size_updated, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$scroll_view$$$function__8__size_updated,
    type_description_1,
    par_self,
    par_size,
    par_virtual_size,
    par_container_size,
    par_layout,
    var_size_changed
);


// Release cached frame if used for exception.
if (frame_frame_textual$scroll_view$$$function__8__size_updated == cache_frame_frame_textual$scroll_view$$$function__8__size_updated) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$scroll_view$$$function__8__size_updated);
    cache_frame_frame_textual$scroll_view$$$function__8__size_updated = NULL;
}

assertFrameObject(frame_frame_textual$scroll_view$$$function__8__size_updated);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_virtual_size);
par_virtual_size = NULL;
CHECK_OBJECT(var_size_changed);
CHECK_OBJECT(var_size_changed);
Py_DECREF(var_size_changed);
var_size_changed = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_virtual_size);
par_virtual_size = NULL;
Py_XDECREF(var_size_changed);
var_size_changed = NULL;
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
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
CHECK_OBJECT(par_container_size);
Py_DECREF(par_container_size);
CHECK_OBJECT(par_layout);
Py_DECREF(par_layout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
CHECK_OBJECT(par_container_size);
Py_DECREF(par_container_size);
CHECK_OBJECT(par_layout);
Py_DECREF(par_layout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$scroll_view$$$function__9_render(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_Panel = NULL;
struct Nuitka_FrameObject *frame_frame_textual$scroll_view$$$function__9_render;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$scroll_view$$$function__9_render = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$scroll_view$$$function__9_render)) {
    Py_XDECREF(cache_frame_frame_textual$scroll_view$$$function__9_render);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$scroll_view$$$function__9_render == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$scroll_view$$$function__9_render = MAKE_FUNCTION_FRAME(tstate, code_objects_21b3d52e1f933206fdd40b5a4897aa21, module_textual$scroll_view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$scroll_view$$$function__9_render->m_type_description == NULL);
frame_frame_textual$scroll_view$$$function__9_render = cache_frame_frame_textual$scroll_view$$$function__9_render;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$scroll_view$$$function__9_render);
assert(Py_REFCNT(frame_frame_textual$scroll_view$$$function__9_render) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_732155067944c45306e79906bf400a89;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$scroll_view;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Panel_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$scroll_view$$$function__9_render->m_frame.f_lineno = 121;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$scroll_view,
        mod_consts.const_str_plain_Panel,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Panel);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_Panel == NULL);
var_Panel = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(var_Panel);
tmp_called_value_1 = var_Panel;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_scroll_offset);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_space;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_show_vertical_scrollbar);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_textual$scroll_view$$$function__9_render->m_frame.f_lineno = 123;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$scroll_view$$$function__9_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$scroll_view$$$function__9_render->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$scroll_view$$$function__9_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$scroll_view$$$function__9_render,
    type_description_1,
    par_self,
    var_Panel
);


// Release cached frame if used for exception.
if (frame_frame_textual$scroll_view$$$function__9_render == cache_frame_frame_textual$scroll_view$$$function__9_render) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$scroll_view$$$function__9_render);
    cache_frame_frame_textual$scroll_view$$$function__9_render = NULL;
}

assertFrameObject(frame_frame_textual$scroll_view$$$function__9_render);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_Panel);
CHECK_OBJECT(var_Panel);
Py_DECREF(var_Panel);
var_Panel = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_Panel);
var_Panel = NULL;
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


static PyObject *impl_textual$scroll_view$$$function__10_scroll_to(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_x = python_pars[1];
PyObject *par_y = python_pars[2];
PyObject *par_animate = python_pars[3];
PyObject *par_speed = python_pars[4];
PyObject *par_duration = python_pars[5];
PyObject *par_easing = python_pars[6];
PyObject *par_force = python_pars[7];
PyObject *par_on_complete = python_pars[8];
PyObject *par_level = python_pars[9];
PyObject *par_immediate = python_pars[10];
struct Nuitka_FrameObject *frame_frame_textual$scroll_view$$$function__10_scroll_to;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$scroll_view$$$function__10_scroll_to = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$scroll_view$$$function__10_scroll_to)) {
    Py_XDECREF(cache_frame_frame_textual$scroll_view$$$function__10_scroll_to);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$scroll_view$$$function__10_scroll_to == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$scroll_view$$$function__10_scroll_to = MAKE_FUNCTION_FRAME(tstate, code_objects_000b5ad8d47d1a379442fcbdcd533489, module_textual$scroll_view, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$scroll_view$$$function__10_scroll_to->m_type_description == NULL);
frame_frame_textual$scroll_view$$$function__10_scroll_to = cache_frame_frame_textual$scroll_view$$$function__10_scroll_to;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$scroll_view$$$function__10_scroll_to);
assert(Py_REFCNT(frame_frame_textual$scroll_view$$$function__10_scroll_to) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__scroll_to);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_kw_call_arg_value_0_1 = par_x;
CHECK_OBJECT(par_y);
tmp_kw_call_arg_value_1_1 = par_y;
CHECK_OBJECT(par_animate);
tmp_kw_call_dict_value_0_1 = par_animate;
CHECK_OBJECT(par_speed);
tmp_kw_call_dict_value_1_1 = par_speed;
CHECK_OBJECT(par_duration);
tmp_kw_call_dict_value_2_1 = par_duration;
CHECK_OBJECT(par_easing);
tmp_kw_call_dict_value_3_1 = par_easing;
CHECK_OBJECT(par_force);
tmp_kw_call_dict_value_4_1 = par_force;
CHECK_OBJECT(par_on_complete);
tmp_kw_call_dict_value_5_1 = par_on_complete;
CHECK_OBJECT(par_level);
tmp_kw_call_dict_value_6_1 = par_level;
frame_frame_textual$scroll_view$$$function__10_scroll_to->m_frame.f_lineno = 156;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_1a0225fc0f3a166e93efe881bf05cfcb_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$scroll_view$$$function__10_scroll_to, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$scroll_view$$$function__10_scroll_to->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$scroll_view$$$function__10_scroll_to, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$scroll_view$$$function__10_scroll_to,
    type_description_1,
    par_self,
    par_x,
    par_y,
    par_animate,
    par_speed,
    par_duration,
    par_easing,
    par_force,
    par_on_complete,
    par_level,
    par_immediate
);


// Release cached frame if used for exception.
if (frame_frame_textual$scroll_view$$$function__10_scroll_to == cache_frame_frame_textual$scroll_view$$$function__10_scroll_to) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$scroll_view$$$function__10_scroll_to);
    cache_frame_frame_textual$scroll_view$$$function__10_scroll_to = NULL;
}

assertFrameObject(frame_frame_textual$scroll_view$$$function__10_scroll_to);

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
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_animate);
Py_DECREF(par_animate);
CHECK_OBJECT(par_speed);
Py_DECREF(par_speed);
CHECK_OBJECT(par_duration);
Py_DECREF(par_duration);
CHECK_OBJECT(par_easing);
Py_DECREF(par_easing);
CHECK_OBJECT(par_force);
Py_DECREF(par_force);
CHECK_OBJECT(par_on_complete);
Py_DECREF(par_on_complete);
CHECK_OBJECT(par_level);
Py_DECREF(par_level);
CHECK_OBJECT(par_immediate);
Py_DECREF(par_immediate);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
CHECK_OBJECT(par_animate);
Py_DECREF(par_animate);
CHECK_OBJECT(par_speed);
Py_DECREF(par_speed);
CHECK_OBJECT(par_duration);
Py_DECREF(par_duration);
CHECK_OBJECT(par_easing);
Py_DECREF(par_easing);
CHECK_OBJECT(par_force);
Py_DECREF(par_force);
CHECK_OBJECT(par_on_complete);
Py_DECREF(par_on_complete);
CHECK_OBJECT(par_level);
Py_DECREF(par_level);
CHECK_OBJECT(par_immediate);
Py_DECREF(par_immediate);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$scroll_view$$$function__11_refresh_line(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_y = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$scroll_view$$$function__11_refresh_line;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$scroll_view$$$function__11_refresh_line = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$scroll_view$$$function__11_refresh_line)) {
    Py_XDECREF(cache_frame_frame_textual$scroll_view$$$function__11_refresh_line);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$scroll_view$$$function__11_refresh_line == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$scroll_view$$$function__11_refresh_line = MAKE_FUNCTION_FRAME(tstate, code_objects_63a036c95ba2c809695c2020578bfbf4, module_textual$scroll_view, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$scroll_view$$$function__11_refresh_line->m_type_description == NULL);
frame_frame_textual$scroll_view$$$function__11_refresh_line = cache_frame_frame_textual$scroll_view$$$function__11_refresh_line;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$scroll_view$$$function__11_refresh_line);
assert(Py_REFCNT(frame_frame_textual$scroll_view$$$function__11_refresh_line) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_refresh);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_textual$scroll_view$Region(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Region);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 175;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = const_int_0;
CHECK_OBJECT(par_y);
tmp_sub_expr_left_1 = par_y;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_scroll_offset);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 177;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_y);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 177;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 177;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_3 != NULL);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_virtual_size);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 178;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_width);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 178;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_size);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 178;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_width);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 178;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$scroll_view$$$function__11_refresh_line->m_frame.f_lineno = 178;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 178;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = const_int_pos_1;
frame_frame_textual$scroll_view$$$function__11_refresh_line->m_frame.f_lineno = 175;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_7};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 175;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$scroll_view$$$function__11_refresh_line->m_frame.f_lineno = 174;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$scroll_view$$$function__11_refresh_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$scroll_view$$$function__11_refresh_line->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$scroll_view$$$function__11_refresh_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$scroll_view$$$function__11_refresh_line,
    type_description_1,
    par_self,
    par_y
);


// Release cached frame if used for exception.
if (frame_frame_textual$scroll_view$$$function__11_refresh_line == cache_frame_frame_textual$scroll_view$$$function__11_refresh_line) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$scroll_view$$$function__11_refresh_line);
    cache_frame_frame_textual$scroll_view$$$function__11_refresh_line = NULL;
}

assertFrameObject(frame_frame_textual$scroll_view$$$function__11_refresh_line);

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


static PyObject *impl_textual$scroll_view$$$function__12_refresh_lines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_y_start = python_pars[1];
PyObject *par_line_count = python_pars[2];
PyObject *var_refresh_region = NULL;
struct Nuitka_FrameObject *frame_frame_textual$scroll_view$$$function__12_refresh_lines;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$scroll_view$$$function__12_refresh_lines = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$scroll_view$$$function__12_refresh_lines)) {
    Py_XDECREF(cache_frame_frame_textual$scroll_view$$$function__12_refresh_lines);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$scroll_view$$$function__12_refresh_lines == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$scroll_view$$$function__12_refresh_lines = MAKE_FUNCTION_FRAME(tstate, code_objects_bd563246cb607349d95c51a64fedd109, module_textual$scroll_view, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$scroll_view$$$function__12_refresh_lines->m_type_description == NULL);
frame_frame_textual$scroll_view$$$function__12_refresh_lines = cache_frame_frame_textual$scroll_view$$$function__12_refresh_lines;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$scroll_view$$$function__12_refresh_lines);
assert(Py_REFCNT(frame_frame_textual$scroll_view$$$function__12_refresh_lines) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_6;
tmp_called_value_1 = module_var_accessor_textual$scroll_view$Region(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Region);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = const_int_0;
CHECK_OBJECT(par_y_start);
tmp_sub_expr_left_1 = par_y_start;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_scroll_offset);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_y);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_2 != NULL);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_virtual_size);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 193;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_width);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 193;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_size);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 193;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_width);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 193;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$scroll_view$$$function__12_refresh_lines->m_frame.f_lineno = 193;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 193;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_line_count);
tmp_args_element_value_6 = par_line_count;
frame_frame_textual$scroll_view$$$function__12_refresh_lines->m_frame.f_lineno = 190;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_6};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_refresh_region == NULL);
var_refresh_region = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_refresh_region);
tmp_args_element_value_7 = var_refresh_region;
frame_frame_textual$scroll_view$$$function__12_refresh_lines->m_frame.f_lineno = 196;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_refresh, tmp_args_element_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$scroll_view$$$function__12_refresh_lines, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$scroll_view$$$function__12_refresh_lines->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$scroll_view$$$function__12_refresh_lines, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$scroll_view$$$function__12_refresh_lines,
    type_description_1,
    par_self,
    par_y_start,
    par_line_count,
    var_refresh_region
);


// Release cached frame if used for exception.
if (frame_frame_textual$scroll_view$$$function__12_refresh_lines == cache_frame_frame_textual$scroll_view$$$function__12_refresh_lines) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$scroll_view$$$function__12_refresh_lines);
    cache_frame_frame_textual$scroll_view$$$function__12_refresh_lines = NULL;
}

assertFrameObject(frame_frame_textual$scroll_view$$$function__12_refresh_lines);

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
CHECK_OBJECT(var_refresh_region);
CHECK_OBJECT(var_refresh_region);
Py_DECREF(var_refresh_region);
var_refresh_region = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_refresh_region);
var_refresh_region = NULL;
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
CHECK_OBJECT(par_y_start);
Py_DECREF(par_y_start);
CHECK_OBJECT(par_line_count);
Py_DECREF(par_line_count);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_y_start);
Py_DECREF(par_y_start);
CHECK_OBJECT(par_line_count);
Py_DECREF(par_line_count);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__10_scroll_to(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$scroll_view$$$function__10_scroll_to,
        mod_consts.const_str_plain_scroll_to,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d31d32d9865505afb1d6d2b63ba9d01c,
#endif
        code_objects_000b5ad8d47d1a379442fcbdcd533489,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_textual$scroll_view,
        mod_consts.const_str_digest_661f1ae52372bd23268f4a8c487074de,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__11_refresh_line(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$scroll_view$$$function__11_refresh_line,
        mod_consts.const_str_plain_refresh_line,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e155136eb2cbea09fe3a24df4ffc1106,
#endif
        code_objects_63a036c95ba2c809695c2020578bfbf4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$scroll_view,
        mod_consts.const_str_digest_f573e352649df86ca9367a9386a91346,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__12_refresh_lines(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$scroll_view$$$function__12_refresh_lines,
        mod_consts.const_str_plain_refresh_lines,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b1a9791cbb37f5f0b8167291202bdad7,
#endif
        code_objects_bd563246cb607349d95c51a64fedd109,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$scroll_view,
        mod_consts.const_str_digest_95d660748e6fb3127b3d7ef3109bdf40,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__1_is_scrollable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_is_scrollable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d71011574a99182c4f98f5a92b3d982b,
#endif
        code_objects_ecd4a28299235cd668bbd0385e944dbb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$scroll_view,
        mod_consts.const_str_digest_483ca9075adee5493e2cfab7c33a6191,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__2_is_container(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_is_container,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c44b16170aa3b86dda0a5a37f98e826d,
#endif
        code_objects_3ef4ce66305633594c66862a72c81507,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$scroll_view,
        mod_consts.const_str_digest_f328e730491d463bfcb445921b6514ea,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__3_watch_scroll_x(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$scroll_view$$$function__3_watch_scroll_x,
        mod_consts.const_str_plain_watch_scroll_x,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2d05e05f4a688d2c60617a417dde5c16,
#endif
        code_objects_07c981ab759fd140ff3c61f5acc91397,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$scroll_view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__4_watch_scroll_y(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$scroll_view$$$function__4_watch_scroll_y,
        mod_consts.const_str_plain_watch_scroll_y,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_415184f9a019a0d99c5f60cc76addf0a,
#endif
        code_objects_e92a8a7d462d5fe7c8ee35ee7ef00494,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$scroll_view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__5_on_mount(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$scroll_view$$$function__5_on_mount,
        mod_consts.const_str_plain_on_mount,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_173b8089ce558a02f5c66abef25c9d7d,
#endif
        code_objects_7b68fa258501a74049e4d38e1c5e0617,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_textual$scroll_view,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__6_get_content_width(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$scroll_view$$$function__6_get_content_width,
        mod_consts.const_str_plain_get_content_width,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_270fde2d34c3a0444857e957b26c8144,
#endif
        code_objects_f3fee04a1a5ffdae79e9a77b6daff3e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$scroll_view,
        mod_consts.const_str_digest_b8b26411e95916b18c706f658e883581,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__7_get_content_height(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$scroll_view$$$function__7_get_content_height,
        mod_consts.const_str_plain_get_content_height,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9bd30771e6579bebe5619a0915914dd0,
#endif
        code_objects_426585e8845ff693035f421d4240fd09,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$scroll_view,
        mod_consts.const_str_digest_5d962beef7043612b43debc44d05377c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__8__size_updated(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$scroll_view$$$function__8__size_updated,
        mod_consts.const_str_plain__size_updated,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9d7e5efb38780ac4eb000b8eefef6aa6,
#endif
        code_objects_1fdc6755cccd60792afd97ab5444fcc9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$scroll_view,
        mod_consts.const_str_digest_3015fa876fc95068b5136e93c2673d63,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$scroll_view$$$function__9_render(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$scroll_view$$$function__9_render,
        mod_consts.const_str_plain_render,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_df57b0a0c355d833d9b7f1e4de34c114,
#endif
        code_objects_21b3d52e1f933206fdd40b5a4897aa21,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$scroll_view,
        mod_consts.const_str_digest_ddb801b40c03c9a48e06420b47e6ce1b,
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

static function_impl_code const function_table_textual$scroll_view[] = {
impl_textual$scroll_view$$$function__3_watch_scroll_x,
impl_textual$scroll_view$$$function__4_watch_scroll_y,
impl_textual$scroll_view$$$function__5_on_mount,
impl_textual$scroll_view$$$function__6_get_content_width,
impl_textual$scroll_view$$$function__7_get_content_height,
impl_textual$scroll_view$$$function__8__size_updated,
impl_textual$scroll_view$$$function__9_render,
impl_textual$scroll_view$$$function__10_scroll_to,
impl_textual$scroll_view$$$function__11_refresh_line,
impl_textual$scroll_view$$$function__12_refresh_lines,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$scroll_view);
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
        module_textual$scroll_view,
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
        function_table_textual$scroll_view,
        sizeof(function_table_textual$scroll_view) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.scroll_view";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$scroll_view(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$scroll_view");

    // Store the module for future use.
    module_textual$scroll_view = module;

    moduledict_textual$scroll_view = MODULE_DICT(module_textual$scroll_view);

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
        PRINT_STRING("textual$scroll_view: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$scroll_view: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$scroll_view: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.scroll_view" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$scroll_view\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$scroll_view,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$scroll_view,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$scroll_view,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$scroll_view,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$scroll_view,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$scroll_view);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$scroll_view);
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

        UPDATE_STRING_DICT1(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_textual$scroll_view;
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
PyObject *locals_textual$scroll_view$$$class__1_ScrollView_15 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$scroll_view$$$class__1_ScrollView_2;
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
tmp_assign_source_1 = mod_consts.const_str_digest_275632f26242892df9797b15042f3370;
UPDATE_STRING_DICT0(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$scroll_view = MAKE_MODULE_FRAME(code_objects_424f16620179fc1f6dd25e0ada70d934, module_textual$scroll_view);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$scroll_view);
assert(Py_REFCNT(frame_frame_textual$scroll_view) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$scroll_view$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$scroll_view$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_6e41305c2814ca9c2e7a7e6ba515b29e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$scroll_view;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_RenderableType_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$scroll_view->m_frame.f_lineno = 7;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$scroll_view,
        mod_consts.const_str_plain_RenderableType,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_RenderableType);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_RenderableType, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_525a71d7d6542dd74dc8c938339082dd;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$scroll_view;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_EasingFunction_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$scroll_view->m_frame.f_lineno = 9;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$scroll_view,
        mod_consts.const_str_plain_EasingFunction,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_EasingFunction);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_EasingFunction, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_c32863e446b1799beb3ada226b376daf;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$scroll_view;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_AnimationLevel_str_plain_CallbackType_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$scroll_view->m_frame.f_lineno = 10;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$scroll_view,
        mod_consts.const_str_plain_AnimationLevel,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_AnimationLevel);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_AnimationLevel, tmp_assign_source_8);
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
        (PyObject *)moduledict_textual$scroll_view,
        mod_consts.const_str_plain_CallbackType,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_CallbackType);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_CallbackType, tmp_assign_source_9);
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
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_45837af94bae6220963db538704d20ea;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$scroll_view;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ScrollableContainer_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$scroll_view->m_frame.f_lineno = 11;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$scroll_view,
        mod_consts.const_str_plain_ScrollableContainer,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ScrollableContainer);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_ScrollableContainer, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$scroll_view;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Region_str_plain_Size_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$scroll_view->m_frame.f_lineno = 12;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$scroll_view,
        mod_consts.const_str_plain_Region,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Region);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_Region, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$scroll_view,
        mod_consts.const_str_plain_Size,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Size);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_Size, tmp_assign_source_13);
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
PyObject *tmp_assign_source_14;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_textual$scroll_view$ScrollableContainer(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ScrollableContainer);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 15;

    goto try_except_handler_3;
}
tmp_assign_source_14 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_14, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_15 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
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
tmp_assign_source_17 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_17;
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
PyObject *tmp_assign_source_18;
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
tmp_tuple_element_2 = mod_consts.const_str_plain_ScrollView;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$scroll_view->m_frame.f_lineno = 15;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_18;
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
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_6, tmp_default_value_1);
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
frame_frame_textual$scroll_view->m_frame.f_lineno = 15;
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
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_19;
}
branch_end_1:;
{
PyObject *tmp_assign_source_20;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$scroll_view$$$class__1_ScrollView_15 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9849c2785dae3777bc8c7b7f22ab3867;
tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_d4f98580b256232986cbe84215fc897f;
tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_ScrollView;
tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_15;
tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
frame_frame_textual$scroll_view$$$class__1_ScrollView_2 = MAKE_CLASS_FRAME(tstate, code_objects_09208519794428a10c9f9feb2b1be4d7, module_textual$scroll_view, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$scroll_view$$$class__1_ScrollView_2);
assert(Py_REFCNT(frame_frame_textual$scroll_view$$$class__1_ScrollView_2) == 2);

// Framed code:
tmp_dictset_value = Py_True;
tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_ALLOW_MAXIMIZE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_6103894bf6b6116a9e24b6d81013f8ab;
tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_DEFAULT_CSS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_2 = PyObject_GetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_1 = MAKE_FUNCTION_textual$scroll_view$$$function__1_is_scrollable(tstate, tmp_annotations_1);

frame_frame_textual$scroll_view$$$class__1_ScrollView_2->m_frame.f_lineno = 35;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_is_scrollable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_2;
tmp_called_value_3 = PyObject_GetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_2 = MAKE_FUNCTION_textual$scroll_view$$$function__2_is_container(tstate, tmp_annotations_2);

frame_frame_textual$scroll_view$$$class__1_ScrollView_2->m_frame.f_lineno = 40;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_is_container, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_eaa82ec189ca75b6a747b2fcf4eaa41e);

tmp_dictset_value = MAKE_FUNCTION_textual$scroll_view$$$function__3_watch_scroll_x(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_watch_scroll_x, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_eaa82ec189ca75b6a747b2fcf4eaa41e);

tmp_dictset_value = MAKE_FUNCTION_textual$scroll_view$$$function__4_watch_scroll_y(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_watch_scroll_y, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_textual$scroll_view$$$function__5_on_mount(tstate);

tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_on_mount, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_8aed5d723b495161e0bd988142b51e17);

tmp_dictset_value = MAKE_FUNCTION_textual$scroll_view$$$function__6_get_content_width(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_get_content_width, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_13fdd51c9bb7ca6186d89d0e12b3d0aa);

tmp_dictset_value = MAKE_FUNCTION_textual$scroll_view$$$function__7_get_content_height(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_get_content_height, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_7;
tmp_defaults_1 = mod_consts.const_tuple_true_tuple;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_27d0cbc063d668e527af57868a7595a8);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_textual$scroll_view$$$function__8__size_updated(tstate, tmp_defaults_1, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain__size_updated, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_728d476e3446b6cf4e7a088fd2261a29);

tmp_dictset_value = MAKE_FUNCTION_textual$scroll_view$$$function__9_render(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_render, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_9;
tmp_defaults_2 = mod_consts.const_tuple_none_none_tuple;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_67855391eace15d07c57d394a1387344);
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_bd14f6dc0e567abd42f1da72bf7e498d);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_textual$scroll_view$$$function__10_scroll_to(tstate, tmp_defaults_2, tmp_kw_defaults_1, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_scroll_to, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_6bb13b2f6fc8fb13f583b5d479897da1);

tmp_dictset_value = MAKE_FUNCTION_textual$scroll_view$$$function__11_refresh_line(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_refresh_line, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_11;
tmp_defaults_3 = mod_consts.const_tuple_int_pos_1_tuple;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_7890a079633d7b19c605abee9ce3214d);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_textual$scroll_view$$$function__12_refresh_lines(tstate, tmp_defaults_3, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain_refresh_lines, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$scroll_view$$$class__1_ScrollView_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$scroll_view$$$class__1_ScrollView_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$scroll_view$$$class__1_ScrollView_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$scroll_view$$$class__1_ScrollView_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$scroll_view$$$class__1_ScrollView_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__size_str_plain__container_size_tuple;
tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
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
tmp_res = PyObject_SetItem(locals_textual$scroll_view$$$class__1_ScrollView_15, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_ScrollView;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_textual$scroll_view$$$class__1_ScrollView_15;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$scroll_view->m_frame.f_lineno = 15;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_21;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_20 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_20);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_textual$scroll_view$$$class__1_ScrollView_15);
locals_textual$scroll_view$$$class__1_ScrollView_15 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$scroll_view$$$class__1_ScrollView_15);
locals_textual$scroll_view$$$class__1_ScrollView_15 = NULL;
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
UPDATE_STRING_DICT1(moduledict_textual$scroll_view, (Nuitka_StringObject *)mod_consts.const_str_plain_ScrollView, tmp_assign_source_20);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$scroll_view, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$scroll_view->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$scroll_view, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$scroll_view);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$scroll_view", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.scroll_view" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$scroll_view);
    return module_textual$scroll_view;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$scroll_view, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$scroll_view", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

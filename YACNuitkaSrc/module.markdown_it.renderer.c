/* Generated code for Python module 'markdown_it$renderer'
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



/* The "module_markdown_it$renderer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_markdown_it$renderer;
PyDictObject *moduledict_markdown_it$renderer;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_getmembers;
PyObject *const_str_plain_ismethod;
PyObject *const_tuple_str_plain_predicate_tuple;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_plain_render_tuple;
PyObject *const_tuple_str_underscore_tuple;
PyObject *const_str_plain_rules;
PyObject *const_str_plain_inline;
PyObject *const_str_plain_children;
PyObject *const_str_plain_result;
PyObject *const_str_plain_self;
PyObject *const_str_plain_renderInline;
PyObject *const_str_plain_options;
PyObject *const_str_plain_env;
PyObject *const_str_plain_tokens;
PyObject *const_str_plain_renderToken;
PyObject *const_str_digest_1b4f07f36cb10d2a09e5a5719c90ea5b;
PyObject *const_str_digest_85d18a56326a0969029c3e46e55ffa4f;
PyObject *const_str_plain_hidden;
PyObject *const_str_plain_block;
PyObject *const_str_plain_nesting;
PyObject *const_str_newline;
PyObject *const_str_digest_9e22f855d491619d56677fec5533ea95;
PyObject *const_str_chr_60;
PyObject *const_str_plain_tag;
PyObject *const_str_plain_renderAttrs;
PyObject *const_str_plain_xhtmlOut;
PyObject *const_str_digest_1c1d8534171c01e2acfa5f22e7740f2b;
PyObject *const_str_digest_42aaa86f3155a0ac9064d3ba1116a0c9;
PyObject *const_str_chr_62;
PyObject *const_str_digest_f33adb4d86ed1d598333980692f02b05;
PyObject *const_str_plain_attrItems;
PyObject *const_str_space;
PyObject *const_str_plain_escapeHtml;
PyObject *const_str_digest_2e8882d8bbcd93a52fcc62a27ccbb2f5;
PyObject *const_str_chr_34;
PyObject *const_str_digest_f352d3cf402325d0aab3d498b0b15025;
PyObject *const_str_plain_text;
PyObject *const_str_plain_content;
PyObject *const_str_plain_image;
PyObject *const_str_plain_renderInlineAsText;
PyObject *const_str_plain_softbreak;
PyObject *const_str_digest_a2d508afe53deba1afd4357176c4bbdd;
PyObject *const_str_digest_7dc32b87873ff713e10049b1f8782582;
PyObject *const_str_digest_0644f7ae173b99105ec9f8acaaff1521;
PyObject *const_str_digest_e1243cc9991b8bc4862adf36a66a8eb9;
PyObject *const_str_digest_6be79a6d76655c48f6b4a5d2cc3de598;
PyObject *const_str_digest_b8846411a42672a24c92dc5ef1b37343;
PyObject *const_str_plain_info;
PyObject *const_str_plain_unescapeAll;
PyObject *const_str_plain_strip;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_tuple_str_plain_maxsplit_tuple;
PyObject *const_str_plain_highlight;
PyObject *const_tuple_str_digest_e1243cc9991b8bc4862adf36a66a8eb9_tuple;
PyObject *const_str_plain_Token;
PyObject *const_str_plain_attrs;
PyObject *const_str_plain_copy;
PyObject *const_tuple_61de0f85c8871d1a55c29d10245f8fe4_tuple;
PyObject *const_str_plain_attrJoin;
PyObject *const_str_plain_class;
PyObject *const_str_plain_langPrefix;
PyObject *const_str_digest_6a8e86214fb805d68eb24b05abddaed3;
PyObject *const_str_plain_attrSet;
PyObject *const_str_plain_alt;
PyObject *const_tuple_str_plain_alt_str_empty_tuple;
PyObject *const_str_digest_38c0ff2a80dd3e01d944df9325ebd11e;
PyObject *const_str_digest_f11aa08b38cc4c099a9a7693031fcc55;
PyObject *const_str_plain_breaks;
PyObject *const_str_digest_949089e2165dbec32ad8dbd204407c81;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Sequence_tuple;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_ClassVar;
PyObject *const_str_plain_Protocol;
PyObject *const_str_digest_b079a483a5bb3f12a8f5a2f221050499;
PyObject *const_tuple_str_plain_escapeHtml_str_plain_unescapeAll_tuple;
PyObject *const_str_plain_token;
PyObject *const_tuple_str_plain_Token_tuple;
PyObject *const_str_plain_utils;
PyObject *const_tuple_str_plain_EnvType_str_plain_OptionsDict_tuple;
PyObject *const_str_plain_EnvType;
PyObject *const_str_plain_OptionsDict;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_RendererProtocol;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_c79c36da4052775cce623836a9ae9935;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_20;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_c82760a893c6d6a609a5d1e28356ae53;
PyObject *const_str_plain___output__;
PyObject *const_dict_877cfa9d07f4fa22f2b3ba1a46286c47;
PyObject *const_str_plain_render;
PyObject *const_str_digest_92fd8d28f80c8180c7b1768732d6fbe0;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_RendererHTML;
PyObject *const_str_digest_454b470bde71b40b9887a9d5ee2efb6a;
PyObject *const_int_pos_28;
PyObject *const_str_plain_html;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_d592db42728d528d5e09503d1941bbfa;
PyObject *const_str_digest_608cc58d79b2441721a13d469839a30d;
PyObject *const_dict_741a844fe510ea473b0f56813e727ab8;
PyObject *const_str_digest_83528ba3ea1ee4a17097a9e6a10d52a5;
PyObject *const_str_digest_8cc4047c541dc377da3e6cf6ffb5fbbd;
PyObject *const_dict_0de68fb67afc83a2af90a0c026ae8f58;
PyObject *const_str_digest_46cb6cd5b8d3ed0f1efe23719ffd415e;
PyObject *const_dict_b800d7794a9ec5179f56a9e24792d31b;
PyObject *const_str_digest_db633ade37eb2682356864261c0743d8;
PyObject *const_dict_2bc380ebf31c7edb381b980dd46726f2;
PyObject *const_str_digest_cbf9bcbdeeda5a3f80176cc8592389dc;
PyObject *const_str_plain_code_inline;
PyObject *const_str_digest_1a88f0b86ba3288e117e2c41325b37fc;
PyObject *const_str_plain_code_block;
PyObject *const_str_digest_33619fc2a99981e1e6739c7a183a4398;
PyObject *const_str_plain_fence;
PyObject *const_str_digest_5c4e8299af5c112aa0381e89a45fb072;
PyObject *const_str_digest_1b8c437a8c12dbd5d5eeb7d9f647a35e;
PyObject *const_str_plain_hardbreak;
PyObject *const_str_digest_971239d53f051fa16a82596d511a46a7;
PyObject *const_str_digest_f72a7dcce83442f35139ff19ee6d6761;
PyObject *const_str_digest_fc1249040b1d4b23a0f8d90c88de51e0;
PyObject *const_str_plain_html_block;
PyObject *const_str_digest_e0718f2335fdb6c91c1e71e614e550dc;
PyObject *const_str_plain_html_inline;
PyObject *const_str_digest_43c2ff2d43b5e5c4492906c2889fb772;
PyObject *const_tuple_str_plain_rules_tuple;
PyObject *const_str_digest_3c63b10920334217f3cc27c0c569fb09;
PyObject *const_str_digest_a16658345785c524f2e15b1e2143f9eb;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_parser_tuple;
PyObject *const_tuple_6643f5f80711ed43494f37fdcd30228b_tuple;
PyObject *const_tuple_967fdbf60791728546cf7035930a77be_tuple;
PyObject *const_tuple_3c1865f06257b728515ed112c0cf3ec1_tuple;
PyObject *const_tuple_b993cab65cf5a90a9f284eab1cfeac09_tuple;
PyObject *const_tuple_1e4287eceaf276e60003f9bdb152782d_tuple;
PyObject *const_tuple_40bd3669f2b23a1ebe096f8cfdec7eba_tuple;
PyObject *const_tuple_35be3dfb1298a9064aaeec18b1c54dbb_tuple;
PyObject *const_tuple_dc434f01b5838b277ea11199bb73a192_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[147];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("markdown_it.renderer"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_getmembers);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_ismethod);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_predicate_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_render_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_rules);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_inline);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_children);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_result);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_renderInline);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_options);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_env);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokens);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_renderToken);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b4f07f36cb10d2a09e5a5719c90ea5b);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_85d18a56326a0969029c3e46e55ffa4f);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_hidden);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_block);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_nesting);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_newline);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e22f855d491619d56677fec5533ea95);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_chr_60);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_tag);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_renderAttrs);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_xhtmlOut);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c1d8534171c01e2acfa5f22e7740f2b);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_42aaa86f3155a0ac9064d3ba1116a0c9);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_chr_62);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_f33adb4d86ed1d598333980692f02b05);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_attrItems);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_escapeHtml);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e8882d8bbcd93a52fcc62a27ccbb2f5);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_chr_34);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_f352d3cf402325d0aab3d498b0b15025);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_image);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_renderInlineAsText);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_softbreak);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2d508afe53deba1afd4357176c4bbdd);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_7dc32b87873ff713e10049b1f8782582);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_0644f7ae173b99105ec9f8acaaff1521);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1243cc9991b8bc4862adf36a66a8eb9);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_6be79a6d76655c48f6b4a5d2cc3de598);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8846411a42672a24c92dc5ef1b37343);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_unescapeAll);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsplit_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_highlight);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e1243cc9991b8bc4862adf36a66a8eb9_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_Token);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_attrs);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_61de0f85c8871d1a55c29d10245f8fe4_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_attrJoin);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_class);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_langPrefix);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a8e86214fb805d68eb24b05abddaed3);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_attrSet);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_alt_str_empty_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_38c0ff2a80dd3e01d944df9325ebd11e);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_f11aa08b38cc4c099a9a7693031fcc55);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_breaks);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_949089e2165dbec32ad8dbd204407c81);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Sequence_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClassVar);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_escapeHtml_str_plain_unescapeAll_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Token_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EnvType_str_plain_OptionsDict_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_EnvType);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_OptionsDict);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_RendererProtocol);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_c79c36da4052775cce623836a9ae9935);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_20);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_c82760a893c6d6a609a5d1e28356ae53);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain___output__);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_dict_877cfa9d07f4fa22f2b3ba1a46286c47);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_render);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_92fd8d28f80c8180c7b1768732d6fbe0);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_RendererHTML);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_454b470bde71b40b9887a9d5ee2efb6a);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_int_pos_28);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_html);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_dict_d592db42728d528d5e09503d1941bbfa);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_608cc58d79b2441721a13d469839a30d);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_dict_741a844fe510ea473b0f56813e727ab8);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_83528ba3ea1ee4a17097a9e6a10d52a5);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_8cc4047c541dc377da3e6cf6ffb5fbbd);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_dict_0de68fb67afc83a2af90a0c026ae8f58);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_46cb6cd5b8d3ed0f1efe23719ffd415e);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_dict_b800d7794a9ec5179f56a9e24792d31b);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_db633ade37eb2682356864261c0743d8);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_dict_2bc380ebf31c7edb381b980dd46726f2);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbf9bcbdeeda5a3f80176cc8592389dc);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_code_inline);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a88f0b86ba3288e117e2c41325b37fc);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_code_block);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_33619fc2a99981e1e6739c7a183a4398);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_fence);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c4e8299af5c112aa0381e89a45fb072);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b8c437a8c12dbd5d5eeb7d9f647a35e);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_hardbreak);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_971239d53f051fa16a82596d511a46a7);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_f72a7dcce83442f35139ff19ee6d6761);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc1249040b1d4b23a0f8d90c88de51e0);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_html_block);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_e0718f2335fdb6c91c1e71e614e550dc);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_html_inline);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_43c2ff2d43b5e5c4492906c2889fb772);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rules_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c63b10920334217f3cc27c0c569fb09);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_a16658345785c524f2e15b1e2143f9eb);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_parser_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_6643f5f80711ed43494f37fdcd30228b_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_967fdbf60791728546cf7035930a77be_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_3c1865f06257b728515ed112c0cf3ec1_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_b993cab65cf5a90a9f284eab1cfeac09_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_1e4287eceaf276e60003f9bdb152782d_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_40bd3669f2b23a1ebe096f8cfdec7eba_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_35be3dfb1298a9064aaeec18b1c54dbb_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_dc434f01b5838b277ea11199bb73a192_tuple);
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
void checkModuleConstants_markdown_it$renderer(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_getmembers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getmembers);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_ismethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ismethod);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_predicate_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_predicate_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_render_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_render_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_underscore_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_rules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rules);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_inline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inline);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_children));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_children);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_renderInline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_renderInline);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_options);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_env));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_env);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokens);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_renderToken));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_renderToken);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b4f07f36cb10d2a09e5a5719c90ea5b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b4f07f36cb10d2a09e5a5719c90ea5b);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_85d18a56326a0969029c3e46e55ffa4f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85d18a56326a0969029c3e46e55ffa4f);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_hidden));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hidden);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_block);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_nesting));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nesting);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_newline);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e22f855d491619d56677fec5533ea95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e22f855d491619d56677fec5533ea95);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_chr_60));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_60);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_tag));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tag);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_renderAttrs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_renderAttrs);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_xhtmlOut));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_xhtmlOut);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c1d8534171c01e2acfa5f22e7740f2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c1d8534171c01e2acfa5f22e7740f2b);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_42aaa86f3155a0ac9064d3ba1116a0c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42aaa86f3155a0ac9064d3ba1116a0c9);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_chr_62));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_62);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_f33adb4d86ed1d598333980692f02b05));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f33adb4d86ed1d598333980692f02b05);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_attrItems));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attrItems);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_escapeHtml));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_escapeHtml);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e8882d8bbcd93a52fcc62a27ccbb2f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e8882d8bbcd93a52fcc62a27ccbb2f5);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_chr_34));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_34);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_f352d3cf402325d0aab3d498b0b15025));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f352d3cf402325d0aab3d498b0b15025);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_image));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_image);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_renderInlineAsText));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_renderInlineAsText);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_softbreak));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_softbreak);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2d508afe53deba1afd4357176c4bbdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2d508afe53deba1afd4357176c4bbdd);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_7dc32b87873ff713e10049b1f8782582));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7dc32b87873ff713e10049b1f8782582);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_0644f7ae173b99105ec9f8acaaff1521));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0644f7ae173b99105ec9f8acaaff1521);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1243cc9991b8bc4862adf36a66a8eb9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e1243cc9991b8bc4862adf36a66a8eb9);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_6be79a6d76655c48f6b4a5d2cc3de598));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6be79a6d76655c48f6b4a5d2cc3de598);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8846411a42672a24c92dc5ef1b37343));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8846411a42672a24c92dc5ef1b37343);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_info);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_unescapeAll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unescapeAll);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsplit_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maxsplit_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_highlight));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_highlight);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e1243cc9991b8bc4862adf36a66a8eb9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e1243cc9991b8bc4862adf36a66a8eb9_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_Token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Token);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_attrs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attrs);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_61de0f85c8871d1a55c29d10245f8fe4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_61de0f85c8871d1a55c29d10245f8fe4_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_attrJoin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attrJoin);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_class);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_langPrefix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_langPrefix);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a8e86214fb805d68eb24b05abddaed3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a8e86214fb805d68eb24b05abddaed3);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_attrSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attrSet);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_alt);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_alt_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_alt_str_empty_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_38c0ff2a80dd3e01d944df9325ebd11e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_38c0ff2a80dd3e01d944df9325ebd11e);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_f11aa08b38cc4c099a9a7693031fcc55));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f11aa08b38cc4c099a9a7693031fcc55);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_breaks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_breaks);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_949089e2165dbec32ad8dbd204407c81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_949089e2165dbec32ad8dbd204407c81);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Sequence_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Sequence_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClassVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClassVar);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Protocol);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_escapeHtml_str_plain_unescapeAll_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_escapeHtml_str_plain_unescapeAll_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Token_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utils);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EnvType_str_plain_OptionsDict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_EnvType_str_plain_OptionsDict_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_EnvType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EnvType);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_OptionsDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OptionsDict);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_RendererProtocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RendererProtocol);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_c79c36da4052775cce623836a9ae9935));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c79c36da4052775cce623836a9ae9935);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_20));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_20);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_c82760a893c6d6a609a5d1e28356ae53));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c82760a893c6d6a609a5d1e28356ae53);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain___output__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___output__);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_dict_877cfa9d07f4fa22f2b3ba1a46286c47));
CHECK_OBJECT_DEEP(mod_consts.const_dict_877cfa9d07f4fa22f2b3ba1a46286c47);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_render));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_92fd8d28f80c8180c7b1768732d6fbe0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_92fd8d28f80c8180c7b1768732d6fbe0);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_RendererHTML));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RendererHTML);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_454b470bde71b40b9887a9d5ee2efb6a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_454b470bde71b40b9887a9d5ee2efb6a);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_int_pos_28));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_28);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_html));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_html);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_dict_d592db42728d528d5e09503d1941bbfa));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d592db42728d528d5e09503d1941bbfa);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_608cc58d79b2441721a13d469839a30d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_608cc58d79b2441721a13d469839a30d);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_dict_741a844fe510ea473b0f56813e727ab8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_741a844fe510ea473b0f56813e727ab8);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_83528ba3ea1ee4a17097a9e6a10d52a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_83528ba3ea1ee4a17097a9e6a10d52a5);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_8cc4047c541dc377da3e6cf6ffb5fbbd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8cc4047c541dc377da3e6cf6ffb5fbbd);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_dict_0de68fb67afc83a2af90a0c026ae8f58));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0de68fb67afc83a2af90a0c026ae8f58);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_46cb6cd5b8d3ed0f1efe23719ffd415e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_46cb6cd5b8d3ed0f1efe23719ffd415e);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_dict_b800d7794a9ec5179f56a9e24792d31b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b800d7794a9ec5179f56a9e24792d31b);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_db633ade37eb2682356864261c0743d8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db633ade37eb2682356864261c0743d8);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_dict_2bc380ebf31c7edb381b980dd46726f2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2bc380ebf31c7edb381b980dd46726f2);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbf9bcbdeeda5a3f80176cc8592389dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cbf9bcbdeeda5a3f80176cc8592389dc);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_code_inline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code_inline);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a88f0b86ba3288e117e2c41325b37fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1a88f0b86ba3288e117e2c41325b37fc);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_code_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code_block);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_33619fc2a99981e1e6739c7a183a4398));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33619fc2a99981e1e6739c7a183a4398);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_fence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fence);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c4e8299af5c112aa0381e89a45fb072));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c4e8299af5c112aa0381e89a45fb072);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b8c437a8c12dbd5d5eeb7d9f647a35e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b8c437a8c12dbd5d5eeb7d9f647a35e);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_hardbreak));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hardbreak);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_971239d53f051fa16a82596d511a46a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_971239d53f051fa16a82596d511a46a7);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_f72a7dcce83442f35139ff19ee6d6761));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f72a7dcce83442f35139ff19ee6d6761);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc1249040b1d4b23a0f8d90c88de51e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc1249040b1d4b23a0f8d90c88de51e0);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_html_block));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_html_block);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_e0718f2335fdb6c91c1e71e614e550dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e0718f2335fdb6c91c1e71e614e550dc);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_html_inline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_html_inline);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_43c2ff2d43b5e5c4492906c2889fb772));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43c2ff2d43b5e5c4492906c2889fb772);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rules_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_rules_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c63b10920334217f3cc27c0c569fb09));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c63b10920334217f3cc27c0c569fb09);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_a16658345785c524f2e15b1e2143f9eb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a16658345785c524f2e15b1e2143f9eb);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_parser_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_parser_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_6643f5f80711ed43494f37fdcd30228b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6643f5f80711ed43494f37fdcd30228b_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_967fdbf60791728546cf7035930a77be_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_967fdbf60791728546cf7035930a77be_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_3c1865f06257b728515ed112c0cf3ec1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3c1865f06257b728515ed112c0cf3ec1_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_b993cab65cf5a90a9f284eab1cfeac09_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b993cab65cf5a90a9f284eab1cfeac09_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_1e4287eceaf276e60003f9bdb152782d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1e4287eceaf276e60003f9bdb152782d_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_40bd3669f2b23a1ebe096f8cfdec7eba_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_40bd3669f2b23a1ebe096f8cfdec7eba_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_35be3dfb1298a9064aaeec18b1c54dbb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_35be3dfb1298a9064aaeec18b1c54dbb_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_dc434f01b5838b277ea11199bb73a192_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dc434f01b5838b277ea11199bb73a192_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 7
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
static PyObject *module_var_accessor_markdown_it$renderer$Protocol(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$renderer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$renderer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$renderer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Protocol);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Protocol, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Protocol);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Protocol, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$renderer$RendererProtocol(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$renderer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$renderer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_RendererProtocol);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$renderer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RendererProtocol);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RendererProtocol, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RendererProtocol);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RendererProtocol, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_RendererProtocol);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_RendererProtocol);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RendererProtocol);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$renderer$Token(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$renderer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$renderer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_Token);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$renderer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Token);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Token, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Token);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Token, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_Token);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_Token);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Token);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$renderer$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$renderer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$renderer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$renderer->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$renderer$escapeHtml(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$renderer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$renderer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_escapeHtml);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$renderer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_escapeHtml);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_escapeHtml, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_escapeHtml);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_escapeHtml, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_escapeHtml);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_escapeHtml);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_escapeHtml);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$renderer$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$renderer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$renderer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$renderer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_inspect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_inspect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_inspect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_inspect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$renderer$unescapeAll(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$renderer->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$renderer->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_unescapeAll);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$renderer->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unescapeAll);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unescapeAll, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unescapeAll);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unescapeAll, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_unescapeAll);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_unescapeAll);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_unescapeAll);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_109d5ea0d9cbc7686ec747fe6df8ad26;
static PyCodeObject *code_objects_d96bb9c207af773ff86ad4abce5d7feb;
static PyCodeObject *code_objects_d14d25840b7838d992c932660b34704f;
static PyCodeObject *code_objects_eda60045343120989fc9957e02ef3bb9;
static PyCodeObject *code_objects_a61ff1abb823da3eeab0a75ce1758c7f;
static PyCodeObject *code_objects_80520eb9cf423e50d407efc4f2b438ff;
static PyCodeObject *code_objects_d8d72091607795e6a0b3d526d574c9e3;
static PyCodeObject *code_objects_66ff671d80112cc0d829aedf6faaa898;
static PyCodeObject *code_objects_426ef0d45731f1d3becab121d4c845ec;
static PyCodeObject *code_objects_27361a7e04bbeb0a3fb94ebe834f82b4;
static PyCodeObject *code_objects_b5c95abfac6cf03b675562ed155c82cf;
static PyCodeObject *code_objects_0043e7dc6ba245f092d5674c02439a9e;
static PyCodeObject *code_objects_1800e99aad8cb6fcf8e37fc1b7e33cb3;
static PyCodeObject *code_objects_608a2f29a5043f15b0849330ada2f569;
static PyCodeObject *code_objects_10ff5c2b2bafc2ea025f91fa737899ca;
static PyCodeObject *code_objects_857f760b8b0cd8ea7324088db49f70e4;
static PyCodeObject *code_objects_a126dde6c0d14db8a7f6a146d0b11e05;
static PyCodeObject *code_objects_3927080eeaa6fb36ba586ea551229966;
static PyCodeObject *code_objects_e2bd8bdd1151f151b20071e9ac64d6e0;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_3c63b10920334217f3cc27c0c569fb09); CHECK_OBJECT(module_filename_obj);
code_objects_109d5ea0d9cbc7686ec747fe6df8ad26 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a16658345785c524f2e15b1e2143f9eb, mod_consts.const_str_digest_a16658345785c524f2e15b1e2143f9eb, NULL, NULL, 0, 0, 0);
code_objects_d96bb9c207af773ff86ad4abce5d7feb = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_RendererHTML, mod_consts.const_str_plain_RendererHTML, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d14d25840b7838d992c932660b34704f = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_RendererProtocol, mod_consts.const_str_plain_RendererProtocol, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_eda60045343120989fc9957e02ef3bb9 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_608cc58d79b2441721a13d469839a30d, mod_consts.const_tuple_str_plain_self_str_plain_parser_tuple, NULL, 2, 0, 0);
code_objects_a61ff1abb823da3eeab0a75ce1758c7f = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_code_block, mod_consts.const_str_digest_33619fc2a99981e1e6739c7a183a4398, mod_consts.const_tuple_6643f5f80711ed43494f37fdcd30228b_tuple, NULL, 5, 0, 0);
code_objects_80520eb9cf423e50d407efc4f2b438ff = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_code_inline, mod_consts.const_str_digest_1a88f0b86ba3288e117e2c41325b37fc, mod_consts.const_tuple_6643f5f80711ed43494f37fdcd30228b_tuple, NULL, 5, 0, 0);
code_objects_d8d72091607795e6a0b3d526d574c9e3 = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_fence, mod_consts.const_str_digest_5c4e8299af5c112aa0381e89a45fb072, mod_consts.const_tuple_967fdbf60791728546cf7035930a77be_tuple, NULL, 5, 0, 0);
code_objects_66ff671d80112cc0d829aedf6faaa898 = MAKE_CODE_OBJECT(module_filename_obj, 311, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_hardbreak, mod_consts.const_str_digest_971239d53f051fa16a82596d511a46a7, mod_consts.const_tuple_3c1865f06257b728515ed112c0cf3ec1_tuple, NULL, 5, 0, 0);
code_objects_426ef0d45731f1d3becab121d4c845ec = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_html_block, mod_consts.const_str_digest_e0718f2335fdb6c91c1e71e614e550dc, mod_consts.const_tuple_3c1865f06257b728515ed112c0cf3ec1_tuple, NULL, 5, 0, 0);
code_objects_27361a7e04bbeb0a3fb94ebe834f82b4 = MAKE_CODE_OBJECT(module_filename_obj, 333, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_html_inline, mod_consts.const_str_digest_43c2ff2d43b5e5c4492906c2889fb772, mod_consts.const_tuple_3c1865f06257b728515ed112c0cf3ec1_tuple, NULL, 5, 0, 0);
code_objects_b5c95abfac6cf03b675562ed155c82cf = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_image, mod_consts.const_str_digest_1b8c437a8c12dbd5d5eeb7d9f647a35e, mod_consts.const_tuple_6643f5f80711ed43494f37fdcd30228b_tuple, NULL, 5, 0, 0);
code_objects_0043e7dc6ba245f092d5674c02439a9e = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render, mod_consts.const_str_digest_83528ba3ea1ee4a17097a9e6a10d52a5, mod_consts.const_tuple_b993cab65cf5a90a9f284eab1cfeac09_tuple, NULL, 4, 0, 0);
code_objects_1800e99aad8cb6fcf8e37fc1b7e33cb3 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render, mod_consts.const_str_digest_92fd8d28f80c8180c7b1768732d6fbe0, mod_consts.const_tuple_1e4287eceaf276e60003f9bdb152782d_tuple, NULL, 4, 0, 0);
code_objects_608a2f29a5043f15b0849330ada2f569 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_renderAttrs, mod_consts.const_str_digest_db633ade37eb2682356864261c0743d8, mod_consts.const_tuple_40bd3669f2b23a1ebe096f8cfdec7eba_tuple, NULL, 1, 0, 0);
code_objects_10ff5c2b2bafc2ea025f91fa737899ca = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_renderInline, mod_consts.const_str_digest_8cc4047c541dc377da3e6cf6ffb5fbbd, mod_consts.const_tuple_b993cab65cf5a90a9f284eab1cfeac09_tuple, NULL, 4, 0, 0);
code_objects_857f760b8b0cd8ea7324088db49f70e4 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_renderInlineAsText, mod_consts.const_str_digest_cbf9bcbdeeda5a3f80176cc8592389dc, mod_consts.const_tuple_35be3dfb1298a9064aaeec18b1c54dbb_tuple, NULL, 4, 0, 0);
code_objects_a126dde6c0d14db8a7f6a146d0b11e05 = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_renderToken, mod_consts.const_str_digest_46cb6cd5b8d3ed0f1efe23719ffd415e, mod_consts.const_tuple_dc434f01b5838b277ea11199bb73a192_tuple, NULL, 5, 0, 0);
code_objects_3927080eeaa6fb36ba586ea551229966 = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_softbreak, mod_consts.const_str_digest_f72a7dcce83442f35139ff19ee6d6761, mod_consts.const_tuple_3c1865f06257b728515ed112c0cf3ec1_tuple, NULL, 5, 0, 0);
code_objects_e2bd8bdd1151f151b20071e9ac64d6e0 = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_text, mod_consts.const_str_digest_fc1249040b1d4b23a0f8d90c88de51e0, mod_consts.const_tuple_3c1865f06257b728515ed112c0cf3ec1_tuple, NULL, 5, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__10_fence(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__11_image(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__12_hardbreak(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__13_softbreak(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__14_text(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__15_html_block(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__16_html_inline(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__1_render(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__3_render(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__4_renderInline(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__5_renderToken(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__6_renderAttrs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__7_renderInlineAsText(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__8_code_inline(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__9_code_block(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_markdown_it$renderer$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_parser = python_pars[1];
PyObject *outline_0_var_k = NULL;
PyObject *outline_0_var_v = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_eda60045343120989fc9957e02ef3bb9, module_markdown_it$renderer, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__2___init__->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__2___init__ = cache_frame_frame_markdown_it$renderer$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__2___init__);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_markdown_it$renderer$inspect(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getmembers);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_0_1 = par_self;
tmp_expression_value_2 = module_var_accessor_markdown_it$renderer$inspect(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 61;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ismethod);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 63;
type_description_1 = "oo";
    goto try_except_handler_1;
}
frame_frame_markdown_it$renderer$$$function__2___init__->m_frame.f_lineno = 63;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_predicate_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oo";
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
type_description_1 = "oo";
exception_lineno = 61;
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


exception_lineno = 63;
type_description_1 = "oo";
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



exception_lineno = 63;
type_description_1 = "oo";
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



exception_lineno = 63;
type_description_1 = "oo";
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



exception_lineno = 63;
type_description_1 = "oo";
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
    PyObject *old = outline_0_var_k;
    outline_0_var_k = tmp_assign_source_7;
    Py_INCREF(outline_0_var_k);
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
    PyObject *old = outline_0_var_v;
    outline_0_var_v = tmp_assign_source_8;
    Py_INCREF(outline_0_var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(outline_0_var_k);
tmp_expression_value_3 = outline_0_var_k;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_startswith);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_markdown_it$renderer$$$function__2___init__->m_frame.f_lineno = 64;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_render_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 64;
type_description_1 = "oo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
CHECK_OBJECT(outline_0_var_k);
tmp_expression_value_4 = outline_0_var_k;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_startswith);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto try_except_handler_2;
}
frame_frame_markdown_it$renderer$$$function__2___init__->m_frame.f_lineno = 64;
tmp_or_right_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_underscore_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_operand_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto try_except_handler_2;
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
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_k);
tmp_dictset38_key_1 = outline_0_var_k;
CHECK_OBJECT(outline_0_var_v);
tmp_dictset38_value_1 = outline_0_var_v;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oo";
    goto try_except_handler_2;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oo";
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
Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 61;
goto frame_exception_exit_1;
outline_result_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_rules, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__2___init__,
    type_description_1,
    par_self,
    par_parser
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__2___init__ == cache_frame_frame_markdown_it$renderer$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__2___init__);
    cache_frame_frame_markdown_it$renderer$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__2___init__);

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
CHECK_OBJECT(par_parser);
Py_DECREF(par_parser);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_parser);
Py_DECREF(par_parser);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$renderer$$$function__3_render(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tokens = python_pars[1];
PyObject *par_options = python_pars[2];
PyObject *par_env = python_pars[3];
PyObject *var_result = NULL;
PyObject *var_i = NULL;
PyObject *var_token = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__3_render;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__3_render = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_str_empty;
assert(var_result == NULL);
Py_INCREF(tmp_assign_source_1);
var_result = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__3_render)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__3_render);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__3_render == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__3_render = MAKE_FUNCTION_FRAME(tstate, code_objects_0043e7dc6ba245f092d5674c02439a9e, module_markdown_it$renderer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__3_render->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__3_render = cache_frame_frame_markdown_it$renderer$$$function__3_render;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__3_render);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__3_render) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_tokens);
tmp_args_element_value_1 = par_tokens;
frame_frame_markdown_it$renderer$$$function__3_render->m_frame.f_lineno = 79;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooo";
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
type_description_1 = "ooooooo";
exception_lineno = 79;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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



exception_lineno = 79;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_7;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_token;
    var_token = tmp_assign_source_8;
    Py_INCREF(var_token);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_token);
tmp_expression_value_1 = var_token;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_type);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_inline;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooo";
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_token);
tmp_expression_value_2 = var_token;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_children);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 81;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_9;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_result;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_renderInline);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_token);
tmp_expression_value_4 = var_token;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_children);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (par_options == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_3 = par_options;
if (par_env == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_env);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_4 = par_env;
frame_frame_markdown_it$renderer$$$function__3_render->m_frame.f_lineno = 82;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = tmp_iadd_expr_left_1;
var_result = tmp_assign_source_9;

}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_token);
tmp_expression_value_5 = var_token;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_type);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_cmp_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_6 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_rules);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_2 = var_result;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_rules);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_token);
tmp_expression_value_9 = var_token;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_type);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_7);

exception_lineno = 84;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (par_tokens == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_5 = par_tokens;
CHECK_OBJECT(var_i);
tmp_args_element_value_6 = var_i;
if (par_options == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_7 = par_options;
if (par_env == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_env);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_8 = par_env;
frame_frame_markdown_it$renderer$$$function__3_render->m_frame.f_lineno = 84;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_iadd_expr_right_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = tmp_iadd_expr_left_2;
var_result = tmp_assign_source_10;

}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 86;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_3 = var_result;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 86;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_10 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_renderToken);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (par_tokens == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 86;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_9 = par_tokens;
CHECK_OBJECT(var_i);
tmp_args_element_value_10 = var_i;
if (par_options == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 86;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_11 = par_options;
if (par_env == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_env);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 86;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_12 = par_env;
frame_frame_markdown_it$renderer$$$function__3_render->m_frame.f_lineno = 86;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_iadd_expr_right_3 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_iadd_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_11 = tmp_iadd_expr_left_3;
var_result = tmp_assign_source_11;

}
branch_end_3:;
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 88;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_result;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__3_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__3_render->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__3_render, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__3_render,
    type_description_1,
    par_self,
    par_tokens,
    par_options,
    par_env,
    var_result,
    var_i,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__3_render == cache_frame_frame_markdown_it$renderer$$$function__3_render) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__3_render);
    cache_frame_frame_markdown_it$renderer$$$function__3_render = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__3_render);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_token);
var_token = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$renderer$$$function__4_renderInline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tokens = python_pars[1];
PyObject *par_options = python_pars[2];
PyObject *par_env = python_pars[3];
PyObject *var_result = NULL;
PyObject *var_i = NULL;
PyObject *var_token = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__4_renderInline;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__4_renderInline = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_str_empty;
assert(var_result == NULL);
Py_INCREF(tmp_assign_source_1);
var_result = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__4_renderInline)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__4_renderInline);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__4_renderInline == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__4_renderInline = MAKE_FUNCTION_FRAME(tstate, code_objects_10ff5c2b2bafc2ea025f91fa737899ca, module_markdown_it$renderer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__4_renderInline->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__4_renderInline = cache_frame_frame_markdown_it$renderer$$$function__4_renderInline;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__4_renderInline);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__4_renderInline) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_tokens);
tmp_args_element_value_1 = par_tokens;
frame_frame_markdown_it$renderer$$$function__4_renderInline->m_frame.f_lineno = 101;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooo";
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
type_description_1 = "ooooooo";
exception_lineno = 101;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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



exception_lineno = 101;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_7;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_token;
    var_token = tmp_assign_source_8;
    Py_INCREF(var_token);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_token);
tmp_expression_value_1 = var_token;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_type);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (par_self == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 102;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_rules);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 102;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_9;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_result;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_rules);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_token);
tmp_expression_value_5 = var_token;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_type);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_3);

exception_lineno = 103;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (par_tokens == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = par_tokens;
CHECK_OBJECT(var_i);
tmp_args_element_value_3 = var_i;
if (par_options == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_4 = par_options;
if (par_env == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_env);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_5 = par_env;
frame_frame_markdown_it$renderer$$$function__4_renderInline->m_frame.f_lineno = 103;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = tmp_iadd_expr_left_1;
var_result = tmp_assign_source_9;

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 105;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_2 = var_result;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 105;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_6 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_renderToken);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
if (par_tokens == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 105;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_6 = par_tokens;
CHECK_OBJECT(var_i);
tmp_args_element_value_7 = var_i;
if (par_options == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 105;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_8 = par_options;
if (par_env == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_env);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 105;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_9 = par_env;
frame_frame_markdown_it$renderer$$$function__4_renderInline->m_frame.f_lineno = 105;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_iadd_expr_right_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = tmp_iadd_expr_left_2;
var_result = tmp_assign_source_10;

}
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 107;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_result;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__4_renderInline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__4_renderInline->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__4_renderInline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__4_renderInline,
    type_description_1,
    par_self,
    par_tokens,
    par_options,
    par_env,
    var_result,
    var_i,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__4_renderInline == cache_frame_frame_markdown_it$renderer$$$function__4_renderInline) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__4_renderInline);
    cache_frame_frame_markdown_it$renderer$$$function__4_renderInline = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__4_renderInline);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_token);
var_token = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$renderer$$$function__5_renderToken(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tokens = python_pars[1];
PyObject *par_idx = python_pars[2];
PyObject *par_options = python_pars[3];
PyObject *par_env = python_pars[4];
PyObject *var_result = NULL;
nuitka_bool var_needLf = NUITKA_BOOL_UNASSIGNED;
PyObject *var_token = NULL;
PyObject *var_nextToken = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__5_renderToken;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__5_renderToken = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_str_empty;
assert(var_result == NULL);
Py_INCREF(tmp_assign_source_1);
var_result = tmp_assign_source_1;
}
{
nuitka_bool tmp_assign_source_2;
tmp_assign_source_2 = NUITKA_BOOL_FALSE;
var_needLf = tmp_assign_source_2;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__5_renderToken)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__5_renderToken);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__5_renderToken == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__5_renderToken = MAKE_FUNCTION_FRAME(tstate, code_objects_a126dde6c0d14db8a7f6a146d0b11e05, module_markdown_it$renderer, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__5_renderToken->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__5_renderToken = cache_frame_frame_markdown_it$renderer$$$function__5_renderToken;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__5_renderToken);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__5_renderToken) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_tokens);
tmp_expression_value_1 = par_tokens;
CHECK_OBJECT(par_idx);
tmp_subscript_value_1 = par_idx;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_token);
tmp_expression_value_2 = var_token;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_hidden);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 128;
type_description_1 = "ooooooboo";
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
tmp_return_value = const_str_empty;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
int tmp_truth_name_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_4;
CHECK_OBJECT(var_token);
tmp_expression_value_3 = var_token;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_block);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 138;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_token);
tmp_expression_value_4 = var_token;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_nesting);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_neg_1;
tmp_and_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_idx);
tmp_truth_name_3 = CHECK_IF_TRUE(par_idx);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_tokens);
tmp_expression_value_6 = par_tokens;
CHECK_OBJECT(par_idx);
tmp_sub_expr_left_1 = par_idx;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_subscript_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_hidden);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 138;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_1 = var_result;
tmp_iadd_expr_right_1 = mod_consts.const_str_newline;
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_4 = tmp_iadd_expr_left_1;
var_result = tmp_assign_source_4;

}
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_2 = var_result;
CHECK_OBJECT(var_token);
tmp_expression_value_7 = var_token;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_nesting);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_neg_1;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_add_expr_left_1 = mod_consts.const_str_digest_9e22f855d491619d56677fec5533ea95;
goto condexpr_end_1;
condexpr_false_1:;
tmp_add_expr_left_1 = mod_consts.const_str_chr_60;
condexpr_end_1:;
CHECK_OBJECT(var_token);
tmp_expression_value_8 = var_token;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_tag);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_UNICODE_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = tmp_iadd_expr_left_2;
var_result = tmp_assign_source_5;

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_3 = var_result;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_token);
tmp_args_element_value_1 = var_token;
frame_frame_markdown_it$renderer$$$function__5_renderToken->m_frame.f_lineno = 145;
tmp_iadd_expr_right_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_renderAttrs, tmp_args_element_value_1);
if (tmp_iadd_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = tmp_iadd_expr_left_3;
var_result = tmp_assign_source_6;

}
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_3;
PyObject *tmp_subscript_result_1;
int tmp_truth_name_5;
CHECK_OBJECT(var_token);
tmp_expression_value_9 = var_token;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_nesting);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_int_0;
tmp_and_left_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_and_left_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(par_options);
tmp_expression_value_10 = par_options;
tmp_subscript_value_3 = mod_consts.const_str_plain_xhtmlOut;
tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_3);
if (tmp_subscript_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_subscript_result_1);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_subscript_result_1);

exception_lineno = 148;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_4 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_subscript_result_1);
Py_DECREF(tmp_subscript_result_1);
tmp_condition_result_4 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_4 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iadd_expr_left_4;
PyObject *tmp_iadd_expr_right_4;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_4 = var_result;
tmp_iadd_expr_right_4 = mod_consts.const_str_digest_1c1d8534171c01e2acfa5f22e7740f2b;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_iadd_expr_left_4;
var_result = tmp_assign_source_7;

}
branch_no_3:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_attribute_value_4;
int tmp_truth_name_6;
CHECK_OBJECT(var_token);
tmp_expression_value_11 = var_token;
tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_block);
if (tmp_attribute_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_attribute_value_4);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_4);

exception_lineno = 152;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_4);
Py_DECREF(tmp_attribute_value_4);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_TRUE;
var_needLf = tmp_assign_source_8;
}
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_token);
tmp_expression_value_12 = var_token;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_nesting);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = const_int_pos_1;
tmp_and_left_value_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_and_left_value_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(par_idx);
tmp_add_expr_left_2 = par_idx;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_cmp_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tokens);
tmp_len_arg_1 = par_tokens;
tmp_cmp_expr_right_5 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 155;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_5 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_and_right_value_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_6 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_4;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
CHECK_OBJECT(par_tokens);
tmp_expression_value_13 = par_tokens;
CHECK_OBJECT(par_idx);
tmp_add_expr_left_3 = par_idx;
tmp_add_expr_right_3 = const_int_pos_1;
tmp_subscript_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_subscript_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
assert(var_nextToken == NULL);
var_nextToken = tmp_assign_source_9;
}
{
nuitka_bool tmp_condition_result_7;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_attribute_value_5;
int tmp_truth_name_7;
CHECK_OBJECT(var_nextToken);
tmp_expression_value_14 = var_nextToken;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_type);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = mod_consts.const_str_plain_inline;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_nextToken);
tmp_expression_value_15 = var_nextToken;
tmp_attribute_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_hidden);
if (tmp_attribute_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_attribute_value_5);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_5);

exception_lineno = 158;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_5);
Py_DECREF(tmp_attribute_value_5);
tmp_condition_result_7 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_7 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
var_needLf = tmp_assign_source_10;
}
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_6;
nuitka_bool tmp_and_left_value_6;
nuitka_bool tmp_and_right_value_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(var_nextToken);
tmp_expression_value_16 = var_nextToken;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_nesting);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = const_int_neg_1;
tmp_and_left_value_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_and_left_value_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(var_nextToken);
tmp_expression_value_17 = var_nextToken;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_tag);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token);
tmp_expression_value_18 = var_token;
tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_tag);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 163;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_and_right_value_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_condition_result_8 = tmp_and_left_value_6;
and_end_6:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
var_needLf = tmp_assign_source_11;
}
branch_no_7:;
branch_end_6:;
branch_no_5:;
branch_no_4:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iadd_expr_left_5;
PyObject *tmp_iadd_expr_right_5;
bool tmp_condition_result_9;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_5 = var_result;
assert(var_needLf != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_9 = var_needLf == NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_iadd_expr_right_5 = mod_consts.const_str_digest_42aaa86f3155a0ac9064d3ba1116a0c9;
goto condexpr_end_2;
condexpr_false_2:;
tmp_iadd_expr_right_5 = mod_consts.const_str_chr_62;
condexpr_end_2:;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooboo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = tmp_iadd_expr_left_5;
var_result = tmp_assign_source_12;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__5_renderToken, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__5_renderToken->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__5_renderToken, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__5_renderToken,
    type_description_1,
    par_self,
    par_tokens,
    par_idx,
    par_options,
    par_env,
    var_result,
    (int)var_needLf,
    var_token,
    var_nextToken
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__5_renderToken == cache_frame_frame_markdown_it$renderer$$$function__5_renderToken) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__5_renderToken);
    cache_frame_frame_markdown_it$renderer$$$function__5_renderToken = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__5_renderToken);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_result);
tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
assert(var_needLf != NUITKA_BOOL_UNASSIGNED);
var_needLf = NUITKA_BOOL_UNASSIGNED;
CHECK_OBJECT(var_token);
CHECK_OBJECT(var_token);
Py_DECREF(var_token);
var_token = NULL;
Py_XDECREF(var_nextToken);
var_nextToken = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
assert(var_needLf != NUITKA_BOOL_UNASSIGNED);
var_needLf = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_nextToken);
var_nextToken = NULL;
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
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$renderer$$$function__6_renderAttrs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_token = python_pars[0];
PyObject *var_result = NULL;
PyObject *var_key = NULL;
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__6_renderAttrs;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__6_renderAttrs = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_str_empty;
assert(var_result == NULL);
Py_INCREF(tmp_assign_source_1);
var_result = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__6_renderAttrs)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__6_renderAttrs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__6_renderAttrs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__6_renderAttrs = MAKE_FUNCTION_FRAME(tstate, code_objects_608a2f29a5043f15b0849330ada2f569, module_markdown_it$renderer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__6_renderAttrs->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__6_renderAttrs = cache_frame_frame_markdown_it$renderer$$$function__6_renderAttrs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__6_renderAttrs);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__6_renderAttrs) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_token);
tmp_called_instance_1 = par_token;
frame_frame_markdown_it$renderer$$$function__6_renderAttrs->m_frame.f_lineno = 177;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_attrItems);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooo";
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
type_description_1 = "oooo";
exception_lineno = 177;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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



exception_lineno = 177;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_7;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_8;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_unicode_arg_1;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 178;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_result;
tmp_add_expr_left_4 = mod_consts.const_str_space;
tmp_called_value_1 = module_var_accessor_markdown_it$renderer$escapeHtml(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_escapeHtml);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_key);
tmp_args_element_value_1 = var_key;
frame_frame_markdown_it$renderer$$$function__6_renderAttrs->m_frame.f_lineno = 178;
tmp_add_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_3 = mod_consts.const_str_digest_2e8882d8bbcd93a52fcc62a27ccbb2f5;
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = module_var_accessor_markdown_it$renderer$escapeHtml(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_escapeHtml);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 178;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_value);
tmp_unicode_arg_1 = var_value;
tmp_args_element_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 178;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_markdown_it$renderer$$$function__6_renderAttrs->m_frame.f_lineno = 178;
tmp_add_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 178;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_1 = mod_consts.const_str_chr_34;
tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = tmp_iadd_expr_left_1;
var_result = tmp_assign_source_9;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_result;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__6_renderAttrs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__6_renderAttrs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__6_renderAttrs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__6_renderAttrs,
    type_description_1,
    par_token,
    var_result,
    var_key,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__6_renderAttrs == cache_frame_frame_markdown_it$renderer$$$function__6_renderAttrs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__6_renderAttrs);
    cache_frame_frame_markdown_it$renderer$$$function__6_renderAttrs = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__6_renderAttrs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_value);
var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_token);
Py_DECREF(par_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$renderer$$$function__7_renderInlineAsText(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tokens = python_pars[1];
PyObject *par_options = python_pars[2];
PyObject *par_env = python_pars[3];
PyObject *var_result = NULL;
PyObject *var_token = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_str_empty;
assert(var_result == NULL);
Py_INCREF(tmp_assign_source_1);
var_result = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText = MAKE_FUNCTION_FRAME(tstate, code_objects_857f760b8b0cd8ea7324088db49f70e4, module_markdown_it$renderer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText = cache_frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
CHECK_OBJECT(par_tokens);
tmp_or_left_value_1 = par_tokens;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_LIST_EMPTY(tstate, 0);
tmp_iter_arg_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_iter_arg_1 = tmp_or_left_value_1;
or_end_1:;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooo";
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
type_description_1 = "oooooo";
exception_lineno = 199;
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
    PyObject *old = var_token;
    var_token = tmp_assign_source_4;
    Py_INCREF(var_token);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_token);
tmp_expression_value_1 = var_token;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_type);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_text;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_5;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_expression_value_2;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 201;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_result;
CHECK_OBJECT(var_token);
tmp_expression_value_2 = var_token;
tmp_iadd_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_content);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_5 = tmp_iadd_expr_left_1;
var_result = tmp_assign_source_5;

}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_token);
tmp_expression_value_3 = var_token;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_type);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_image;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_token);
tmp_expression_value_4 = var_token;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_children);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 203;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 204;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_2 = var_result;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 204;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_renderInlineAsText);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_token);
tmp_expression_value_6 = var_token;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_children);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 204;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (par_options == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 204;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = par_options;
if (par_env == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_env);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 204;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_3 = par_env;
frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText->m_frame.f_lineno = 204;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_iadd_expr_right_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_6 = tmp_iadd_expr_left_2;
var_result = tmp_assign_source_6;

}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_token);
tmp_expression_value_7 = var_token;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_type);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_softbreak;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 206;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_3 = var_result;
tmp_iadd_expr_right_3 = mod_consts.const_str_newline;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = tmp_iadd_expr_left_3;
var_result = tmp_assign_source_7;

}
branch_no_4:;
branch_end_2:;
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooo";
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
if (var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 208;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_result;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText,
    type_description_1,
    par_self,
    par_tokens,
    par_options,
    par_env,
    var_result,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText == cache_frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText);
    cache_frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__7_renderInlineAsText);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_token);
var_token = NULL;
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
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$renderer$$$function__8_code_inline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tokens = python_pars[1];
PyObject *par_idx = python_pars[2];
PyObject *par_options = python_pars[3];
PyObject *par_env = python_pars[4];
PyObject *var_token = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__8_code_inline;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__8_code_inline = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__8_code_inline)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__8_code_inline);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__8_code_inline == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__8_code_inline = MAKE_FUNCTION_FRAME(tstate, code_objects_80520eb9cf423e50d407efc4f2b438ff, module_markdown_it$renderer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__8_code_inline->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__8_code_inline = cache_frame_frame_markdown_it$renderer$$$function__8_code_inline;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__8_code_inline);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__8_code_inline) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_tokens);
tmp_expression_value_1 = par_tokens;
CHECK_OBJECT(par_idx);
tmp_subscript_value_1 = par_idx;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_1;
}
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
tmp_add_expr_left_4 = mod_consts.const_str_digest_7dc32b87873ff713e10049b1f8782582;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_token);
tmp_args_element_value_1 = var_token;
frame_frame_markdown_it$renderer$$$function__8_code_inline->m_frame.f_lineno = 218;
tmp_add_expr_right_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_renderAttrs, tmp_args_element_value_1);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = mod_consts.const_str_chr_62;
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = module_var_accessor_markdown_it$renderer$escapeHtml(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_escapeHtml);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 220;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tokens);
tmp_expression_value_3 = par_tokens;
CHECK_OBJECT(par_idx);
tmp_subscript_value_2 = par_idx;
tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 220;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 220;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$renderer$$$function__8_code_inline->m_frame.f_lineno = 220;
tmp_add_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 220;
type_description_1 = "oooooo";
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


exception_lineno = 220;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_digest_0644f7ae173b99105ec9f8acaaff1521;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__8_code_inline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__8_code_inline->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__8_code_inline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__8_code_inline,
    type_description_1,
    par_self,
    par_tokens,
    par_idx,
    par_options,
    par_env,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__8_code_inline == cache_frame_frame_markdown_it$renderer$$$function__8_code_inline) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__8_code_inline);
    cache_frame_frame_markdown_it$renderer$$$function__8_code_inline = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__8_code_inline);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_token);
CHECK_OBJECT(var_token);
Py_DECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_token);
var_token = NULL;
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
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$renderer$$$function__9_code_block(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tokens = python_pars[1];
PyObject *par_idx = python_pars[2];
PyObject *par_options = python_pars[3];
PyObject *par_env = python_pars[4];
PyObject *var_token = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__9_code_block;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__9_code_block = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__9_code_block)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__9_code_block);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__9_code_block == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__9_code_block = MAKE_FUNCTION_FRAME(tstate, code_objects_a61ff1abb823da3eeab0a75ce1758c7f, module_markdown_it$renderer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__9_code_block->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__9_code_block = cache_frame_frame_markdown_it$renderer$$$function__9_code_block;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__9_code_block);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__9_code_block) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_tokens);
tmp_expression_value_1 = par_tokens;
CHECK_OBJECT(par_idx);
tmp_subscript_value_1 = par_idx;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_1;
}
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
tmp_add_expr_left_4 = mod_consts.const_str_digest_e1243cc9991b8bc4862adf36a66a8eb9;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_token);
tmp_args_element_value_1 = var_token;
frame_frame_markdown_it$renderer$$$function__9_code_block->m_frame.f_lineno = 235;
tmp_add_expr_right_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_renderAttrs, tmp_args_element_value_1);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = mod_consts.const_str_digest_6be79a6d76655c48f6b4a5d2cc3de598;
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = module_var_accessor_markdown_it$renderer$escapeHtml(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_escapeHtml);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 237;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tokens);
tmp_expression_value_3 = par_tokens;
CHECK_OBJECT(par_idx);
tmp_subscript_value_2 = par_idx;
tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 237;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 237;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$renderer$$$function__9_code_block->m_frame.f_lineno = 237;
tmp_add_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 237;
type_description_1 = "oooooo";
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


exception_lineno = 237;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_digest_b8846411a42672a24c92dc5ef1b37343;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__9_code_block, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__9_code_block->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__9_code_block, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__9_code_block,
    type_description_1,
    par_self,
    par_tokens,
    par_idx,
    par_options,
    par_env,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__9_code_block == cache_frame_frame_markdown_it$renderer$$$function__9_code_block) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__9_code_block);
    cache_frame_frame_markdown_it$renderer$$$function__9_code_block = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__9_code_block);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_token);
CHECK_OBJECT(var_token);
Py_DECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_token);
var_token = NULL;
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
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$renderer$$$function__10_fence(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tokens = python_pars[1];
PyObject *par_idx = python_pars[2];
PyObject *par_options = python_pars[3];
PyObject *par_env = python_pars[4];
PyObject *var_token = NULL;
PyObject *var_info = NULL;
PyObject *var_langName = NULL;
PyObject *var_langAttrs = NULL;
PyObject *var_arr = NULL;
PyObject *var_highlighted = NULL;
PyObject *var_tmpToken = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__10_fence;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__10_fence = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__10_fence)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__10_fence);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__10_fence == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__10_fence = MAKE_FUNCTION_FRAME(tstate, code_objects_d8d72091607795e6a0b3d526d574c9e3, module_markdown_it$renderer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__10_fence->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__10_fence = cache_frame_frame_markdown_it$renderer$$$function__10_fence;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__10_fence);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__10_fence) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_tokens);
tmp_expression_value_1 = par_tokens;
CHECK_OBJECT(par_idx);
tmp_subscript_value_1 = par_idx;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_token);
tmp_expression_value_2 = var_token;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_info);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 249;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_2 = module_var_accessor_markdown_it$renderer$unescapeAll(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unescapeAll);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token);
tmp_expression_value_4 = var_token;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_info);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$renderer$$$function__10_fence->m_frame.f_lineno = 249;
tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$renderer$$$function__10_fence->m_frame.f_lineno = 249;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_2 = const_str_empty;
Py_INCREF(tmp_assign_source_2);
condexpr_end_1:;
assert(var_info == NULL);
var_info = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_str_empty;
assert(var_langName == NULL);
Py_INCREF(tmp_assign_source_3);
var_langName = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = const_str_empty;
assert(var_langAttrs == NULL);
Py_INCREF(tmp_assign_source_4);
var_langAttrs = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_info);
tmp_truth_name_2 = CHECK_IF_TRUE(var_info);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_info);
tmp_expression_value_5 = var_info;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_split);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$renderer$$$function__10_fence->m_frame.f_lineno = 254;
tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0), mod_consts.const_tuple_str_plain_maxsplit_tuple);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_arr == NULL);
var_arr = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_arr);
tmp_expression_value_6 = var_arr;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 0);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_langName;
    assert(old != NULL);
    var_langName = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_arr);
tmp_len_arg_1 = var_arr;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 2;
tmp_condition_result_3 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_arr);
tmp_expression_value_7 = var_arr;
tmp_subscript_value_3 = const_int_pos_1;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_langAttrs;
    assert(old != NULL);
    var_langAttrs = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_no_2:;
branch_no_1:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_3;
CHECK_OBJECT(par_options);
tmp_expression_value_8 = par_options;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_highlight);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 259;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_8;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_options);
tmp_expression_value_9 = par_options;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_highlight);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token);
tmp_expression_value_10 = var_token;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_content);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 261;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_langName);
tmp_args_element_value_3 = var_langName;
CHECK_OBJECT(var_langAttrs);
tmp_args_element_value_4 = var_langAttrs;
frame_frame_markdown_it$renderer$$$function__10_fence->m_frame.f_lineno = 260;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_or_left_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 260;
type_description_1 = "oooooooooooo";
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
tmp_called_value_5 = module_var_accessor_markdown_it$renderer$escapeHtml(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_escapeHtml);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token);
tmp_expression_value_11 = var_token;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_content);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$renderer$$$function__10_fence->m_frame.f_lineno = 262;
tmp_or_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_8 = tmp_or_left_value_1;
or_end_1:;
assert(var_highlighted == NULL);
var_highlighted = tmp_assign_source_8;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_12;
tmp_called_value_6 = module_var_accessor_markdown_it$renderer$escapeHtml(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_escapeHtml);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token);
tmp_expression_value_12 = var_token;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_content);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$renderer$$$function__10_fence->m_frame.f_lineno = 264;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_highlighted == NULL);
var_highlighted = tmp_assign_source_9;
}
branch_end_3:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_1;
int tmp_truth_name_4;
CHECK_OBJECT(var_highlighted);
tmp_expression_value_13 = var_highlighted;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_startswith);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$renderer$$$function__10_fence->m_frame.f_lineno = 266;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_digest_e1243cc9991b8bc4862adf36a66a8eb9_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 266;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_highlighted);
tmp_add_expr_left_1 = var_highlighted;
tmp_add_expr_right_1 = mod_consts.const_str_newline;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_5;
CHECK_OBJECT(var_info);
tmp_truth_name_5 = CHECK_IF_TRUE(var_info);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
tmp_called_value_8 = module_var_accessor_markdown_it$renderer$Token(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Token);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = const_str_empty;
tmp_kw_call_value_1_1 = const_str_empty;
tmp_kw_call_value_2_1 = const_int_0;
CHECK_OBJECT(var_token);
tmp_expression_value_15 = var_token;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_attrs);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$renderer$$$function__10_fence->m_frame.f_lineno = 274;
tmp_kw_call_value_3_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$renderer$$$function__10_fence->m_frame.f_lineno = 274;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_assign_source_10 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts.const_tuple_61de0f85c8871d1a55c29d10245f8fe4_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_tmpToken == NULL);
var_tmpToken = tmp_assign_source_10;
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(var_tmpToken);
tmp_expression_value_16 = var_tmpToken;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_attrJoin);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = mod_consts.const_str_plain_class;
CHECK_OBJECT(par_options);
tmp_expression_value_17 = par_options;
tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_langPrefix);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 275;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_langName);
tmp_add_expr_right_2 = var_langName;
tmp_args_element_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 275;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$renderer$$$function__10_fence->m_frame.f_lineno = 275;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_9;
tmp_add_expr_left_6 = mod_consts.const_str_digest_6a8e86214fb805d68eb24b05abddaed3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_tmpToken);
tmp_args_element_value_9 = var_tmpToken;
frame_frame_markdown_it$renderer$$$function__10_fence->m_frame.f_lineno = 279;
tmp_add_expr_right_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_renderAttrs, tmp_args_element_value_9);
if (tmp_add_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_right_6);
Py_DECREF(tmp_add_expr_right_6);
if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_5 = mod_consts.const_str_chr_62;
tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_highlighted);
tmp_add_expr_right_4 = var_highlighted;
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = mod_consts.const_str_digest_b8846411a42672a24c92dc5ef1b37343;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_5:;
{
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
PyObject *tmp_add_expr_left_10;
PyObject *tmp_add_expr_right_10;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_10;
tmp_add_expr_left_10 = mod_consts.const_str_digest_6a8e86214fb805d68eb24b05abddaed3;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_token);
tmp_args_element_value_10 = var_token;
frame_frame_markdown_it$renderer$$$function__10_fence->m_frame.f_lineno = 287;
tmp_add_expr_right_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_renderAttrs, tmp_args_element_value_10);
if (tmp_add_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
CHECK_OBJECT(tmp_add_expr_right_10);
Py_DECREF(tmp_add_expr_right_10);
if (tmp_add_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_9 = mod_consts.const_str_chr_62;
tmp_add_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_9, tmp_add_expr_right_9);
CHECK_OBJECT(tmp_add_expr_left_9);
Py_DECREF(tmp_add_expr_left_9);
if (tmp_add_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_highlighted);
tmp_add_expr_right_8 = var_highlighted;
tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
CHECK_OBJECT(tmp_add_expr_left_8);
Py_DECREF(tmp_add_expr_left_8);
if (tmp_add_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_7 = mod_consts.const_str_digest_b8846411a42672a24c92dc5ef1b37343;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_left_7);
Py_DECREF(tmp_add_expr_left_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__10_fence, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__10_fence->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__10_fence, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__10_fence,
    type_description_1,
    par_self,
    par_tokens,
    par_idx,
    par_options,
    par_env,
    var_token,
    var_info,
    var_langName,
    var_langAttrs,
    var_arr,
    var_highlighted,
    var_tmpToken
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__10_fence == cache_frame_frame_markdown_it$renderer$$$function__10_fence) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__10_fence);
    cache_frame_frame_markdown_it$renderer$$$function__10_fence = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__10_fence);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_token);
CHECK_OBJECT(var_token);
Py_DECREF(var_token);
var_token = NULL;
CHECK_OBJECT(var_info);
CHECK_OBJECT(var_info);
Py_DECREF(var_info);
var_info = NULL;
CHECK_OBJECT(var_langName);
CHECK_OBJECT(var_langName);
Py_DECREF(var_langName);
var_langName = NULL;
CHECK_OBJECT(var_langAttrs);
CHECK_OBJECT(var_langAttrs);
Py_DECREF(var_langAttrs);
var_langAttrs = NULL;
Py_XDECREF(var_arr);
var_arr = NULL;
CHECK_OBJECT(var_highlighted);
CHECK_OBJECT(var_highlighted);
Py_DECREF(var_highlighted);
var_highlighted = NULL;
Py_XDECREF(var_tmpToken);
var_tmpToken = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_info);
var_info = NULL;
Py_XDECREF(var_langName);
var_langName = NULL;
Py_XDECREF(var_langAttrs);
var_langAttrs = NULL;
Py_XDECREF(var_arr);
var_arr = NULL;
Py_XDECREF(var_highlighted);
var_highlighted = NULL;
Py_XDECREF(var_tmpToken);
var_tmpToken = NULL;
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
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$renderer$$$function__11_image(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tokens = python_pars[1];
PyObject *par_idx = python_pars[2];
PyObject *par_options = python_pars[3];
PyObject *par_env = python_pars[4];
PyObject *var_token = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__11_image;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__11_image = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__11_image)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__11_image);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__11_image == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__11_image = MAKE_FUNCTION_FRAME(tstate, code_objects_b5c95abfac6cf03b675562ed155c82cf, module_markdown_it$renderer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__11_image->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__11_image = cache_frame_frame_markdown_it$renderer$$$function__11_image;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__11_image);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__11_image) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_tokens);
tmp_expression_value_1 = par_tokens;
CHECK_OBJECT(par_idx);
tmp_subscript_value_1 = par_idx;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_token);
tmp_expression_value_2 = var_token;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_children);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 304;
type_description_1 = "oooooo";
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
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_token);
tmp_expression_value_3 = var_token;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_attrSet);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_alt;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_renderInlineAsText);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 305;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token);
tmp_expression_value_5 = var_token;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_children);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 305;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_options);
tmp_args_element_value_4 = par_options;
CHECK_OBJECT(par_env);
tmp_args_element_value_5 = par_env;
frame_frame_markdown_it$renderer$$$function__11_image->m_frame.f_lineno = 305;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 305;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$renderer$$$function__11_image->m_frame.f_lineno = 305;
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


exception_lineno = 305;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_token);
tmp_called_instance_1 = var_token;
frame_frame_markdown_it$renderer$$$function__11_image->m_frame.f_lineno = 307;
tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_attrSet,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_alt_str_empty_tuple, 0)
);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_tokens);
tmp_args_element_value_6 = par_tokens;
CHECK_OBJECT(par_idx);
tmp_args_element_value_7 = par_idx;
CHECK_OBJECT(par_options);
tmp_args_element_value_8 = par_options;
CHECK_OBJECT(par_env);
tmp_args_element_value_9 = par_env;
frame_frame_markdown_it$renderer$$$function__11_image->m_frame.f_lineno = 309;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_return_value = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_renderToken,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__11_image, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__11_image->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__11_image, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__11_image,
    type_description_1,
    par_self,
    par_tokens,
    par_idx,
    par_options,
    par_env,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__11_image == cache_frame_frame_markdown_it$renderer$$$function__11_image) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__11_image);
    cache_frame_frame_markdown_it$renderer$$$function__11_image = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__11_image);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_token);
CHECK_OBJECT(var_token);
Py_DECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_token);
var_token = NULL;
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
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$renderer$$$function__12_hardbreak(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tokens = python_pars[1];
PyObject *par_idx = python_pars[2];
PyObject *par_options = python_pars[3];
PyObject *par_env = python_pars[4];
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__12_hardbreak;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__12_hardbreak = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__12_hardbreak)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__12_hardbreak);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__12_hardbreak == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__12_hardbreak = MAKE_FUNCTION_FRAME(tstate, code_objects_66ff671d80112cc0d829aedf6faaa898, module_markdown_it$renderer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__12_hardbreak->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__12_hardbreak = cache_frame_frame_markdown_it$renderer$$$function__12_hardbreak;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__12_hardbreak);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__12_hardbreak) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_options);
tmp_expression_value_1 = par_options;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_xhtmlOut);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 314;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_return_value = mod_consts.const_str_digest_38c0ff2a80dd3e01d944df9325ebd11e;
goto condexpr_end_1;
condexpr_false_1:;
tmp_return_value = mod_consts.const_str_digest_f11aa08b38cc4c099a9a7693031fcc55;
condexpr_end_1:;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__12_hardbreak, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__12_hardbreak->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__12_hardbreak, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__12_hardbreak,
    type_description_1,
    par_self,
    par_tokens,
    par_idx,
    par_options,
    par_env
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__12_hardbreak == cache_frame_frame_markdown_it$renderer$$$function__12_hardbreak) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__12_hardbreak);
    cache_frame_frame_markdown_it$renderer$$$function__12_hardbreak = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__12_hardbreak);

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
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$renderer$$$function__13_softbreak(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tokens = python_pars[1];
PyObject *par_idx = python_pars[2];
PyObject *par_options = python_pars[3];
PyObject *par_env = python_pars[4];
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__13_softbreak;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__13_softbreak = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__13_softbreak)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__13_softbreak);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__13_softbreak == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__13_softbreak = MAKE_FUNCTION_FRAME(tstate, code_objects_3927080eeaa6fb36ba586ea551229966, module_markdown_it$renderer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__13_softbreak->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__13_softbreak = cache_frame_frame_markdown_it$renderer$$$function__13_softbreak;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__13_softbreak);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__13_softbreak) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_options);
tmp_expression_value_1 = par_options;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_breaks);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 320;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_options);
tmp_expression_value_2 = par_options;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_xhtmlOut);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 320;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_return_value = mod_consts.const_str_digest_38c0ff2a80dd3e01d944df9325ebd11e;
goto condexpr_end_2;
condexpr_false_2:;
tmp_return_value = mod_consts.const_str_digest_f11aa08b38cc4c099a9a7693031fcc55;
condexpr_end_2:;
goto condexpr_end_1;
condexpr_false_1:;
tmp_return_value = mod_consts.const_str_newline;
condexpr_end_1:;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__13_softbreak, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__13_softbreak->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__13_softbreak, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__13_softbreak,
    type_description_1,
    par_self,
    par_tokens,
    par_idx,
    par_options,
    par_env
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__13_softbreak == cache_frame_frame_markdown_it$renderer$$$function__13_softbreak) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__13_softbreak);
    cache_frame_frame_markdown_it$renderer$$$function__13_softbreak = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__13_softbreak);

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
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$renderer$$$function__14_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tokens = python_pars[1];
PyObject *par_idx = python_pars[2];
PyObject *par_options = python_pars[3];
PyObject *par_env = python_pars[4];
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__14_text;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__14_text = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__14_text)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__14_text);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__14_text == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__14_text = MAKE_FUNCTION_FRAME(tstate, code_objects_e2bd8bdd1151f151b20071e9ac64d6e0, module_markdown_it$renderer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__14_text->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__14_text = cache_frame_frame_markdown_it$renderer$$$function__14_text;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__14_text);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__14_text) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_called_value_1 = module_var_accessor_markdown_it$renderer$escapeHtml(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_escapeHtml);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 326;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_tokens);
tmp_expression_value_2 = par_tokens;
CHECK_OBJECT(par_idx);
tmp_subscript_value_1 = par_idx;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$renderer$$$function__14_text->m_frame.f_lineno = 326;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__14_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__14_text->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__14_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__14_text,
    type_description_1,
    par_self,
    par_tokens,
    par_idx,
    par_options,
    par_env
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__14_text == cache_frame_frame_markdown_it$renderer$$$function__14_text) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__14_text);
    cache_frame_frame_markdown_it$renderer$$$function__14_text = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__14_text);

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
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$renderer$$$function__15_html_block(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tokens = python_pars[1];
PyObject *par_idx = python_pars[2];
PyObject *par_options = python_pars[3];
PyObject *par_env = python_pars[4];
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__15_html_block;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__15_html_block = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__15_html_block)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__15_html_block);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__15_html_block == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__15_html_block = MAKE_FUNCTION_FRAME(tstate, code_objects_426ef0d45731f1d3becab121d4c845ec, module_markdown_it$renderer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__15_html_block->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__15_html_block = cache_frame_frame_markdown_it$renderer$$$function__15_html_block;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__15_html_block);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__15_html_block) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_tokens);
tmp_expression_value_2 = par_tokens;
CHECK_OBJECT(par_idx);
tmp_subscript_value_1 = par_idx;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__15_html_block, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__15_html_block->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__15_html_block, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__15_html_block,
    type_description_1,
    par_self,
    par_tokens,
    par_idx,
    par_options,
    par_env
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__15_html_block == cache_frame_frame_markdown_it$renderer$$$function__15_html_block) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__15_html_block);
    cache_frame_frame_markdown_it$renderer$$$function__15_html_block = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__15_html_block);

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
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$renderer$$$function__16_html_inline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_tokens = python_pars[1];
PyObject *par_idx = python_pars[2];
PyObject *par_options = python_pars[3];
PyObject *par_env = python_pars[4];
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$function__16_html_inline;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$renderer$$$function__16_html_inline = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_markdown_it$renderer$$$function__16_html_inline)) {
    Py_XDECREF(cache_frame_frame_markdown_it$renderer$$$function__16_html_inline);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$renderer$$$function__16_html_inline == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$renderer$$$function__16_html_inline = MAKE_FUNCTION_FRAME(tstate, code_objects_27361a7e04bbeb0a3fb94ebe834f82b4, module_markdown_it$renderer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$renderer$$$function__16_html_inline->m_type_description == NULL);
frame_frame_markdown_it$renderer$$$function__16_html_inline = cache_frame_frame_markdown_it$renderer$$$function__16_html_inline;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$function__16_html_inline);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$function__16_html_inline) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_tokens);
tmp_expression_value_2 = par_tokens;
CHECK_OBJECT(par_idx);
tmp_subscript_value_1 = par_idx;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$function__16_html_inline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$function__16_html_inline->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$function__16_html_inline, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$function__16_html_inline,
    type_description_1,
    par_self,
    par_tokens,
    par_idx,
    par_options,
    par_env
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$renderer$$$function__16_html_inline == cache_frame_frame_markdown_it$renderer$$$function__16_html_inline) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$renderer$$$function__16_html_inline);
    cache_frame_frame_markdown_it$renderer$$$function__16_html_inline = NULL;
}

assertFrameObject(frame_frame_markdown_it$renderer$$$function__16_html_inline);

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
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_tokens);
Py_DECREF(par_tokens);
CHECK_OBJECT(par_idx);
Py_DECREF(par_idx);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__10_fence(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__10_fence,
        mod_consts.const_str_plain_fence,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5c4e8299af5c112aa0381e89a45fb072,
#endif
        code_objects_d8d72091607795e6a0b3d526d574c9e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__11_image(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__11_image,
        mod_consts.const_str_plain_image,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1b8c437a8c12dbd5d5eeb7d9f647a35e,
#endif
        code_objects_b5c95abfac6cf03b675562ed155c82cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__12_hardbreak(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__12_hardbreak,
        mod_consts.const_str_plain_hardbreak,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_971239d53f051fa16a82596d511a46a7,
#endif
        code_objects_66ff671d80112cc0d829aedf6faaa898,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__13_softbreak(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__13_softbreak,
        mod_consts.const_str_plain_softbreak,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f72a7dcce83442f35139ff19ee6d6761,
#endif
        code_objects_3927080eeaa6fb36ba586ea551229966,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__14_text(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__14_text,
        mod_consts.const_str_plain_text,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fc1249040b1d4b23a0f8d90c88de51e0,
#endif
        code_objects_e2bd8bdd1151f151b20071e9ac64d6e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__15_html_block(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__15_html_block,
        mod_consts.const_str_plain_html_block,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e0718f2335fdb6c91c1e71e614e550dc,
#endif
        code_objects_426ef0d45731f1d3becab121d4c845ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__16_html_inline(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__16_html_inline,
        mod_consts.const_str_plain_html_inline,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_43c2ff2d43b5e5c4492906c2889fb772,
#endif
        code_objects_27361a7e04bbeb0a3fb94ebe834f82b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__1_render(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_render,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_92fd8d28f80c8180c7b1768732d6fbe0,
#endif
        code_objects_1800e99aad8cb6fcf8e37fc1b7e33cb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_608cc58d79b2441721a13d469839a30d,
#endif
        code_objects_eda60045343120989fc9957e02ef3bb9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__3_render(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__3_render,
        mod_consts.const_str_plain_render,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_83528ba3ea1ee4a17097a9e6a10d52a5,
#endif
        code_objects_0043e7dc6ba245f092d5674c02439a9e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        mod_consts.const_str_digest_1b4f07f36cb10d2a09e5a5719c90ea5b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__4_renderInline(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__4_renderInline,
        mod_consts.const_str_plain_renderInline,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8cc4047c541dc377da3e6cf6ffb5fbbd,
#endif
        code_objects_10ff5c2b2bafc2ea025f91fa737899ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        mod_consts.const_str_digest_85d18a56326a0969029c3e46e55ffa4f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__5_renderToken(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__5_renderToken,
        mod_consts.const_str_plain_renderToken,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_46cb6cd5b8d3ed0f1efe23719ffd415e,
#endif
        code_objects_a126dde6c0d14db8a7f6a146d0b11e05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        mod_consts.const_str_digest_f33adb4d86ed1d598333980692f02b05,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__6_renderAttrs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__6_renderAttrs,
        mod_consts.const_str_plain_renderAttrs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_db633ade37eb2682356864261c0743d8,
#endif
        code_objects_608a2f29a5043f15b0849330ada2f569,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        mod_consts.const_str_digest_f352d3cf402325d0aab3d498b0b15025,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__7_renderInlineAsText(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__7_renderInlineAsText,
        mod_consts.const_str_plain_renderInlineAsText,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cbf9bcbdeeda5a3f80176cc8592389dc,
#endif
        code_objects_857f760b8b0cd8ea7324088db49f70e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        mod_consts.const_str_digest_a2d508afe53deba1afd4357176c4bbdd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__8_code_inline(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__8_code_inline,
        mod_consts.const_str_plain_code_inline,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1a88f0b86ba3288e117e2c41325b37fc,
#endif
        code_objects_80520eb9cf423e50d407efc4f2b438ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$renderer$$$function__9_code_block(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$renderer$$$function__9_code_block,
        mod_consts.const_str_plain_code_block,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_33619fc2a99981e1e6739c7a183a4398,
#endif
        code_objects_a61ff1abb823da3eeab0a75ce1758c7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$renderer,
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

static function_impl_code const function_table_markdown_it$renderer[] = {
impl_markdown_it$renderer$$$function__2___init__,
impl_markdown_it$renderer$$$function__3_render,
impl_markdown_it$renderer$$$function__4_renderInline,
impl_markdown_it$renderer$$$function__5_renderToken,
impl_markdown_it$renderer$$$function__6_renderAttrs,
impl_markdown_it$renderer$$$function__7_renderInlineAsText,
impl_markdown_it$renderer$$$function__8_code_inline,
impl_markdown_it$renderer$$$function__9_code_block,
impl_markdown_it$renderer$$$function__10_fence,
impl_markdown_it$renderer$$$function__11_image,
impl_markdown_it$renderer$$$function__12_hardbreak,
impl_markdown_it$renderer$$$function__13_softbreak,
impl_markdown_it$renderer$$$function__14_text,
impl_markdown_it$renderer$$$function__15_html_block,
impl_markdown_it$renderer$$$function__16_html_inline,
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

    return Nuitka_Function_GetFunctionState(function, function_table_markdown_it$renderer);
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
        module_markdown_it$renderer,
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
        function_table_markdown_it$renderer,
        sizeof(function_table_markdown_it$renderer) / sizeof(function_impl_code)
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
static char const *module_full_name = "markdown_it.renderer";
#endif

// Internal entry point for module code.
PyObject *module_code_markdown_it$renderer(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("markdown_it$renderer");

    // Store the module for future use.
    module_markdown_it$renderer = module;

    moduledict_markdown_it$renderer = MODULE_DICT(module_markdown_it$renderer);

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
        PRINT_STRING("markdown_it$renderer: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("markdown_it$renderer: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("markdown_it$renderer: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.renderer" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmarkdown_it$renderer\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_markdown_it$renderer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_markdown_it$renderer,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_markdown_it$renderer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$renderer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$renderer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_markdown_it$renderer);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_markdown_it$renderer);
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

        UPDATE_STRING_DICT1(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer;
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
PyObject *locals_markdown_it$renderer$$$class__1_RendererProtocol_20 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$class__1_RendererProtocol_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_markdown_it$renderer$$$class__2_RendererHTML_28 = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$renderer$$$class__2_RendererHTML_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_949089e2165dbec32ad8dbd204407c81;
UPDATE_STRING_DICT0(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_markdown_it$renderer = MAKE_MODULE_FRAME(code_objects_109d5ea0d9cbc7686ec747fe6df8ad26, module_markdown_it$renderer);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer);
assert(Py_REFCNT(frame_frame_markdown_it$renderer) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_markdown_it$renderer$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_markdown_it$renderer$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_markdown_it$renderer;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Sequence_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_markdown_it$renderer->m_frame.f_lineno = 11;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_markdown_it$renderer,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Sequence);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_plain_inspect;
tmp_globals_arg_value_2 = (PyObject *)moduledict_markdown_it$renderer;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_markdown_it$renderer->m_frame.f_lineno = 12;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_markdown_it$renderer,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_8);
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
        (PyObject *)moduledict_markdown_it$renderer,
        mod_consts.const_str_plain_ClassVar,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ClassVar);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassVar, tmp_assign_source_9);
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
        (PyObject *)moduledict_markdown_it$renderer,
        mod_consts.const_str_plain_Protocol,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Protocol);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_b079a483a5bb3f12a8f5a2f221050499;
tmp_globals_arg_value_3 = (PyObject *)moduledict_markdown_it$renderer;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_escapeHtml_str_plain_unescapeAll_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_markdown_it$renderer->m_frame.f_lineno = 15;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_markdown_it$renderer,
        mod_consts.const_str_plain_escapeHtml,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_escapeHtml);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_escapeHtml, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_markdown_it$renderer,
        mod_consts.const_str_plain_unescapeAll,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_unescapeAll);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_unescapeAll, tmp_assign_source_13);
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
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_token;
tmp_globals_arg_value_4 = (PyObject *)moduledict_markdown_it$renderer;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Token_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_markdown_it$renderer->m_frame.f_lineno = 16;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_markdown_it$renderer,
        mod_consts.const_str_plain_Token,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Token);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_Token, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_utils;
tmp_globals_arg_value_5 = (PyObject *)moduledict_markdown_it$renderer;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_EnvType_str_plain_OptionsDict_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_markdown_it$renderer->m_frame.f_lineno = 17;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_markdown_it$renderer,
        mod_consts.const_str_plain_EnvType,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_EnvType);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_EnvType, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_markdown_it$renderer,
        mod_consts.const_str_plain_OptionsDict,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_OptionsDict);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_OptionsDict, tmp_assign_source_17);
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
PyObject *tmp_assign_source_18;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_markdown_it$renderer$Protocol(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;

    goto try_except_handler_4;
}
tmp_assign_source_18 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_18, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_19 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
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


exception_lineno = 20;

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


exception_lineno = 20;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_21 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_21;
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


exception_lineno = 20;

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
PyObject *tmp_assign_source_22;
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


exception_lineno = 20;

    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_RendererProtocol;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_markdown_it$renderer->m_frame.f_lineno = 20;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_22;
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


exception_lineno = 20;

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


exception_lineno = 20;

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


exception_lineno = 20;

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


exception_lineno = 20;

    goto try_except_handler_4;
}
frame_frame_markdown_it$renderer->m_frame.f_lineno = 20;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 20;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_23;
}
branch_end_1:;
{
PyObject *tmp_assign_source_24;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_markdown_it$renderer$$$class__1_RendererProtocol_20 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_c79c36da4052775cce623836a9ae9935;
tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__1_RendererProtocol_20, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_RendererProtocol;
tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__1_RendererProtocol_20, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_20;
tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__1_RendererProtocol_20, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_6;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__1_RendererProtocol_20, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_6;
}
frame_frame_markdown_it$renderer$$$class__1_RendererProtocol_2 = MAKE_CLASS_FRAME(tstate, code_objects_d14d25840b7838d992c932660b34704f, module_markdown_it$renderer, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$class__1_RendererProtocol_2);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$class__1_RendererProtocol_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_c82760a893c6d6a609a5d1e28356ae53;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_markdown_it$renderer$$$class__1_RendererProtocol_20, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 21;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain___output__;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_877cfa9d07f4fa22f2b3ba1a46286c47);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__1_render(tstate, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__1_RendererProtocol_20, mod_consts.const_str_plain_render, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$class__1_RendererProtocol_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$class__1_RendererProtocol_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$class__1_RendererProtocol_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$class__1_RendererProtocol_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_markdown_it$renderer$$$class__1_RendererProtocol_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__1_RendererProtocol_20, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

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


exception_lineno = 20;

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
tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__1_RendererProtocol_20, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_6;
}
branch_no_3:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_RendererProtocol;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_markdown_it$renderer$$$class__1_RendererProtocol_20;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_markdown_it$renderer->m_frame.f_lineno = 20;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_6;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_25;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_24 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_24);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_markdown_it$renderer$$$class__1_RendererProtocol_20);
locals_markdown_it$renderer$$$class__1_RendererProtocol_20 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_markdown_it$renderer$$$class__1_RendererProtocol_20);
locals_markdown_it$renderer$$$class__1_RendererProtocol_20 = NULL;
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
exception_lineno = 20;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_RendererProtocol, tmp_assign_source_24);
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
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_markdown_it$renderer$RendererProtocol(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RendererProtocol);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto try_except_handler_7;
}
tmp_assign_source_26 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_26, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_27 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
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


exception_lineno = 28;

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
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_29 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_29;
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


exception_lineno = 28;

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
PyObject *tmp_assign_source_30;
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


exception_lineno = 28;

    goto try_except_handler_7;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_RendererHTML;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_markdown_it$renderer->m_frame.f_lineno = 28;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_30;
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


exception_lineno = 28;

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
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_7, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
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


exception_lineno = 28;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
frame_frame_markdown_it$renderer->m_frame.f_lineno = 28;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 28;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_31;
}
branch_end_4:;
{
PyObject *tmp_assign_source_32;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_markdown_it$renderer$$$class__2_RendererHTML_28 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_c79c36da4052775cce623836a9ae9935;
tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_454b470bde71b40b9887a9d5ee2efb6a;
tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_RendererHTML;
tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_28;
tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_9;
}
frame_frame_markdown_it$renderer$$$class__2_RendererHTML_3 = MAKE_CLASS_FRAME(tstate, code_objects_d96bb9c207af773ff86ad4abce5d7feb, module_markdown_it$renderer, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$renderer$$$class__2_RendererHTML_3);
assert(Py_REFCNT(frame_frame_markdown_it$renderer$$$class__2_RendererHTML_3) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_html;
tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain___output__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_2;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_d592db42728d528d5e09503d1941bbfa);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__2___init__(tstate, tmp_defaults_1, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_741a844fe510ea473b0f56813e727ab8);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__3_render(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain_render, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_741a844fe510ea473b0f56813e727ab8);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__4_renderInline(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain_renderInline, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_0de68fb67afc83a2af90a0c026ae8f58);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__5_renderToken(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain_renderToken, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_6;
tmp_called_value_4 = PyObject_GetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, const_str_plain_staticmethod);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_b800d7794a9ec5179f56a9e24792d31b);

tmp_args_element_value_1 = MAKE_FUNCTION_markdown_it$renderer$$$function__6_renderAttrs(tstate, tmp_annotations_6);

frame_frame_markdown_it$renderer$$$class__2_RendererHTML_3->m_frame.f_lineno = 172;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain_renderAttrs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_2bc380ebf31c7edb381b980dd46726f2);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__7_renderInlineAsText(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain_renderInlineAsText, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_0de68fb67afc83a2af90a0c026ae8f58);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__8_code_inline(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain_code_inline, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_0de68fb67afc83a2af90a0c026ae8f58);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__9_code_block(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain_code_block, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_0de68fb67afc83a2af90a0c026ae8f58);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__10_fence(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain_fence, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_0de68fb67afc83a2af90a0c026ae8f58);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__11_image(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain_image, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_0de68fb67afc83a2af90a0c026ae8f58);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__12_hardbreak(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain_hardbreak, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_0de68fb67afc83a2af90a0c026ae8f58);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__13_softbreak(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain_softbreak, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_0de68fb67afc83a2af90a0c026ae8f58);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__14_text(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain_text, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_0de68fb67afc83a2af90a0c026ae8f58);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__15_html_block(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain_html_block, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_0de68fb67afc83a2af90a0c026ae8f58);

tmp_dictset_value = MAKE_FUNCTION_markdown_it$renderer$$$function__16_html_inline(tstate, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain_html_inline, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer$$$class__2_RendererHTML_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer$$$class__2_RendererHTML_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer$$$class__2_RendererHTML_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$renderer$$$class__2_RendererHTML_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_markdown_it$renderer$$$class__2_RendererHTML_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_9;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_rules_tuple;
tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

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


exception_lineno = 28;

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
tmp_res = PyObject_SetItem(locals_markdown_it$renderer$$$class__2_RendererHTML_28, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_9;
}
branch_no_6:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_RendererHTML;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_markdown_it$renderer$$$class__2_RendererHTML_28;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_markdown_it$renderer->m_frame.f_lineno = 28;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_9;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_33;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_32 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_32);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_markdown_it$renderer$$$class__2_RendererHTML_28);
locals_markdown_it$renderer$$$class__2_RendererHTML_28 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_markdown_it$renderer$$$class__2_RendererHTML_28);
locals_markdown_it$renderer$$$class__2_RendererHTML_28 = NULL;
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
exception_lineno = 28;
goto try_except_handler_7;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_markdown_it$renderer, (Nuitka_StringObject *)mod_consts.const_str_plain_RendererHTML, tmp_assign_source_32);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$renderer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$renderer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$renderer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_markdown_it$renderer);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("markdown_it$renderer", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.renderer" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_markdown_it$renderer);
    return module_markdown_it$renderer;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$renderer, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("markdown_it$renderer", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
